/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        �C/GUI-BitmapConvert-Demo V5.26.                            *
*        Compiled Aug  8 2014, 14:40:24                              *
*                                                                    *
*        (c) 2002-2014  Micrium, Inc.                                *
*        www.micrium.com                                             *
*                                                                    *
*        (c) 1998-2014  Segger Microcontroller GmbH & Co. KG         *
*        www.segger.com                                              *
*                                                                    *
*        May not be used in a product                                *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: open                                                  *
* Dimensions:  50 * 50                                               *
* NumColors:   4                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmopen;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colorsopen[] = {
  0xFCFCFC, 0x5A5A5A, 0xA5A5A5, 0x030303
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _Palopen = {
  4,  // Number of entries
  1,  // Has transparency
  &_Colorsopen[0]
};

static GUI_CONST_STORAGE unsigned char _acopen[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x95, 0x55, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9F, 0xFF, 0xFF, 0xFF, 0x60, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xF6, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xBF, 0xFF, 0xFF, 0xFF, 0x40, 0x00,
  0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x2F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xD0, 0x00,
  0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x02, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xBF, 0xFF, 0xFF, 0xF4, 0x00,
  0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x2F, 0xFF, 0xFF, 0xFE, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0B, 0xFF, 0xFF, 0xFD, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x02, 0xFF, 0xFF, 0xFF, 0x00,
  0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xBF, 0xFF, 0xFF, 0x80,
  0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x2F, 0xFF, 0xFF, 0x80,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0B, 0xFF, 0xFF, 0x40,
  0x1F, 0xFF, 0xF6, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0x00, 0x02, 0xFF, 0xFF, 0x40,
  0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xFF, 0x40,
  0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x40,
  0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x40,
  0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0xFF, 0x40,
  0x1F, 0xFF, 0xF6, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0x00, 0x02, 0xFF, 0xFF, 0x40,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0B, 0xFF, 0xFF, 0x40,
  0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x2F, 0xFF, 0xFF, 0x80,
  0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xBF, 0xFF, 0xFF, 0x80,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x02, 0xFF, 0xFF, 0xFF, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0B, 0xFF, 0xFF, 0xFD, 0x00,
  0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x2F, 0xFF, 0xFF, 0xFE, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xBF, 0xFF, 0xFF, 0xF4, 0x00,
  0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x02, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xD0, 0x00,
  0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFD, 0x00, 0x2F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xBF, 0xFF, 0xFF, 0xFF, 0x40, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xD9, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0B, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x9F, 0xFF, 0xFF, 0xFF, 0x60, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x95, 0x55, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmopen = {
  50, // xSize
  50, // ySize
  13, // BytesPerLine
  2, // BitsPerPixel
  _acopen,  // Pointer to picture data (indices)
  &_Palopen   // Pointer to palette
};

/*************************** End of file ****************************/
