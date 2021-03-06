' ########################################################################################
' Microsoft Windows
' File: Iprtrmib.inc
' Copyright (c) 2011 Jos� Roca
' Portions Copyright (c) Microsoft Corporation.
' All Rights Reserved.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

' This file contains:
'     o Definitions of the MIB_XX structures passed to and from the IP Router Manager
'         to query and set MIB variables handled by the IP Router Manager
'     o The #defines for the MIB variables IDs  handled by the IP Router Manager
'         and made accessible by the MprAdminMIBXXX APIs
'     o The Routing PID of the IP Router Manager (as mentioned in ipinfoid.h)

#INCLUDE THIS ONCE
%IPRTRMIB_INC = 1

#INCLUDE ONCE "windows.inc"

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// Included to get the value of MAX_INTERFACE_NAME_LEN                      //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////

#INCLUDE ONCE "mprapi.inc"

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// Included to get the necessary constants                                  //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////

#INCLUDE ONCE "ipifcons.inc"

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// This is the Id for IP Router Manager.  The Router Manager handles        //
'// MIB-II, Forwarding MIB and some enterprise specific information.         //
'// Calls made with any other ID are passed on to the corresponding protocol //
'// For example, an MprAdminMIBXXX call with a protocol ID of PID_IP and    //
'// a routing Id of 0xD will be sent to the IP Router Manager and then       //
'// forwarded to OSPF                                                        //
'// This lives in the same number space as the protocol Ids of RIP, OSPF     //
'// etc, so any change made to it should be done keeping this in mind        //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////


%IPRTRMGR_PID = 10000

#IF NOT %DEF(%ANY_SIZE)
%ANY_SIZE = 1
#ENDIF

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// The following #defines are the Ids of the MIB variables made accessible  //
'// to the user via MprAdminMIBXXX Apis.  It will be noticed that these are  //
'// not the same as RFC 1213, since the MprAdminMIBXXX APIs work on rows and //
'// groups instead of scalar variables                                       //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////

%IF_NUMBER           = 0
%IF_TABLE            = %IF_NUMBER          + 1
%IF_ROW              = %IF_TABLE           + 1
%IP_STATS            = %IF_ROW             + 1
%IP_ADDRTABLE        = %IP_STATS           + 1
%IP_ADDRROW          = %IP_ADDRTABLE       + 1
%IP_FORWARDNUMBER    = %IP_ADDRROW         + 1
%IP_FORWARDTABLE     = %IP_FORWARDNUMBER   + 1
%IP_FORWARDROW       = %IP_FORWARDTABLE    + 1
%IP_NETTABLE         = %IP_FORWARDROW      + 1
%IP_NETROW           = %IP_NETTABLE        + 1
%ICMP_STATS          = %IP_NETROW          + 1
%TCP_STATS           = %ICMP_STATS         + 1
%TCP_TABLE           = %TCP_STATS          + 1
%TCP_ROW             = %TCP_TABLE          + 1
%UDP_STATS           = %TCP_ROW            + 1
%UDP_TABLE           = %UDP_STATS          + 1
%UDP_ROW             = %UDP_TABLE          + 1
%MCAST_MFE           = %UDP_ROW            + 1
%MCAST_MFE_STATS     = %MCAST_MFE          + 1
%BEST_IF             = %MCAST_MFE_STATS    + 1
%BEST_ROUTE          = %BEST_IF            + 1
%PROXY_ARP           = %BEST_ROUTE         + 1
%MCAST_IF_ENTRY      = %PROXY_ARP          + 1
%MCAST_GLOBAL        = %MCAST_IF_ENTRY     + 1
%IF_STATUS           = %MCAST_GLOBAL       + 1
%MCAST_BOUNDARY      = %IF_STATUS          + 1
%MCAST_SCOPE         = %MCAST_BOUNDARY     + 1
%DEST_MATCHING       = %MCAST_SCOPE        + 1
%DEST_LONGER         = %DEST_MATCHING      + 1
%DEST_SHORTER        = %DEST_LONGER        + 1
%ROUTE_MATCHING      = %DEST_SHORTER       + 1
%ROUTE_LONGER        = %ROUTE_MATCHING     + 1
%ROUTE_SHORTER       = %ROUTE_LONGER       + 1
%ROUTE_STATE         = %ROUTE_SHORTER      + 1
%MCAST_MFE_STATS_EX  = %ROUTE_STATE        + 1
%IP6_STATS           = %MCAST_MFE_STATS_EX + 1
%UDP6_STATS          = %IP6_STATS          + 1
%TCP6_STATS          = %UDP6_STATS         + 1

%NUMBER_OF_EXPORTED_VARIABLES = %TCP6_STATS + 1

'#IF %WINVER >= &H0600
'    %NUMBER_OF_EXPORTED_VARIABLES = %TCP6_STATS + 1
'#ELSE
'    %NUMBER_OF_EXPORTED_VARIABLES = %ROUTE_STATE + 1
'#ENDIF

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// MIB_OPAQUE_QUERY is the structure filled in by the user to identify a    //
'// MIB variable                                                             //
'//                                                                          //
'//  dwVarId     ID of MIB Variable (One of the Ids #defined above)          //
'//  dwVarIndex  Variable sized array containing the indices needed to       //
'//              identify a variable. NOTE: Unlike SNMP we dont require that //
'//              a scalar variable be indexed by 0                           //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////

' // Size = 8 bytes
TYPE MIB_OPAQUE_QUERY DWORD
   dwVarId         AS DWORD   ' DWORD  dwVarId
   rgdwVarIndex(0) AS DWORD   ' DWORD  rgdwVarIndex[ANY_SIZE]
END TYPE

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// The following are the structures which are filled in and returned to the //
'// user when a query is made, OR  are filled in BY THE USER when a set is   //
'// done                                                                     //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////

#INCLUDE ONCE "ipmib.inc"
#INCLUDE ONCE "tcpmib.inc"
#INCLUDE ONCE "udpmib.inc"

' enum _TCP_TABLE_CLASS
%TCP_TABLE_BASIC_LISTENER           = 0
%TCP_TABLE_BASIC_CONNECTIONS        = 1
%TCP_TABLE_BASIC_ALL                = 2
%TCP_TABLE_OWNER_PID_LISTENER       = 3
%TCP_TABLE_OWNER_PID_CONNECTIONS    = 4
%TCP_TABLE_OWNER_PID_ALL            = 5
%TCP_TABLE_OWNER_MODULE_LISTENER    = 6
%TCP_TABLE_OWNER_MODULE_CONNECTIONS = 7
%TCP_TABLE_OWNER_MODULE_ALL         = 8


' enum _UDP_TABLE_CLASS
%UDP_TABLE_BASIC        = 0
%UDP_TABLE_OWNER_PID    = 1
%UDP_TABLE_OWNER_MODULE = 2

' enum _TCPIP_OWNER_MODULE_INFO_CLASS
%TCPIP_OWNER_MODULE_INFO_BASIC = 0

' // Size = 8 bytes
TYPE TCPIP_OWNER_MODULE_BASIC_INFO DWORD
   pModuleName AS WSTRINGZ PTR   ' PWCHAR
   pModulePath AS WSTRINGZ PTR   ' PWCHAR
END TYPE

' // Size = 16 bytes
TYPE MIB_IPMCAST_BOUNDARY DWORD
   dwIfIndex      AS DWORD   ' DWORD
   dwGroupAddress AS DWORD   ' DWORD
   dwGroupMask    AS DWORD   ' DWORD
   dwStatus       AS DWORD   ' DWORD
END TYPE

' // Size = 20 bytes
TYPE MIB_IPMCAST_BOUNDARY_TABLE DWORD
   dwNumEntries AS DWORD                  ' DWORD
   table(0)     AS MIB_IPMCAST_BOUNDARY   ' MIB_IPMCAST_BOUNDARY   table[ANY_SIZE]
END TYPE

'#define SIZEOF_BOUNDARY_TABLE(X) (FIELD_OFFSET(MIB_IPMCAST_BOUNDARY_TABLE,table[0]) + ((X) * sizeof(MIB_IPMCAST_BOUNDARY)) + ALIGN_SIZE)

' // Size = 8 bytes
TYPE MIB_BOUNDARYROW DWORD
   dwGroupAddress AS DWORD   ' DWORD dwGroupAddress
   dwGroupMask    AS DWORD   ' DWORD dwGroupMask
END TYPE

'// Structure matching what goes in the registry in a block of type
'// IP_MCAST_LIMIT_INFO.  This contains the fields of
'// MIB_IPMCAST_IF_ENTRY which are configurable.

' // Size = 8 bytes
TYPE MIB_MCAST_LIMIT_ROW DWORD
   dwTtl       AS DWORD   ' DWORD dwTtl
   dwRateLimit AS DWORD   ' DWORD dwRateLimit
END TYPE

%MAX_SCOPE_NAME_LEN = 255

'//
'// Scope names are unicode.  SNMP and MZAP use UTF-8 encoding.
'//

'#define SN_UNICODE
%SN_UNICODE = 1
'typedef WCHAR   SN_CHAR;
'typedef SN_CHAR SCOPE_NAME_BUFFER[MAX_SCOPE_NAME_LEN+1], *SCOPE_NAME;

'typedef struct _MIB_IPMCAST_SCOPE
'{
'    DWORD             dwGroupAddress;
'    DWORD             dwGroupMask;
'    SCOPE_NAME_BUFFER snNameBuffer;
'    DWORD             dwStatus;
'}MIB_IPMCAST_SCOPE, *PMIB_IPMCAST_SCOPE;

' // Size = 524 bytes
TYPE MIB_IPMCAST_SCOPE DWORD
   dwGroupAddress AS DWORD
   dwGroupMask    AS DWORD
   snNameBuffer   AS WSTRINGZ * (%MAX_SCOPE_NAME_LEN + 1)   ' Unicode
   dwStatus       AS DWORD
END TYPE

' // To workaround the difference in the PB declaration, that does not use ForwardRow as the member name.
UNION MIB_IPDESTROW_UNION
   ForwardRow          AS MIB_IPFORWARDROW   ' MIB_IPFORWARDROW  ForwardRow
   MIB_IPFORWARDROW
END UNION
TYPE MIB_IPDESTROW DWORD
   MIB_IPDESTROW_UNION
   dwForwardPreference AS DWORD              ' DWORD             dwForwardPreference
   dwForwardViewSet    AS DWORD              ' DWORD             dwForwardViewSet
END TYPE

' // Size = 68 bytes
TYPE MIB_IPDESTTABLE DWORD
   dwNumEntries AS DWORD          ' DWORD             dwNumEntries
   table(0)     AS MIB_IPDESTROW  ' MIB_IPDESTROW     table[ANY_SIZE]
END TYPE

' // Size = 8 bytes
TYPE MIB_BEST_IF DWORD
   dwDestAddr AS DWORD   ' DWORD dwDestAddr
   dwIfIndex  AS DWORD   ' DWORD dwIfIndex
END TYPE

' // Size = 12 bytes
TYPE MIB_PROXYARP DWORD
   dwAddress AS DWORD   ' DWORD dwAddress
   dwMask    AS DWORD   ' DWORD dwMask
   dwIfIndex AS DWORD   ' DWORD dwIfIndex
END TYPE

' // Size = 20 bytes
TYPE MIB_IFSTATUS DWORD
   dwIfIndex           AS DWORD   ' DWORD       dwIfIndex
   dwAdminStatus       AS DWORD   ' DWORD       dwAdminStatus
   dwOperationalStatus AS DWORD   ' DWORD       dwOperationalStatus
   bMHbeatActive       AS LONG    ' BOOL        bMHbeatActive
   bMHbeatAlive        AS LONG    ' BOOL        bMHbeatAlive
END TYPE

' // Size = 4 bytes
TYPE MIB_ROUTESTATE DWORD
   bRoutesSetToStack AS LONG   ' BOOL bRoutesSetToStack
END TYPE

'//////////////////////////////////////////////////////////////////////////////
'//                                                                          //
'// All the info passed to (SET/CREATE) and from (GET/GETNEXT/GETFIRST)      //
'// IP Router Manager is encapsulated in the following "discriminated"       //
'// union.  To pass, say MIB_IFROW, use the following code                   //
'//                                                                          //
'//  PMIB_OPAQUE_INFO    pInfo;                                              //
'//  PMIB_IFROW          pIfRow;                                             //
'//  DWORD rgdwBuff[(MAX_MIB_OFFSET + sizeof(MIB_IFROW))/sizeof(DWORD) + 1]; //
'//                                                                          //
'//  pInfo   = (PMIB_OPAQUE_INFO)rgdwBuffer;                                 //
'//  pIfRow  = (MIB_IFROW *)(pInfo->rgbyData);                               //
'//                                                                          //
'//  This can also be accomplished by using the following macro              //
'//                                                                          //
'//  DEFINE_MIB_BUFFER(pInfo,MIB_IFROW, pIfRow);                             //
'//                                                                          //
'//////////////////////////////////////////////////////////////////////////////


'typedef struct _MIB_OPAQUE_INFO
'{
'    DWORD  dwId;

'    union
'    {
'        ULONGLONG   ullAlign;
'        BYTE        rgbyData[1];
'    };

'}MIB_OPAQUE_INFO, *PMIB_OPAQUE_INFO;

' // Size = 8 bytes
UNION MIB_OPAQUE_UNION QWORD
   ullAlign    AS QUAD   ' ULONGLONG   ullAlign
   rgbyData(0) AS BYTE   ' BYTE        rgbyData[1]
END UNION

' // Size = 16 bytes
TYPE MIB_OPAQUE_INFO QWORD
   dwId AS DWORD       ' DWORD  dwId
   MIB_OPAQUE_UNION
END TYPE

%MAX_MIB_OFFSET = 8

'#define MIB_INFO_SIZE(S)                \
'    (MAX_MIB_OFFSET + sizeof(S))
MACRO MIB_INFO_SIZE(S) = %MAX_MIB_OFFSET + SIZEOF(S)

'#define MIB_INFO_SIZE_IN_DWORDS(S)      \
'    ((MIB_INFO_SIZE(S))/sizeof(DWORD) + 1)
MACRO MIB_INFO_SIZE_IN_DWORDS(S) = (MIB_INFO_SIZE(S) \ 4) + 1

'#define DEFINE_MIB_BUFFER(X,Y,Z)                                        \
'    DWORD        __rgdwBuff[MIB_INFO_SIZE_IN_DWORDS(Y)]; \
'    PMIB_OPAQUE_INFO    X = (PMIB_OPAQUE_INFO)__rgdwBuff;               \
'    Y *                 Z = (Y *)(X->rgbyData)


'#define CAST_MIB_INFO(X,Y,Z)    Z = (Y)(X->rgbyData)
