/**
 ******************************************************************************
 * File Name          : rs485.c
 * Date               : 28/02/2016 23:16:19
 * Description        : rs485 communication modul
 ******************************************************************************
 *
 *
 ******************************************************************************
 */
 
 
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "eeprom.h"
#include "common.h"
#include "dio.h"
#include "rc522.h"
#include "one_wire.h"
#include "rs485.h"
#include "display.h"
#include "signal.h"


/* Imported Types  -----------------------------------------------------------*/
/* Imported Variables --------------------------------------------------------*/
/* Imported Functions --------------------------------------------------------*/
/* Private Typedef -----------------------------------------------------------*/
enum 	/* Error code */
{
    FLASHIF_OK = 0U,
    FLASHIF_ERASEKO,
    FLASHIF_WRITINGCTRL_ERROR,
    FLASHIF_WRITING_ERROR,
    FLASHIF_PROTECTION_ERRROR
};

enum	/* protection type */  
{
    FLASHIF_PROTECTION_NONE         = 0U,
    FLASHIF_PROTECTION_PCROPENABLED = 0x1U,
    FLASHIF_PROTECTION_WRPENABLED   = 0x2U,
    FLASHIF_PROTECTION_RDPENABLED   = 0x4U,
};

enum 	/* protection update */
{
    FLASHIF_WRP_ENABLE,
    FLASHIF_WRP_DISABLE
};

eTransferModeTypeDef eTransferMode;
eComStateTypeDef eComState = COM_INIT;


/* Private Define  -----------------------------------------------------------*/
#define BUFF_SIZE   256U


/* Private Variables  --------------------------------------------------------*/
__IO uint32_t rec_bcnt;
__IO uint32_t packet_type;
__IO uint32_t receive_pcnt;
__IO uint32_t rs485_timer;
__IO uint32_t rs485_flags;
__IO uint32_t rs485_sender_address;
__IO uint32_t rs485_packet_data_lenght;
__IO uint32_t rs485_packet_checksum;

uint32_t receiving_errors;

uint8_t sys_status;
uint8_t fw_update_status;
uint8_t activ_command;

uint8_t rs485_buff[RS485_BUFF_SIZE];
uint8_t rs485_interface_address[2];
uint8_t rs485_broadcast_address[2];
uint8_t rs485_interface_baudrate;
uint8_t rs485_group_address[2];


/* Private macros   ----------------------------------------------------------*/
/* Private Function Prototypes -----------------------------------------------*/
static void CopyFile(uint32_t file_source_address, uint32_t file_destination_address, uint32_t file_size);
static uint8_t FLASH_If_Write(uint32_t destination, uint32_t *p_source, uint32_t length);
static void FormatFileStorage(uint32_t start_address, uint8_t number_of_blocks);
static void Serial_PutByte(uint8_t param);
static uint8_t UpdateBootloader(void);
static void BackupOldFirmware(void);


/* Program Code  -------------------------------------------------------------*/
void RS485_Init(void)
{
	ClearBuffer(rs485_buff, RS485_BUFF_SIZE);
    /**
    *   start usart receiving in interrupt mode
    *   to get packet header for address checking
    */
    HAL_GPIO_WritePin(RS485_DIR_Port, RS485_DIR_Pin, GPIO_PIN_RESET);
	packet_type = NULL;
	receive_pcnt = 0U;
	rec_bcnt = 0U;
	eTransferMode = TRANSFER_IDLE;
	
	if (huart1.RxState == HAL_UART_STATE_BUSY_RX)
	{
		__HAL_UART_DISABLE_IT(&huart1, UART_IT_RXNE);
		huart1.RxState = HAL_UART_STATE_READY;
		huart1.gState = HAL_UART_STATE_READY;
	}

	if(HAL_UART_Receive_IT(&huart1, rs485_buff, sizeof(rs485_buff)) == HAL_OK)
	{
		eComState = COM_PACKET_PENDING;
	}
	else
	{
		RS485_StartTimer(RECEIVER_REINIT_TIMEOUT);
	}
}


void RS485_Service(void)
{
    RTC_TimeTypeDef time_rs;
    RTC_DateTypeDef date_rs;
    uint8_t ee_buff[24];
	static uint32_t tmp_b;
	static uint32_t rs485_update_timeout_timer;
    static uint32_t total_bytes_in_file;
    static uint32_t next_packet_number;
    static uint32_t total_packet_number;
    static uint32_t crc_32_calculated;
    static uint32_t crc_32_file;
    static uint32_t flash_destination;
    static uint32_t file_copy_destination_address;
    static uint32_t file_copy_source_address;
    static uint32_t file_copy_size;
    static uint32_t post_process;
    
    
    if(IsRS485_UpdateActiv())
    {
        if((HAL_GetTick() - rs485_update_timeout_timer) >= UPDATE_TIMEOUT)
        {
            RS485_StopUpdate();
			SYS_FileTransferFailSet();
			SYS_FileTransferSuccessReset();
        }
    }
    
	if(eComState == COM_PACKET_RECEIVED)
	{
		if(packet_type == SOH)
		{ 
			if((rs485_buff[0] >= DOWNLOAD_DISPLAY_IMAGE_1) && (rs485_buff[0] <= DOWNLOAD_BIG_FONT))
			{
                receiving_errors = 0U;
                next_packet_number = 1U;
                activ_command = rs485_buff[0];
                total_packet_number = (rs485_buff[1] << 8U) + rs485_buff[2];
                crc_32_file = (rs485_buff[7] << 24U) + (rs485_buff[8] << 16U) + (rs485_buff[9] << 8U) + rs485_buff[10];
                total_bytes_in_file = (rs485_buff[3] << 24U) + (rs485_buff[4] << 16U) + (rs485_buff[5] << 8U) + rs485_buff[6];
                rs485_update_timeout_timer = HAL_GetTick();
                SYS_FileTransferFailReset();
                RS485_StartUpdate();
                
                if((activ_command != DOWNLOAD_FIRMWARE_IMAGE) && (activ_command != DOWNLOAD_BOOTLOADER_IMAGE))
                {
                    SYS_ImageUpdateRequestReset();
                    flash_destination = EE_NEW_IMAGE_ADDRESS;
                    post_process = COPY_NEW_DISPLAY_IMAGE;
                    file_copy_source_address = EE_NEW_IMAGE_ADDRESS;
                    file_copy_destination_address = ((activ_command - DOWNLOAD_DISPLAY_IMAGE_1) * 0x00030000U);
                    file_copy_size = total_bytes_in_file;
                    FormatFileStorage(EE_NEW_IMAGE_ADDRESS, 3U);
                }
                else
                {
                    SYS_FirmwareUpdateRequestReset();
                    flash_destination = ((activ_command - DOWNLOAD_DISPLAY_IMAGE_1) * 0x00030000U);
                    if(activ_command == DOWNLOAD_FIRMWARE_IMAGE) FormatFileStorage(EE_NEW_FIRMWARE_ADDRESS, 3U);					
                    else if(activ_command == DOWNLOAD_BOOTLOADER_IMAGE) FormatFileStorage(EE_NEW_BOOTLOADER_ADDRESS, 3U);
                }
                
                if(eTransferMode == TRANSFER_P2P)
                {
                    rs485_buff[5] = 1U;
                    rs485_buff[6] = activ_command;						
                    RS485_ResponsePacketReady();						
                }			
			}
			else
			{
				switch(rs485_buff[0])
				{
					case UPDATE_BOOTLOADER:
					{
                        rs485_update_timeout_timer = HAL_GetTick();
						RS485_StartUpdate();
						
						if(UpdateBootloader() == 0U)
						{
							DISPLAY_BootloaderUpdateFail();
							SYS_UpdateFailSet();
						}
						else 
						{
							DISPLAY_BootloaderUpdated();
							SYS_UpdateSuccessSet();
						}
						
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = UPDATE_BOOTLOADER;				
							RS485_ResponsePacketReady();
						}
						break;
					}
					
					
					case RESTART_CONTROLLER:
					{
						if (eTransferMode == TRANSFER_P2P) Serial_PutByte(ACK);
						HAL_Delay(10U);
						Error_Handler();
						break;
					}

					
					case START_BOOTLOADER:
					{
						if (eTransferMode == TRANSFER_P2P) Serial_PutByte(ACK);
						ee_buff[0] = BOOTLOADER_CMD_RUN;
                        EEPROM_Save(EE_FW_UPDATE_STATUS, ee_buff, 1U);
						BackupOldFirmware();
						Error_Handler();
						break;
					}	
					
					
					case DOWNLOAD_JOURNAL_1:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = DOWNLOAD_JOURNAL_1;				
							RS485_ResponsePacketReady();
						}
						break;
					}
					
					
					case SET_BEDDING_REPLACEMENT_PERIOD:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_BEDDING_REPLACEMENT_PERIOD;				
							RS485_ResponsePacketReady();
						}
						break;
					}
					
					
					case GET_SYS_STATUS:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 9U;
							rs485_buff[6] = GET_SYS_STATUS;
							 
							for(tmp_b = 0U; tmp_b < 8U; tmp_b++) 
							{	
								if(sys_status & (1 << tmp_b)) rs485_buff[tmp_b + 7U] = '1';
								else rs485_buff[tmp_b + 7U] = '0';
							}
							RS485_ResponsePacketReady();
						}
						break;
					}
                    
						
					case SET_RTC_DATE_TIME:
					{
                        Str2Hex(&rs485_buff[1], 1U, &date_rs.Date);
                        Str2Hex(&rs485_buff[3], 1U, &date_rs.Month);
                        Str2Hex(&rs485_buff[5], 1U, &date_rs.Year);
                        Str2Hex(&rs485_buff[7], 1U, &time_rs.Hours);
                        Str2Hex(&rs485_buff[9], 1U, &time_rs.Minutes);
                        Str2Hex(&rs485_buff[11],1U, &time_rs.Seconds);
                        
						HAL_RTC_SetTime(&hrtc, &time_rs, RTC_FORMAT_BCD);
						HAL_RTC_SetDate(&hrtc, &date_rs, RTC_FORMAT_BCD);
                        
                        ONEWIRE_TimeUpdateSet();
                        
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_RTC_DATE_TIME;
							RS485_ResponsePacketReady();
						}
						break;
					}
					
                    
					case GET_LOG_LIST:
					{
                        if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = GET_LOG_LIST;
							RS485_ResponsePacketReady();
						}
						break;
					}
					
					
					case DELETE_LOG_LIST:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = DELETE_LOG_LIST;
							RS485_ResponsePacketReady();
						}				
						break;
					}
					

					case SET_RS485_CONFIG:
					{
						Str2Hex(&rs485_buff[1], 2U, rs485_interface_address);
						Str2Hex(&rs485_buff[5], 2U, rs485_group_address);
						Str2Hex(&rs485_buff[9], 2U, rs485_broadcast_address);
						rs485_interface_baudrate = rs485_buff[13];
                        
						ee_buff[0] = rs485_interface_address[0];
						ee_buff[1] = rs485_interface_address[1];
						ee_buff[2] = rs485_group_address[0];
						ee_buff[3] = rs485_group_address[1];
						ee_buff[4] = rs485_broadcast_address[0];
						ee_buff[5] = rs485_broadcast_address[1];
						ee_buff[6] = rs485_interface_baudrate;
                        
                        EEPROM_Save(EE_RS485_INTERFACE_ADDRESS, ee_buff, 7U);
                        
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_RS485_CONFIG;				
							RS485_ResponsePacketReady();
						}					
						break;
					}
				
					
					case SET_MIFARE_PERMITED_GROUP:
					{
						EEPROM_Save(EE_PERMITED_GROUP_ADDRESS, &rs485_buff[1], 16U);
                        
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_MIFARE_PERMITED_GROUP;
							RS485_ResponsePacketReady();
						}
						break;
					}
					

					case SET_DOUT_STATE:
					{
						for(tmp_b = 0U; tmp_b < 9U; tmp_b++)
						{
							if(rs485_buff[tmp_b + 1U] == '1') dout_0_7_remote |= (uint16_t) (1U << tmp_b);
							else if(rs485_buff[tmp_b + 1U] == '0') dout_0_7_remote &= (uint16_t) (~(1U << tmp_b));
						}
						
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_DOUT_STATE;
							RS485_ResponsePacketReady();						
						}
						break;
					}

					
					case SET_DISPLAY_BRIGHTNESS:
					{
						lcd_brightness = (rs485_buff[1] << 8U) + rs485_buff[2];
						__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, lcd_brightness);
                        EEPROM_Save(EE_LCD_BRIGHTNESS, &rs485_buff[1], 2U);
                        
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_DISPLAY_BRIGHTNESS;
							RS485_ResponsePacketReady();						
						}
						break;
					}	
						
                    
					case GET_ROOM_STATUS:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 50U;
							rs485_buff[6] = GET_ROOM_STATUS;
							rs485_buff[7] = ROOM_Status + 0x30U;
							if(rs485_buff[7] > 0x39U) rs485_buff[7] += 7U;
							rs485_buff[8] = 'X';       // sensor error
                            rs485_buff[9] = '0';
                            rs485_buff[10] = '0';
                            rs485_buff[11] = '0';
                            rs485_buff[12] = 'D';
                            rs485_buff[13] = 'C';
                            rs485_buff[14] = '0';
                            rs485_buff[15] = '0';
                            rs485_buff[16] = '0';
                            rs485_buff[17] = '0';
                            
							for(tmp_b = 0U; tmp_b < 8U; tmp_b++)
							{
								if(din_0_7 & (1U << tmp_b)) rs485_buff[tmp_b + 18U] = '1';
								else rs485_buff[tmp_b + 18U] = '0';
								if(dout_0_7 & (1U << tmp_b)) rs485_buff[tmp_b + 26U] = '1';
								else rs485_buff[tmp_b + 26U] = '0';
							}
							
							for(tmp_b = 34U; tmp_b < 42U; tmp_b++)
							{
								 rs485_buff[tmp_b] = sys_info_fw[tmp_b - 30U];
							}
							
							ee_buff[0] = EE_BEDDING_REPL_PERIOD_ADDRESS >> 8U;
							ee_buff[1] = EE_BEDDING_REPL_PERIOD_ADDRESS & 0xFFU;
							if (HAL_I2C_Master_Transmit(&hi2c1, I2C_EE_WRITE, ee_buff, 2U, I2C_EE_TIMEOUT) != HAL_OK) Error_Handler();
							if (HAL_I2C_Master_Receive(&hi2c1, I2C_EE_READ, &rs485_buff[43], 1U, I2C_EE_TIMEOUT) != HAL_OK) Error_Handler();
							if(rs485_buff[43] > 99U) rs485_buff[43] = 99U;
							rs485_buff[42] = ((rs485_buff[43] / 10U) + 48U);
							while(rs485_buff[43] > 9U) rs485_buff[43] -= 10U;
							rs485_buff[43] += 48U;
                            rs485_buff[44] = '0';
                            rs485_buff[45] = '0';
                            rs485_buff[46] = '0';
                            rs485_buff[47] = '0';
                            rs485_buff[48] = '0';
                            rs485_buff[49] = '0';
                            rs485_buff[50] = '0';
                            rs485_buff[51] = '0';
                            rs485_buff[52] = '0';
                            rs485_buff[53] = '0';
                            rs485_buff[54] = 'D';
                            rs485_buff[55] = 'C';
							RS485_ResponsePacketReady();						
						}
						break;						
					}
					
					
					case SET_ROOM_STATUS:
					{							
						ROOM_Status = (ROOM_StatusTypeDef) (rs485_buff[1] - 0x30U);
						if(IS_09(rs485_buff[2])) ROOM_Status += ((rs485_buff[2] - 0x30U) + 9U);
							
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_ROOM_STATUS;
							RS485_ResponsePacketReady();						
						}
						break;						
					}
                    
                    
                    case SET_ROOM_THERMOSTAT_IMAGE:
					{
                        if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_ROOM_THERMOSTAT_IMAGE;
							RS485_ResponsePacketReady();						
						}
						break;						
					}
					
					
					case RESET_SOS_ALARM:
					{
						if((rs485_buff[1] == '1') && IsSosAlarmActiv())
						{
							SosAlarm_Off();
							DISPLAY_SosAlarmImageDelete();
							SignalBuzzer = BUZZ_OFF;
							rs485_buff[7] = '1';
						}
						else
						{
							rs485_buff[7] = '0';
						}
					
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 2U;
							rs485_buff[6] = RESET_SOS_ALARM;
							RS485_ResponsePacketReady();						
						}
						break;
					}	
					
					
					case SET_ROOM_TEMPERATURE:
					{
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_ROOM_TEMPERATURE;						
							RS485_ResponsePacketReady();						
						}
						break;
					}
					
					
					case SET_SYSTEM_ID:
					{
						system_id[0] = rs485_buff[1];
						system_id[1] = rs485_buff[2];
                        EEPROM_Save(EE_SYSTEM_ID_ADDRESS, system_id, 2U);
                        
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = SET_SYSTEM_ID;						
							RS485_ResponsePacketReady();						
						}
						break;
					}
					
					
					case PREVIEW_DISPLAY_IMAGE:
					{
						DISPLAY_PreviewImage();
						
						if(eTransferMode == TRANSFER_P2P)
						{
							rs485_buff[5] = 1U;
							rs485_buff[6] = PREVIEW_DISPLAY_IMAGE;						
							RS485_ResponsePacketReady();						
						}
						break;
					}
					
					default:
					{
						RS485_NoResponse();
						break;
					}
				}				
			}
		}
		else if(packet_type == STX)
		{
			if((next_packet_number == ((rs485_buff[0] << 8U) + rs485_buff[1])) && (flash_destination != 0U))
			{
				if(next_packet_number == 1U) CRC_ResetDR();						
				SPI_FLASH_WritePage(flash_destination, &rs485_buff[2], (rs485_packet_data_lenght - 2U));
				if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_TIMEOUT) == 0U) Error_Handler();				
				flash_destination += (rs485_packet_data_lenght - 2U);
				if (eTransferMode == TRANSFER_P2P) Serial_PutByte(ACK);
				crc_32_calculated = CRC_Calculate8 (&rs485_buff[2], (rs485_packet_data_lenght - 2U));
                rs485_update_timeout_timer = HAL_GetTick();
                
				if(next_packet_number == total_packet_number)
				{
					if(crc_32_calculated == crc_32_file)
					{	
						if(activ_command == DOWNLOAD_FIRMWARE_IMAGE)
						{
							ee_buff[0] = (total_bytes_in_file >> 24U);
							ee_buff[1] = (total_bytes_in_file >> 16U);
							ee_buff[2] = (total_bytes_in_file >> 8U);
							ee_buff[3] = (total_bytes_in_file & 0xFFU);
                            EEPROM_Save(EE_FW_UPDATE_BYTE_CNT, ee_buff, 4U);
						}
						else if(post_process == COPY_NEW_DISPLAY_IMAGE)
						{
							CopyFile(file_copy_source_address, file_copy_destination_address, file_copy_size);
							SYS_UpdateSuccessSet();
						}
						
						SYS_FileTransferSuccessSet();
					}
					else
					{
						SYS_FileTransferFailSet();
					}
					
					post_process = 0U;
					activ_command = 0U;
					flash_destination = 0U;
					RS485_StopUpdate();
				}
				else ++next_packet_number;
			}
			else if(eTransferMode == TRANSFER_P2P) Serial_PutByte(NAK);
		}
		
		if(IsRS485_ResponsePacketPending())
		{
			rs485_buff[0] = ACK;
			rs485_buff[1] = rs485_sender_address >> 8U;
			rs485_buff[2] = rs485_sender_address & 0xFFU;
			rs485_buff[3] = rs485_interface_address[0];
			rs485_buff[4] = rs485_interface_address[1];			
			rs485_packet_checksum = 0U;
			
			for(uint8_t i = 6U; i < (rs485_buff[5] + 6U); i++)
			{
				rs485_packet_checksum += rs485_buff[i];
			}
			rs485_buff[rs485_buff[5] + 6U] = rs485_packet_checksum >> 8U;
			rs485_buff[rs485_buff[5] + 7U] = rs485_packet_checksum & 0xFFU;
			rs485_buff[rs485_buff[5] + 8U] = EOT;
			HAL_GPIO_WritePin(RS485_DIR_Port, RS485_DIR_Pin, GPIO_PIN_SET);
			HAL_UART_Transmit(&huart1, rs485_buff, (rs485_buff[5] + 9U), PACKET_TRANSFER_TIMEOUT);
			while(huart1.gState != HAL_UART_STATE_READY) continue;
			RS485_NoResponse();
			HAL_GPIO_WritePin(RS485_DIR_Port, RS485_DIR_Pin, GPIO_PIN_RESET);
		}
		
		RS485_Init();
	}
}


void HAL_UART_ErrorCallback(UART_HandleTypeDef *huart) 
{
    __HAL_UART_CLEAR_PEFLAG(&huart1);
    __HAL_UART_CLEAR_FEFLAG(&huart1);
    __HAL_UART_CLEAR_NEFLAG(&huart1);
    __HAL_UART_CLEAR_IDLEFLAG(&huart1);
    __HAL_UART_CLEAR_OREFLAG(&huart1);
	__HAL_UART_FLUSH_DRREGISTER(&huart1);
	huart->ErrorCode = HAL_UART_ERROR_NONE;
	receive_pcnt = 0U;
	rec_bcnt = 0U;
}


static void FormatFileStorage(uint32_t start_address, uint8_t number_of_blocks)
{
	while(number_of_blocks)
	{
		SPI_FLASH_WriteStatusRegister(0U);
		if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_TIMEOUT) == 0U) Error_Handler();	
		SPI_FLASH_UnprotectSector(start_address);
		if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_TIMEOUT) == 0U) Error_Handler();
		SPI_FLASH_Erase(start_address, SPI_FLASH_64K_BLOCK_ERASE);
        if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_64K_ERASE_TIMEOUT) == 0U) Error_Handler();
		start_address += 0x00010000U;
		--number_of_blocks;
	}
}


static void CopyFile(uint32_t file_source_address, uint32_t file_destination_address, uint32_t file_size)
{
	uint8_t buff[BUFF_SIZE];
    uint32_t cnt;
	
    cnt = file_size / 0x00010000U;
	if(file_size > (cnt * 0x00010000U)) ++cnt;
	FormatFileStorage(file_destination_address, cnt);
	
	while(file_size)
	{
		if(file_size >= BUFF_SIZE) 
        {
            cnt = BUFF_SIZE;
            file_size -= BUFF_SIZE;
        }
		else 
        {
            cnt = file_size;
            file_size = 0U;
        }
        
        SPI_FLASH_ReadPage(file_source_address, buff, cnt);
        SPI_FLASH_WritePage(file_destination_address, buff, cnt);
        if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_TIMEOUT) == 0U) Error_Handler();
        file_destination_address += cnt;
        file_source_address += cnt;
	}
}


static void BackupOldFirmware(void)
{
    uint8_t buff[BUFF_SIZE];
    uint8_t *fl_address;
    uint32_t b_cnt;
    uint32_t b_total;
	uint32_t fl_destination;
	
	b_cnt = 0U;
	b_total = 0U;
	fl_address = (uint8_t *)APPLICATION_ADDRESS;
	fl_destination = EE_OLD_FIRMWARE_ADDRESS;
	
	FormatFileStorage(fl_destination, 1U);
	
	while(b_total < USER_FLASH_SIZE)
	{
		while(b_cnt < BUFF_SIZE)
		{
			buff[b_cnt] = *fl_address;
            ++fl_address;
			++b_cnt;
			++b_total;
		}
		
		SPI_FLASH_WritePage(fl_destination, buff, BUFF_SIZE);
		if(SPI_FLASH_WaitReadyStatus(SPI_FLASH_TIMEOUT) == 0U) Error_Handler();					
		fl_destination += BUFF_SIZE;
		b_cnt = 0U;
	}
}

static uint8_t UpdateBootloader(void)
{
#define BL_BUFFER_SIZE  2048U
    
    uint8_t buff[BL_BUFFER_SIZE];
    FLASH_EraseInitTypeDef FLASH_EraseInit;
    uint32_t page_erase_error;
	uint32_t fl_destination;
	uint32_t fl_address;
    uint32_t ram_source;
	uint32_t file_size;
    uint32_t bcnt;
	
	HAL_FLASH_Unlock();
	FLASH_EraseInit.TypeErase = FLASH_TYPEERASE_PAGES;
	FLASH_EraseInit.PageAddress = BOOTLOADER_ADDRESS;
	FLASH_EraseInit.Banks = FLASH_BANK_1;
	FLASH_EraseInit.NbPages = 12U;	
	if(HAL_FLASHEx_Erase(&FLASH_EraseInit, &page_erase_error) != HAL_OK) return (0U);
	HAL_FLASH_Lock();
	
	fl_destination = BOOTLOADER_ADDRESS;
	fl_address = EE_NEW_BOOTLOADER_ADDRESS;
	file_size = BOOTLOADER_FLASH_SIZE;
    
    while(file_size)
	{
		if(file_size >= BL_BUFFER_SIZE) 
        {
            bcnt = BL_BUFFER_SIZE;
            file_size -= BL_BUFFER_SIZE;
        }
		else 
        {
            bcnt = file_size;
            file_size = 0U;
        }
        
        SPI_FLASH_ReadPage(fl_address, buff,  bcnt);		
		ram_source = (uint32_t) buff;
        if(FLASH_If_Write(fl_destination, (uint32_t*) ram_source, (bcnt / 4U)) == 0U) return (0U);
        fl_destination += bcnt;
        fl_address += bcnt;
	}
    
	return (1U);
}


static uint8_t FLASH_If_Write(uint32_t destination, uint32_t *p_source, uint32_t length)
{
    uint32_t i = 0U;

    /* Unlock the Flash to enable the flash control register access *************/
    HAL_FLASH_Unlock();

    for (i = 0U; (i < length) && (destination <= (USER_FLASH_END_ADDRESS - 4U)); i++)
    {
        /* Device voltage range supposed to be [2.7V to 3.6V], the operation will
        be done by word */ 
        if (HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD, destination, *(uint32_t*)(p_source + i)) == HAL_OK)      
        {
            /* Check the written value */
            if (*(uint32_t*)destination != *(uint32_t*)(p_source + i))
            {
                /* Flash content doesn't match SRAM content */
                return(0U);
            }
            /* Increment FLASH destination address */
            destination += 4U;
        }
        else
        {
            /* Error occurred while writing data in Flash memory */
            return (0U);
        }
    }
    /* Lock the Flash to disable the flash control register access (recommended
    to protect the FLASH memory against possible unwanted operation) *********/
    HAL_FLASH_Lock();

    return (1U);
}


static void Serial_PutByte(uint8_t param)
{ 
	HAL_GPIO_WritePin(RS485_DIR_Port, RS485_DIR_Pin, GPIO_PIN_SET);
	RS485_StartTimer(PACKET_TRANSFER_TIMEOUT);
    if (HAL_UART_Transmit(&huart1, &param, 1U, PACKET_TRANSFER_TIMEOUT) != HAL_OK) Error_Handler();
	while(huart1.gState != HAL_UART_STATE_READY) continue;
	RS485_StopTimer();
	HAL_GPIO_WritePin(RS485_DIR_Port, RS485_DIR_Pin, GPIO_PIN_RESET);
}

/******************************   END OF FILE  **********************************/
