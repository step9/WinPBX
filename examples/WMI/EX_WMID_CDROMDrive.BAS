' ========================================================================================
' Determine whether a computer has a DVD drive
' ========================================================================================

#COMPILE EXE
#DIM ALL
#INCLUDE "WMI.INC"

' ========================================================================================
' Main
' ========================================================================================
FUNCTION PBMAIN

   LOCAL hr AS LONG                            ' // HRESULT
   LOCAL pServices AS ISWbemServices           ' // ISWbemServices interface
   LOCAL pObjectSet AS ISWbemObjectSet         ' // ISWbemObjectSet interface
   LOCAL pEnum AS IEnumVARIANT                 ' // IEnumVARIANT interface
   LOCAL bstrDisplayName AS WSTRING            ' // Display name
   LOCAL bstrQuery AS WSTRING                  ' // Query filter
   LOCAL vItem AS VARIANT                      ' // Collection's item
   LOCAL oItem AS DISPATCH                     ' // Collection's item
   LOCAL vRes AS VARIANT                       ' // Variant result

   ' Connect to WMI using a moniker
   bstrDisplayName = "winmgmts:{impersonationLevel=impersonate}!\\.\root\cimv2"
   pServices = WmiGetObject(bstrDisplayName)
   IF ISNOTHING(pServices) THEN EXIT FUNCTION

   TRY
      ' Execute a query to get a reference to the collection of running processes
      bstrQuery = "SELECT DeviceID, Description, Name FROM Win32_CDROMDrive"
      pObjectSet = pServices.ExecQuery(bstrQuery, "WQL", %wbemFlagReturnImmediately)
      IF ISNOTHING(pObjectSet) THEN EXIT TRY
      ' Retrieve a reference to the collection's enumerator
      pEnum = pObjectSet.NewEnum_
      IF ISNOTHING(pEnum) THEN EXIT TRY
      ' Iterate through the collection of objects (WMI collections are 1 based).
      DO
         ' Retrieve a reference to the next object in the collection
         hr = pEnum.Next(1, vItem, BYVAL %NULL)
         IF hr <> %S_OK THEN EXIT DO
         ' Assign the VT_DISPATCH variant to the object variable
         oItem = vItem : vItem = EMPTY
         IF ISNOTHING(oItem) THEN EXIT DO
         ' Retrieve the properties
         OBJECT GET oItem.DeviceID TO vRes
         ? "Device ID = " & VARIANT$$(vRes)
         OBJECT GET oItem.Description TO vRes
         ? "Description = " & VARIANT$$(vRes)
         OBJECT GET oItem.Name TO vRes
         ? "Name = " & VARIANT$$(vRes)
         ' Release the object
         oItem = NOTHING
      LOOP
   CATCH
      AfxShowMsg("Error " & HEX$(OBJRESULT) & $CRLF & WmiGetErrorCodeText(OBJRESULT))
   FINALLY
      ' Release the enumerator
      pEnum = NOTHING
      ' Release the collection
      pObjectSet = NOTHING
   END TRY

   #IF %DEF(%PB_CC32)
      WAITKEY$
   #ENDIF

END FUNCTION
' ========================================================================================
