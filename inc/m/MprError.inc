' ########################################################################################
' Microsoft Windows
' File: MprError.inc
' Contents: Router specific error codes
' Copyright (c) 2011 Jos� Roca
' Portions Copyright (c) Microsoft Corporation.
' All Rights Reserved.
' THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER
' EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
' MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
' ########################################################################################

'//
'// Don't change the comments following the manifest constants without
'// understanding how mapmsg works.
'//

#INCLUDE THIS ONCE
%MPRERROR_INC = 1

%ROUTEBASE = 900
%SUCCESS   = 0

%ERROR_ROUTER_STOPPED                        = %ROUTEBASE + 0
'/*
' * The router is not running.%0
' */

%ERROR_ALREADY_CONNECTED                     = %ROUTEBASE + 1
'/*
' * The interface is already connected.%0
' */

%ERROR_UNKNOWN_PROTOCOL_ID                   = %ROUTEBASE + 2
'/*
' * The specified protocol identifier is not known to the router.%0
' */

%ERROR_DDM_NOT_RUNNING                       = %ROUTEBASE + 3
'/*
' * The Demand-dial Interface Manager is not running.%0
' */

%ERROR_INTERFACE_ALREADY_EXISTS              = %ROUTEBASE + 4
'/*
' * An interface with this name is already registered with the router.%0
' */

%ERROR_NO_SUCH_INTERFACE                     = %ROUTEBASE + 5
'/*
' * An interface with this name is not registered with the router.%0
' */

%ERROR_INTERFACE_NOT_CONNECTED               = %ROUTEBASE + 6
'/*
' * The interface is not connected.%0
' */

%ERROR_PROTOCOL_STOP_PENDING                 = %ROUTEBASE + 7
'/*
' * The specified protocol is stopping.%0
' */

%ERROR_INTERFACE_CONNECTED                   = %ROUTEBASE + 8
'/*
' * The interface is connected and hence cannot be deleted.%0
' */

%ERROR_NO_INTERFACE_CREDENTIALS_SET          = %ROUTEBASE + 9
'/*
' * The interface credentials have not been set.%0
' */

%ERROR_ALREADY_CONNECTING                    = %ROUTEBASE + 10
'/*
' * This interface is already in the process of connecting.%0
' */

%ERROR_UPDATE_IN_PROGRESS                    = %ROUTEBASE + 11
'/*
' * An update of routing information on this interface is already in progress.%0
' */

%ERROR_INTERFACE_CONFIGURATION               = %ROUTEBASE + 12
'/*
' * The interface confugration in invalid. There is already another interface that is connected to the same inteface on the remote router.%0
' */

%ERROR_NOT_CLIENT_PORT                       = %ROUTEBASE + 13
'/*
' * A Remote Access Client attempted to connect over a port that was reserved for Routers only.%0
' */

%ERROR_NOT_ROUTER_PORT                       = %ROUTEBASE + 14
'/*
' * A Demand Dial Router attempted to connect over a port that was reserved for Remote Access Clients only.%0
' */

%ERROR_CLIENT_INTERFACE_ALREADY_EXISTS       = %ROUTEBASE + 15
'/*
' * The client interface with this name already exists and is currently connected.%0
' */

%ERROR_INTERFACE_DISABLED                    = %ROUTEBASE + 16
'/*
' * The interface is in a disabled state.%0
' */

%ERROR_AUTH_PROTOCOL_REJECTED                = %ROUTEBASE + 17
'/*
' * The authentication protocol was rejected by the remote peer.%0
' */

%ERROR_NO_AUTH_PROTOCOL_AVAILABLE            = %ROUTEBASE + 18
'/*
' * There are no authentication protocols available for use.%0
' */

%ERROR_PEER_REFUSED_AUTH                     = %ROUTEBASE + 19
'/*
' * The remote computer refused to be authenticated using the configured authentication protocol. The line has been disconnected.%0
' */

%ERROR_REMOTE_NO_DIALIN_PERMISSION           = %ROUTEBASE + 20
'/*
' * The remote account does not have Remote Access permission.%0
' */

%ERROR_REMOTE_PASSWD_EXPIRED                 = %ROUTEBASE + 21
'/*
' * The remote account has expired.%0
' */

%ERROR_REMOTE_ACCT_DISABLED                  = %ROUTEBASE + 22
'/*
' * The remote account is disabled.%0
' */

%ERROR_REMOTE_RESTRICTED_LOGON_HOURS         = %ROUTEBASE + 23
'/*
' * The remote account is not permitted to logon at this time of day.%0
' */

%ERROR_REMOTE_AUTHENTICATION_FAILURE         = %ROUTEBASE + 24
'/*
' * Access was denied to the remote peer  because username and/or password is invalid on the domain.%0
' */

%ERROR_INTERFACE_HAS_NO_DEVICES              = %ROUTEBASE + 25
'/*
' * There are no routing enabled ports available for use by this demand dial interface.%0
' */

%ERROR_IDLE_DISCONNECTED                     = %ROUTEBASE + 26
'/*
' * The port has been disconnected due to inactivity.%0
' */

%ERROR_INTERFACE_UNREACHABLE                 = %ROUTEBASE + 27
'/*
' * The interface is not reachable at this time.%0
' */

%ERROR_SERVICE_IS_PAUSED                     = %ROUTEBASE + 28
'/*
' * The Demand Dial service is in a paused state.%0
' */

%ERROR_INTERFACE_DISCONNECTED                = %ROUTEBASE + 29
'/*
' * The interface has been disconnected by the administrator.%0
' */

%ERROR_AUTH_SERVER_TIMEOUT                   = %ROUTEBASE + 30
'/*
' * The authentication server did not respond to authentication requests in a timely fashion.%0
' */

%ERROR_PORT_LIMIT_REACHED                    = %ROUTEBASE + 31
'/*
' * The maximum number of ports allowed for use in the multilinked connection has been reached.%0
' */

%ERROR_PPP_SESSION_TIMEOUT                   = %ROUTEBASE + 32
'/*
' * The connection time limit for the user has been reached.%0
' */

%ERROR_MAX_LAN_INTERFACE_LIMIT               = %ROUTEBASE + 33
'/*
' * The maximum limit on the number of LAN interfaces supported has been reached.%0
' */

%ERROR_MAX_WAN_INTERFACE_LIMIT               = %ROUTEBASE + 34
'/*
' * The maximum limit on the number of Demand Dial interfaces supported has been reached.%0
' */

%ERROR_MAX_CLIENT_INTERFACE_LIMIT            = %ROUTEBASE + 35
'/*
' * The maximum limit on the number of Remote Access clients supported has been reached.%0
' */

%ERROR_BAP_DISCONNECTED                      = %ROUTEBASE + 36
'/*
' * The port has been disconnected due to the BAP policy.%0
' */

%ERROR_USER_LIMIT                            = %ROUTEBASE + 37
'/*
' * Because another connection of your type is in use, the incoming connection cannot accept your connection request.%0
' */

%ERROR_NO_RADIUS_SERVERS                     = %ROUTEBASE + 38
'/*
' * No RADIUS servers were located on the network.%0
' */

%ERROR_INVALID_RADIUS_RESPONSE               = %ROUTEBASE + 39
'/*
' * An invalid response was received from the RADIUS authentication server.
' * Make sure that the case sensitive secret pasword for the RADIUS server is set correctly.%0
' */

%ERROR_DIALIN_HOURS_RESTRICTION              = %ROUTEBASE + 40
'/*
' * You do not have permission to connect at this time.%0
' */

%ERROR_ALLOWED_PORT_TYPE_RESTRICTION         = %ROUTEBASE + 41
'/*
' * You do not have permission to connect using the current device type.%0
' */

%ERROR_AUTH_PROTOCOL_RESTRICTION             = %ROUTEBASE + 42
'/*
' * You do not have permission to connect using the selected authentication protocol.%0
' */

%ERROR_BAP_REQUIRED                          = %ROUTEBASE + 43
'/*
' * BAP is required for this user.%0
' */

%ERROR_DIALOUT_HOURS_RESTRICTION             = %ROUTEBASE + 44
'/*
' * The interface is not allowed to connect at this time.%0
' */

%ERROR_ROUTER_CONFIG_INCOMPATIBLE            = %ROUTEBASE + 45
'/*
' * The saved router configuration is incompatible with the current router.%0
' */

%WARNING_NO_MD5_MIGRATION                    = %ROUTEBASE + 46
'/*
' * RemoteAccess has detected older format user accounts that will not be
' * migrated automatically.  To migrate these manually, run XXXX.
' */

%ERROR_PROTOCOL_ALREADY_INSTALLED            = %ROUTEBASE + 48
'/*
' * The transport is already installed with the router.%0
' */

%ERROR_INVALID_SIGNATURE_LENGTH              = %ROUTEBASE + 49
'/*
' * Received invalid signature length in packet from RADIUS server.%0
' */

%ERROR_INVALID_SIGNATURE                     = %ROUTEBASE + 50
'/*
' * Received invalid signature in packet from RADIUS server.%0
' */

%ERROR_NO_SIGNATURE                          = %ROUTEBASE + 51
'/*
' * Did not receive signature along with EAPMessage from RADIUS server.%0
' */

%ERROR_INVALID_PACKET_LENGTH_OR_ID           = %ROUTEBASE + 52
'/*
' * Received packet with invalid length or Id from RADIUS server.%0
' */

%ERROR_INVALID_ATTRIBUTE_LENGTH              = %ROUTEBASE + 53
'/*
' * Received packet with attribute with invalid length from RADIUS server.%0
' */

%ERROR_INVALID_PACKET                        = %ROUTEBASE + 54
'/*
' * Received invalid packet from RADIUS server.%0
' */

%ERROR_AUTHENTICATOR_MISMATCH                = %ROUTEBASE + 55
'/*
' * Authenticator does not match in packet from RADIUS server.%0
' */

%ERROR_REMOTEACCESS_NOT_CONFIGURED           = %ROUTEBASE + 56
'/*
' * Routing and Remote access server is either not configured or not running.%0
' */

%ROUTEBASEEND                                = %ROUTEBASE + 57
