/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.22                          *
*        Compiled Jul  4 2013, 15:16:01                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
#include <EK/EK_gui.hpp>
#include "SearchWindow.hpp"
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0    (GUI_ID_USER + 0x00)
#define ID_BUTTON_0    (GUI_ID_USER + 0x02)
#define ID_BUTTON_1    (GUI_ID_USER + 0x03)
#define ID_EDIT_0    (GUI_ID_USER + 0x07)
#define ID_BUTTON_2    (GUI_ID_USER + 0x08)
#define ID_BUTTON_3    (GUI_ID_USER + 0x09)
#define ID_BUTTON_4    (GUI_ID_USER + 0x0A)
#define ID_BUTTON_5    (GUI_ID_USER + 0x0B)
#define ID_BUTTON_6    (GUI_ID_USER + 0x0C)
#define ID_BUTTON_7    (GUI_ID_USER + 0x0D)
#define ID_BUTTON_8    (GUI_ID_USER + 0x0E)
#define ID_BUTTON_9    (GUI_ID_USER + 0x0F)
#define ID_BUTTON_10    (GUI_ID_USER + 0x10)
#define ID_BUTTON_11    (GUI_ID_USER + 0x11)
#define ID_BUTTON_12    (GUI_ID_USER + 0x12)
#define ID_BUTTON_13    (GUI_ID_USER + 0x13)
#define ID_BUTTON_14    (GUI_ID_USER + 0x14)
#define ID_BUTTON_15    (GUI_ID_USER + 0x15)
#define ID_BUTTON_16    (GUI_ID_USER + 0x16)
#define ID_BUTTON_17    (GUI_ID_USER + 0x17)
#define ID_BUTTON_18    (GUI_ID_USER + 0x18)
#define ID_BUTTON_19    (GUI_ID_USER + 0x19)
#define ID_BUTTON_20    (GUI_ID_USER + 0x22)
#define ID_BUTTON_21    (GUI_ID_USER + 0x23)
#define ID_BUTTON_22    (GUI_ID_USER + 0x24)
#define ID_BUTTON_23    (GUI_ID_USER + 0x25)
#define ID_BUTTON_24    (GUI_ID_USER + 0x26)
#define ID_BUTTON_25    (GUI_ID_USER + 0x27)
#define ID_BUTTON_26    (GUI_ID_USER + 0x28)
#define ID_BUTTON_27    (GUI_ID_USER + 0x29)
#define ID_BUTTON_28    (GUI_ID_USER + 0x2A)
#define ID_BUTTON_29    (GUI_ID_USER + 0x2B)


// USER START (Optionally insert additional defines)
#ifdef INCLUDE_FROM_CLASS
#else
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "SearchWindow", ID_WINDOW_0, 0, 0, 320, 240, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "CloseButton", ID_BUTTON_0, 275, 10, 35, 35, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "SearchButton", ID_BUTTON_1, 260, 180, 50, 50, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 10, 15, 210, 30, 0, 0x64, 0 },
  { BUTTON_CreateIndirect, "A", ID_BUTTON_2, 20, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "B", ID_BUTTON_3, 155, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "C", ID_BUTTON_4, 95, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "D", ID_BUTTON_5, 80, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "E", ID_BUTTON_6, 70, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F", ID_BUTTON_7, 110, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "G", ID_BUTTON_8, 140, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "H", ID_BUTTON_9, 170, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "I", ID_BUTTON_10, 220, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "J", ID_BUTTON_11, 200, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "K", ID_BUTTON_12, 230, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "L", ID_BUTTON_13, 260, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "M", ID_BUTTON_14, 215, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "N", ID_BUTTON_15, 185, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "O", ID_BUTTON_16, 250, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "P", ID_BUTTON_17, 280, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Q", ID_BUTTON_18, 10, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "R", ID_BUTTON_19, 100, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "S", ID_BUTTON_20, 50, 110, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "T", ID_BUTTON_21, 130, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "U", ID_BUTTON_22, 190, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "V", ID_BUTTON_23, 125, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "W", ID_BUTTON_24, 40, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "X", ID_BUTTON_25, 65, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Y", ID_BUTTON_26, 35, 155, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Z", ID_BUTTON_27, 160, 65, 30, 30, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "BackspaceButton", ID_BUTTON_28, 230, 10, 35, 35, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "SpacebarButton", ID_BUTTON_29, 105, 200, 90, 30, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'CloseButton'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetText(hItem, "");
    //
    // Initialization of 'SearchButton'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetText(hItem, "");
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetFont(hItem, GUI_FONT_24_1);
    //
    // Initialization of 'BackspaceButton'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_28);
    BUTTON_SetText(hItem, "");
    //
    // Initialization of 'SpacebarButton'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_29);
    BUTTON_SetText(hItem, "");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'CloseButton'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::CloseButtonClicked, 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_1: // Notifications sent by 'SearchButton'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::SearchButtonClicked, 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_0: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_2: // Notifications sent by 'A'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'a', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_3: // Notifications sent by 'B'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'b', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_4: // Notifications sent by 'C'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'c', 100);
			        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_5: // Notifications sent by 'D'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'd', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_6: // Notifications sent by 'E'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'e', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_7: // Notifications sent by 'F'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'f', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_8: // Notifications sent by 'G'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'g', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_9: // Notifications sent by 'H'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'h', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_10: // Notifications sent by 'I'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'i', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_11: // Notifications sent by 'J'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'j', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_12: // Notifications sent by 'K'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'k', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_13: // Notifications sent by 'L'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'l', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_14: // Notifications sent by 'M'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'm', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_15: // Notifications sent by 'N'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'n', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_16: // Notifications sent by 'O'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'o', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_17: // Notifications sent by 'P'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'p', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_18: // Notifications sent by 'Q'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'q', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_19: // Notifications sent by 'R'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'r', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_20: // Notifications sent by 'S'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 's', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_21: // Notifications sent by 'T'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 't', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_22: // Notifications sent by 'U'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'u', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_23: // Notifications sent by 'V'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'v', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_24: // Notifications sent by 'W'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'w', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_25: // Notifications sent by 'X'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'x', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_26: // Notifications sent by 'Y'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'y', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_27: // Notifications sent by 'Z'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
				CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, 'z', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_28: // Notifications sent by 'BackspaceButton'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::BackspaceButtonClicked, 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_BUTTON_29: // Notifications sent by 'SpacebarButton'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
			  CurrentSearchWindow->DebouncedClick(&SearchWindow::CharButtonClicked, ' ', 100);
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateSearchWindow
*/
WM_HWIN CreateSearchWindow(void);
WM_HWIN CreateSearchWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
#endif
// USER END

/*************************** End of file ****************************/