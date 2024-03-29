<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRKIdentitySharingFacade.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/ClassroomKit.framework/CRKIdentitySharingFacade.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit (1)
 */

@interface CRKIdentitySharingFacade : NSObject <CRKIdentitySharingOperationDelegate, IDSServiceDelegate> {
    NSObject<CRKIdentitySharingDelegate> * _delegate;
    NSMutableDictionary * _operationsByIDSIdentifier;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CRKIdentitySharingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *operationsByIDSIdentifier;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;

+ (id)sharedFacade;

- (void).cxx_destruct;
- (bool)_getActiveCertificate:(id*)arg1 stagedCertificate:(id*)arg2 fromMessage:(id)arg3;
- (id)_operationToSendMessage:(id)arg1 toRecipients:(id)arg2;
- (void)_signalDelegateWithAdvertisingIdentifierAndCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (void)_signalDelegateWithCertificateRequestFromSender:(id)arg1 device:(id)arg2;
- (void)_signalDelegateWithCertificatesMessage:(id)arg1 sender:(id)arg2 device:(id)arg3;
- (id)delegate;
- (void)identitySharingOperation:(id)arg1 sentMessageWithIdentifier:(id)arg2;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)operationToRequestCertificateFromClassMember:(id)arg1 fromDevice:(id)arg2;
- (id)operationToSendActiveCertificate:(id)arg1 stagedCertificate:(id)arg2 toRecipients:(id)arg3 fromDevice:(id)arg4;
- (id)operationToSendAdvertisingIdentifier:(id)arg1 activeCertificate:(id)arg2 stagedCertificate:(id)arg3 toRecipients:(id)arg4 fromDevice:(id)arg5;
- (id)operationsByIDSIdentifier;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setOperationsByIDSIdentifier:(id)arg1;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>
