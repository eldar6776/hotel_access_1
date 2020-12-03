/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.40.                      *
*        Compiled Mar 17 2017, 15:33:27                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: mist_small                                            *
* Dimensions:  50 * 50                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>
#include "Resource.h"


static GUI_CONST_STORAGE unsigned long _ac_mist_small[] __attribute__((section(QSPI_FLASH_MIST_ICON_ADDRESS))) = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF050505, 
        0xFF2F2F2F, 0xFF000000, 0xFF000000, 0xFF030303, 0xFF454545, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF1A1A1A, 0xFF434343, 0xFE888888, 0xFE707070, 
        0xFEB7B7B7, 0xFE717171, 0xFE6D6D6D, 0xFDA5A1A1, 0xFCCFCAC4, 0xFDA9A19C, 0xFF353434, 0xFF1E1E1E, 0xFF1E1E1E, 0xFF1C1C1C, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFCECECEC, 0xF9FFFFFF, 0xFBFFFFFF, 0xF8FFFFFE, 
        0xF8FFFDFC, 0xF7FCFAF8, 0xF7F0EDE9, 0xF8E5DDDD, 0xF4E6E5E5, 0xF4E8E8E8, 0xFBF3EDE7, 0xFDFFFFFF, 0xFDFFFFFF, 0xFCFDFDFD, 0xFF494949, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF282323, 0xFCB7B2AE, 0xF9ECEBE4, 0xF4FCF7F7, 0xF7FFF9F5, 0xF3FBF3EE, 
        0xEEF2F0F0, 0xEAF3EFEE, 0xF1ECECEB, 0xF3E9E9E9, 0xEFEEEEED, 0xF0F2EEEE, 0xF4FBF3E9, 0xF9FFFEF9, 0xFAFFFFFC, 0xFAFFFFFF, 0xFBE7E7E7, 0xFE656565, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF101010, 0xFDA68C8C, 0xFACECAC1, 0xF3E8E1D6, 0xECF1EEE9, 0xEFF2EFED, 0xF0EEEDED, 
        0xEDF1F1F1, 0xE8F0EDEC, 0xECF0ECE7, 0xEAF2EFEA, 0xEAF2F2F2, 0xE8F3F3F3, 0xEDF3F0EF, 0xF6FFFEE4, 0xF4FBEEE8, 0xF0F5EEEE, 0xEFFAF4F2, 0xF8F5F3F1, 0xFF0E0E0E, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFBCEC4BC, 0xF4E3D5D0, 0xF3F0ECE8, 0xEBF2EDEB, 0xE8F3F0E9, 0xEAF1EDEB, 0xECF5F3F1, 
        0xE9F3F3F3, 0xE6F4F0EE, 0xE2F5EEEE, 0xE5F5EEEC, 0xE5F5F5F4, 0xDFF7F7F3, 0xE5F8F7F5, 0xECF9F5F0, 0xEFF2EFEF, 0xE8F4F4F4, 0xE6F5F5F4, 0xF2F6F2F2, 0xFE8C8A8A, 0xFF040404, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFE9C9C9C, 0xFDE1E1E1, 0xF7ECE7E2, 0xEEF0E6E3, 0xECF4F3F0, 0xE8F0EFEE, 0xE6F2F0ED, 0xE4F6F4EF, 0xE0F7F7F3, 
        0xE2F6F5F4, 0xE1F1EFEC, 0xDEF4F2F0, 0xE0F7F2EF, 0xE2F6F6F5, 0xDCF8F6F3, 0xD8F9F9F9, 0xDAF7F5F3, 0xE8F4F4F4, 0xE7F4F1F0, 0xE7F4F4F4, 0xEBF2F2F2, 0xF3F2EFEC, 0xF9F3F3F1, 0xFE797979, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF171717, 0xFF4A4A4A, 0xFE787676, 0xFCF6EEEE, 0xF9EAEAE5, 0xF2E9E4E1, 0xEBF2F0EA, 0xE8F4F3ED, 0xE3F2EFED, 0xDAF3F2F0, 0xD4F6F2F1, 0xD3F5F3F2, 
        0xD7F2F0ED, 0xD4EDEAE6, 0xD8EBE8E5, 0xDBF1EEEC, 0xDAF7F6F4, 0xD4F8F7F4, 0xCEF8F8F6, 0xCCFAF8F6, 0xD8F8F7F6, 0xE4F5F2EE, 0xE3F6F6F6, 0xE4F5F4F2, 0xEDF3F0EF, 0xF1FCFAF7, 0xF7FEFEFE, 0xFE585857, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF040404, 0xFF404040, 0xFED5D5D5, 0xFCF3F0F0, 0xFAE1DCDC, 0xF7DCDBD9, 0xF3E3E0DB, 0xE9E5E0DE, 0xE3EFECEB, 0xDCF2F0EF, 0xD6F2F1F0, 0xCCF0EFED, 0xC1EFEDEB, 0xC2EFECEB, 
        0xC4EDEBE9, 0xCBE7E4E1, 0xCFE4E0DC, 0xD1EDEAE7, 0xCBF5F4F2, 0xC7F3F0EE, 0xC4F2EFEC, 0xC4F5F4F2, 0xCAF6F5F2, 0xDAF1F0EF, 0xD9F5F4F2, 0xD8F6F4F2, 0xE1F2EEEC, 0xE9F2EEEB, 0xECEBE7DF, 0xF9C7BEB8, 0xFE717171, 0xFF272727, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF595959, 0xFEFFFFFF, 0xFBFAF8F3, 0xF7E0DFDC, 0xF3DEDAD8, 0xF1DBDAD5, 0xEEDDD9D5, 0xE4E2DEDB, 0xD7E9E7E6, 0xCEEFEDEC, 0xC7F0EEEC, 0xBFECEAE8, 0xB4ECEAE7, 0xB9ECE9E7, 
        0xBBE9E6E4, 0xBFE7E3E0, 0xC1E5E0DC, 0xC2EBE9E6, 0xC0EFECE9, 0xBDF0ECEA, 0xBDF0EDEA, 0xBFF0ECE9, 0xC1EBE8E4, 0xC9F1EEEB, 0xCCF5F3F0, 0xCEF4F2EF, 0xD6EFEBE8, 0xDBEDEAE6, 0xDDE1D9D2, 0xECE6DDD4, 0xF8FEFDFD, 0xFE979797, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF171717, 0xFEC8C7C7, 0xFCF5E3E1, 0xF9E1DBD7, 0xF2E0DDDA, 0xEEE1DBD7, 0xEADDDAD7, 0xE5DDDAD7, 0xD6E4E0DD, 0xC4EDE9E8, 0xC0EAE8E6, 0xBEEBE9E7, 0xB7E9E8E6, 0xAFEAE7E5, 0xB5E8E6E3, 
        0xB9E6E2E0, 0xB8E6E3E0, 0xB9E7E3DF, 0xB8EAE6E4, 0xB6EAE7E3, 0xB7ECE9E6, 0xBCEDE9E8, 0xC0EEEAE8, 0xBCE8E4E0, 0xC1EBE8E4, 0xC4EFECE9, 0xC6EEEBE8, 0xCDE7E1DE, 0xD1E8E3DF, 0xD3E3DDD7, 0xE1E3DCD6, 0xF5FAF6F6, 0xFBCCCCCC, 0xFF080808, 0xFF101010, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF707070, 0xFDFEF3F3, 0xF9DACECE, 0xF6E4E2DD, 0xF1DEDCDA, 0xECDFDAD8, 0xE7DFDCDA, 0xDCE2DEDC, 0xC8EBE8E6, 0xBDEBEAE8, 0xBCE8E5E4, 0xBBE8E6E4, 0xB4EAE7E6, 0xACE9E5E3, 0xB0E6E3DF, 
        0xB4E4E0DD, 0xB5E3E0DD, 0xB6E5E1DF, 0xB2E8E4E2, 0xB2E6E2DF, 0xB5E7E3DF, 0xBEE8E6E3, 0xBFE9E7E4, 0xBAE7E3DF, 0xB9E3DDD9, 0xBBE0DBD6, 0xBCE4DFDC, 0xBFE3DDD9, 0xC9E2DCD6, 0xCEE5DFDA, 0xDAE7E1DC, 0xEFF7F2F1, 0xF9F4F0EC, 0xFF626262, 0xFEABABAB, 
        0xFF0B0B0B, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFE949494, 0xFBF2E5E5, 0xF7DDDBDB, 0xF4E5DBDA, 0xEFDFDEDD, 0xE5E5E2E1, 0xDDE8E4E2, 0xCEEAE9E5, 0xC0EFEEEB, 0xBEEAE8E7, 0xB6EAE7E5, 0xB3E8E6E5, 0xB2EAE7E5, 0xACE6E3E1, 0xAEE4E0DE, 
        0xB2E2DDDB, 0xB3E1DDD9, 0xB1E5E1DE, 0xADE6E3E0, 0xADE5E2DF, 0xB7E5E2DE, 0xBDE5E2DE, 0xBEE4E2DD, 0xBCE4E0DC, 0xB7E0DCD7, 0xB5DCD6CF, 0xB1DFD9D5, 0xAEE0DAD5, 0xB8E4DEDA, 0xC1E7E1DD, 0xD0E6E0DC, 0xE1E3DDD7, 0xF0D0C5BF, 0xFBEBE3E1, 0xFAFFFFFF, 
        0xFD919191, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF080808, 0xFED2CFCF, 0xFAEDD8D8, 0xF2E9E8E4, 0xEBE9E3E2, 0xE3ECECE6, 0xDCECEBE9, 0xD3EDEAEA, 0xC3EEEEED, 0xBEEEEDEC, 0xBBEBE9E8, 0xB3EAE8E6, 0xAFE9E6E6, 0xAFE9E5E4, 0xACE5E1DE, 0xACE3E0DC, 
        0xAEE2DEDA, 0xAFE3E0DC, 0xAEE6E2E0, 0xABE6E2E0, 0xAEE4E1DD, 0xBAE4E0DD, 0xBFE2DDDA, 0xBDDFDBD7, 0xBDDFDBD7, 0xB8E2DDD9, 0xB2DFDAD6, 0xADDFDAD5, 0xA9DED9D3, 0xAAE2DBD7, 0xB7E4DDD9, 0xC6E3DDD8, 0xD8DDD6CF, 0xEAD5CEC4, 0xF9F6F4F3, 0xFAFFFFFF, 
        0xFDB7B7B7, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFDBFBBBB, 0xF8E5D5D5, 0xE6F4F4F1, 0xD7F2F2F2, 0xD7F2EFEC, 0xD7EEEDEC, 0xD1EDEBEA, 0xC8EDECEA, 0xC5EBE9E8, 0xBEE8E7E6, 0xB4EAE9E7, 0xAEE9E7E6, 0xB0E8E6E3, 0xAEE5E2DF, 0xACE1DDDA, 
        0xABE2DEDB, 0xABE5E3E0, 0xACE7E4E2, 0xAAE5E2E0, 0xB4E1DEDA, 0xBFE1DCDA, 0xC3DEDBD8, 0xBEDCD8D5, 0xBCDDD9D5, 0xB8E1DDD9, 0xB1E0DBD7, 0xAEE0DAD5, 0xABE1DCD8, 0xA7E4DEDA, 0xAFE3DED9, 0xBEE3DDD9, 0xCFDFD9D3, 0xE2E0DCD5, 0xF7FCFAF7, 0xFAFFFFFF, 
        0xFE7D7D7D, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF323232, 0xFDE1E1DE, 0xF5E3E1E1, 0xDEF7F6F4, 0xD6F3F3F2, 0xD4F1EFEE, 0xD2EEEEEE, 0xCEEDECEB, 0xCBEBEAE8, 0xC4EBE8E7, 0xBEE6E4E2, 0xB8E7E5E3, 0xB3E8E7E4, 0xB1E7E5E4, 0xAAE6E4E1, 0xA8E5E2E0, 
        0xA9E5E2DF, 0xACE8E6E3, 0xADE9E7E4, 0xAFE6E3E0, 0xB9DFDDD9, 0xC1DCD9D6, 0xC3DDD8D5, 0xC1DCD8D4, 0xBBDDD8D5, 0xB8DFDBD7, 0xB4DDD9D4, 0xB2DFDAD6, 0xAFE5E1DE, 0xA6E7E3E0, 0xACE5E1DD, 0xB5E5E0DC, 0xC3E6E1DE, 0xD4EFECEB, 0xE7F9F8F8, 0xF5FFFFFF, 
        0xFCDCDCDC, 0xFE9B9B9B, 0xFE545454, 0xFF040404, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF606060, 0xFDFFFDF8, 0xF2EDEDE8, 0xDDF6F5F5, 0xDBF1F1F0, 0xD6F0EDEC, 0xCEEFEFED, 0xCBEDECEB, 0xC6ECEBE8, 0xC1EAE8E7, 0xBFE4E1E0, 0xBCE4E2DF, 0xB9E5E2E0, 0xB7E8E6E3, 0xADE8E6E4, 0xA7E8E6E4, 
        0xAAEAE7E5, 0xAEEAE8E6, 0xB0E8E6E3, 0xB5E5E2DF, 0xBDE0DEDB, 0xC3DDD9D7, 0xC5DCD8D5, 0xC4DCD9D6, 0xC1DDDAD7, 0xBCDDDAD7, 0xBBDFDCD8, 0xB5E2DEDC, 0xAEE8E5E3, 0xAAE9E6E3, 0xB3E5E1DF, 0xB8E5E1DD, 0xC0E2DDD9, 0xCBEAE6E2, 0xDBF6F5F4, 0xEBFDFDFD, 
        0xF5FFFFFF, 0xF9FFFFFF, 0xFBFFFFFF, 0xFDDFDFDF, 0xFF363636, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF606060, 0xFDFFFFFF, 0xF5ECE8E3, 0xE3F4F3F1, 0xD8F2F1EF, 0xD5EEEDED, 0xCFEEEEEB, 0xCCEBEBE9, 0xC7EAE9E7, 0xC2E8E7E5, 0xC2E4E1DF, 0xC0E3E0DF, 0xBDE4E2E0, 0xBBE6E5E3, 0xB2E8E7E5, 0xAEE8E5E3, 
        0xAEEBE9E7, 0xAEEBEAE8, 0xB3E8E5E2, 0xBAE6E3E1, 0xBFE3E0DD, 0xC4E0DCD8, 0xC4DFDCD8, 0xC4DFDCD9, 0xC5E0DCDA, 0xC0DEDBD8, 0xBDE0DCDC, 0xB8E4E1DE, 0xB0E9E7E5, 0xB0EBE8E7, 0xB8E6E2E0, 0xBDE1DDD9, 0xC3DEDAD4, 0xCCDED8D3, 0xDBEBE9E7, 0xEAF9F9F7, 
        0xF1FFFFFF, 0xF6FFFFFF, 0xF8FFFFFF, 0xFAFFFFFF, 0xFE505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF252525, 0xFDD8D8D1, 0xF9E7E6D6, 0xEBEFECEA, 0xDAF1EFEE, 0xD2F0EEEE, 0xCDEFEEEB, 0xCBEAEAEA, 0xCAE8E5E4, 0xC6E5E2E0, 0xC5E1DEDC, 0xC5E0DDDC, 0xC1E2E1DF, 0xC1E3E2E2, 0xBCE6E5E4, 0xBBE6E4E4, 
        0xB7E8E8E6, 0xB5EBEAE8, 0xB6E9E8E6, 0xBBE5E3E0, 0xBFE2DFDC, 0xC1E2DFDC, 0xC2E2DEDB, 0xC5E0DCDB, 0xC4E1DDDC, 0xBFE2DFDC, 0xBDE0DEDC, 0xB9E2E0DF, 0xB6E7E5E3, 0xB5EAE8E7, 0xBCE6E3E0, 0xC0DCD8D3, 0xC3D8D2CC, 0xC9D8D2CD, 0xDAE2DDD8, 0xEDEEEEEC, 
        0xF5FDFCFB, 0xF7FFFFFF, 0xF7FFFFFF, 0xFAFFFFFF, 0xFE505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF0A0A0A, 0xFEE8E8E7, 0xFAEAE8DD, 0xF0EAE7E7, 0xE3EDECEB, 0xD8EDECEB, 0xCDEEEEEC, 0xCAEAEBEA, 0xCAE6E4E3, 0xC6E2E0DE, 0xC5E0DDDB, 0xC5DEDCDA, 0xC2E2DEDD, 0xC4E1DFDD, 0xC2E2E1E0, 0xBDE6E4E4, 
        0xBBE9E6E5, 0xBCE7E6E6, 0xBBE7E5E3, 0xBCE2E0DD, 0xC0E0DDDA, 0xC2E2E0DE, 0xC2E1DEDD, 0xC4E1DEDC, 0xC5E0DFDC, 0xBFE3E0DE, 0xBAE2E0DE, 0xB9E2DEDD, 0xB8E4E2E0, 0xB9E6E4E1, 0xBEE3DFDC, 0xC3D7D1CC, 0xC5D0C8C2, 0xCAD4CBC5, 0xDCE0DBD6, 0xEDEBE9E7, 
        0xF6F5F1ED, 0xF7FFFFFF, 0xF6FFFFFF, 0xF9FFFFFF, 0xFE505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF090909, 0xFED3D3D3, 0xFCEBE6E2, 0xF4E4E4E3, 0xEBE6E5E5, 0xDDECEBE9, 0xCFECEBEA, 0xC6EBEBEB, 0xC7E5E4E2, 0xC4E3E0DE, 0xC4DEDBD8, 0xC6DBDAD7, 0xC4DEDCD9, 0xC6DFDBDA, 0xC3E1DEDD, 0xC0E3E2E1, 
        0xBFE5E2E1, 0xBDE4E2E1, 0xBCE2DFDD, 0xBFDFDBD9, 0xBFDFDDD9, 0xBFE1DFDC, 0xC1E1E0DC, 0xC6E1E0DC, 0xC5E0DFDC, 0xBEE3DFDE, 0xB7E3E1DF, 0xB9E1DEDB, 0xB8E2DFDC, 0xBDE0DCD9, 0xC2DCD7D4, 0xC7D3CCC6, 0xCCCDC4BD, 0xD3CEC6BE, 0xDFD8D3CE, 0xECE9E6E3, 
        0xF5F2F2EC, 0xF5FFFFFF, 0xF5FFFFFF, 0xFAFFFFFF, 0xFE505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFE8F8F8F, 0xFCF4F4F4, 0xF8D7D7D7, 0xF1E4E2E2, 0xE3E9E7E7, 0xCFECEBEA, 0xC5EBEAE8, 0xC2E6E5E3, 0xC3E1DFDC, 0xC2DDD9D6, 0xC5DAD7D3, 0xC4DCD8D6, 0xC5DDDAD8, 0xC5DFDCD8, 0xC2DFDCDA, 
        0xBEE1DEDB, 0xBCE0DDDA, 0xBBE0DDD9, 0xBEDBD9D7, 0xBEDDDBD8, 0xBDE1DFDC, 0xC1E0DDDB, 0xC5DFDFDB, 0xC4DEDCDA, 0xC0DDDBD8, 0xB8E0DEDB, 0xB6E2DFDC, 0xB7DFDBD8, 0xC0D9D4CF, 0xC5D4CFC9, 0xCACDC7C1, 0xD0C9BFB9, 0xD7C9C1B9, 0xE1D1C9C2, 0xEEE6E2DE, 
        0xF6F3F0ED, 0xF9FFFFFF, 0xFAFFFFFF, 0xFBFFFFFF, 0xFF505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF222222, 0xFDFDFDFD, 0xFAD0D0D0, 0xF5DFDEDD, 0xEAE1E0E0, 0xD6E7E6E4, 0xC9E5E4E3, 0xC3E4E2E0, 0xC1E1DFDE, 0xC1DBD9D6, 0xBFD9D6D3, 0xBDDCD9D6, 0xC2DCD8D6, 0xC3DCD8D5, 0xC5DAD5D3, 
        0xBDDBD7D4, 0xBCDBD7D3, 0xBCD9D7D3, 0xBCD9D5D1, 0xBADCD9D6, 0xBEDDDAD6, 0xC3DCDAD6, 0xC5DCDBD7, 0xC4DBD8D5, 0xC1D9D6D4, 0xB9DEDBD7, 0xB2E1DEDC, 0xB4DDD8D5, 0xC0D2CCC7, 0xC6CCC5BF, 0xCAC7BFB9, 0xCEC5BBB4, 0xD6C7BFB7, 0xE4D3CCC5, 0xF1E5E2DF, 
        0xF7F5F4F0, 0xFCFFFFFF, 0xFDFFFFFF, 0xFDFFFFFF, 0xFF505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFE9C9C9C, 0xFCF1F1F1, 0xF8DAD7D7, 0xEFD9D7D7, 0xDFDDDBD9, 0xD3DBD8D6, 0xC9DCDAD7, 0xC0DFDDDB, 0xBDDCD9D6, 0xB9D8D3D0, 0xB8D7D3CF, 0xBED7D3CF, 0xBFD7D3CF, 0xC3D5D1CE, 
        0xC1D4D0CD, 0xBDD2CEC9, 0xBCD2CDC9, 0xBCD4CFCB, 0xB9D8D4D1, 0xBED7D4D0, 0xC3D7D5D2, 0xC3D8D6D2, 0xC3D8D6D2, 0xC0D7D4D1, 0xB9D9D6D3, 0xB2DBD8D4, 0xB5D7D2CE, 0xBECEC7C1, 0xC5C9C0BA, 0xC8C5BDB6, 0xCAC4BAB3, 0xD4C6BBB3, 0xE5D4CBC5, 0xF4E3E1E0, 
        0xFAF8F5F5, 0xFCFFFFFF, 0xFDFFFFFF, 0xFDFFFFFF, 0xFF505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF414141, 0xFEFFFFFF, 0xFAD8D2CB, 0xF2D2CECC, 0xE2D5D1CF, 0xD6D2CEC9, 0xCBD5D1CE, 0xC2DAD7D4, 0xBAD7D3CF, 0xB4D4CFCA, 0xB4CFC9C4, 0xBBD0C9C5, 0xBCD2CDC8, 0xBFD0CBC6, 
        0xC3CECAC6, 0xBFCDC6C2, 0xBCCDC8C3, 0xBECEC9C5, 0xBCD3CFCB, 0xB9D5D2CD, 0xB9D7D4D0, 0xBAD7D5D1, 0xBDD7D4D1, 0xBDD5D1CE, 0xB7D4CECA, 0xB2D5D0CC, 0xB8D0CAC5, 0xBECAC3BC, 0xC3C5BCB7, 0xC6C3BBB4, 0xC8C4BBB3, 0xD4C4B9B1, 0xE7CCC2BD, 0xF7E4E2DF, 
        0xFCFFFFFF, 0xFDFFFFFF, 0xFCFFFFFF, 0xFDFFFFFF, 0xFF505050, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF090909, 0xFEBEBEBE, 0xFBC0C0C0, 0xF4CEC8C1, 0xE6CEC9C5, 0xD9CCC7C2, 0xCECFCAC5, 0xC6D0CAC6, 0xBCCFC9C3, 0xB7CEC7C2, 0xB9CAC3BC, 0xBACAC4BE, 0xB9CCC7C2, 0xB9CCC6C1, 
        0xC1CAC4BF, 0xC1C9C2BE, 0xBDC9C4BF, 0xB8CDC7C1, 0xB3D1CECA, 0xAAD7D3D0, 0xA5DAD7D4, 0xA7D9D6D3, 0xAFD6D2CF, 0xB5D4CFCB, 0xAFD1CCC7, 0xA9D2CDC9, 0xB2CFC8C4, 0xBCC7C0BA, 0xC0C3BCB6, 0xC4C1BAB2, 0xCBC4BCB4, 0xD5C7BDB6, 0xE7CFC4BE, 0xF9EFEDEB, 
        0xFCFFFFFF, 0xFDFFFFFF, 0xFDFFFFFF, 0xFDF2F2F2, 0xFF434343, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF737370, 0xFBD8CEBB, 0xF1C5BEB9, 0xE6C5BEB8, 0xD9C7C1BB, 0xCDCBC6C0, 0xC2CDC8C2, 0xBACAC5BF, 0xB5CBC5BF, 0xB6CBC4BE, 0xB0CFCAC4, 0xADCFC9C4, 0xAACFC9C4, 
        0xB3CEC8C3, 0xB9CAC4C0, 0xB1CBC6C0, 0xA0D2CEC9, 0x96D7D3CE, 0x8CDBD8D5, 0x8ADDDBD8, 0x8DDDD9D6, 0x94D9D5D2, 0x9AD8D3CF, 0x97D9D4D0, 0x99D8D3CF, 0xA4D0CAC5, 0xAFCBC5BF, 0xB6C8C1BB, 0xC0C3BBB4, 0xCDC6BDB7, 0xD9CAC0BA, 0xE7D0C7C0, 0xFAF1EDED, 
        0xFEA4A4A4, 0xFF666666, 0xFF4D4D4D, 0xFF212121, 0xFF060606, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF585454, 0xFCDDB6B5, 0xF2BDB9B2, 0xE7C0B9B2, 0xD8C5BDB7, 0xC9C9C3BC, 0xBCD1CCC7, 0xB5CBC5BE, 0xACCEC7C1, 0xA0D6D0CB, 0x9AD8D2CE, 0x9ED6D1CC, 0x9CD6D1CD, 
        0x9ED8D3CE, 0x9ED5D0CD, 0x98D5CFCA, 0x88D9D5D1, 0x79DFDBD7, 0x77DDDAD6, 0x75E1DDDA, 0x71E0DDDA, 0x79DCD9D7, 0x79DDD9D6, 0x7DDFDBD8, 0x85DDD9D5, 0x91D4CFCA, 0xA2D0CAC5, 0xAECEC7C2, 0xBEC9C1BB, 0xD3C3BCB4, 0xE3C4BAB1, 0xF0CAC0BA, 0xFCE1DBD9, 
        0xFF464646, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF403434, 0xFCBA9A94, 0xF7BBB3AB, 0xECB8B3AA, 0xD9BFB7AF, 0xC8C7BFB8, 0xB4D2CCC7, 0xAAD1CAC5, 0xA2D5CFCA, 0x93DDD8D4, 0x88DBD6D2, 0x89DAD6D1, 0x8ADDD9D6, 
        0x88DDD9D5, 0x84DBD7D3, 0x81DCD8D4, 0x72E0DCD9, 0x67E3E0DC, 0x6DE1DDDB, 0x6EE0DDDB, 0x6CE0DDDB, 0x6FDEDBD8, 0x6AE1DDDB, 0x6FE2DEDC, 0x76E0DCD9, 0x88D7D2CD, 0x97D4D0CA, 0x9ED7D1CD, 0xB5D2CBC6, 0xDBBFB7B0, 0xECBBB0A7, 0xF2BFB0A2, 0xFABCB1AB, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3B3434, 0xFDA09090, 0xF7BDB4AC, 0xE7C2BBB3, 0xD1CBC5BF, 0xC2D4D0CB, 0xAED9D4CF, 0x9FD7D2CD, 0x90DFDBD7, 0x7FE3DFDC, 0x75E3DEDC, 0x73E1DDD9, 0x78E1DEDB, 
        0x78DEDBD7, 0x74DCD8D4, 0x6FE2DEDC, 0x63E5E1DF, 0x5EE7E4E1, 0x66E4E1DF, 0x6AE2DFDD, 0x6DE0DEDB, 0x6CE0DDDB, 0x68E1DDDC, 0x6EE3DFDD, 0x79E0DDDA, 0x87DBD7D3, 0x92D9D5D1, 0x94DCD8D4, 0xABD7D0CB, 0xD9C3BBB3, 0xEDBCB0A7, 0xF3BDAAA6, 0xFAB9B0A5, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF343434, 0xFD8F8F8F, 0xF7BBBAB3, 0xE4CDC9C2, 0xC7DBD6D2, 0xBADEDBD7, 0xB1DBD7D3, 0x9FDDD9D5, 0x81E3E0DD, 0x70E7E3E0, 0x6DE6E3E0, 0x6AE4E1DE, 0x6CE1DEDB, 
        0x6DDEDAD7, 0x6ADEDAD7, 0x65E1DEDB, 0x61E3E0DE, 0x5DE6E5E2, 0x61E6E4E1, 0x64E5E2DF, 0x66E2DFDC, 0x64E0DEDC, 0x66E1DEDC, 0x6BE4E1DF, 0x73E2DFDD, 0x80DEDAD7, 0x8DDEDBD9, 0x8FDDD8D5, 0xA8D9D4CF, 0xD0D2CCC7, 0xECC7BBB4, 0xF4BEB4A6, 0xFBA7A498, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF1F1F1F, 0xFEA0A0A0, 0xF8BBB8B5, 0xE1D7D2CD, 0xC6E1DDDA, 0xB4E2DFDC, 0xA4E1DEDB, 0x8FE1DDDA, 0x7AE4E1DF, 0x70E5E2E0, 0x6DE5E2E1, 0x68E3E1DE, 0x69E0DDDB, 
        0x66DDDAD7, 0x63E0DCDA, 0x61E3E0DD, 0x60E3E0DD, 0x5FE5E2DF, 0x5EE7E5E2, 0x60E4E1DF, 0x61E1DFDC, 0x61E0DEDB, 0x64E0DDDB, 0x68E5E3E0, 0x6FE4E1DF, 0x7CDFDBD9, 0x89E0DDDB, 0x92DEDAD6, 0xAADCD8D4, 0xCED8D2CD, 0xF0D3D1CB, 0xFABAB3A8, 0xFF252524, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF222222, 0xFEA0A0A0, 0xF7C0B9B1, 0xE1D8D0CB, 0xC5E5E2DF, 0xB2E4E2DE, 0x9DE2DFDD, 0x86E1DDDC, 0x77E4E1DF, 0x6FE3E0DE, 0x6FE2DEDC, 0x6EE0DDDC, 0x6FE1DEDC, 
        0x6CE0DCD9, 0x67E0DDD9, 0x64E4E0DF, 0x65E4E1DE, 0x66E5E2DF, 0x63E6E4E1, 0x60E2DEDC, 0x61DEDAD7, 0x63DCD9D5, 0x6AE0DDDA, 0x6CE0DDDA, 0x76E1DDDB, 0x83E0DDDA, 0x8FE2DFDC, 0x9CDFDAD7, 0xB4DEDAD6, 0xD6D9D4CF, 0xF0D9D2CA, 0xFCC9B3A2, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF040404, 0xFF737373, 0xFDA9A8A8, 0xF9B5A69B, 0xE5CEC7BE, 0xC6E2DDD9, 0xB5E3E0DD, 0x9FE0DDDB, 0x87E1DEDC, 0x7CE2E0DE, 0x75DFDBD8, 0x75DBD7D4, 0x76DDD9D6, 0x79E1DEDB, 
        0x77DFDCD9, 0x70E0DCD9, 0x6DE4E0DD, 0x71E4E1DF, 0x70E6E2E0, 0x6CE1DEDC, 0x67D9D5D2, 0x66D8D3CF, 0x6EDBD5D2, 0x73D9D5D1, 0x76DAD5D2, 0x82DDD9D7, 0x90E0DDDA, 0x99DFDCD9, 0xA6E0DBD8, 0xBEDED9D6, 0xDDD9D1CC, 0xF0D0C7BF, 0xFCB4A591, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF4C4C4C, 0xFED8D8D8, 0xFCA18E8E, 0xF7BAA09E, 0xE8C8BFB7, 0xCFDED8D4, 0xBBDEDAD6, 0xA4DEDBD8, 0x8FE0DDDB, 0x86DEDBD9, 0x81DAD5D1, 0x81D9D4D0, 0x84DEDAD7, 0x84DEDAD7, 
        0x81DBD7D3, 0x7DDBD6D2, 0x7ADDD8D5, 0x7BE1DDDA, 0x7CE3E0DD, 0x78DFDCD9, 0x73D7D3CF, 0x72D4CEC9, 0x79D5CFCB, 0x7CD6D0CC, 0x83D7D2CF, 0x8ED9D4D1, 0x97DBD7D3, 0xA1DBD5D2, 0xABDCD6D2, 0xC3DAD3CE, 0xDCD6CECA, 0xF1C3B8AF, 0xFD685957, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF0C0C0C, 0xFEC0C0C0, 0xFDA4A4A4, 0xFCAE8989, 0xF9AF9896, 0xF3B7AEA3, 0xE0D4CEC7, 0xC5DAD4CF, 0xB0D9D5D2, 0x9BDBD7D4, 0x91DAD6D3, 0x8FD5D0CC, 0x90D6CFCB, 0x94DAD6D2, 0x8ED7D2CF, 
        0x8DD5D0CC, 0x8CD7D1CE, 0x88DAD4D1, 0x87DAD6D2, 0x85DBD6D2, 0x82DCD7D3, 0x82D4CECA, 0x82D0C9C4, 0x84D3CDC8, 0x88D3CDC9, 0x90D5CFCB, 0x97D3CDC9, 0xA0D3CEC9, 0xAAD6D0CC, 0xB1D7D1CD, 0xC2D7D0CB, 0xD6D1CAC5, 0xF0BDAEA7, 0xFD645454, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF202020, 0xFEE7E7E7, 0xFD808080, 0xFCAE918F, 0xFAB38D8B, 0xF8AA9F97, 0xEDC3B7B2, 0xD4D3CCC6, 0xBED1CBC6, 0xA7D4CFCA, 0xA0D2CCC7, 0x9ECFC8C3, 0x9ED3CCC8, 0x9DD6D0CD, 0x98D3CDC9, 
        0x9BD6D0CC, 0x9EDAD5D1, 0x99D8D4D0, 0x92D7D2CD, 0x8ED7D1CC, 0x88D6D0CA, 0x8CCFC8C3, 0x94CCC5BF, 0x93D1CAC5, 0x96D0CAC5, 0x98D1CBC7, 0xA1CFC9C4, 0xAACFC8C3, 0xB6D3CDC9, 0xBCDFD9D6, 0xC7DCD7D2, 0xDAC9C1BC, 0xF2B8B2AA, 0xFE626262, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF020202, 0xFF919191, 0xFEC9C9C9, 0xFD838383, 0xFD8C8888, 0xFBA6A695, 0xF6BFAFA0, 0xDFCEC6C0, 0xC9D0C9C5, 0xB8D1CAC4, 0xB4CBC3BC, 0xB3CBC3BD, 0xAED1CBC5, 0xAED8D2CE, 0xACD6D0CC, 
        0xB5D4CECA, 0xB6D7D2CE, 0xB1D7D1CD, 0xA2D6D2CD, 0x9AD7D1CC, 0x99D2CCC6, 0xA1CBC2BC, 0xACCCC4BD, 0xB7D3CCC6, 0xB1D0C8C3, 0xB0CFC8C3, 0xBBD1CDC9, 0xBDD0CBC6, 0xC3D3CCC7, 0xC7E2DDD9, 0xD2DCD7D2, 0xE9C2B7AF, 0xF9AEA197, 0xFE777575, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF252525, 0xFE6D6D6D, 0xFE636363, 0xFEA2A2A2, 0xFD959594, 0xFCB4B29D, 0xF1CABBB5, 0xD9D1C9C3, 0xCAD0C8C3, 0xC6CEC7C1, 0xC8CFC8C2, 0xCFCFC7C1, 0xC8D5D0CC, 0xBED5D0CC, 
        0xC7D2CDCA, 0xD1D2CDC8, 0xCCD5CFCB, 0xBCD8D2CE, 0xB2D5CFC9, 0xB4D3CDC6, 0xC0CFC9C3, 0xCAD0CAC5, 0xDBD3CDC8, 0xCDD2CDC7, 0xCBCFC7C3, 0xCFD1CCC7, 0xD2CDC7C3, 0xD4D3CCC7, 0xD8E5E0DC, 0xE2E1DDD9, 0xF2D0C7C3, 0xFDD8C7C7, 0xFF606060, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF242424, 0xFF060606, 0xFF3B3A3A, 0xFBDDA5A1, 0xF1C1BBAD, 0xE1D3CAC5, 0xDAD7D0CA, 0xDED8D4CE, 0xEBD6D1CC, 0xE5DAD3D1, 0xDCD6D1CD, 
        0xE3D1CBC6, 0xEDCDC8C3, 0xE8D6D1CB, 0xDED8D3CD, 0xDCD7D2CB, 0xD5D6CEC9, 0xDBD8D2CC, 0xE7D7D2CC, 0xF0D6CFCD, 0xE6DAD2D0, 0xE5D7D1CB, 0xEDCEC6C0, 0xEDC8C3BD, 0xEFD2CDC3, 0xF0E7DFD9, 0xF3E3DFDC, 0xFBDFCBB1, 0xFE8A8686, 0xFF191919, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF020202, 0xFEBD8A8A, 0xFCE79A90, 0xF5D8C6C3, 0xEFD5C9C0, 0xF7CDCBC7, 0xFBEAE7E0, 0xF8DDD9D4, 0xF4DAD8D2, 
        0xF7D9D1C0, 0xFBDAC7B3, 0xFCEDE7C3, 0xFBEAD9CD, 0xF9DDC5C1, 0xF2D5CAC1, 0xF7B3ABA7, 0xFCA4A499, 0xFCEAE9E6, 0xFAE9E5DD, 0xF8DDD6D0, 0xFCE1E0B8, 0xFBDDC8BE, 0xFCF7F4E9, 0xFDFFFFFF, 0xFCFAF6EC, 0xFE7B7667, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF050202, 0xFF776560, 0xFEBDBABA, 0xFE443F3A, 0xFF121212, 0xFE707070, 0xFCFBF4F2, 0xFDFBFBF3, 
        0xFDE6E6CD, 0xFDF9F3D7, 0xFDFDFBF2, 0xFDFDFDFD, 0xFDE3DAC6, 0xFE76736F, 0xFF020202, 0xFF000000, 0xFDECE8E8, 0xFDFFFFFF, 0xFDD5D5D5, 0xFECDCCBF, 0xFCFFF7EB, 0xFDFFFFFF, 0xFEE5E5E5, 0xFF3E3E3E, 0xFF020202, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF222222, 0xFDEEEEEE, 0xFE848484, 
        0xFF0B0B0B, 0xFE777777, 0xFDDBDBDB, 0xFF444444, 0xFF070707, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF666666, 0xFEAAAAAA, 0xFF0B0B0B, 0xFF111111, 0xFE848484, 0xFE515151, 0xFF070707, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF3E3E3E, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP bm_mist_small = {
  50, // xSize
  50, // ySize
  200, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_ac_mist_small,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/
