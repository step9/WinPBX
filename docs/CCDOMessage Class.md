# CCDOMessage Class

Collaboration Data Objects (CDO) is a Component Object Model (COM) component designed to simplify writing programs that create or manipulate Internet messages. It supports creating and managing messages formatted and sent using Internet standards such as the Multipurpose Internet Mail Extensions (MIME) standard. CDO supports sending messages using both the SMTP and NNTP protocols, as well as through a local SMTP/NNTP service pickup directory. CDO integrates with the Microsoft® ActiveX® Data Objects (ADO) component to present a consistent mechanism for managing data that comprises a message.

**CCDOMessage** is a Free Basic class that allows to send messages using CDO.

**Include file:** CCDoMessage.inc.

#### Example

```
' // Create an instance of the CCdoMessage class
DIM pMsg AS CCDOMessage

' // Configuration
pMsg.ConfigValue(cdoSendUsingMethod, CdoSendUsingPort)
pMsg.ConfigValue(cdoSMTPServer, "smtp.xxxxx.xxx")
pMsg.ConfigValue(cdoSMTPServerPort, 25)
pMsg.ConfigValue(cdoSMTPAuthenticate, 1)
pMsg.ConfigValue(cdoSendUserName, "xxxx@xxxx.xxx")
pMsg.ConfigValue(cdoSendPassword, "xxxxxxxx")
pMsg.ConfigValue(cdoSMTPUseSSL, 1)
pMsg.ConfigUpdate
 
' // Recipient name --> change as needed
pMsg.Recipients("xxxxx@xxxxx")
' // Sender mail address --> change as needed
pMsg.From("xxxxx@xxxxx")
' // Subject --> change as needed
pMsg.Subject("This is a sample subject")
' // Text body --> change as needed
pMsg.TextBody("This is a sample message text")
' // Add the attachment (use absolute paths).
' // Note  By repeating the call you can attach more than one file.
pMsg.AddAttachment ExePath & "\xxxxx.xxx"
' // Send the message
pMsg.Send
IF pMsg.GetLastResult = S_OK THEN PRINT "Message sent" ELSE PRINT "Failure"

To send messages using gmail, simply change the values of the server name and the server port:

pMsg.ConfigValue(cdoSMTPServer, "smtp.gmail.com")
pMsg.ConfigValue(cdoSMTPServerPort, 465)
```

### Methods

| Name       | Description |
| ---------- | ----------- |
| [AddAttachment](#AddAttachment) | Adds an attachment to the message. |
| [BCC](#BCC) | The blind carbon copy (Bcc) recipients for the message. |
| [CC](#CC) | The secondary (carbon copy) recipients for this message. |
| [ConfigUpdate](#ConfigUpdate) | Saves the changes you make to the **Fields** collection of the CDO **IConfiguration** interface. |
| [ConfigValue](#ConfigValue) | Sets the value of the specified configuration field. |
| [DSNOptions](#DSNOptions) | Includes a request for a return report on the delivery status of the message. |
| [FollowUpTo](#FollowUpTo) | Newsgroups to which any responses to this message are posted. |
| [From](#From) | The messaging address of the principal author of the message. |
| [GetLastResult](#GetLastResult) | Returns the last result code. |
| [HTMLBody](#HTMLBody) | The Hypertext Markup Language (HTML) representation of the message. |
| [Keywords](#Keywords) | The list of keywords for the message. |
| [MDNRequested](#MDNRequested) | Indicates whether a Message Disposition Notification is requested on a message. |
| [MimeFormatted](#MimeFormatted) | Indicates whether a Message Disposition Notification is requested on a message. |
| [Newsgroups](#Newsgroups) | The newsgroup recipients for the message. |
| [Organization](#Organization) | The organization of the sender. |
| [Post](#Post) | Submits this message to the specified newsgroups. |
| [Recipients](#Recipients) | The principal (To) recipients for this message. |
| [ReplyTo](#ReplyTo) | The messaging addresses to which replies to this message should be sent. |
| [Send](#Send) | Sends the message. |
| [Sender](#Sender) | The messaging address of the message submitter. |
| [Subject](#Subject) | The message subject. |
| [TextBody](#TextBody) | The plain text representation of the message. |

# <a name="AddAttachment"></a>AddAttachment

Adds an attachment to the message.

```
FUNCTION AddAttachment (BYREF cbsURL AS CBSTR, BYREF cbsUserName AS CBSTR = "", _
   BYREF cbsPassword AS CBSTR = "") AS HRESULT
```

| Parameter  | Description |
| ---------- | ----------- |
| *cbsURL* | The full path and file name of the message to be attached to this message. |
| *cbsUserName* | An optional user name to use for authentication when retrieving the resource using Hypertext Tranfer Protocol (HTTP). Can be used to set the credentials for both the basic and NTLM authentication mechanisms. |
| *cbsPassword* | An optional password to use for authentication when retrieving the resource using the HTTP. Can be used to set the credentials for the basic and NTLM authentication mechanisms. |

Return value

S_OK or an HRESULT code.

Remarks

The AddAttachment method adds the attachment by first retrieving the resource specified by the Uniform Resource Locator (URL) and then adding the content to the message's Attachments collection within a BodyPart object.

The URL prefixes supported in the URL parameter are file://, ftp://, http://, and https://. The default prefix is file://. This facilitates designation of paths starting with drive letters and of universal naming convention (UNC) paths.

The MIMEFormatted property determines how the attachment is formatted when the message is serialized for delivery to a Simple Mail Transfer Protocol (SMTP) service. If this property is set to True, the attachment is formatted using Multipurpose Internet Mail Extensions (MIME). If the property is set to False, the attachment is added to the serialized content stream in Uuencoded format.

If you populate the HTMLBody property before calling the AddAttachment method, any inline images are displayed as part of the message.

Use the UserName and Password parameters when you are requesting Web pages using Hypertext Transfer Protocol (HTTP) from a server that requires client authentication. If the Web server supports only the basic authentication mechanism, these credentials must be supplied. If the Web server supports the NTLM authentication mechanism, by default, the current process security context is used to authenticate; however, you can specify alternate credentials for NTLM authentication with the **UserName** and **Password** properties.

Important Storing user names and passwords inside source code can lead to security vulnerabilities in your software. Do not store user names and passwords in your production code.

# <a name="BCC"></a>BCC

The blind carbon copy (Bcc) recipients for the message.

```
FUNCTION BCC (BYREF cbsBCC AS CBSTR PTR) AS HRESULT
```

| Parameter  | Description |
| ---------- | ----------- |
| *cbsBCC* | The string in the BCC method can represent a single recipient or multiple recipients. Each address in the list must be a full messaging address, such as "User" \<example@example.com> or example@example.com.<br>In lists of multiple recipients, commas separate addresses, as follows: "User1" \<example1@example.com >, "User 2" \<example2@example.com>, "User3" \<example3@example.com><br>A comma is not valid in any part of a messaging address unless it is enclosed in quotation marks.<br>To maintain the privacy intended by blind copies, **BCC** is regarded as an envelope property rather than a message property; accordingly, the corresponding header field and its contents are removed when the message is delivered, and the **BCC** property is always empty on a received message.<br>The default value of the **BCC** property is an empty string. |

#### Return value

S_OK (0) or an HRESULT code.

# <a name="CC"></a>CC

The secondary (carbon copy) recipients for this message.

```
FUNCTION CC (BYREF cbsCC AS CBSTR) AS HRESULT
```

| Parameter  | Description |
| ---------- | ----------- |
| *cbsCC* | The string in the BCC method can represent a single recipient or multiple recipients. Each address in the list must be a full messaging address, such as "User" \<example@example.com> or example@example.com.<br>In lists of multiple recipients, commas separate addresses, as follows: "User1" \<example1@example.com >, "User 2" \<example2@example.com>, "User3" \<example3@example.com><br>A comma is not valid in any part of a messaging address unless it is enclosed in quotation marks.<br>To maintain the privacy intended by blind copies, **CC** is regarded as an envelope property rather than a message property; accordingly, the corresponding header field and its contents are removed when the message is delivered, and the **CC** property is always empty on a received message.<br>The default value of the **CC** property is an empty string. |

#### Return value

S_OK (0) or an HRESULT code.

# <a name="ConfigUpdate"></a>ConfigUpdate

Saves the changes you make to the **Fields** collection of the CDO **IConfiguration** interface.

```
FUNCTION ConfigUpdate () AS HRESULT
```

#### Return value

S_OK (0) or an HRESULT code.

# <a name="ConfigValue"></a>ConfigValue

Sets the value of the specified configuration field.

```
FUNCTION ConfigValue (BYREF cbsField AS CBSTR, BYREF cbsValue AS CBSTR) AS HRESULT
```

| Parameter  | Description |
| ---------- | ----------- |
| *cbsField* | The http://schemas.microsoft.com/cdo/configuration/ namespace defines the majority of fields used to set configurations for various CDO objects. These configuration fields are set using an implementation of the **IConfiguration.Fields** collection.<br>Many CDO objects use information stored in an associated **Configuration** object to define configuration settings. One example is the **Message** object, where you use its associated **Configuration** object to set fields such as sendusing. This field defines whether to send the message using the local SMTP service drop directory (if the local machine has the SMTP service installed), an SMTP service directly over the network. If sending over the network, you set smtpserver to specify the IP address or DNS name of the machine hosting the SMTP service, and optionally, smtpserverport to specify a port value. If credentials are required for connecting to an SMTP service, you can specify them by setting the sendusername and sendpassword.<br>A similar set of fields exists for posting messages using either a local NNTP service pickup directory, or over the network. |
| *cbsValue* | The value to set. |

All of the names listed below are also defined as string constants in the file **AfxCDOSys.bi** for convenience.

```
cdoAutoPromoteBodyParts = "http://schemas.microsoft.com/cdo/configuration/autopromotebodyparts"
cdoFlushBuffersOnWrite = "http://schemas.microsoft.com/cdo/configuration/flushbuffersonwrite"
cdoHTTPCookies = "http://schemas.microsoft.com/cdo/configuration/httpcookies"
cdoLanguageCode = "http://schemas.microsoft.com/cdo/configuration/languagecode"
cdoNNTPAccountName = "http://schemas.microsoft.com/cdo/configuration/nntpaccountname"
cdoNNTPAuthenticate = "http://schemas.microsoft.com/cdo/configuration/nntpauthenticate"
cdoNNTPConnectionTimeout = "http://schemas.microsoft.com/cdo/configuration/nntpconnectiontimeout"
cdoNNTPServer = "http://schemas.microsoft.com/cdo/configuration/nntpserver"
cdoNNTPServerPickupDirectory = "http://schemas.microsoft.com/cdo/configuration/nntpserverpickupdirectory"
cdoNNTPServerPort = "http://schemas.microsoft.com/cdo/configuration/nntpserverport"
cdoNNTPUseSSL = "http://schemas.microsoft.com/cdo/configuration/nntpusessl"
cdoPostEmailAddress = "http://schemas.microsoft.com/cdo/configuration/postemailaddress"
cdoPostPassword = "http://schemas.microsoft.com/cdo/configuration/postpassword"
cdoPostUserName = "http://schemas.microsoft.com/cdo/configuration/postusername"
cdoPostUserReplyEmailAddress = "http://schemas.microsoft.com/cdo/configuration/postuserreplyemailaddress"
cdoPostUsingMethod = "http://schemas.microsoft.com/cdo/configuration/postusing"
cdoSaveSentItems = "http://schemas.microsoft.com/cdo/configuration/savesentitems"
cdoSendEmailAddress = "http://schemas.microsoft.com/cdo/configuration/sendemailaddress"
cdoSendPassword = "http://schemas.microsoft.com/cdo/configuration/sendpassword"
cdoSendUserName = "http://schemas.microsoft.com/cdo/configuration/sendusername"
cdoSendUserReplyEmailAddress = "http://schemas.microsoft.com/cdo/configuration/senduserreplyemailaddress"
cdoSendUsingMethod = "http://schemas.microsoft.com/cdo/configuration/sendusing"
cdoSMTPAccountName = "http://schemas.microsoft.com/cdo/configuration/smtpaccountname"
cdoSMTPAuthenticate = "http://schemas.microsoft.com/cdo/configuration/smtpauthenticate"
cdoSMTPConnectionTimeout = "http://schemas.microsoft.com/cdo/configuration/smtpconnectiontimeout"
cdoSMTPServer = "http://schemas.microsoft.com/cdo/configuration/smtpserver"
cdoSMTPServerPickupDirectory = "http://schemas.microsoft.com/cdo/configuration/smtpserverpickupdirectory"
cdoSMTPServerPort = "http://schemas.microsoft.com/cdo/configuration/smtpserverport"
cdoSMTPUseSSL = "http://schemas.microsoft.com/cdo/configuration/smtpusessl"
cdoURLGetLatestVersion = "http://schemas.microsoft.com/cdo/configuration/urlgetlatestversion"
cdoURLProxyBypass = "http://schemas.microsoft.com/cdo/configuration/urlproxybypass"
cdoURLProxyServer = "http://schemas.microsoft.com/cdo/configuration/urlproxyserver"
cdoUseMessageResponseText = "http://schemas.microsoft.com/cdo/configuration/usemessageresponsetext"
```

#### Return value

S_OK (0) or an HRESULT code.

### Example

```
' // Create an instance of the CCdoMessage class
DIM pMsg AS CCdoMessage
' // Configuration
pMsg.ConfigValue(cdoSendUsingMethod, CdoSendUsingPort)
pMsg.ConfigValue(cdoSMTPServer, "smtp.xxxxx.xxx")
pMsg.ConfigValue(cdoSMTPServerPort, 25)
pMsg.ConfigValue(cdoSMTPAuthenticate, 1)
pMsg.ConfigValue(cdoSendUserName, "xxxx@xxxx.xxx")
pMsg.ConfigValue(cdoSendPassword, "xxxxxxxx")
pMsg.ConfigValue(cdoSMTPUseSSL, 1)
pMsg.ConfigUpdate
```

# <a name="DSNOptions"></a>DSNOptions

Includes a request for a return report on the delivery status of the message.

```
FUNCTION DSNOptions (BYVAL BYVAL pDSNOptions AS CdoDSNOptions) AS HRESULT
```

| Parameter  | Description |
| ---------- | ----------- |
| *pDSNOptions* | Delivery Status Notifications are essentially requests for receipts of message delivery status. The request can be for the enumerated delivery conditions. Note that Delivery Status Notifications can pass through numerous message transfer agents and thus return receipts can have different meanings. *DSNOptions* defines the type of Delivery Status Notification requested per Request for Comments (RFC) 1894. The RFC covers the nature and uses of Delivery Status Notifications in depth. |

The **CdoDSNOptions** enumeration is provided for this property.

| Constant   | Value | Description |
| ---------- | ----- | ----------- |
| **cdoDSNDefault** | 0 | No delivery status notifications are issued. |
| **cdoDSNNever** | 1 | No delivery status notifications are issued. |
| **cdoDSNFailure** | 2 | Returns a delivery status notification if delivery fails. |
| **cdoDSNSuccess** | 4 | Returns a delivery status notification if delivery succeeds. |
| **cdoDSNDelay** | 8 | Returns a delivery status notification if delivery is delayed. |
| **cdoDSNSuccessFailOrDelay** | 14 | Returns a delivery status notification if delivery succeeds, fails, or is delayed. |

#### Return value

S_OK (0) or an HRESULT code.