# Windows Data Types

The data types supported by Windows are used to define function return values, function and message parameters, and structure members. They define the size and meaning of these elements. For more information about the underlying C/C++ data types, see Data Type Ranges.

The following table contains the following types: character, integer, Boolean, pointer, and handle. The character, integer, and Boolean types are common to most C compilers. Most of the pointer-type names begin with a prefix of P or LP. Handles refer to a resource that has been loaded into memory.

For more information about handling 64-bit integers, see Large Integers.

| Name       | Description |
| ---------- | ----------- |
| **APIENTRY** | The calling convention for system functions.<br>`#define APIENTRY WINAPI` |
| **ATOM** | An atom.<br>`typedef word ATOM;` |
| **BOOL** | A Boolean variable (should be TRUE or FALSE).<br>`typedef bool BOOL;` |
| **BOOLEAN** | A Boolean variable (should be TRUE or FALSE).<br>`typedef boolean BOOLEAN;` |
| **BYTE** | A byte (8 bits).<br>`typedef byte BYTE;` |
| **CALLBACK** | The calling convention for callback functions.<br>`#define CALLBACK stdcall` (32-bit) `#define CALLBACK ms64` (64-bit) |
| **CCHAR** | An 8-bit Windows (ANSI) character.<br>`typedef char CCHAR;` |
| **CHAR** | An 8-bit Windows (ANSI) character.<br>`typedef char CHAR;` |
| **COLORREF** | The red, green, blue (RGB) color value (32 bits).<br>`typedef dword COLORREF;` |
| **CONST** | A variable whose value is to remain constant during execution.<br>`#define CONST const` |
| **DWORD** | 	A 32-bit unsigned integer. The range is 0 through 4294967295 decimal.<br>`typedef dword DWORD;` |
| **DWORDLONG** | 	A 64-bit unsigned integer. The range is 0 through 18446744073709551615 decimal.<br>`typedef unsigned __int64 DWORDLONG;` |
| **DWORD_PTR** | An unsigned long type for pointer precision. Use when casting a pointer to a long type to perform pointer arithmetic. (Also commonly used for general 32-bit parameters that have been extended to 64 bits in 64-bit Windows.)<br>`typedef ULONG_PTR DWORD_PTR;` |
| **DWORD32** | A 32-bit unsigned integer.<br>`typedef dword DWORD32;` |
| **DWORD64** | A 64-bit unsigned integer.<br>`typedef unsigned __int64 DWORD64;` |
| **FLOAT** | A floating-point variable.<br>`typedef float FLOAT;` |
| **HACCEL** | A handle to an accelerator table.<br>`typedef HANDLE HACCEL;` |
| **HALF_PTR** | A handle to an accelerator table.<br>`typedef int HALF_PTR;` (32-bit) `typedef short HALF_PTR;` (64-bit) |
| **HANDLE** | A handle to an object.<br>`typedef sys HANDLE;` |
| **HBITMAP** | A handle to a bitmap.<br>`typedef HANDLE HBITMAP;` |
| **HBRUSH** | A handle to a brush.<br>`typedef HANDLE HBRUSH;` |
| **HCOLORSPACE** | A handle to a color space.<br>`typedef HANDLE HCOLORSPACE;` |
| **HCONV** | A handle to a dynamic data exchange (DDE) conversation.<br>`typedef HANDLE HCONV;` |
| **HCONVLIST** | A handle to a DDE conversation list.<br>`typedef HANDLE HCONVLIST;` |
| **HCURSOR** | A handle to a cursor.<br>`typedef HANDLE HCURSOR;` |
| **HDC** | A handle to a device context (DC).<br>`typedef HANDLE HDC;` |
| **HDDEDATA** | A handle to DDE data.<br>`typedef HANDLE HDDEDATA;` |
| **HDESK** | A handle to a desktop.<br>`typedef HANDLE HDESK;` |
| **HDROP** | A handle to an internal drop structure.<br>`typedef HANDLE HDROP;` |
| **HDWP** | A handle to a deferred window position structure.<br>`typedef HANDLE HDWP;` |
| **HENHMETAFILE** | A handle to an enhanced metafile.<br>`typedef HANDLE HENHMETAFILE;` |
| **HFILE** | A handle to a file opened by **OpenFile**, not **CreateFile**.<br>`typedef HANDLE HFILE;` |
| **HFONT** | A handle to a font.<br>`typedef HANDLE HFONT;` |
| **HGDIOBJ** | A handle to a GDI objet.<br>`typedef HANDLE HGDIOBJ;` |
| **HGLOBAL** | A handle to a global memory block.<br>`typedef HANDLE HGLOBAL;` |
| **HHOOK** | A handle to a hook.<br>`typedef HANDLE HHOOK;` |
| **HICON** | A handle to an icon.<br>`typedef HANDLE HICON;` |
| **HINSTANCE** | A handle to an instance. This is the base address of the module in memory. HMODULE and HINSTANCE are the same today, but represented different things in 16-bit Windows.<br>`typedef HANDLE HINSTANCE;` |
| **HKEY** | A handle to a registry key.<br>`typedef HANDLE HKEY;` |
| **HKL** | An input locale identifier.<br>`typedef HANDLE HKL;` |
| **HLOCAL** | A handle to a local memory block.<br>`typedef HANDLE HLOCAL;` |
| **HMENU** | A handle to a menu.<br>`typedef HANDLE HMENU;` |
| **HMETAFILE** | A handle to a metafile.<br>`typedef HANDLE HMETAFILE;` |
| **HMODULE** | A handle to a module. The is the base address of the module in memory. HMODULE and HINSTANCE are the same in current versions of Windows, but represented different things in 16-bit Windows.<br>`typedef HANDLE HMODULE;` |
| **HMONITOR** | A handle to a display monitor.<br>`typedef HANDLE HMONITOR;` |
| **HPALETTE** | A handle to a palette.<br>`typedef HANDLE HPALETTE;` |
| **HPEN** | A handle to a pen.<br>`typedef HANDLE HPEN;` |
| **HRESULT** | The return codes used by COM interfaces.<br>`typedef long HRESULT;` |
| **HRGN** | A handle to a region.<br>`typedef HANDLE HRGN;` |
| **HRSRC** | A handle to a resource.<br>`typedef HANDLE HRSRC;` |
| **HSZ** | A handle to a DDE string.<br>`typedef HANDLE HSZ;` |
| **HWINSTA** | A handle to a window station.<br>`typedef HANDLE HWINSTA;` |
| **HWND** | A handle to a window.<br>`typedef HANDLE HWND;` |
| **INT** | A 32-bit signed integer. The range is -2147483648 through 2147483647 decimal.<br>`typedef int INT;` |
| **INT_PTR** | A signed integer type for pointer precision. Use when casting a pointer to an integer to perform pointer arithmetic.<br>`typedef int INT_PTR;` (32-bit) typedef `\_\_int64 INT_PTR;` (64-bit) |