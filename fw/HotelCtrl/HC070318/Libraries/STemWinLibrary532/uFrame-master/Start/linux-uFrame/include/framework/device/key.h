/******************************************************************************
	��Ŀ����	��  SGE800���������ն�ƽ̨
	�ļ�		��  key.h
	����		��  ���ļ������˼���ģ��Ľӿ�
	�汾		��  0.1
	����		��  ·ȽȽ
	��������	��  2010.04
******************************************************************************/
#ifndef _KEY_H
#define _KEY_H

//#include "sge_core/typedef.h"
	
/*************************************************
  ��̬ȫ�ֱ������궨��
*************************************************/
#if 0
#define KEY_UP			1		//������
#define KEY_DOWN		2		//������
#define KEY_LEFT		3		//������
#define KEY_RIGHT		4		//������
#define KEY_ENTER		5		//����ȷ��
#define KEY_CANCEL		6		//����ȡ��


#define KEY_PROGREM		91		//��̼�
#endif
/*************************************************
  API
*************************************************/
/******************************************************************************
*	����:	key_init
*	����:	����ģ���ʼ��
*	����:	��
*	����:	0				-	�ɹ�
			-ERR_CFG		-	���ó���
			-ERR_BUSY		-	�Ѿ���
	˵��:�������������󲿷ַ���gpio.h��gpio_init��gpio_set�����Ĵ���
 ******************************************************************************/
int key_init(void);

#endif		//_KEY_H