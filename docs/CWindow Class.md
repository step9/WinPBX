# CWindow Class

**CWindow** is a powerful class to easily create Graphical User Interfaces for Windows applications.

#### Main features

* Easy creation of Graphical User Interfaces.
* 100% compatible with the Windows API.
* Optional default values for window styles and extended styles.
* High DPI and Unicode support for windows and controls.
* Support for alpha blended icons and images.
* Easy subclassing of child controls.
* Easy management of tab controls and tab pages
* MDI (Multiple Document Interface) support

#### Remarks

The default **CWindow_WindowProc** and **CWindowMDIProc** callback procedures have just the needed code to work; you must use your own instead.

The default message pump (**CWindow.DoEvents**), should be enough for most applications, but you can replace it with your own.

**Include file**: CWindow.inc.

# Constructor

Registers the class name and initializes the common controls library.

```
CONSTRUCTOR CWindow (BYREF wszClassName AS CONST WSTRING = "")
```

| Parameter  | Description |
| ---------- | ----------- |
| *wszClassName* | Optional. The name of the class name to register. If omitted, the class will use "FBWindowClass:" and a number as the class name. |

#### Usage examples

```
DIM pWindow AS CWindow
```
```
DIM pWindow AS CWindow = "MyClassName"
```

### Tutorial

| Topic      |
| ---------- |
| [Creating the main window](#Topic1) |
| [Getting a pointer to the CWindow class](#Topic2) |
| [Adding controls](#Topic3) |
| [Popup windows](#Topic4) |
| [Using PNG icons in toolbars](#Topic5) |
| [Visual style menus](#Topic6) |
| [Keyboard accelerators](#Topic7) |
| [Scrollable windows](#Topic8) |
| [TabPages](#Topic9) |
| [Layout Manager](#Topic10) |
| [MDI WIndows](#Topic11) |

### Methods and Properties

| Name       | Description |
| ---------- | ----------- |
| [AccelHandle](#AccelHandle) | Gets/sets the accelerator table handle. |
| [AddAccelerator](#AddAccelerator) | Adds an accelerator key to the table. |
| [AddControl](#AddControl) | Adds a control to the window. |
| [BigIcon](#BigIcon) | Associates a new large icon with the main window. |
| [Brush](#Brush) | Gets/sets the background brush. |
| [Center](#Center) | Centers a window on the screen or over another window. |
| [ClassStyle](#ClassStyle) | Gets/sets the style of the class. |
| [ClientHeight](#ClientHeight) | Returns the unscaled client height of the main window. |
| [ClientWidth](#ClientWidth) | Returns the unscaled client width of the window. |
| [ControlClientHeight](#ControlClientHeight) | Returns the unscaled client height of the specified window. |
| [ControlClientWidth](#ControlClientWidth) | Returns the unscaled client width of the specified window. |
| [ControlHandle](#ControlHandle) | Retrieves a handle to the child control specified by its identifier. |
| [ControlHeight](#ControlHeight) | Returns the unscaled height of the specified window. |
| [ControlWidth](#ControlWidth) | Returns the unscaled width of the specified window. |
| [Create](#Create) | Creates a new window. |
| [CreateAcceleratorTable](#CreateAcceleratorTable) | Creates the accelerator table. |
| [CreateFont](#CreateFont) | Creates a DPI aware logical font. |
| [CreateMDIWindow](#CreateMDIWindow) | Creates a new MDI window. |
| [DefaultFontSize](#DefaultFontSize) | Gets/sets the point size of the default font. |
| [DestroyAcceleratorTable](#DestroyAcceleratorTable) | Destroys the accelerator table. |
| [DoEvents](#DoEvents) | Processes windows messages. |
| [DPI](#DPI) | Gets/sets the DPI (dots per inch) to be used by the application. |
| [Font](#Font) | Gets/sets the font used as default. |
| [GetClientRect](#GetClientRect) | Retrieves the unscaled coordinates of the main window client area. |
| [GetControlClientRect](#GetControlClientRect) | Retrieves the unscaled coordinates of a window's client area. |
| [GetControlWindowRect](#GetControlWindowRect) | Retrieves the unscaled dimensions of the bounding rectangle of the specified window. |
| [GetWindowRect](#GetWindowRect) | Retrieves the unscaled dimensions of the bounding rectangle of the main window. |
| [GetWorkArea](#GetWorkArea) | Retrieves the unscaled size of the work area on the primary display monitor. |
| [Height](#Height) | Returns the unscaled height of the main window. |
| [hWindow](#hWindow) | Gets/sets the main window handle. |
| [hwndClient](#hwndClient) | Gets the MDI client window handle. |
| [InstanceHandle](#InstanceHandle) | Gets/sets the instance handle. |
| [MDICLassName](#MDICLassName) | Sets the class name of the MDI frame window. |
| [MoveWindow](#MoveWindow) | Changes the position and dimensions of the specified window. |
| [Resize](#Resize) | Resizes the window sending a WM_SIZE message with the  SIZE_RESTORED value. |
| [rxRatio](#rxRatio) | Returns the horizontal scaling ratio. |
| [ryRatio](#ryRatio) | Returns the vertical scaling ratio. |
| [ScaleX](#ScaleX) | Scales an horizontal coordinate according the DPI setting. |
| [ScaleY](#ScaleY) | Scales a vertical coordinate according the DPI setting. |
| [ScrollWindowPtr](#ScrollWindowPtr) | Gets/sets a pointer to the scroll window class. |
| [SetClientSize](#SetClientSize) | Adjusts the bounding rectangle of the window based on the desired size of the client area. |
| [SetFont](#SetFont) | Creates a DPI aware logical font and sets it as the default font. |
| [SetWindowPos](#SetWindowPos) | Changes the size, position, and Z order of a child, pop-up, or top-level window. |
| [SmallIcon](#SmallIcon) | Associates a new small icon with the main window. |
| [UnScaleX](#UnScaleX) | Unscales an horizontal coordinate according the DPI setting. |
| [UnScaleY](#UnScaleY) | Unscales a vertical coordinate according the DPI setting. |
| [UserData](#UserData) | Gets/sets a value in the user data area of the window. |
| [Width](#Width) | Returns the unscaled width of the main window. |
| [WindowExStyle](#WindowExStyle) | Gets/sets the window extended styles. |
| [WindowStyle](#WindowStyle) | Gets/sets the window styles. |

### Procedures

| Name       | Description |
| ---------- | ----------- |
| [AfxCWindowPtr](#AfxCWindowPtr) | Returns a pointer to the CWindow class given the handle of the main window or the CREATESTRUCT structure associated with it. |
| [AfxCWindowOwnerPtr](#AfxCWindowOwnerPtr) | Returns a pointer to the CWindow class given the handle of the window created with it or the handle of any of it's children windows or controls. |
| [AfxScrollWindowPtr](#AfxScrollWindowPtr) | Returns a pointer to the CScrollWindow class given the handle of the window attached to it. |

### Dialog

| Name       | Description |
| ---------- | ----------- |
| [AfxInputBox](#AfxInputBox) | Input box dialog. |

# CLayout Class

This class allows to anchor child windows to a parent window. When the parent window is resized, it manages the location and size of the anchored child windows according to the new dimensions of the parent.

| Name       | Description |
| ---------- | ----------- |
| [Constructor](#Constructor_Layout) | Creates an instance of the CLayout class. |
| [AnchorControl](#AnchorControl) | Anchors a window or control to its parent window. |
| [AdjustControls](#AdjustControls) | Adjusts the size and location of the child controls to the dimensions of its parent window. |

# CTabPage Class

Creates a generic window used as a tab page of a tab control.

### Methods

| Name       | Description |
| ---------- | ----------- |
| [hTabPage](#hTabPage) | Returns the window handle of the tab page. |
| [InsertPage](#InsertPage) | Adds a tab page and creates a generic window that will be associated with the page. |

### Procedures

| Name       | Description |
| ---------- | ----------- |
| [AfxCTabPagePtr](#AfxCTabPagePtr) | Returns a pointer to the **CTabPage** class given the handle of the tab control to which the tab page is associated and the zero-based tab index. |
| [AfxDestroyTabPage](#AfxDestroyTabPage) | Detroys a tab page. |
| [AfxDestroyAllTabPages](#AfxDestroyAllTabPages) | Detroys all the tab pages. |
| [AfxResizeTabPages](#AfxResizeTabPages) | Resizes all the tab pages associated with a tab control. |
| [AfxScrollTabPagePtr](#AfxScrollTabPagePtr) | Returns a pointer to the CScrollWindow class given the handle of the tab control to which the tab page is associated and the zero-based tab index. |

### <a name="Topic1"></a>Creating the main window

To use **CWindow** you must first include "CWindow.inc" and allow all symbols of its namespace to be accessed adding **USING Afx**.

```
#INCLUDE ONCE "CWindow.inc"
USING Afx
```

The first step is to create an instance of the class:

```
DIM pWindow AS CWindow
```

The **CWindow** constructor registers a class for the window with the name "FBWindowClass:xxx", where xxx is a counter number. Alternatively, you can force the use of your own class name by specifying it, e.g.

```
DIM pWindow AS CWindow = "MyClassName"
```

The constructor also checks if the application is DPI aware and calculates de scaling ratios and the default font name and point size ("Tahoma", 8 pt, for Windows XP and below; "Segoe UI", 9 pt, for Windows Vista and above").

You can override it by setting your own DPI and/or font before creating the window, e.g.

```
DIM pWindow AS CWindow
pWindow. DPI = 96
pWindow.SetFont("Times New Roman", 10, FW_NORMAL, , , , DEFAULT_CHARSET)
```

By default, **CWindow** uses a standard COLOR_3DFACE + 1 brush. You can override it calling the **Brush** property:

```
DIM pWindow AS CWindow
pWindow.Brush = GetStockObject(WHITE_BRUSH)
```

This makes the background of the window white.

The window class uses CS_HREDRAW OR CS_VREDRAW as default window styles. Without them, the background is not repainted and the controls leave garbage in it when resized. With them, windows with many controls cause heavy flicker. To avoid flicker, you can change the windows style using e.g. pWindow.ClassStyle = CS_DBLCLKS and take care yourself of repainting.

The next step is to create the window.

The **Create** method has many parameters, all of which are optional:

```
hParent     = Parent window handle
wszTitle    = Window caption
lpfnWndProc = Address of the callback function
x           = Horizontal position
y           = Vertical position
nWidth      = Window width
nHeight     = Window height
dwStyle     = Window style
dwExStyle   = Extended style
```

The most verbose way to call it is:

```
DIM hwndMain AS HWND = pWindow.Create(NULL, "CWindow Test", @WndProc, 0, 0, 525, 395, _
   WS_OVERLAPPEDWINDOW OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS, WS_EX_CONTROLPARENT OR WS_EX_WINDOWEDGE)
```

But just using

```
pWindow.Create
```

a working window is created and sized using CW_USEDEFAULT.

Unless the window has to use all the available desktop space, it may be preferible to use the **SetClientSize** method to size the window because Windows UI elements such the caption and borders have different sizes depending of the Windows version and/or the styles used. Therefore, to make sure that you have enough room for your controls, sizing the window according the client size seems more adequate.

We may need to process Windows messages, so we need to provide a callback function, e.g.

```
' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application sending an WM_CLOSE message
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
         END SELECT

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

and we have to pass the address of that callback function:

```
pWindow.Create(NULL, "CWindow Test", @WndProc)
pWindow.SetClientSize(500, 320)   ' The size may vary
```

Optionally, we can automatically center the window in the destop calling the **Center** method, e.g.

```
pWindow.Create(NULL, "CWindow Test", @WndProc)
pWindow.SetClientSize(500, 320)   ' The size may vary
pWindow.Center
```

To process Windows messages we need a message pump. **CWindow** provides a default one calling the **DoEvents** method:

```
FUNCTION = pWindow.DoEvents(nCmdShow)
```

This default message pump displays the window and processes the messages. It can be used with most applications, but, in case of need, you can replace it with your own, e.g.

```
' // Displays the window
DIM hwndMain AS HWND = pWindow.hWindow
ShowWindow(hwndMain, nCmdShow)
UpdateWindow(hwndMain)

' // Processes Windows messages
DIM uMsg AS MSG
WHILE (GetMessageW(@uMsg, NULL, 0, 0) <> FALSE)
   IF IsDialogMessageW(hWndMain, @uMsg) = 0 THEN
      TranslateMessage(@uMsg)
      DispatchMessageW(@uMsg)
   END IF
WEND
FUNCTION = uMsg.wParam
```
Each instance of the **CWindow** class has an user data area consisting in an array of 99 LONG_PTR values that you can use to store information that you find useful.

These values are set and retrieved using the **UserData** property and an index from 0 to 99.

### <a name="Topic2"></a>Getting a pointer to the CWindow class

At any time, you can get a pointer to the **CWindow** class by using:

```
DIM pWindow AS CWindow PTR = CAST(CWindow PTR, GetWindowLongPtrW(hwnd, 0))
- or -
DIM pWindow AS CWindow PTR = AfxCWindowPtr(hwnd)
```
where *hwnd* is the handle of its associated window handle.

If the handle of the main window its not available, the function **AfxCWindowOwnerPtr** allows the use of the handle of any of it's child controls.

An special case is the WM_CREATE message.

At the time in which this message is processed in the window callback, **CWindow** has not yet been able to store the pointer in the extra bytes of the window class.

To solve this problem, the **Create** method passes the pointer to the class in the *lParam* parameter when calling the API function **CreateWindowEx** to create the window.

This pointer can be retrieved in WM_CREATE using:

```
CASE WM_CREATE
   DIM pCreateStruct AS CREATESTRUCT PTR = CAST(CREATESTRUCT PTR, lParam)
   DIM pWindow AS CWindow PTR = CAST(CWindow PTR, pCreateStruct->lpCreateParams)
- or -
CASE WM_CREATE
   DIM pWindow AS CWindow PTR = AfxCWindowPtr(lParam)
```

### <a name="Topic3"></a>Adding controls

To add controls to the window you can use the **AddControl** method. Alternatively, you can use the API function **CreateWindowEx**, but then you will have to do scaling by yourself.

Besides the registered class names for the controls, in many cases you can use easier to remember aliases. For example. you can use "STATUSBAR" instead of "MSCTLS_STATUSBAR32".

The **AddControl** method also provides default styles for all the Windows controls. Therefore, you can save typing unless you need to use different styles.

For example, to add a button you can use

```
pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close", 350, 250, 75, 23)
```

instead of

```
pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close", 350, 250, 75, 23, _
   WS_CHILD OR WS_VISIBLE OR WS_TABSTOP OR BS_PUSHBUTTON OR BS_CENTER OR BS_VCENTER
```

For a list of predefined class names and styles, see the **AddControl** method.

If the application is DPI aware, controls created with the **AddControl** method are scaled according to the DPI setting.

**AddControl** also provides two ways for easily subclassing a control.

For the first way, used before Windows XP, you need to pass the address of the subclassed procedure, e.g.

```
pWindow.AddControl("Button", pWindow.hWindow, IDC_BUTTON, "Click me", 350, 250, 75, 23, , , , CAST(WNDPROC, @Button_SubclassProc))
```

and use a callback like this one:

```
' ========================================================================================
' Processes messages for the subclassed Button window.
' ========================================================================================
FUNCTION Button_SubclassProc ( _
   BYVAL hwnd   AS HWND, _                 ' // Control window handle
   BYVAL uMsg   AS UINT, _                 ' // Type of message
   BYVAL wParam AS WPARAM, _               ' // First message parameter
   BYVAL lParam AS LPARAM _                ' // Second message parameter
   ) AS LRESULT

   SELECT CASE uMsg

      CASE WM_GETDLGCODE
         ' // All keyboard input
         FUNCTION = DLGC_WANTALLKEYS
         EXIT FUNCTION

      CASE WM_LBUTTONDOWN
         MessageBoxW(GetParent(hwnd), "Click", "FreeBasic", MB_OK)
         EXIT FUNCTION

      CASE WM_KEYDOWN
         SELECT CASE LOWORD(wParam)
            CASE VK_ESCAPE
               SendMessageW(GetParent(hwnd), WM_CLOSE, 0, 0)
               EXIT FUNCTION
         END SELECT

      CASE WM_DESTROY
         ' // REQUIRED: Remove control subclassing
         SetWindowLongPtrW hwnd, GWLP_WNDPROC, CAST(LONG_PTR, RemovePropW(hwnd, "OLDWNDPROC"))

   END SELECT

   FUNCTION = CallWindowProcW(GetPropW(hwnd, "OLDWNDPROC"), hwnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

The second way uses the API function **SetWindowSubclass**. Besides passing the address of the callback procedure, it allows to pass the identifier of the control and a pointer to the **CWindow** class.

```
pWindow.AddControl("Button", pWindow.hWindow, IDC_BUTTON, "Click me", 350, 250, 75, 23, , , , _
   CAST(WNDPROC, @Button_SubclassProc), IDC_BUTTON, CAST(DWORD_PTR, @pWindow))
```

The main advantage of this method is that we can use the same callback for all the subclassed controls and easily identify which one is firing the messages and also have a pointer to his parent **CWindow class** if we need to use it. **SetWindowSubclass** also eliminates the disadvantages of the old subclassing approach explained in this thread: [Subclassing Controls](https://docs.microsoft.com/en-us/windows/desktop/controls/subclassing-overview).

Example of a callback function for controls subclassed with this method:

```
' ========================================================================================
' Processes messages for the subclassed Button window.
' ========================================================================================
FUNCTION Button_SubclassProc ( _
   BYVAL hwnd   AS HWND, _                 ' // Control window handle
   BYVAL uMsg   AS UINT, _                 ' // Type of message
   BYVAL wParam AS WPARAM, _               ' // First message parameter
   BYVAL lParam AS LPARAM, _               ' // Second message parameter
   BYVAL uIdSubclass AS UINT_PTR, _        ' // The subclass ID
   BYVAL dwRefData AS DWORD_PTR _          ' // Pointer to reference data
   ) AS LRESULT

   SELECT CASE uMsg

      CASE WM_GETDLGCODE
         ' // All keyboard input
         FUNCTION = DLGC_WANTALLKEYS
         EXIT FUNCTION

      CASE WM_LBUTTONDOWN
         MessageBoxW(GetParent(hwnd), "Click", "FreeBasic", MB_OK)
         EXIT FUNCTION

      CASE WM_KEYDOWN
         SELECT CASE LOWORD(wParam)
            CASE VK_ESCAPE
               SendMessageW(GetParent(hwnd), WM_CLOSE, 0, 0)
               EXIT FUNCTION
         END SELECT

      CASE WM_DESTROY
         ' // REQUIRED: Remove control subclassing
         RemoveWindowSubclass hwnd, @Button_SubclassProc, uIdSubclass

   END SELECT

   FUNCTION = DefSubclassProc(hwnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

Both of these methods are optional. Therefore, you can use your own way to subclass controls.

**Warning**: You cannot use the subclassing helper functions to subclass a window across threads.

### <a name="Topic4"></a>Popup windows

To create a popup window you simply create a new instance of the **CWindow** class and, in the **Create** method, you make it child of the main window and use the WS_POPUPWINDOW style.

```
DIM pWindow AS CWindow
pWindow.Create(hParent, "Popup window", @PopupWndProc, , , , , _
   WS_VISIBLE OR WS_CAPTION OR WS_POPUPWINDOW OR WS_THICKFRAME, WS_EX_WINDOWEDGE)
```

The window created this way is modeless. To make it modal, we need to disable the parent window:

```
CASE WM_CREATE
   EnableWindow GetParent(hwnd), FALSE
```

When the popup dialog is closed, we need to enable the parent window:

```
CASE WM_CLOSE
   ' // Enables parent window keeping parent's zorder
   EnableWindow GetParent(hwnd), CTRUE
```

#### Example

```
' ########################################################################################
' Microsoft Windows
' File: CW_PopupWindow.fbtpl
' Contents: CWindow with a modal popup window
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#INCLUDE ONCE "windows.bi"
#INCLUDE ONCE "Afx/CWindow.inc"
USING Afx

CONST IDC_POPUP = 1001

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

DECLARE FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT
DECLARE FUNCTION PopupWindow (BYVAL hParent AS HWND) AS LONG
DECLARE FUNCTION PopupWndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   DIM pWindow AS CWindow
   pWindow.Create(NULL, "CWindow with a popup window", @WndProc)
   pWindow.SetClientSize(500, 320)
   pWindow.Center

   ' // Add a button without position or size (it will be resized in the WM_SIZE message).
   pWindow.AddControl("Button", pWindow.hWindow, IDC_POPUP, "&Popup", 350, 250, 75, 23)

   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM hDC AS HDC
   DIM pPaint AS PAINTSTRUCT
   DIM rc AS RECT
   DIM pWindow AS CWindow PTR

   SELECT CASE uMsg

      CASE WM_CREATE
         EXIT FUNCTION

      CASE WM_COMMAND
         ' // If ESC key pressed, close the application sending an WM_CLOSE message
         SELECT CASE LOWORD(wParam)
            CASE IDCANCEL
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
            CASE IDC_POPUP
               IF HIWORD(wParam) = BN_CLICKED THEN
                  PopupWindow(hwnd)
                  EXIT FUNCTION
               END IF
         END SELECT

      CASE WM_SIZE
         IF wParam <> SIZE_MINIMIZED THEN
            ' // Resize the buttons
            pWindow = CAST(CWindow PTR, GetWindowLongPtrW(hwnd, 0))
            pWindow->MoveWindow GetDlgItem(hwnd, IDCANCEL), pWindow->ClientWidth - 120, pWindow->ClientHeight - 50, 75, 23, CTRUE
         END IF

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Popup window procedure
' ========================================================================================
FUNCTION PopupWindow (BYVAL hParent AS HWND) AS LONG

   DIM pWindow AS CWindow
   pWindow.Create(hParent, "Popup window", @PopupWndProc, , , , , _
      WS_VISIBLE OR WS_CAPTION OR WS_POPUPWINDOW OR WS_THICKFRAME, WS_EX_WINDOWEDGE)
   pWindow.Brush = GetStockObject(WHITE_BRUSH)
   pWindow.SetClientSize(300, 200)
   pWindow.Center(pWindow.hWindow, hParent)
   ' / Process Windows messages
   FUNCTION = pWindow.DoEvents

END FUNCTION
' ========================================================================================

' ========================================================================================
' Popup window procedure
' ========================================================================================
FUNCTION PopupWndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM hOldFont AS HFONT
   STATIC hNewFont AS HFONT

   SELECT CASE uMsg

      CASE WM_CREATE
         ' // Get a pointer to the CWindow class from the CREATESTRUCT structure
         DIM pCreateStruct AS CREATESTRUCT PTR = CAST(CREATESTRUCT PTR, lParam)
         DIM pWindow AS CWindow PTR = CAST(CWindow PTR, pCreateStruct->lpCreateParams)
         ' // Create a new font scaled according the DPI ratio
         IF pWindow->DPI <> 96 THEN hNewFont = pWindow->CreateFont("Tahoma", 9)
         ' Disable parent window to make popup window modal
         EnableWindow GetParent(hwnd), FALSE
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            ' // If ESC key pressed, close the application sending an WM_CLOSE message
            CASE IDCANCEL
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
         END SELECT

      CASE WM_PAINT
    		DIM rc AS RECT, ps AS PAINTSTRUCT, hDC AS HANDLE
         hDC = BeginPaint(hWnd, @ps)
         IF hNewFont THEN hOldFont = CAST(HFONT, SelectObject(hDC, CAST(HGDIOBJ, hNewFont)))
         GetClientRect(hWnd, @rc)
         DrawTextW(hDC, "Hello, World!", -1, @rc, DT_SINGLELINE or DT_CENTER or DT_VCENTER)
         IF hNewFont THEN SelectObject(hDC, CAST(HGDIOBJ, CAST(HFONT, hOldFont)))
         EndPaint(hWnd, @ps)
         EXIT FUNCTION

      CASE WM_CLOSE
         ' // Enables parent window keeping parent's zorder
         EnableWindow GetParent(hwnd), CTRUE
         ' // Don't exit; let DefWindowProcW perform the default action

    	CASE WM_DESTROY
         ' // Destroy the new font
         IF hNewFont THEN DeleteObject(CAST(HGDIOBJ, hNewFont))
         ' // End the application by sending an WM_QUIT message
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

### <a name="Topic5"></a>Using PNG icons in toolbars

**AfxGdiplus.inc** provides functions that allow to use alphablended PNG icons in toolbars.

**AfxGdipIconFromFile** loads the images from disk and **AfxGdipIconFromRes** from a resource file embedded in the application.

We need to create an image list for the toolbar of the appropriate size. To calculate the size, I'm using the following formula: 16 * pWindow.DPI \ 96. Where 16 is the size of a normal icon (for toolbars it may be preferible to use 20 to make them a bit bigger), pWindow.DPI the DPI being used by the computer and 96 the DPI used by applications that are not DPI aware.

```
' // Create an image list for the toolbar
DIM hImageList AS HIMAGELIST
DIM cx AS LONG = 16 * pWindow.DPI \ 96
hImageList = ImageList_Create(cx, cx, ILC_COLOR32 OR ILC_MASK, 4, 0)
IF hImageList THEN
   AfxGdipAddIconFromRes(hImageList, hInst, "IDI_ARROW_LEFT_32")
   AfxGdipAddIconFromRes(hImageList, hInst, "IDI_ARROW_RIGHT_48")
   AfxGdipAddIconFromRes(hImageList, hInst, "IDI_HOME_48")
   AfxGdipAddIconFromRes(hImageList, hInst, "IDI_SAVE_48")
END IF
SendMessageW hToolBar, TB_SETIMAGELIST, 0, CAST(LPARAM, hImageList)
```

We are using 48 bit icons in this example, that usually resize well to adapt to different DPI settings. This way, we can use only a set of icons instead of several sets of icons of different sizes. However, for best quality, it is advisable to use the appropriate icon size.

**AfxGdipIconFromFile** and **AfxGdipIconFromRes** also provide two optional parameters, *dimPercent* and *bGrayScale*. With *dimPercent* you can indicate a percentage of dimming, and *bGrayScale* is a boolean value (TRUE or FALSE) that tells these functions to convert the icon colors to shades of gray. This allows to create an image list for disabled items with the same icon set. The following code creates a disabled image using the same color PNG icons, but dimming them a 60% and converting them to gray:

```
' // Create a disabled image list for the toolbar
DIM hDisabledImageList AS HIMAGELIST
DIM cx AS LONG = 16 * pWindow.DPI \ 96
hDisabledImageList = ImageList_Create(cx, cx, ILC_COLOR32 OR ILC_MASK, 4, 0)
IF hDisabledImageList THEN
   AfxGdipAddIconFromRes(hDisabledImageList, hInst, "IDI_ARROW_LEFT_32", 60, TRUE))
   AfxGdipAddIconFromRes(hDisabledImageList, hInst, "IDI_ARROW_RIGHT_48", 60, TRUE))
   AfxGdipAddIconFromRes(hDisabledImageList, hInst, "IDI_HOME_48", 60, TRUE))
   AfxGdipAddIconFromRes(hDisabledImageList, hInst, "IDI_SAVE_48", 60, TRUE))
END IF
SendMessageW hToolBar, TB_SETDISABLEDIMAGELIST, 0, CAST(LPARAM, hDisabledImageList)
```

**Resource file**:

```
//=============================================================================
// Manifest
//=============================================================================

1 24 "WThemes.xml"

//=============================================================================
// Toolbar icons
//=============================================================================

// Toolbar, normal
IDI_ARROW_LEFT_48       RCDATA "arrow_left_48.png"
IDI_ARROW_RIGHT_48      RCDATA "arrow_right_48.png"
IDI_HOME_48             RCDATA "home_48.png"
IDI_SAVE_48             RCDATA "save_48.png"

Manifest:

<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
   <assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0" xmlns:asmv3="urn:schemas-microsoft-com:asm.v3">

      <assemblyIdentity version="1.0.0.0"
         processorArchitecture="*"
         name="ApplicationName"
         type="win32"/>
      <description>Optional description of your application</description>

      <asmv3:application>
         <asmv3:windowsSettings xmlns="http://schemas.microsoft.com/SMI/2005/WindowsSettings">
            <dpiAware>true</dpiAware>
         </asmv3:windowsSettings>
      </asmv3:application>

      <!-- Compatibility section -->
      <compatibility xmlns="urn:schemas-microsoft-com:compatibility.v1">
         <application>
            <!--The ID below indicates application support for Windows Vista -->
            <supportedOS Id="{e2011457-1546-43c5-a5fe-008deee3d3f0}"/>
            <!--The ID below indicates application support for Windows 7 -->
            <supportedOS Id="{35138b9a-5d96-4fbd-8e2d-a2440225f93a}"/>
            <!--This Id value indicates the application supports Windows 8 functionality-->
            <supportedOS Id="{4a2f28e3-53b9-4441-ba9c-d69d4a4a6e38}"/>
            <!--This Id value indicates the application supports Windows 8.1 functionality-->
            <supportedOS Id="{1f676c76-80e1-4239-95bb-83d0f6d0da78}"/>
         </application>
       </compatibility>

      <!-- Trustinfo section -->
      <trustInfo xmlns="urn:schemas-microsoft-com:asm.v2">
         <security>
            <requestedPrivileges>
               <requestedExecutionLevel
                  level="asInvoker"
                  uiAccess="false"/>
               </requestedPrivileges>
         </security>
      </trustInfo>

      <dependency>
         <dependentAssembly>
            <assemblyIdentity
               type="win32"
               name="Microsoft.Windows.Common-Controls"
               version="6.0.0.0"
               processorArchitecture="*"
               publicKeyToken="6595b64144ccf1df"
               language="*" />
         </dependentAssembly>
      </dependency>

   </assembly>
```

#### Example

```
' ########################################################################################
' Microsoft Windows
' Contents: CWindow with a toolbar
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#define unicode
#INCLUDE ONCE "windows.bi"
#INCLUDE ONCE "Afx/CWindow.inc"
#INCLUDE ONCE "Afx/AfxCtl.inc"
#INCLUDE ONCE "Afx/AfxGdiplus.inc"
USING Afx

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

CONST IDC_TOOLBAR = 1001
enum
   IDM_LEFTARROW = 28000
   IDM_RIGHTARROW
   IDM_HOME
   IDM_SAVEFILE
end enum

' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM pWindow AS CWindow PTR

   SELECT CASE uMsg

      CASE WM_CREATE
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application sending an WM_CLOSE message
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
'            CASE IDM_CUT   ' etc.
'               MessageBoxW hwnd, "You have clicked the Cut button", "Toolbar", MB_OK
'               EXIT FUNCTION
         END SELECT

      CASE WM_SIZE
         IF wParam <> SIZE_MINIMIZED THEN
            ' // Update the size and position of the Toolbar control
            SendMessageW GetDlgItem(hWnd, IDC_TOOLBAR), TB_AUTOSIZE, 0, 0
            ' // Resize the buttons
            pWindow = CAST(CWindow PTR, GetWindowLongPtrW(hwnd, 0))
            pWindow->MoveWindow GetDlgItem(hwnd, IDCANCEL), pWindow->ClientWidth - 95, pWindow->ClientHeight - 35, 75, 23, CTRUE
         END IF

    	CASE WM_DESTROY
         ' // Destroy the image list
         ImageList_Destroy CAST(HIMAGELIST, SendMessageW(GetDlgItem(hwnd, IDC_TOOLBAR), TB_SETIMAGELIST, 0, 0))
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
'   AfxSetProcessDPIAware

   DIM pWindow AS CWindow
   pWindow.Create(NULL, "CWindow with a toolbar", @WndProc)
   ' // Disable background erasing
   pWindow.ClassStyle = CS_DBLCLKS
   ' // Set the client size
   pWindow.SetClientSize(600, 300)
   ' // Center the window
   pWindow.Center

   ' // Add a button
   pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close")

   ' // Add a tooolbar
   DIM hToolBar AS HWND = pWindow.AddControl("Toolbar", pWindow.hWindow, IDC_TOOLBAR)
   ' // Module instance handle
   DIM hInst AS HINSTANCE = GetModuleHandle(NULL)
   ' // Create an image list for the toolbar
   DIM hImageList AS HIMAGELIST
   DIM cx AS LONG = 16 * pWindow.DPI \ 96
   hImageList = ImageList_Create(cx, cx, ILC_COLOR32 OR ILC_MASK, 4, 0)
   IF hImageList THEN
      ImageList_ReplaceIcon(hImageList, -1, AfxGdipIconFromRes(hInst, "IDI_ARROW_LEFT_48"))
      ImageList_ReplaceIcon(hImageList, -1, AfxGdipIconFromRes(hInst, "IDI_ARROW_RIGHT_48"))
      ImageList_ReplaceIcon(hImageList, -1, AfxGdipIconFromRes(hInst, "IDI_HOME_48"))
      ImageList_ReplaceIcon(hImageList, -1, AfxGdipIconFromRes(hInst, "IDI_SAVE_48"))
   END IF
   SendMessageW hToolBar, TB_SETIMAGELIST, 0, CAST(LPARAM, hImageList)

   ' // Add buttons to the toolbar
   Toolbar_AddButton hToolBar, 0, IDM_LEFTARROW
   Toolbar_AddButton hToolBar, 1, IDM_RIGHTARROW
   Toolbar_AddButton hToolBar, 2, IDM_HOME
   Toolbar_AddButton hToolBar, 3, IDM_SAVEFILE

   ' // Size the toolbar
   SendMessageW hToolBar, TB_AUTOSIZE, 0, 0

   ' // Process event messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================
```

### <a name="Topic6"></a>Visual style menus

Windows Vista and posterior Windows versions provide menus that are part of the visual schema. These menus are rendered using visual styles, which can be added to existing applications. Adding code for new features to existing code must be done carefully to avoid breaking existing application behavior. Certain situations can cause visual styling to be disabled in an application. These situations include:

* Customizing menus using owner-draw menu items (MFT_OWNERDRAW)
* Using menu breaks (MFT_MENUBREAK or MFT_MENUBARBREAK)
* Using HBMMENU_CALLBACK to defer bitmap rendering
* Using a destroyed menu handle

These situations prevent visual style menus from being rendered. Owner-draw menus can be used in Windows Vista and posterior Windows versions, but the menus will not be visually styled. Windows Vista and posterior Windows versions provide alpha-blended bitmaps, which enables menu items to be shown without using owner-draw menu items.

**Requirements**:

* The bitmap is a 32bpp DIB section.
* The DIB section has BI_RGB compression.
* The bitmap contains pre-multiplied alpha pixels.
* The bitmap is stored in hbmpChecked, hbmpUnchecked, or hbmpItem fields.

**Note**: MFT_BITMAP items do not support PARGB32 bitmaps.

The **AfxAddIconToMenuItem** function included in **AfxMenu.inc** allows to use alphablended icons in visually styled menus.

```
DIM hSubMenu AS HMENU = GetSubMenu(hMenu, 1)
DIM hIcon AS HICON
hIcon = LoadImageW(NULL, "MyIcon.ico", IMAGE_ICON, 32, 32, LR_LOADFROMFILE)
IF hIcon THEN AfxAddIconToMenuItem(hSubMenu, 0, TRUE, hIcon)
```

PNG icons can be used by converting them first to an icon with **AfxGdipImageFromFile**:

```
hIcon = AfxGdipImageFromFileEx("MyIcon.png")
IF hIcon THEN AfxAddIconToMenuItem(hSubMenu, 0, TRUE, hIcon)
```

But, in general, we are more interested in loading the icons from a resource file embedded in the application. We can achieve it using the **AfxGdipIconFromRes** function.

```
DIM hSubMenu AS HMENU = GetSubMenu(hMenu, 0)
AfxAddIconToMenuItem(hSubMenu, 0, TRUE, AfxGdipIconFromRes(hInst, "IDI_ARROW_LEFT_48"))
```

The following code uses the same resource file that the one for the "Using PNG icons in toolbars example" to demonstrate that we can use just one set of icons for both toolbars and menus.

```
' ########################################################################################
' Microsoft Windows
' Contents: CWindow with a menu
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#define _WIN32_WINNT &h0602
#INCLUDE ONCE "windows.bi"
#INCLUDE ONCE "win/uxtheme.bi"
#INCLUDE ONCE "Afx/CWindow.inc"
#INCLUDE ONCE "Afx/AfxGdiplus.inc"
#INCLUDE ONCE "Afx/AfxMenu.inc"
using Afx

' // Menu identifiers
#define IDM_UNDO     1001   ' Undo
#define IDM_REDO     1002   ' Redo
#define IDM_HOME     1003   ' Home
#define IDM_SAVE     1004   ' Save file
#define IDM_EXIT     1005   ' Exit

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

' ========================================================================================
' Build the menu
' ========================================================================================
FUNCTION BuildMenu () AS HMENU

   DIM hMenu AS HMENU
   DIM hPopUpMenu AS HMENU

   hMenu = CreateMenu
   hPopUpMenu = CreatePopUpMenu
      AppendMenuW hMenu, MF_POPUP OR MF_ENABLED, CAST(UINT_PTR, hPopUpMenu), "&File"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_UNDO, "&Undo" & CHR(9) & "Ctrl+U"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_REDO, "&Redo" & CHR(9) & "Ctrl+R"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_HOME, "&Home" & CHR(9) & "Ctrl+H"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_SAVE, "&Save" & CHR(9) & "Ctrl+S"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_EXIT, "E&xit" & CHR(9) & "Alt+F4"
   FUNCTION = hMenu

END FUNCTION
' ========================================================================================

' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_CREATE
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application sending an WM_CLOSE message
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
            CASE IDM_UNDO
               MessageBox hwnd, "Undo option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_REDO
               MessageBox hwnd, "Redo option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_HOME
               MessageBox hwnd, "Home option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_SAVE
               MessageBox hwnd, "Save option clicked", "Menu", MB_OK
               EXIT FUNCTION
         END SELECT

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   DIM pWindow AS CWindow
   pWindow.Create(NULL, "CWindow with a menu", @WndProc)
   pWindow.SetClientSize(400, 250)
   pWindow.Center

   ' // Add a button
   pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close", 280, 180, 75, 23)

   ' // Module instance handle
   DIM hInst AS HINSTANCE = GetModuleHandle(NULL)

   ' // Create the menu
   DIM hMenu AS HMENU = BuildMenu
   SetMenu pWindow.hWindow, hMenu

   ' // Add icons to the items of the File menu
   DIM hSubMenu AS HMENU = GetSubMenu(hMenu, 0)
   AfxAddIconToMenuItem(hSubMenu, 0, TRUE, AfxGdipIconFromRes(hInst, "IDI_ARROW_LEFT_48"))
   AfxAddIconToMenuItem(hSubMenu, 1, TRUE, AfxGdipIconFromRes(hInst, "IDI_ARROW_RIGHT_48"))
   AfxAddIconToMenuItem(hSubMenu, 2, TRUE, AfxGdipIconFromRes(hInst, "IDI_HOME_48"))
   AfxAddIconToMenuItem(hSubMenu, 3, TRUE, AfxGdipIconFromRes(hInst, "IDI_SAVE_48"))

   ' // Process Windows messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================
```

### <a name="Topic7"></a>Keyboard Accelerators

Accelerators are closely related to menus — both provide the user with access to an application's command set. Typically, users rely on an application's menus to learn the command set and then switch over to using accelerators as they become more proficient with the application. Accelerators provide faster, more direct access to commands than menus do. At a minimum, an application should provide accelerators for the more commonly used commands. Although accelerators typically generate commands that exist as menu items, they can also generate commands that have no equivalent menu items. 

Creating an accelerator table with **CWindow** is very simple. You only need to build the table with calls to the **AddAccelerator** method and then call the **CreateAcceleratorTable** method. The accelerator table will be destroyed automatically when the window is destroyed or the applications ends. If you need to change the accelerator table, you can first destroy it calling the **DestroyAcceleratorTable** method, build a new table with **AddAccelerator** and then call **CreateAcceleratorTable**.

```
' // Create a keyboard accelerator table
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "U", IDM_UNDO ' // Ctrl+U - Undo
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "R", IDM_REDO ' // Ctrl+R - Redo
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "H", IDM_HOME ' // Ctrl+H - Home
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "S", IDM_SAVE ' // Ctrl+S - Save
pWindow.CreateAcceleratorTable
```

#### Example

The following example creates a menu and an accelerator table.

```
' ########################################################################################
' Microsoft Windows
' Contents: CWindow with a menu
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#INCLUDE ONCE "windows.bi"
#INCLUDE ONCE "Afx/CWindow.inc"
#INCLUDE ONCE "Afx/AfxMenu.inc"
using Afx

' // Menu identifiers
#define IDM_UNDO     1001   ' Undo
#define IDM_REDO     1002   ' Redo
#define IDM_HOME     1003   ' Home
#define IDM_SAVE     1004   ' Save file
#define IDM_EXIT     1005   ' Exit

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

' ========================================================================================
' Build the menu
' ========================================================================================
FUNCTION BuildMenu () AS HMENU

   DIM hMenu AS HMENU
   DIM hPopUpMenu AS HMENU

   hMenu = CreateMenu
   hPopUpMenu = CreatePopUpMenu
      AppendMenuW hMenu, MF_POPUP OR MF_ENABLED, CAST(UINT_PTR, hPopUpMenu), "&File"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_UNDO, "&Undo" & CHR(9) & "Ctrl+U"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_REDO, "&Redo" & CHR(9) & "Ctrl+R"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_HOME, "&Home" & CHR(9) & "Ctrl+H"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_SAVE, "&Save" & CHR(9) & "Ctrl+S"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_EXIT, "E&xit" & CHR(9) & "Alt+F4"
   FUNCTION = hMenu

END FUNCTION
' ========================================================================================

' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_CREATE
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application sending an WM_CLOSE message
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
            CASE IDM_UNDO
               MessageBox hwnd, "Undo option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_REDO
               MessageBox hwnd, "Redo option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_HOME
               MessageBox hwnd, "Home option clicked", "Menu", MB_OK
               EXIT FUNCTION
            CASE IDM_SAVE
               MessageBox hwnd, "Save option clicked", "Menu", MB_OK
               EXIT FUNCTION
         END SELECT

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   DIM pWindow AS CWindow
   pWindow.Create(NULL, "CWindow with a menu", @WndProc)
   pWindow.SetClientSize(400, 250)
   pWindow.Center

   ' // Add a button
   DIM hButton AS HWND = pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close", 280, 180, 75, 23)
   SetFocus hButton

   ' // Module instance handle
   DIM hInst AS HINSTANCE = GetModuleHandle(NULL)

   ' // Create the menu
   DIM hMenu AS HMENU = BuildMenu
   SetMenu pWindow.hWindow, hMenu

   ' // Create a keyboard accelerator table
   pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "U", IDM_UNDO ' // Ctrl+U - Undo
   pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "R", IDM_REDO ' // Ctrl+R - Redo
   pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "H", IDM_HOME ' // Ctrl+H - Home
   pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "S", IDM_SAVE ' // Ctrl+S - Save
   pWindow.CreateAcceleratorTable

   ' // Process Windows messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================
```

### <a name="Topic8"></a>Scrollable windows

**CWindow** windows can be made scrollable with the help of the **CScrollWindow** class.

The technique is to create a window big enough to display all its child controls...

```
DIM pWindow AS CWindow
DIM hwndMain AS HWND = pWindow.Create(NULL, "Scrollable window", @WndProc)
pWindow.ClassStyle = CS_DBLCLKS   ' // Change the window style to avoid flicker
' // Set a client size big enough to display all the controls
pWindow.SetClientSize(320, 335)
```

Add the controls, e.g.

```
' // Add a listbox
DIM hListBox AS HWND
hListBox = pWindow.AddControl("ListBox", , IDC_LISTBOX)
pWindow.SetWindowPos hListBox, NULL, 8, 8, 300, 280, SWP_NOZORDER
```

Create an instance of the **CScrollWindow** class, attach the window to it and then shrink the client size of the window.

```
' // Create an instance of the CScrollWindow class and attach the main window to it
DIM pScrollWindow AS CScrollWindow PTR = NEW CScrollWindow(hwndMain)
' // Store the pointer in the class of the parent window for later deletion
pWindow.ScrollWindowPtr = pScrollWindow
' // Shrink the client size
pWindow.SetClientSize(250, 260)
```

We can also make an scrollable CWindow with its controls child of another **CWindow**, e.g.

```
' // Create the main window
DIM pWindow AS CWindow
pWindow.Create(NULL, "Scrollable Child CWindow Example", @WndProc)
pWindow.SetClientSize 455, 180
pWindow.Center

' // Add controls
pWindow.AddControl("GroupBox", , IDC_GROUPBOX, "GroupBox", 340, 8, 100, 155)
pWindow.AddControl("Button", , IDCANCEL, "&Close", 250, 140, 76, 23)
' // Add a combobox control
DIM hCombobox AS HWND = pWindow.AddControl("ComboBox", , IDC_COMBOBOX, "", 350, 30, 80, 100)
' // Fill the control with some data
DIM i AS LONG = 1, wszText AS WSTRING * 260
FOR i = 1 TO 9
   wszText = "Item " & RIGHT("00" & STR(i), 2)
   SendMessageW(hComboBox, CB_ADDSTRING, 0, CAST(LPARAM, @wszText))
NEXT

' ***************************************************************************************
' // Child dialog
DIM pChildDlg AS CWindow
pChildDlg.Create(pWindow.hWindow, "", @ChildDlg_WndProc, 15, 15, , , _
   WS_VISIBLE OR WS_CHILD OR WS_CLIPSIBLINGS OR WS_CLIPCHILDREN OR WS_BORDER, WS_EX_CONTROLPARENT)
pChildDlg.ClassStyle = CS_DBLCLKS
' // Set a client size big enough to display all the controls
pChildDlg.SetClientSize(310, 180)
' // Add an Edit control
DIM hEdit AS HWND = pChildDlg.AddControl("Edit", , IDC_EDIT1, "", 10, 15, 275, 23)
' // Add three radio buttons (the first one should have the WS_GROUP style)
pChildDlg.AddControl("RadioButton", , IDC_OPTION1, "Option 1", 10, 50, 75, 23, WS_GROUP)
pChildDlg.AddControl("RadioButton", , IDC_OPTION2, "Option 2", 10, 70, 75, 23)
pChildDlg.AddControl("RadioButton", , IDC_OPTION3, "Option 3", 10, 90, 75, 23)
' // Add a date time picker control
pChilddlg.AddControl("SysDateTimePick32", , IDC_DTPICKER, "", 135, 55, 150, 23)
' // Add a button
pChildDlg.AddControl("Button", , IDOK, "&Ok", 205, 140, 76, 23)
' // Create an instance of the CScrollWindow class and attach the child dialog to it
DIM pScrollChildDlg AS CScrollWindow PTR = NEW CScrollWindow(pChildDlg.hWindow)
' // Store the pointer in the class of the child dialog for later deletion
pChildDlg.ScrollWindowPtr = pScrollChildDlg
' // Shrink the client size
pChildDlg.SetClientSize(310, 110)
' // Set the focus in the first edit control
SetFocus hEdit
' ***************************************************************************************

' // OPTIONAL: Anchor the controls
DIM pLayout AS CLayout = pWindow.hWindow
pWindow.UserData(AFX_LAYOUTPTRIDX) = CAST(LONG_PTR, @pLayout)
pLayout.AnchorControl(IDCANCEL, AFX_ANCHOR_BOTTOM_RIGHT)
pLayout.AnchorControl(IDC_GROUPBOX, AFX_ANCHOR_HEIGHT_RIGHT)
pLayout.AnchorControl(IDC_COMBOBOX, AFX_ANCHOR_RIGHT)

' // Anchor the child CWindow
pLayout.AnchorControl(pChildDlg.hWindow, AFX_ANCHOR_HEIGHT_WIDTH)
' // We could also anchor the child controls of this window with
' // DIM pChildLayout AS CLayout = pChildDlg.hWindow
' // pChildLayout.AnchorControl(IDC_EDIT1, AFX_ANCHOR_WIDTH)
' // etc.

or child of a tab page created with the CTabPage class:

' // Create the main window
DIM pWindow AS CWindow
pWindow.Create(NULL, "CWindow with a Tab Control", @WndProc)
pWindow.SetClientSize(500, 320)
pWindow.Center

' // Add a tab control
DIM hTab AS HWND = pWindow.AddControl("Tab", , IDC_TAB, "", 10, 10, pWindow.ClientWidth - 20, pWindow.ClientHeight - 42)

' // Create the first tab page
DIM pTabPage1 AS CTabPage PTR = NEW CTabPage
pTabPage1->DPI = pWindow.DPI   ' --> for testing purposes; not usully needed
pTabPage1->InsertPage(hTab, 0, "Tab 1", -1, @TabPage1_WndProc)
' // Add controls to the first page
pTabPage1->AddControl("Label", pTabPage1->hTabPage, -1, "First name", 15, 15, 121, 21)
pTabPage1->AddControl("Label", pTabPage1->hTabPage, -1, "Last name", 15, 50, 121, 21)
pTabPage1->AddControl("Edit", pTabPage1->hTabPage, IDC_EDIT1, "", 165, 15, 186, 21)
pTabPage1->AddControl("Edit", pTabPage1->hTabPage, IDC_EDIT2, "", 165, 50, 186, 21)
pTabPage1->AddControl("Button", pTabPage1->hTabPage, IDC_BTNSUBMIT, "Submit", 340, 185, 76, 26, BS_DEFPUSHBUTTON)

' // Create the second tab page
DIM pTabPage2 AS CTabPage PTR = NEW CTabPage
pTabPage2->DPI = pWindow.DPI   ' --> for testing purposes; not usully needed
pTabPage2->InsertPage(hTab, 1, "Tab 2", -1, @TabPage2_WndProc)
' // Add controls to the second page
DIM hComboBox AS HWND = pTabPage2->AddControl("ComboBox", pTabPage2->hTabPage, IDC_COMBO, "", 20, 20, 191, 105)

' // Create the third tab page
DIM pTabPage3 AS CTabPage PTR = NEW CTabPage
pTabPage3->DPI = pWindow.DPI   ' --> for testing purposes; not usully needed
pTabPage3->InsertPage(hTab, 2, "Tab 3", -1, @TabPage3_WndProc)
' // Add controls to the third page
'   DIM hListBox AS HWND = pTabPage3->AddControl("ListBox", pTabPage3->hTabPage, IDC_LISTBOX, "", 15, 20, 161, 120)
DIM hListBox AS HWND = pTabPage3->AddControl("ListBox", pTabPage3->hTabPage, IDC_LISTBOX)
pTabPage3->SetWindowPos hListBox, NULL, 15, 20, 161, 120, SWP_NOZORDER

' // Fill the controls with some data
DIM i AS LONG = 1, wszText AS WSTRING * 260
FOR i = 1 TO 9
   wszText = "Item " & RIGHT("00" & STR(i), 2)
   SendMessageW(hComboBox, CB_ADDSTRING, 0, CAST(LPARAM, @wszText))
   SendMessageW(hListBox, LB_ADDSTRING, 0, CAST(LPARAM, @wszText))
NEXT
' // Select the first item in the combo box and the list box
SendMessageW(hComboBox, CB_SETCURSEL, 0, 0)
SendMessageW(hListBox, LB_SETCURSEL, 0, 0)

' // Add a button
pWindow.AddControl("Button", , IDCANCEL, "&Close", 415, 292, 75, 23)

' // Get the client size of the first page and make it greater
DIM nWidth AS LONG = pTabPage1->ClientWidth
DIM nHeight AS LONG = pTabPage1->ClientHeight
pTabPage1->SetClientSize(nWidth + 150, nHeight + 150)
' // Create an instance of the CScrollWindow class and attach the tab page handle to it
DIM pScrollWindow AS CScrollWindow PTR = NEW CScrollWindow(pTabPage1->hTabPage)
' // Store the pointer in the tab page for later deletion
pTabPage1->ScrollWindowPtr = pScrollWindow
' // Shrink the client size back to original
pTabPage1->SetClientSize(nWidth, nHeight)

' // Get the client size of the second page and make it greater
nWidth = pTabPage2->ClientWidth
nHeight = pTabPage2->ClientHeight
pTabPage2->SetClientSize(nWidth + 150, nHeight + 150)
' // Create an instance of the CScrollWindow class and attach the tab page handle to it
pScrollWindow = NEW CScrollWindow(pTabPage2->hTabPage)
' // Store the pointer in the tab page for later deletion
pTabPage2->ScrollWindowPtr = pScrollWindow
' // Shrink the client size back to original
pTabPage2->SetClientSize(nWidth, nHeight)

' // Get the client size of the second page and make it greater
nWidth = pTabPage3->ClientWidth
nHeight = pTabPage3->ClientHeight
pTabPage3->SetClientSize(nWidth + 150, nHeight + 150)
' // Create an instance of the CScrollWindow class and attach the tab page handle to it
pScrollWindow = NEW CScrollWindow(pTabPage3->hTabPage)
' // Store the pointer in the tab page for later deletion
pTabPage3->ScrollWindowPtr = pScrollWindow
' // Shrink the client size back to original
pTabPage3->SetClientSize(nWidth, nHeight)

' // Display the first tab page
ShowWindow pTabPage1->hTabPage, SW_SHOW

' // Set the focus to the first tab
SendMessageW hTab, TCM_SETCURFOCUS, 0, 0
```

### <a name="Topic9"></a>Tab pages

The **CTabPage** class extends the **CWindow** class and allows to create generic windows used as a tab pages of a tab control.

#### Example

```
' ####################################################################################
' Microsoft Windows
' Contents: CWindow Tab Control template
' Remarks: Demonstrates the use of the CTabPage class
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ####################################################################################

#define unicode
#INCLUDE ONCE "windows.bi"
#INCLUDE ONCE "Afx/CWindow.inc"
USING Afx

CONST IDC_TAB       = 1001
CONST IDC_EDIT1     = 1002
CONST IDC_EDIT2     = 1003
CONST IDC_BTNSUBMIT = 1004
CONST IDC_COMBO     = 1005
CONST IDC_LISTBOX   = 1006

' // Forward declarations
DECLARE FUNCTION TabPage1_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT
DECLARE FUNCTION TabPage2_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT
DECLARE FUNCTION TabPage3_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(""), NULL, COMMAND(), SW_NORMAL)

' ====================================================================================
' Window procedure
' ====================================================================================
FUNCTION WndProc (BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_CREATE
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            ' // If ESC key pressed, close the application sending an WM_CLOSE message
            CASE IDCANCEL
               IF HIWORD(wParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
         END SELECT

      CASE WM_NOTIFY

         DIM nPage AS DWORD              ' // Page number
         DIM pTabPage AS CTabPage PTR    ' // Tab page object reference
         DIM tci AS TCITEMW              ' // TCITEMW structure

         DIM ptnmhdr AS NMHDR PTR   ' // Information about a notification message
         ptnmhdr = CAST(NMHDR PTR, lParam)
         SELECT CASE ptnmhdr->idFrom
            CASE IDC_TAB
               SELECT CASE ptnmhdr->code
                  CASE TCN_SELCHANGE
                     ' // Show the selected page
                     nPage = SendMessage(ptnmhdr->hwndFrom, TCM_GETCURSEL, 0, 0)
                     tci.mask = TCIF_PARAM
                     IF SendMessageW(ptnmhdr->hwndFrom, TCM_GETITEMW, nPage, CAST(lParam, @tci)) THEN
                        IF tci.lParam THEN
                           pTabPage = CAST(CTabPage PTR, tci.lParam)
                           ShowWindow pTabPage->hTabPage, SW_SHOW
                        END IF
                     END IF
                  CASE TCN_SELCHANGING
                     ' // Hide the current page
                     nPage = SendMessage(ptnmhdr->hwndFrom, TCM_GETCURSEL, 0, 0)
                     tci.mask = TCIF_PARAM
                     IF SendMessageW(ptnmhdr->hwndFrom, TCM_GETITEMW, nPage, CAST(lParam, @tci)) THEN
                        IF tci.lParam THEN
                           pTabPage = CAST(CTabPage PTR, tci.lParam)
                           ShowWindow pTabPage->hTabPage, SW_HIDE
                        END IF
                     END IF
               END SELECT

         END SELECT

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ====================================================================================

' ====================================================================================
' Main
' ====================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   DIM pWindow AS CWindow
   pWindow.Create(NULL, "CWindow with a Tab Control", @WndProc)
   pWindow.SetClientSize(500, 320)
   pWindow.Center

   ' // Add a tab control
   DIM hTab AS HWND = pWindow.AddControl("Tab", pWindow.hWindow, IDC_TAB, "", 10, 10, pWindow.ClientWidth - 20, pWindow.ClientHeight - 42)

   ' // Create the first tab page
   DIM pTabPage1 AS CTabPage PTR = NEW CTabPage
   pTabPage1->InsertPage(hTab, 0, "Tab 1", -1, @TabPage1_WndProc)
   ' // Add controls to the first page
   pTabPage1->AddControl("Label", pTabPage1->hTabPage, -1, "First name", 15, 15, 121, 21)
   pTabPage1->AddControl("Label", pTabPage1->hTabPage, -1, "Last name", 15, 50, 121, 21)
   pTabPage1->AddControl("Edit", pTabPage1->hTabPage, IDC_EDIT1, "", 165, 15, 186, 21)
   pTabPage1->AddControl("Edit", pTabPage1->hTabPage, IDC_EDIT2, "", 165, 50, 186, 21)
   pTabPage1->AddControl("Button", pTabPage1->hTabPage, IDC_BTNSUBMIT, "Submit", 340, 185, 76, 26, BS_DEFPUSHBUTTON)

   ' // Create the second tab page
   DIM pTabPage2 AS CTabPage PTR = NEW CTabPage
   pTabPage2->InsertPage(hTab, 1, "Tab 2", -1, @TabPage2_WndProc)
   ' // Add controls to the second page
   DIM hComboBox AS HWND = pTabPage2->AddControl("ComboBox", pTabPage2->hTabPage, IDC_COMBO, "", 20, 20, 191, 105)

   ' // Create the third tab page
   DIM pTabPage3 AS CTabPage PTR = NEW CTabPage
   pTabPage3->InsertPage(hTab, 2, "Tab 3", -1, @TabPage3_WndProc)
   ' // Add controls to the third page
'   DIM hListBox AS HWND = pTabPage3->AddControl("ListBox", pTabPage3->hTabPage, IDC_LISTBOX, "", 15, 20, 161, 120)
   DIM hListBox AS HWND = pTabPage3->AddControl("ListBox", pTabPage3->hTabPage, IDC_LISTBOX)
   pTabPage3->SetWindowPos hListBox, NULL, 15, 20, 161, 120, SWP_NOZORDER

   ' // Fill the controls with some data
   DIM i AS LONG = 1, wszText AS WSTRING * 260
   FOR i = 1 TO 9
      wszText = "Item " & RIGHT("00" & STR(i), 2)
      SendMessageW(hComboBox, CB_ADDSTRING, 0, CAST(LPARAM, @wszText))
      SendMessageW(hListBox, LB_ADDSTRING, 0, CAST(LPARAM, @wszText))
   NEXT
   ' // Select the first item in the combo box and the list box
   SendMessageW(hComboBox, CB_SETCURSEL, 0, 0)
   SendMessageW(hListBox, LB_SETCURSEL, 0, 0)

   ' // Add a button
   pWindow.AddControl("Button", pWindow.hWindow, IDCANCEL, "&Close", 415, 292, 75, 23)

   ' // Display the first tab page
   ShowWindow pTabPage1->hTabPage, SW_SHOW

   ' // Set the focus to the first tab
   SendMessageW hTab, TCM_SETCURFOCUS, 0, 0

   ' // Dispatch messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

   ' // Delete the tab pages
   Delete pTabPage3
   Delete pTabPage2
   Delete pTabPage1

END FUNCTION
' ====================================================================================

' ====================================================================================
' Tab page 1 window procedure
' ====================================================================================
FUNCTION TabPage1_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_COMMAND
         SELECT CASE LOWORD(wParam)
            CASE IDC_BTNSUBMIT
               IF HIWORD(wParam) = BN_CLICKED THEN
                  MessageBoxW(hWnd, "Submit", "Tab 1", MB_OK)
                  EXIT FUNCTION
               END IF
         END SELECT

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ====================================================================================

' ====================================================================================
' Tab page 2 window procedure
' ====================================================================================
FUNCTION TabPage2_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM hBrush AS HBRUSH, rc AS RECT, tlb AS LOGBRUSH

   SELECT CASE uMsg

      CASE WM_ERASEBKGND
         GetClientRect hWnd, @rc
         ' Create custom brush
         tlb.lbStyle = BS_SOLID
         tlb.lbColor = &H00CB8734
         tlb.lbHatch = 0
         hBrush = CreateBrushIndirect(@tlb)
         ' Erase background
         FillRect CAST(HDC, wParam), @rc, hBrush
         DeleteObject hBrush
         FUNCTION = CTRUE
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ====================================================================================

' ====================================================================================
' Tab page 3 window procedure
' ====================================================================================
FUNCTION TabPage3_WndProc(BYVAL hWnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM hBrush AS HBRUSH, rc AS RECT, tlb AS LOGBRUSH

   SELECT CASE uMsg

      CASE WM_ERASEBKGND
         GetClientRect hWnd, @rc
         ' Create custom brush
         tlb.lbStyle = BS_SOLID
         tlb.lbColor = &H0000FF00
         tlb.lbHatch = 0
         hBrush = CreateBrushIndirect(@tlb)
         ' Erase background
         FillRect CAST(HDC, wParam), @rc, hBrush
         DeleteObject hBrush
         FUNCTION = CTRUE
         EXIT FUNCTION

   END SELECT

   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ====================================================================================
```

### <a name="Topic10"></a>Layout manager

The **CLayout** class allows to anchor child windows to a parent window. When the parent window is resized, it manages the location and size of the anchored child windows according to the new dimensions of the parent.

#### Example

```
' ########################################################################################
' Microsoft Windows
' Contents: Demonstrates the use of the Layout manager
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#define UNICODE
#INCLUDE ONCE "Afx/CWindow.inc"
#INCLUDE ONCE "Afx/CLayout.inc"
USING Afx

ENUM AFX_USERDATA
   AFX_LAYOUTPTRIDX = 0
END ENUM

ENUM
   IDC_EDIT1 = 1001
   IDC_EDIT2
   IDC_GROUPBOX
   IDC_COMBOBOX
END ENUM

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

' // Forward declaration
DECLARE FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   ' // Create the main window
   DIM pWindow AS CWindow
   pWindow.Create(NULL, "Layout manager", @WndProc)
   pWindow.SetClientSize 455, 180
   pWindow.Center

   ' // Add an Edit control
   DIM hEdit AS HWND = pWindow.AddControl("Edit", , IDC_EDIT1, "", 20, 15, 305, 23)
   ' // Add a multiline Edit control
   pWindow.AddControl("EditMultiline", , IDC_EDIT2, "", 20, 45, 305, 80)
   ' // Alternate way
'   pWindow.AddControl("Edit", , IDC_EDIT2, "", 20, 50, 300, 80, _
'      WS_VISIBLE OR WS_TABSTOP OR ES_LEFT OR ES_AUTOHSCROLL OR ES_MULTILINE OR ES_NOHIDESEL OR ES_WANTRETURN)
   ' // Set the focus in the first edit control
   SetFocus hEdit

   ' // Add more controls
   pWindow.AddControl("GroupBox", , IDC_GROUPBOX, "GroupBox", 340, 8, 100, 155)
   pWindow.AddControl("Button", , IDCANCEL, "&Close", 250, 140, 75, 23)
   ' // Add a combobox control
   DIM hCombobox AS HWND = pWindow.AddControl("ComboBox", , IDC_COMBOBOX, "", 350, 30, 80, 100)
   ' // Fill the control with some data
   DIM wszText AS WSTRING * 260
   FOR i AS LONG = 1 TO 9
      wszText = "Item " & RIGHT("00" & STR(i), 2)
      SendMessageW(hComboBox, CB_ADDSTRING, 0, CAST(LPARAM, @wszText))
   NEXT

   ' // Anchor the controls
   DIM pLayout AS CLayout = pWindow.hWindow
   pWindow.UserData(AFX_LAYOUTPTRIDX) = CAST(LONG_PTR, @pLayout)
   pLayout.AnchorControl(IDC_EDIT1, AFX_ANCHOR_WIDTH)
   pLayout.AnchorControl(IDC_EDIT2, AFX_ANCHOR_HEIGHT_WIDTH)
   pLayout.AnchorControl(IDCANCEL, AFX_ANCHOR_BOTTOM_RIGHT)
   pLayout.AnchorControl(IDC_GROUPBOX, AFX_ANCHOR_HEIGHT_RIGHT)
   pLayout.AnchorControl(IDC_COMBOBOX, AFX_ANCHOR_RIGHT)

   ' // Dispatch Windows messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Window procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_COMMAND
         SELECT CASE GET_WM_COMMAND_ID(wParam, lParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application by sending an WM_CLOSE message
               IF GET_WM_COMMAND_CMD(wParam, lParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
         END SELECT

      CASE WM_GETMINMAXINFO
         ' Set the pointer to the address of the MINMAXINFO structure
         DIM ptmmi AS MINMAXINFO PTR = CAST(MINMAXINFO PTR, lParam)
         ' Set the minimum and maximum sizes that can be produced by dragging the borders of the window
         DIM pWindow AS CWindow PTR = AfxCWindowPtr(hwnd)
         IF pWindow THEN
            ptmmi->ptMinTrackSize.x = 300 * pWindow->rxRatio
            ptmmi->ptMinTrackSize.y = 180 * pWindow->ryRatio
         END IF
         EXIT FUNCTION

      CASE WM_SIZE
         ' // Adjusts the controls
         DIM pWindow AS CWindow PTR = AfxCWindowPtr(hwnd)
         IF pWindow THEN
            DIM pLayout AS CLayout PTR = CAST(CLayout PTR, pWindow->UserData(AFX_LAYOUTPTRIDX))
            IF pLayout THEN pLayout->AdjustControls
         END IF
         EXIT FUNCTION

    	CASE WM_DESTROY
         ' // End the application
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   ' // Default processing of Windows messages
   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================

#### Example

' ########################################################################################
' Microsoft Windows
' Contents: Demonstrates the use of the Layout manager
' Note: In this test, we have made the combobox child of the group box.
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#define UNICODE
#INCLUDE ONCE "Afx/CWindow.inc"
#INCLUDE ONCE "Afx/CLayout.inc"
USING Afx

ENUM AFX_USERDATA
   AFX_LAYOUTPTRIDX = 0
END ENUM

ENUM
   IDC_EDIT1 = 1001
   IDC_EDIT2
   IDC_GROUPBOX
   IDC_COMBOBOX
   IDC_SIZEGRIP
END ENUM

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

' // Forward declaration
DECLARE FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   ' // Create the main window
   DIM pWindow AS CWindow
   pWindow.Create(NULL, "Layout manager", @WndProc)
   pWindow.SetClientSize 455, 180
   pWindow.Center

   ' // Add an Edit control
   DIM hEdit AS HWND = pWindow.AddControl("Edit", , IDC_EDIT1, "", 20, 15, 305, 23)
   ' // Add a multiline Edit control
   pWindow.AddControl("EditMultiline", , IDC_EDIT2, "", 20, 45, 305, 80)
   ' // Alternate way
'   pWindow.AddControl("Edit", , IDC_EDIT2, "", 20, 50, 300, 80, _
'      WS_VISIBLE OR WS_TABSTOP OR ES_LEFT OR ES_AUTOHSCROLL OR ES_MULTILINE OR ES_NOHIDESEL OR ES_WANTRETURN)
   ' // Set the focus in the first edit control
   SetFocus hEdit

   ' // Add more controls
   pWindow.AddControl("Button", , IDCANCEL, "&Close", 250, 140, 75, 23)
   DIM hGroupBox AS HWND = pWindow.AddControl("GroupBox", , IDC_GROUPBOX, "GroupBox", 340, 8, 100, 155, , WS_EX_TRANSPARENT OR WS_EX_CONTROLPARENT)
   ' // Add a combobox control as child of the GroupBox control
   DIM hCombobox AS HWND = pWindow.AddControl("ComboBox", hGroupBox, IDC_COMBOBOX, "", 10, 30, 80, 100)

   ' // Fill the control with some data
   DIM wszText AS WSTRING * 260
   FOR i AS LONG = 1 TO 9
      wszText = "Item " & RIGHT("00" & STR(i), 2)
      SendMessageW(hComboBox, CB_ADDSTRING, 0, CAST(LPARAM, @wszText))
   NEXT

   ' // Anchor the controls
   DIM pLayout AS CLayout = pWindow.hWindow
   pWindow.UserData(AFX_LAYOUTPTRIDX) = CAST(LONG_PTR, @pLayout)
   pLayout.AnchorControl(IDC_EDIT1, AFX_ANCHOR_WIDTH)
   pLayout.AnchorControl(IDC_EDIT2, AFX_ANCHOR_HEIGHT_WIDTH)
   pLayout.AnchorControl(IDCANCEL, AFX_ANCHOR_BOTTOM_RIGHT)
   pLayout.AnchorControl(IDC_GROUPBOX, AFX_ANCHOR_HEIGHT_RIGHT)

   ' // Ad a size grip
   pWindow.AddControl("SizeGrip", pWindow.hWindow, IDC_SIZEGRIP)
   pLayout.AnchorControl(IDC_SIZEGRIP, AFX_ANCHOR_BOTTOM_RIGHT)

   ' // Dispatch Windows messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main window callback procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   SELECT CASE uMsg

      CASE WM_COMMAND
         SELECT CASE GET_WM_COMMAND_ID(wParam, lParam)
            CASE IDCANCEL
               ' // If ESC key pressed, close the application by sending an WM_CLOSE message
               IF GET_WM_COMMAND_CMD(wParam, lParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF
         END SELECT

      CASE WM_GETMINMAXINFO
         ' Set the pointer to the address of the MINMAXINFO structure
         DIM ptmmi AS MINMAXINFO PTR = CAST(MINMAXINFO PTR, lParam)
         ' Set the minimum and maximum sizes that can be produced by dragging the borders of the window
         DIM pWindow AS CWindow PTR = AfxCWindowPtr(hwnd)
         IF pWindow THEN
            ptmmi->ptMinTrackSize.x = 300 * pWindow->rxRatio
            ptmmi->ptMinTrackSize.y = 180 * pWindow->ryRatio
         END IF
         EXIT FUNCTION

      CASE WM_SIZE
         ' // Adjusts the controls
         DIM pWindow AS CWindow PTR = AfxCWindowPtr(hwnd)
         IF pWindow THEN
            DIM pLayout AS CLayout PTR = CAST(CLayout PTR, pWindow->UserData(AFX_LAYOUTPTRIDX))
            IF pLayout THEN pLayout->AdjustControls
         END IF
         EXIT FUNCTION

    	CASE WM_DESTROY
         RemovePropW hwnd, "CLAYOUTPTR"
         ' // End the application
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   ' // Default processing of Windows messages
   FUNCTION = DefWindowProcW(hWnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

### <a name="Topic11"></a>MDI windows

The multiple-document interface (MDI) is a specification that defines a user interface for applications that enable the user to work with more than one document at the same time.

Each document in an multiple-document interface (MDI) application is displayed in a separate child window within the client area of the application's main window. Typical MDI applications include word-processing applications that allow the user to work with multiple text documents, and spreadsheet applications that allow the user to work with multiple charts and spreadsheets.

**Frame, Client, and Child Windows**

An MDI application has three kinds of windows: a frame window, an MDI client window, as well as a number of child windows. The frame window is like the main window of the application: it has a sizing border, a title bar, a window menu, a minimize button, and a maximize button. The application must register a window class for the frame window and provide a window procedure to support it.

An MDI application does not display output in the client area of the frame window. Instead, it displays the MDI client window. An MDI client window is a special type of child window belonging to the preregistered window class MDICLIENT. The client window is a child of the frame window; it serves as the background for child windows. It also provides support for creating and manipulating child windows. For example, an MDI application can create, activate, or maximize child windows by sending messages to the MDI client window.

When the user opens or creates a document, the client window creates a child window for the document. The client window is the parent window of all MDI child windows in the application. Each child window has a sizing border, a title bar, a window menu, a minimize button, and a maximize button. Because a child window is clipped, it is confined to the client window and cannot appear outside it.

An MDI application can support more than one kind of document. For example, a typical spreadsheet application enables the user to work with both charts and spreadsheets. For each type of document that it supports, an MDI application must register a child window class and provide a window procedure to support the windows belonging to that class.

**MSDN documentation**: [Multiple Document Interface](https://msdn.microsoft.com/en-us/library/windows/desktop/ms632591(v=vs.85).aspx)

To create a child window, **CWindow** provides the **CreateMDIWindow** method.

**CWindow MDI Framework Demo**

```
' ########################################################################################
' Microsoft Windows
' File: CW_MDIDemo.pbtpl
' Contents: CWindow MDI Framework Demo
' Compiler: FreeBasic 32 & 64 bit
' Copyright (c) 2016 José Roca. Freeware. Use at your own risk.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

#define UNICODE
#define USEMDI
#INCLUDE ONCE "Afx/CWindow.inc"
USING Afx

' // Edit control identifier
CONST IDC_EDIT = 101

' // Menu identifiers
ENUM
   IDM_NEW = 1001     ' New file
   IDM_OPEN           ' Open file...
   IDM_SAVE           ' Save file
   IDM_SAVEAS         ' Save file as...
   IDM_EXIT           ' Exit

   IDM_UNDO = 2001    ' Undo
   IDM_CUT            ' Cut
   IDM_COPY           ' Copy
   IDM_PASTE          ' Paste

   IDM_TILEH = 3001   ' Tile hosizontal
   IDM_TILEV          ' Tile vertical
   IDM_CASCADE        ' Cascade
   IDM_ARRANGE        ' Arrange icons
   IDM_CLOSE          ' Close
   IDM_CLOSEALL       ' Close all
END ENUM

DECLARE FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                          BYVAL hPrevInstance AS HINSTANCE, _
                          BYVAL szCmdLine AS ZSTRING PTR, _
                          BYVAL nCmdShow AS LONG) AS LONG

   END WinMain(GetModuleHandleW(NULL), NULL, COMMAND(), SW_NORMAL)

' // Forward declarations
DECLARE FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT
DECLARE FUNCTION MDIWindowProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

' ========================================================================================
' Build the menu
' ========================================================================================
FUNCTION BuildMenu () AS HMENU

   DIM hMenu AS HMENU
   DIM hPopUpMenu AS HMENU

   hMenu = CreateMenu
   hPopUpMenu = CreatePopUpMenu
      AppendMenuW hMenu, MF_POPUP OR MF_ENABLED, CAST(UINT_PTR, hPopUpMenu), "&File"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_NEW, "&New" & CHR(9) & "Ctrl+N"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_OPEN, "&Open..." & CHR(9) & "Ctrl+O"
         AppendMenuW hPopUpMenu, MF_SEPARATOR, 0, ""
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_SAVE, "&Save" & CHR(9) & "Ctrl+S"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_SAVEAS, "Save &As..."
         AppendMenuW hPopUpMenu, MF_SEPARATOR, 0, ""
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_EXIT, "E&xit" & CHR(9) & "Alt+F4"
   hPopUpMenu = CreatePopUpMenu
      AppendMenuW hMenu, MF_POPUP OR MF_ENABLED, CAST(UINT_PTR, hPopUpMenu), "&Edit"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_UNDO, "&Undo" & CHR(9) & "Ctrl+Z"
         AppendMenuW hPopUpMenu, MF_SEPARATOR, 0, ""
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_CUT, "Cu&t" & CHR(9) & "Ctrl+X"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_COPY, "&Copy" & CHR(9) & "Ctrl+C"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_PASTE, "&Paste" & CHR(9) & "Ctrl+V"
   hPopUpMenu = CreatePopUpMenu
      AppendMenuW hMenu, MF_POPUP OR MF_ENABLED, CAST(UINT_PTR, hPopUpMenu), "&Window"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_TILEH, "&Tile Horizontal"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_TILEV, "Tile &Vertical"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_CASCADE, "Ca&scade"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_ARRANGE, "&Arrange &Icons"
         AppendMenuW hPopUpMenu, MF_SEPARATOR, 0, ""
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_CLOSE, "&Close" & CHR(9) & "Ctrl+F4"
         AppendMenuW hPopUpMenu, MF_ENABLED, IDM_CLOSEALL, "Close &All"
   FUNCTION = hMenu

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main
' ========================================================================================
FUNCTION WinMain (BYVAL hInstance AS HINSTANCE, _
                  BYVAL hPrevInstance AS HINSTANCE, _
                  BYVAL szCmdLine AS ZSTRING PTR, _
                  BYVAL nCmdShow AS LONG) AS LONG

   ' // Set process DPI aware
   AfxSetProcessDPIAware

   ' // Create the main window
   DIM pWindow AS CWindow
   pWindow.Create(NULL, "MDI with CWindow", @WndProc)
   ' // Change the window style to avoid flicker
   pWindow.ClassStyle = CS_DBLCLKS
   ' // Set the client size
   pWindow.SetClientSize 650, 400
   ' // Center the window
   pWindow.Center

   ' // Create a menu
   DIM hMenu AS HMENU
   hMenu = BuildMenu
   SetMenu pWindow.hWindow, hMenu

   '// Create a MDI client child window
   DIM hwindowMenu AS HMENU
   hwindowMenu = GetSubMenu(hMenu, 2)
   pWindow.CreateMDIWindow(101, 0, 0, 0, 0, 0, 0, hwindowMenu, @MDIWindowProc)

   

   ' // Dispatch Windows messages
   FUNCTION = pWindow.DoEvents(nCmdShow)

END FUNCTION
' ========================================================================================

' ========================================================================================
' Main window callback procedure
' ========================================================================================
FUNCTION WndProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   STATIC hwndClient AS HWND    ' // Handle of the MDI client window
   DIM hwndActive AS HWND       ' // Active window
   DIM ptnmhdr AS NMHDR PTR     ' // Information about a notification message
   DIM hMdi AS HWND             ' // MDI child window handle
   STATIC nIdx AS LONG          ' // Counter
   STATIC pWindow AS CWindow PTR

   FUNCTION = 0

   ' // Retrieve the MDI client window handle
   IF hwndClient = NULL AND pWindow <> NULL THEN hwndClient = pWindow->hwndClient

   SELECT CASE AS CONST uMsg

      CASE WM_CREATE
         ' // Retrieve a reference to the CWindow class from the CREATESTRUCT structure
         pWindow = AfxCWindowPtr(lParam)
         EXIT FUNCTION

      CASE WM_COMMAND
         SELECT CASE GET_WM_COMMAND_ID(wParam, lParam)
            CASE IDCANCEL
               IF GET_WM_COMMAND_CMD(wParam, lParam) = BN_CLICKED THEN
                  SendMessageW hwnd, WM_CLOSE, 0, 0
                  EXIT FUNCTION
               END IF

            ' // New window
            CASE IDM_NEW
               IF hwndClient THEN
                  nIdx += 1
                  DIM mdi AS MDICREATESTRUCTW, dwStyle AS DWORD
                  IF IsZoomed(CAST(HWND, SendMessageW(hwndClient, WM_MDIGETACTIVE, 0, 0))) THEN dwStyle = WS_MAXIMIZE
                  hMdi = CreateWindowExW(WS_EX_MDICHILD OR WS_EX_CLIENTEDGE, "FBFrameClass", "", _
                           dwStyle, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, _
                           hwndClient, NULL, CAST(HANDLE, GetWindowLongPtrW(hwndClient, GWLP_HINSTANCE)), NULL)
                  SetWindowTextW hMdi, "MDI Child Window " & WSTR(nIdx)
               END IF
               EXIT FUNCTION

            ' // Tile horizontally
            CASE IDM_TILEH
               IF hwndClient THEN SendMessageW hwndClient, WM_MDITILE, MDITILE_HORIZONTAL, 0
               EXIT FUNCTION

            ' // Tile vertically
            CASE IDM_TILEV
               IF hwndClient THEN SendMessageW hwndClient, WM_MDITILE, MDITILE_VERTICAL, 0
               EXIT FUNCTION

            ' // Cascade windows
            CASE IDM_CASCADE
               IF hwndClient THEN SendMessageW hwndClient, WM_MDICASCADE, 0, 0
               EXIT FUNCTION

            ' // Arrange icons
            CASE IDM_ARRANGE
               IF hwndClient THEN SendMessageW hwndClient, WM_MDIICONARRANGE, 0, 0
               EXIT FUNCTION

            CASE IDM_CLOSE
               ' // Close the active window
               IF hwndClient THEN
                  hwndActive = CAST(HANDLE, SendMessageW(hwndClient, WM_MDIGETACTIVE, 0, 0))
                  IF SendMessageW(hwndActive, WM_QUERYENDSESSION, 0, 0) THEN
                     SendMessageW hwndClient, WM_MDIDESTROY, CAST(LPARAM, hwndActive), 0
                  END IF
               END IF
               EXIT FUNCTION

            CASE IDM_CLOSEALL
               ' // Close all the MDI child windows
               IF hwndClient THEN
                  EnumChildWindows hwndClient, @CWindow_CloseEnumProc, 0
               END IF
               EXIT FUNCTION

            ' // Exit the application
            CASE IDM_EXIT
               SendMessageW hwnd, WM_CLOSE, 0, 0
               EXIT FUNCTION

         END SELECT

         ' // Pass unprocessed messages to the active MDI child and then to DefFrameProc()
         hwndActive = CAST(HWND, SendMessageW(hwndClient, WM_MDIGETACTIVE, 0, 0))
         IF IsWindow(hwndActive) THEN SendMessageW hwndActive, WM_COMMAND, wParam, lParam

      CASE WM_NOTIFY
         ptnmhdr = CAST(NMHDR PTR, lParam)
'         SELECT CASE ptnmhdr->idFrom
'            ' ...
'            ' ...
'         END SELECT

         ' // Pass unprocessed messages to the active MDI child and then to DefFrameProc()
         IF hwndClient THEN
            hwndActive = CAST(HWND, SendMessageW(hwndClient, WM_MDIGETACTIVE, 0, 0))
            IF IsWindow(hwndActive) THEN SendMessageW hwndActive, WM_NOTIFY, wParam, lParam
         END IF

      CASE WM_SIZE
         ' // If the window isn't minimized, resize it
         IF wParam <> SIZE_MINIMIZED THEN
            IF hwndClient <> NULL AND pWindow <> NULL THEN
               pWindow->MoveWindow hwndClient, 0, 0, pWindow->ClientWidth + 2, pWindow->ClientHeight + 2, CTRUE
            END IF
         END IF
         ' // Note: This message is not passed to DefFrameProc when space
         ' // is being reserved in the client area of the MDI frame
         ' // or controls on the MDI frame are resizeable.
         EXIT FUNCTION

      CASE WM_CLOSE
         IF hwndClient THEN
            ' // Attempt to close all MDI child windows
            EnumChildWindows hwndClient, @CWindow_CloseEnumProc, 0
            ' // If child windows are still open abort closing the application
            IF GetWindow(hwndClient, GW_CHILD) THEN EXIT FUNCTION
         END IF

      CASE WM_QUERYENDSESSION
         IF hwndClient THEN
            ' // Attempt to close all MDI child windows
            EnumChildWindows hwndClient, @CWindow_CloseEnumProc, 0
            ' // If child windows are still open abort closing the application
            IF GetWindow(hwndClient, GW_CHILD) THEN EXIT FUNCTION
         END IF

    	CASE WM_DESTROY
         PostQuitMessage(0)
         EXIT FUNCTION

   END SELECT

   IF hwndClient THEN
   ' // The DefFrameProc function provides default processing for any window
   ' // messages that the window procedure of a multiple-document interface (MDI)
   ' // frame window does not process. All window messages that are not explicitly
   ' // processed by the window procedure must be passed to the DefFrameProc
   ' // function, not the DefWindowProc function.
      FUNCTION = DefFrameProcW(hwnd, hwndClient, uMsg, wParam, lParam)
   ELSE
   ' // The DefWindowProc function calls the default window procedure to provide
   ' // default processing for any window messages that an application does not process.
   ' // This function ensures that every message is processed. DefWindowProc
   ' // is called with the same parameters received by the window procedure.
      FUNCTION = DefWindowProcW(hwnd, uMsg, wParam, lParam)
   END IF

END FUNCTION
' ========================================================================================

' ========================================================================================
' Default CWindow MDI callback function.
' ========================================================================================
FUNCTION MDIWindowProc (BYVAL hwnd AS HWND, BYVAL uMsg AS UINT, BYVAL wParam AS WPARAM, BYVAL lParam AS LPARAM) AS LRESULT

   DIM hEdit AS HWND
   DIM rc AS RECT

   SELECT CASE uMsg

      CASE WM_CREATE
         ' // Retrieve a pointer to the CWindow class
         DIM pWindow AS CWindow PTR = AfxCWindowPtr(GetAncestor(hwnd, GA_ROOTOWNER))
         ' // Create and edit control
         IF pWindow THEN
            GetClientRect hwnd, @rc
            pWindow->AddControl("Edit", hwnd, IDC_EDIT, "", 0, 0, rc.Right, rc.Bottom, _
               WS_CHILD OR WS_VISIBLE OR ES_MULTILINE OR WS_VSCROLL OR WS_HSCROLL OR ES_AUTOHSCROLL OR ES_AUTOVSCROLL OR ES_WANTRETURN OR ES_NOHIDESEL)
            EXIT FUNCTION
         END IF

      CASE WM_MDIACTIVATE
         IF lParam = hwnd THEN
            ' ...
         END IF
         EXIT FUNCTION

      CASE WM_SETFOCUS
         ' // Set the keyboard focus to the first control that is
         ' // visible, not disabled, and has the WS_TABSTOP style
         SetFocus GetNextDlgTabItem(hwnd, NULL, FALSE)

      CASE WM_SIZE
         IF wParam <> SIZE_MINIMIZED THEN
            ' // Resize the window and/or its controls
            hEdit = GetDlgItem(hwnd, IDC_EDIT)
            MoveWindow hEdit, 0, 0, LOWORD(lParam), HIWORD(lParam), CTRUE
         END IF

         ' Don't exit. Let DefMDIChildProcW to process the message for
         ' properly resizing of the MDI child window.

      CASE WM_DESTROY
         ' // Do cleanup if needed, such removing properties attached
         ' // to the MDI child window.
         EXIT FUNCTION

   END SELECT

   ' // The DefMDIChildProc function provides default processing for any window
   ' // message that the window procedure of a multiple-document interface (MDI)
   ' // child window does not process. A window message not processed by the window
   ' // procedure must be passed to the DefMDIChildProc function, not to the
   ' // DefWindowProc function.
   FUNCTION = DefMDIChildProcW(hwnd, uMsg, wParam, lParam)

END FUNCTION
' ========================================================================================
```

### <a name="AccelHandle"></a>AccelHandle

Gets/sets the accelerator table handle.

```
PROPERTY AccelHandle () AS HACCEL
PROPERTY AccelHandle (BYVAL hAccel AS HACCEL)
```

| Parameter  | Description |
| ---------- | ----------- |
| *hAccel* | The new accelerator table handle. |

#### Return value

The current accelerator table handle.

#### Remarks

If a previous table was attached to the target dialog, the table is automatically destroyed when the new table is attached in its place. The accelerator table is also destroyed automatically when the class is destroyed.

You can destroy the current accelerator table by setting the property with a null handle.

#### Usage example

DIM hAccel AS HACCEL = pWindow.AccelHandle


### <a name="AddAccelerator"></a>AddAccelerator

Adds an accelerator key to the table.

```
SUB AddAccelerator (BYVAL fvirt AS UBYTE, BYVAL wKey AS WORD, BYVAL cmd AS WORD)
```

| Parameter  | Description |
| ---------- | ----------- |
| *fvirt* | The accelerator behavior. This member can be one or more of the following values:<br>**FALT (&H10)** : The ALT key must be held down when the accelerator key is pressed.<br>**FCONTROL (&H08)** : The CTRL key must be held down when the accelerator key is pressed.<br>**FNOINVERT (&H02)** : No top-level menu item is highlighted when the accelerator is used. If this flag is not specified, a top-level menu item will be highlighted, if possible, when the accelerator is used. This attribute is obsolete and retained only for backward compatibility with resource files designed for 16-bit Windows.<br>**FSHIFT (&H04)** : The SHIFT key must be held down when the accelerator key is pressed.<br>**FVIRTKEY (TRUE)**: The key member specifies a virtual-key code. If this flag is not specified, key is assumed to specify a character code. |
| *vKey* | The accelerator key. This member can be either a virtual-key code or a character code. |
| *cmd* | The accelerator identifier. This value is placed in the low-order word of the wParam parameter of the WM_COMMAND or WM_SYSCOMMAND message when the accelerator is pressed. |

#### Remarks

#### Remarks

To create an accelerator table, first add all the keys using this method and then call the **CreateAcceleratorTable** method.

#### Example

```
' // Create a keyboard accelerator table
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "U", IDM_UNDO ' // Ctrl+U - Undo
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "R", IDM_REDO ' // Ctrl+R - Redo
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "H", IDM_HOME ' // Ctrl+H - Home
pWindow.AddAccelerator FVIRTKEY OR FCONTROL, "S", IDM_SAVE ' // Ctrl+S - Save
pWindow.CreateAcceleratorTable
```

### <a name="AddControl"></a>AddControl

Adds a control to the window.

```
FUNCTION AddControl (BYREF wszClassName AS WSTRING, BYVAL hParent AS HWND = NULL, _
   BYVAL cID AS LONG_PTR = 0,    BYREF wszTitle AS WSTRING = "", BYVAL x AS LONG = 0, _
   BYVAL y AS LONG = 0, BYVAL nWidth AS LONG = 0, BYVAL nHeight AS LONG = 0, _
   BYVAL dwStyle AS LONG = -1, BYVAL dwExStyle AS LONG = -1, _
   BYVAL lpParam AS LONG_PTR = 0, BYVAL pWndProc AS WNDPROC = NULL, _
   BYVAL uIdSubclass AS UINT_PTR = &HFFFFFFFF, _
   BYVAL dwRefData AS DWORD_PTR = NULL) AS HWND
```

| Parameter  | Description |
| ---------- | ----------- |
| *wszClassName* | The window class name. The class name can be any name registered with **RegisterClass** or **RegisterClassEx**, provided that the module that registers the class is also the module that creates the window. The class name can also be any of the predefined system class names. |
| *hParent* | A handle to the parent or owner window of the control being created. If this parameter is omitted, the handle of the main window beloging to the **CWindow** class is used. |
| *cID* | The control identifier, an integer value used to notify its parent about events. The application determines the control identifier; it must be unique for all controls with the same parent window. |
| *wszTitle* | The window name. If the window style specifies a title bar, the window title is displayed in the title bar. When creating controls, such as buttons, check boxes, and static controls, use wszTitle to specify the text of the control. When creating a static control with the SS_ICON style, use wszTitle to specify the icon name or identifier. To specify an identifier, use the syntax *"#num"*. |
| *x* | The x-coordinate of the upper-left corner of the window relative to the upper-left corner of the parent window's client area. |
| *y* | The initial y-coordinate of the upper-left corner of the window relative to the upper-left corner of the parent window's client area. |
| *nWidth* | The width of the window. |
| *nHeight* | The height of the window. |
| *dwStyle* | The style of the window being created. |
| *dwExStyle* | The extended window style of the control being created. |
| *lpParam* | Optional. Pointer to a value to be passed to the window through the CREATESTRUCT structure (lpCreateParams member) pointed to by the lParam param of the WM_CREATE message. This message is sent to the created window by this function before it returns. |
| *pWndProc* | Optional. Address of the window callback procedure. |
| *uidSubclass* | Optional. The subclass ID. |
| *dwRefData* | Optional. Pointer to reference data |

#### Return value

If the method succeeds, the return value is a handle to the new control.

If the method fails, the return value is NULL. To get extended error information, call **GetLastError**.

This method typically fails for one of the following reasons:

* An invalid parameter value
* The system class was registered by a different module
* The WH_CBT hook is installed and returns a failure code
* If the control is not registered or its window window procedure fails WM_CREATE or WM_NCCREATE.

#### Predefined class names and styles

| Class name | Styles      |
| ---------- | ----------- |
| **"BUTTON"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_PUSHBUTTON OR BS_CENTER OR BS_VCENTER.<br>**BS_FLAT**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_PUSHBUTTON OR BS_CENTER OR BS_VCENTER OR BS_FLAT.<br>**BS_DEFPUSHBUTTON**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_CENTER OR BS_VCENTER OR BS_DEFPUSHBUTTON.<br>**BS_OWNERDRAW**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_OWNERDRAW.<br>**BS_SPLITBUTTON**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_CENTER OR BS_VCENTER OR BS_SPLITBUTTON>.<br>**BS_DEFSPLITBUTTON**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_CENTER OR BS_VCENTER OR BS_DEFSPLITBUTTON. |
| **"CUSTOMBUTTON"**, **"OWNERDRAWBUTTON"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_OWNERDRAW. |
| **"RADIOBUTTON"**, **"OPTION"** | **Default**: Default: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_AUTORADIOBUTTON OR BS_LEFT OR BS_VCENTER-<br>**WS_GROUP**: WS_VISIBLE OR WS_TABSTOP OR BS_AUTORADIOBUTTON OR BS_LEFT OR BS_VCENTER OR WS_GROUP. |
| **"CHECKBOX"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_AUTOCHECKBOX OR BS_LEFT OR BS_VCENTER. |
| **"CHECK3STATE"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_AUTO3STATE OR BS_LEFT OR BS_VCENTER. |
| **"LABEL"** | **Default**: WS_CHILD, WS_VISIBLE OR SS_LEFT OR WS_GROUP OR SS_NOTIFY. |
| **"BITMAPLABEL"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_GROUP OR SS_BITMAP.<br>**Default extended style**: WS_EX_TRANSPARENT. |
| **"ICONLABEL"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_GROUP OR SS_ICON.<br>**Default extended style**: WS_EX_TRANSPARENT. |
| **"BITMAPBUTTON"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_PUSHBUTTON OR BS_BITMAP. |
| **"ICONBUTTON"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR BS_PUSHBUTTON OR BS_ICON. |
| **"CUSTOMLABEL"** | **Default**: WS_VISIBLE OR WS_GROUP OR SS_OWNERDRAW. |
| **"FRAME"**. **"FRAMEWINDOW** | **Default**: WS_CHILD, WS_VISIBLE OR WS_CLIPSIBLINGS OR WS_GROUP OR SS_BLACKFRAME.<br>**Default extended style**: WS_EX_TRANSPARENT. |
| **"GROUPBOX"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_CLIPSIBLINGS OR WS_GROUP OR BS_GROUPBOX.<br>**Default extended style**: WS_EX_TRANSPARENT. |
| **"LINE"** | **Default**: WS_CHILD, WS_VISIBLE OR SS_ETCHEDFRAME.<br>**Default extended style**: WS_EX_TRANSPARENT. |
| **"EDIT"**, **"TEXTBOX"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR ES_LEFT OR ES_AUTOHSCROLL.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"EDITMULTILINE"**, **"MULTILINETEXTBOX"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR ES_LEFT OR ES_AUTOHSCROLL OR ES_MULTILINE OR ES_NOHIDESEL OR ES_WANTRETURN.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"COMBOBOX"** | **Default**: WS_CHILD OR WS_VISIBLE OR WS_VSCROLL OR WS_BORDER OR WS_TABSTOP OR CBS_DROPDOWN OR CBS_HASSTRINGS OR CBS_SORT.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"COMBOBOXEX"**, **"COMBOBOXEX32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_BORDER OR WS_TABSTOP OR CBS_DROPDOWNLIST. |
| **"LISTBOX"** | **Default**: WS_VISIBLE OR WS_HSCROLL OR WS_VSCROLL OR WS_BORDER OR WS_TABSTOP OR LBS_STANDARD OR LBS_HASSTRINGS OR LBS_SORT OR LBS_NOTIFY.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"PROGRESSBAR"**, **"MSCTLS_PROGRESS32"** | **Default**: WS_CHILD, WS_VISIBLE. |
| **"HEADER"**, **"SYSHEADER32"** | **Default**: WS_CHILD, WS_VISIBLE OR CCS_TOP OR HDS_HORZ OR HDS_BUTTONS. |
| **"TREEVIEW"**, **"SYSTREEVIEW32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_BORDER OR WS_TABSTOP OR TVS_HASBUTTONS OR TVS_HASLINES OR TVS_LINESATROOT OR TVS_SHOWSELALWAYS.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"LISTVIEW"**, **"SYSLISTVIEW32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_CLIPCHILDREN OR WS_TABSTOP OR LVS_REPORT OR LVS_SHOWSELALWAYS OR LVS_SHAREIMAGELISTS OR LVS_AUTOARRANGE OR LVS_EDITLABELS OR LVS_ALIGNTOP.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"TOOLBAR"**, **"TOOLBARWINDOW32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS OR CCS_TOP OR WS_BORDER OR TBSTYLE_FLAT OR TBSTYLE_TOOLTIPS. |
| **"REBAR"**, **"REBARWINDOW32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_BORDER OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS OR CCS_NODIVIDER OR RBS_VARHEIGHT OR RBS_BANDBORDERS. |
| **"DATETIMEPICKER"**, **"SYSDATETIMEPICK32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR DTS_SHORTDATEFORMAT. |
| **"MONTHCALENDAR"**, **"MONTHCAL"**, **"SYSMONTHCAL32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"IPADDRESS"**, **"SYSIPADDRESS32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"HOTKEY"**, **"MSCTLS_HOTKEY32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP.<br>**Default extended style**: WS_EX_CLIENTEDGE. |
| **"ANIMATE"**, **"ANIMATION"**, **"SYSANIMATE32"** | **Default**: WS_CHILD, WS_VISIBLE OR ACS_TRANSPARENT. |
| **"SYSLINK"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP. |
| **"PAGER"**, **"SYSPAGER"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP  OR PGS_HORZ. |
| **"TAB"**, **"TABCONTROL"**, **"SYSTABCONTROL32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_GROUP OR WS_TABSTOP OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS OR TCS_TABS OR TCS_SINGLELINE OR TCS_RAGGEDRIGHT.<br>**Default extended style**: WS_EX_CONTROLPARENT. |
| **"STATUSBAR"**, **"MSCTLS_STATUSBAR32"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS OR CCS_BOTTOM OR SBARS_SIZEGRIP. |
| **"SIZEBAR"**, **"SIZEBOX"**, **"SIZEGRIP"** | **Default**: WS_CHILD, WS_VISIBLE OR SBS_SIZEGRIP OR SBS_SIZEBOXBOTTOMRIGHTALIGN. |
| **"HSCROLLBAR"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR SBS_HORZ. |
| **"VSCROLLBAR"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR SBS_VERT. |
| **"TRACKBAR"**, **"MSCTLS_TRACKBAR32"**, **"SLIDER"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR TBS_AUTOTICKS OR TBS_HORZ OR TBS_BOTTOM. |
| **"UPDOWN"**, **"MSCTLS_UPDOWN32"** | **Default**: WS_VISIBLE OR UDS_WRAP OR UDS_ARROWKEYS OR UDS_ALIGNRIGHT OR UDS_SETBUDDYINT. |
| **"RICHEDIT"**, **"RichEdit50W"** | **Default**: WS_CHILD, WS_VISIBLE OR WS_TABSTOP OR ES_LEFT OR WS_HSCROLL OR WS_VSCROLL OR ES_AUTOHSCROLL OR ES_AUTOVSCROLL OR ES_MULTILINE OR ES_WANTRETURN OR ES_NOHIDESEL OR ES_SAVESEL.<br>**Default extended style**: WS_EX_CLIENTEDGE. |

#### Remarks

For the "BITMAPBUTTON", "BITMAPLABEL", "ICONBUTTON" and "ICONLABEL" controls you must pass in the *wszTitle* parameter the name of the bitmap in the resource file (.RES). If the image resource uses an integral identifier, the name should begin with a number symbol (#) followed by the identifier in an ASCII format, e.g., "#998". Otherwise, use the text identifier name for the image.

#### Subclassing

This method supports two ways of subclassing:

1) Pass in the *pWndProc* parameter the address of the subclass procedure.

Example of subclass procedure:

```
' =======================================================
' Processes messages for the subclassed control.
' =======================================================
FUNCTION SubclassProc ( _
   BYVAL hwnd   AS HWND, _                 ' // Control window handle
   BYVAL uMsg   AS UINT, _                 ' // Type of message
   BYVAL wParam AS WPARAM, _               ' // First message parameter
   BYVAL lParam AS LPARAM _                ' // Second message parameter
   ) AS LRESULT

   SELECT CASE uMsg

      CASE WM_GETDLGCODE
         ' // All keyboard input
         FUNCTION = DLGC_WANTALLKEYS
         EXIT FUNCTION

      CASE WM_KEYDOWN   ' etc.
         ...
         ...
         EXIT FUNCTION

      CASE WM_DESTROY
         ' // REQUIRED: Remove control subclassing
         SetWindowLongPtrW hwnd, GWLP_WNDPROC, _
            CAST(LONG_PTR, RemovePropW(hwnd, "OLDWNDPROC"))

   END SELECT

   FUNCTION = CallWindowProcW(GetPropW(hwnd, "OLDWNDPROC"), hwnd, uMsg, wParam, lParam)

END FUNCTION
' =======================================================

2) Subclassing passing the address of the subclass procedure in pWndProc, the subclass ID in uIdSubclass and an optional pointer to reference data in dwRefData.

Example of subclass procedure:

' =======================================================
' Processes messages for the subclassed Button window.
' =======================================================
FUNCTION SubclassProc ( _
   BYVAL hwnd   AS HWND, _                 ' // Control window handle
   BYVAL uMsg   AS UINT, _                 ' // Type of message
   BYVAL wParam AS WPARAM, _               ' // First message parameter
   BYVAL lParam AS LPARAM, _               ' // Second message parameter
   BYVAL uIdSubclass AS UINT_PTR, _        ' // The subclass ID
   BYVAL dwRefData AS DWORD_PTR _          ' // Pointer to reference data
   ) AS LRESULT

   SELECT CASE uMsg

      CASE WM_GETDLGCODE
         ' // All keyboard input
         FUNCTION = DLGC_WANTALLKEYS
         EXIT FUNCTION

      CASE WM_KEYDOWN   ' etc.
         EXIT FUNCTION

      CASE WM_DESTROY
         ' // REQUIRED: Remove control subclassing
         RemoveWindowSubclass hwnd, @SubclassProc, uIdSubclass

   END SELECT

   FUNCTION = DefSubclassProc(hwnd, uMsg, wParam, lParam)

END FUNCTION
' =======================================================
```

For the *uIdSubclass* parameter you can use any positive value except &hFFFFFFFF. **CWindow** uses the reserved default value of &hFFFFFFF to know if it has to use the old way of subclassing or the new way with **SetWindowSubclass**.

Two of the added benefits are that you can use the same subclass procedure for several controls and identify them thanks to the uIdSubclass (for example passing the ID of the control), and that you can pass a pointer to reference data.

**SetWindowSubclass** was made available for the first time in ComCtl32.dll version 6 and, therefore, can only be used with Windows XP or superior. ComCtl32.dll version 6 is Unicode only. The common controls supported by ComCtl32.dll version 6 should not be subclassed (or superclassed) with ANSI window procedures.


### <a name="BigIcon"></a>BigIcon

Associates a new large icon with the main window. The system displays the large icon in the ALT+TAB dialog box.

```
PROPERTY BigIcon (BYVAL hIcon AS HICON)
```

| Parameter  | Description |
| ---------- | ----------- |
| *hIcon* | The icon handle. If this parameter is NULL, the icon is removed. |

#### Example

```
pWindow.BigIcon = LoadImage(hInstance, MAKEINTRESOURCE(101), IMAGE_ICON, 48, 48, LR_SHARED)
```

### <a name="Brush"></a>Brush

Gets/sets the background brush.

```
PROPERTY Brush () AS HBRUSH
PROPERTY Brush (BYVAL hbrBackground AS HBRUSH)
```

| Parameter  | Description |
| ---------- | ----------- |
| *hbrBackground* | A handle to the class background brush. This member can be a handle to the physical brush to be used for painting the background, or it can be a color value. A color value must be one of the following standard system colors (the value 1 must be added to the chosen color), e.g. COLOR_WINDOW + 1. |

#### Usage examples

```
pWindow.Brush = CAST(HBRUSH, COLOR_WINDOW + 1)
```
```
' // Make the background of the window white
pWindow.Brush = GetStockObject(WHITE_BRUSH)
```
```
' // Make the background of the window blue
pWindow.Brush = CreateSolidBrush(BGR(0, 0, 255))
```

### <a name="Center"></a>Center

Centers a window on the screen or over another window. It also ensures that the placement is done within the work area.

```
SUB Center (BYVAL hwnd AS HWND = NULL, BYVAL hwndParent AS HWND = NULL)
```

| Parameter  | Description |
| ---------- | ----------- |
| *hwnd* | Optional. Handle to the window. If NULL, the handle of the main window is used. |
| *hwndParent* | Optional. Handle to the parent window. If NULL, the coordinates of the work area of the desktop window are used for the calculations. |

#### Example

```
' // Creates the main window
DIM pWindow AS CWindow
pWindow.Create(NULL, "CWindow test", @WndProc)
' // Sizes it by setting the wanted width and height of its client area
pWindow.SetClientSize(500, 320)
' // Centers the window
pWindow.Center
```

### <a name="ClassStyle"></a>ClassStyle

Gets/sets the style of the class.

```
PROPERTY ClassStyle () AS ULONG_PTR
PROPERTY ClassStyle (BYVAL dwStyle AS ULONG_PTR)
```

| Parameter  | Description |
| ---------- | ----------- |
| *dwStyle* | The class style. Can be a combination of the following constants: |

| Constant   | Description |
| ---------- | ----------- |
| CS_BYTEALIGNCLIENT | Aligns the window's client area on a byte boundary (in the x direction). This style affects the width of the window and its horizontal placement on the display. |
| CS_BYTEALIGNWINDOW | Aligns the window on a byte boundary (in the x direction). This style affects the width of the window and its horizontal placement on the display. |
| CS_CLASSDC | Allocates one device context to be shared by all windows in the class. Because window classes are process specific, it is possible for multiple threads of an application to create a window of the same class. It is also possible for the threads to attempt to use the device context simultaneously. When this happens, the system allows only one thread to successfully finish its drawing operation. |
| CS_DBLCLKS | Sends a double-click message to the window procedure when the user double-clicks the mouse while the cursor is within a window belonging to the class. |
| CS_DROPSHADOW | Enables the drop shadow effect on a window. The effect is turned on and off through SPI_SETDROPSHADOW. Typically, this is enabled for small, short-lived windows such as menus to emphasize their Z order relationship to other windows. |
| CS_GLOBALCLASS | Indicates that the window class is an application global class. |
| CS_HREDRAW | Redraws the entire window if a movement or size adjustment changes the width of the client area. |
| CS_NOCLOSE | Disables Close on the window menu. |
| CS_OWNDC | Allocates a unique device context for each window in the class. |
| CS_PARENTDC | Sets the clipping rectangle of the child window to that of the parent window so that the child can draw on the parent. A window with the CS_PARENTDC style bit receives a regular device context from the system's cache of device contexts. It does not give the child the parent's device context or device context settings. Specifying CS_PARENTDC enhances an application's performance. |
| CS_SAVEBITS | Saves, as a bitmap, the portion of the screen image obscured by a window of this class. When the window is removed, the system uses the saved bitmap to restore the screen image, including other windows that were obscured. Therefore, the system does not send WM_PAINT messages to windows that were obscured if the memory used by the bitmap has not been discarded and if other screen actions have not invalidated the stored image.<br>This style is useful for small windows (for example, menus or dialog boxes) that are displayed briefly and then removed before other screen activity takes place. This style increases the time required to display the window, because the system must first allocate memory to store the bitmap. |
| CS_VREDRAW | Redraws the entire window if a movement or size adjustment changes the height of the client area. |

#### Example

```
' // Creates the main window
DIM pWindow AS CWindow
pWindow.Create(NULL, "CWindow test", @WndProc)
' // Change the class style
pWindow.ClassStyle = CS_DBLCLKS
```

### <a name="ClientHeight"></a>ClientHeight

Returns the unscaled client height of the main window.

```
PROPERTY ClientHeight () AS LONG
```

#### Usage example

```
DIM nHeight AS LONG = pWindow.ClientHeight
```

### <a name="ClientWidth"></a>ClientWidth

Returns the unscaled client width of the main window.

```
PROPERTY ClientWidth () AS LONG
```

#### Usage example

```
DIM nWidth AS LONG = pWindow.ClientWidth
```

### <a name="ControlClientHeight"></a>ControlClientHeight

Returns the unscaled client height of the specified window or control.

```
PROPERTY ControlClientHeight (BYVAL hwnd AS HWND) AS LONG
```

| Parameter  | Description |
| ---------- | ----------- |
| *hwnd* | Handle to the window or control. |

#### Usage example

```
DIM nHeight AS LONG = pWindow.ControlClientHeight(hwnd)
```

### <a name="ControlClientWidth"></a>ControlClientWidth

Returns the unscaled client width of the specified window or control.

```
PROPERTY ControlClientWidth (BYVAL hwnd AS HWND) AS LONG
```

| Parameter  | Description |
| ---------- | ----------- |
| *hwnd* | Handle to the window or control. |

#### Usage example

```
DIM nHeight AS LONG = pWindow.ControlClientWidth(hwnd)
```

### <a name="ControlHandle"></a>ControlHandle

Retrieves a handle to the child control specified by its identifier.

```
FUNCTION ControlHandle (BYVAL cID AS LONG) AS HWND
```

| Parameter  | Description |
| ---------- | ----------- |
| *cID* | The child control identifier. |

#### Usage example

```
DIM hCtl AS HWND = pWindow.ControlHandle(cID)
```

### <a name="ControlHeight"></a>ControlHeight

Returns the unscaled height of the specified window.

```
FUNCTION ControlHeight (BYVAL hwnd AS HWND) AS LONG
```

| Parameter  | Description |
| ---------- | ----------- |
| *hwnd* | Handle to the window or control. |

#### Usage example

```
DIM nHeight AS LONG = pWindow.ControlHeight(hwnd)
```

### <a name="ControlWidth"></a>ControlWidth

Returns the unscaled width of the specified window.

```
FUNCTION ControlWidth (BYVAL hwnd AS HWND) AS LONG
```

| Parameter  | Description |
| ---------- | ----------- |
| *hwnd* | Handle to the window or control. |

#### Usage example

```
DIM nWidth AS LONG = pWindow.ControlWidth(hwnd)
```

### <a name="Create"></a>Create

**Create** creates a new window. If you don't specify the window styles, it creates an overlaped window with the styles WS_OVERLAPPEDWINDOW OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS and the extended styles WS_EX_CONTROLPARENT OR WS_EX_WINDOWEDGE.

**CreateOverlapped** creates an overlapped window. An overlapped window has a title bar and a border and uses these styles: WS_OVERLAPPED OR WS_CAPTION OR WS_SYSMENU.

```
FUNCTION Create (BYVAL hParent AS HWND = NULL, BYREF wszTitle AS WSTRING = "", _
   BYVAL lpfnWndProc AS WNDPROC = NULL, BYVAL x AS LONG = CW_USEDEFAULT, _
   BYVAL y AS LONG = CW_USEDEFAULT, BYVAL nWidth AS LONG = CW_USEDEFAULT, _
   BYVAL nHeight AS LONG = CW_USEDEFAULT, 
   BYVAL dwStyle AS UINT = WS_OVERLAPPEDWINDOW OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS, _
   BYVAL dwExStyle AS UINT = WS_EX_CONTROLPARENT OR WS_EX_WINDOWEDGE) AS HWND
```
```
FUNCTION CreateOverlapped (BYVAL hParent AS HWND = NULL, BYREF wszTitle AS WSTRING = "", _
   BYVAL lpfnWndProc AS WNDPROC = NULL, BYVAL x AS LONG = CW_USEDEFAULT, _
   BYVAL y AS LONG = CW_USEDEFAULT, BYVAL nWidth AS LONG = CW_USEDEFAULT, _
   BYVAL nHeight AS LONG = CW_USEDEFAULT, _
   BYVAL dwExStyle AS UINT = WS_EX_CONTROLPARENT OR WS_EX_WINDOWEDGE) AS HWND
```


| Parameter  | Description |
| ---------- | ----------- |
| *hParent* | A handle to the parent or owner window of the control being created. |
| *wszTitle* | The window caption. |
| *lpfnWndProc* | Address of the window callback procedure. |
| *x* | The x-coordinate of the upper-left corner of the window relative to the upper-left corner of the parent window's client area. |
| *y* | The initial y-coordinate of the upper-left corner of the window relative to the upper-left corner of the parent window's client area. |
| *nWidth* | The width of the window. |
| *nHeight* | The height of the window. |
| *dwStyle* | The style of the window being created. |
| *dwExStyle* | The extended window style of the control being created. |

#### Return value

If the function succeeds, the return value is a handle to the new window.

If the function fails, the return value is NULL. To get extended error information, call **GetLastError**.

#### Window Styles

The following are the window styles. After the window has been created, these styles cannot be modified, except as noted.

| Constant   | Description |
| ---------- | ----------- |
| WS_BORDER | The window has a thin-line border. |
| WS_CAPTION | The window has a title bar (includes the WS_BORDER style). |
| WS_CHILD | The window is a child window. A window with this style cannot have a menu bar. This style cannot be used with the WS_POPUP style. |
| WS_CHILDWINDOW | Same as the WS_CHILD style. |
| WS_CLIPCHILDREN | Excludes the area occupied by child windows when drawing occurs within the parent window. This style is used when creating the parent window. |
| WS_CLIPSIBLINGS | Clips child windows relative to each other; that is, when a particular child window receives a WM_PAINT message, the WS_CLIPSIBLINGS style clips all other overlapping child windows out of the region of the child window to be updated. If WS_CLIPSIBLINGS is not specified and child windows overlap, it is possible, when drawing within the client area of a child window, to draw within the client area of a neighboring child window. |
| WS_DISABLED | The window is initially disabled. A disabled window cannot receive input from the user. To change this after a window has been created, use the **EnableWindow** function. |
| WS_DLGFRAME | The window has a border of a style typically used with dialog boxes. A window with this style cannot have a title bar. |
| WS_GROUP | The window is the first control of a group of controls. The group consists of this first control and all controls defined after it, up to the next control with the WS_GROUP style. The first control in each group usually has the WS_TABSTOP style so that the user can move from group to group. The user can subsequently change the keyboard focus from one control in the group to the next control in the group by using the direction keys. |
| WS_GROUP | The window is the first control of a group of controls. The group consists of this first control and all controls defined after it, up to the next control with the WS_GROUP style. The first control in each group usually has the WS_TABSTOP style so that the user can move from group to group. The user can subsequently change the keyboard focus from one control in the group to the next control in the group by using the direction keys.<br>You can turn this style on and off to change dialog box navigation. To change this style after a window has been created, use the **SetWindowLongPtrW** function. |
| WS_HSCROLL | The window has a horizontal scroll bar. |
| WS_ICONIC | The window is initially minimized. Same as the WS_MINIMIZE style. |
| WS_MAXIMIZE | The window is initially maximized. |
| WS_MAXIMIZEBOX | The window has a maximize button. Cannot be combined with the WS_EX_CONTEXTHELP style. The WS_SYSMENU style must also be specified. |
| WS_MINIMIZE | The window is initially minimized. Same as the WS_ICONIC style. |
| WS_MINIMIZEBOX | The window has a minimize button. Cannot be combined with the WS_EX_CONTEXTHELP style. The WS_SYSMENU style must also be specified. |
| WS_OVERLAPPED | The window is an overlapped window. An overlapped window has a title bar and a border. Same as the WS_TILED style. |
| WS_OVERLAPPEDWINDOW | (WS_OVERLAPPED OR WS_CAPTION OR WS_SYSMENU OR WS_THICKFRAME OR WS_MINIMIZEBOX OR WS_MAXIMIZEBOX). The window is an overlapped window. Same as the WS_TILEDWINDOW style. |
| WS_POPUP | The windows is a pop-up window. This style cannot be used with the WS_CHILD style. |
| WS_POPUPWINDOW | (WS_POPUP OR WS_BORDER OR WS_SYSMENU). The window is a pop-up window. The WS_CAPTION and WS_POPUPWINDOW styles must be combined to make the window menu visible. |
| WS_SIZEBOX | The window has a sizing border. Same as the WS_THICKFRAME style. |
| WS_SYSMENU | The window has a window menu on its title bar. The WS_CAPTION style must also be specified. |
| WS_TABSTOP | The window is a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control with the WS_TABSTOP style.<br>You can turn this style on and off to change dialog box navigation. To change this style after a window has been created, use the **SetWindowLongPtrW** function. For user-created windows and modeless dialogs to work with tab stops, alter the message loop to call the **IsDialogMessage** function. |
| WS_THICKFRAME | The window has a sizing border. Same as the WS_SIZEBOX style. |
| WS_TILED | The window is an overlapped window. An overlapped window has a title bar and a border. Same as the WS_OVERLAPPED style. |
| WS_TILEDWINDOW | (WS_OVERLAPPED OR WS_CAPTION OR WS_SYSMENU OR WS_THICKFRAME OR WS_MINIMIZEBOX OR WS_MAXIMIZEBOX). The window is an overlapped window. Same as the WS_OVERLAPPEDWINDOW style.  |
| WS_VISIBLE | The window is initially visible. This style can be turned on and off by using the **ShowWindow** or **SetWindowPos** function. |
| WS_VSCROLL | The window has a vertical scroll bar. |

#### Extended Window Styles

| Constant   | Description |
| ---------- | ----------- |
| WS_EX_ACCEPTFILES | The window accepts drag-drop files. |
| WS_EX_APPWINDOW | Forces a top-level window onto the taskbar when the window is visible. |
| WS_EX_CLIENTEDGE | The window has a border with a sunken edge. |
| WS_EX_COMPOSITED | Paints all descendants of a window in bottom-to-top painting order using double-buffering. This cannot be used if the window has a class style of either CS_OWNDC or CS_CLASSDC. |
| WS_EX_CONTEXTHELP | The title bar of the window includes a question mark. When the user clicks the question mark, the cursor changes to a question mark with a pointer. If the user then clicks a child window, the child receives a WM_HELP message. The child window should pass the message to the parent window procedure, which should call the WinHelp function using the HELP_WM_HELP command. The Help application displays a pop-up window that typically contains help for the child window. WS_EX_CONTEXTHELP cannot be used with the WS_MAXIMIZEBOX or WS_MINIMIZEBOX styles. |
| WS_EX_CONTROLPARENT | The window itself contains child windows that should take part in dialog box navigation. If this style is specified, the dialog manager recurses into children of this window when performing navigation operations such as handling the TAB key, an arrow key, or a keyboard mnemonic. |
| WS_EX_DLGMODALFRAME | The window has a double border; the window can, optionally, be created with a title bar by specifying the WS_CAPTION style in the dwStyle parameter. |
| WS_EX_LAYERED | The window is a layered window. Note that this cannot be used for child windows. Also, this cannot be used if the window has a class style of either CS_OWNDC or CS_CLASSDC. |
| WS_EX_LAYOUTRTL | If the shell language is Hebrew, Arabic, or another language that supports reading order alignment, the horizontal origin of the window is on the right edge. Increasing horizontal values advance to the left. |
| WS_EX_LEFT | The window has generic left-aligned properties. This is the default. |
| WS_EX_LEFTSCROLLBAR | If the shell language is Hebrew, Arabic, or another language that supports reading order alignment, the vertical scroll bar (if present) is to the left of the client area. For other languages, the style is ignored. |
| WS_EX_LTRREADING | The window text is displayed using left-to-right reading-order properties. This is the default. |
| WS_EX_MDICHILD | The window is a MDI child window. |
| WS_EX_NOACTIVATE | A top-level window created with this style does not become the foreground window when the user clicks it. The system does not bring this window to the foreground when the user minimizes or closes the foreground window. To activate the window, use the **SetActiveWindow** or **SetForegroundWindow** function. The window does not appear on the taskbar by default. To force the window to appear on the taskbar, use the WS_EX_APPWINDOW style. |
| WS_EX_NOINHERITLAYOUT | The window does not pass its window layout to its child windows. |
| WS_EX_NOPARENTNOTIFY | The child window created with this style does not send the WM_PARENTNOTIFY message to its parent window when it is created or destroyed. |
| WS_EX_OVERLAPPEDWINDOW | (WS_EX_WINDOWEDGE OR WS_EX_CLIENTEDGE). The window is an overlapped window. |
| WS_EX_PALETTEWINDOW | (WS_EX_WINDOWEDGE OR WS_EX_TOOLWINDOW OR WS_EX_TOPMOST). The window is palette window, which is a modeless dialog box that presents an array of commands. |
| WS_EX_RIGHT | The window has generic "right-aligned" properties. This depends on the window class. This style has an effect only if the shell language is Hebrew, Arabic, or another language that supports reading-order alignment; otherwise, the style is ignored. Using the WS_EX_RIGHT style for static or edit controls has the same effect as using the SS_RIGHT or ES_RIGHT style, respectively. Using this style with button controls has the same effect as using BS_RIGHT and BS_RIGHTBUTTON styles. |
| WS_EX_RIGHTSCROLLBAR | The vertical scroll bar (if present) is to the right of the client area. This is the default. |
| WS_EX_RTLREADING | If the shell language is Hebrew, Arabic, or another language that supports reading-order alignment, the window text is displayed using right-to-left reading-order properties. For other languages, the style is ignored. |
| WS_EX_STATICEDGE | The window has a three-dimensional border style intended to be used for items that do not accept user input. |
| WS_EX_TOOLWINDOW | The window is intended to be used as a floating toolbar. A tool window has a title bar that is shorter than a normal title bar, and the window title is drawn using a smaller font. A tool window does not appear in the taskbar or in the dialog that appears when the user presses ALT+TAB. If a tool window has a system menu, its icon is not displayed on the title bar. However, you can display the system menu by right-clicking or by typing ALT+SPACE. |
| WS_EX_TOPMOST | The window should be placed above all non-topmost windows and should stay above them, even when the window is deactivated. To add or remove this style, use the **SetWindowPos** function. |
| WS_EX_TRANSPARENT | The window should not be painted until siblings beneath the window (that were created by the same thread) have been painted. The window appears transparent because the bits of underlying sibling windows have already been painted. To achieve transparency without these restrictions, use the **SetWindowRgn** function. |
| WS_EX_WINDOWEDGE | The window has a border with a raised edge. |

####Usage examples

```
DIM hwndMain AS HWND = pWindow.Create
```
```
DIM hwndMain AS HWND = pWindow.Create(NULL, "CWindow Test", @WndProc)
```
```
DIM hwndMain AS HWND = pWindow.Create(NULL, "CWindow Test", @WndProc), 0, 0, 525, 395)
```
```
DIM hwndMain AS HWND = pWindow.Create(NULL, "CWindow Test", @WndProc, 0, 0, 525, 395, WS_OVERLAPPEDWINDOW OR WS_CLIPCHILDREN OR WS_CLIPSIBLINGS, WS_EX_CONTROLPARENT OR WS_EX_WINDOWEDGE)
```