<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDCentralMessageDispatcher.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDCentralMessageDispatcher.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDCentralMessageDispatcher : HMFMessageDispatcher {
    HMDAdminEnforcementMessageFilter * _adminMsgFilter;
    HMDHomeManager * _homeManager;
    HMDMessageFilterChain * _messageFilterChain;
    HMFMessageDispatcher * _notificationDispatcher;
    HMFMessageDispatcher * _recvDispatcher;
    NSMutableArray * _relayedMessages;
    NSMutableDictionary * _remoteGateways;
    HMDSecureRemoteMessageFilter * _secureRemoteMessageFilter;
}

@property (nonatomic, retain) HMDAdminEnforcementMessageFilter *adminMsgFilter;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, readonly) HMDMessageFilterChain *messageFilterChain;
@property (nonatomic, retain) HMFMessageDispatcher *notificationDispatcher;
@property (nonatomic, retain) HMFMessageDispatcher *recvDispatcher;
@property (nonatomic, readonly) NSMutableArray *relayedMessages;
@property (nonatomic, retain) NSMutableDictionary *remoteGateways;
@property (nonatomic, retain) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter;
@property (nonatomic, readonly) HMDSecureRemoteMessageTransport *secureRemoteTransport;

+ (id)defaultDispatcher;
+ (id)destinationWithTarget:(id)arg1 userID:(id)arg2 destination:(id)arg3 multicast:(bool)arg4;
+ (bool)isWhitelistedLocalMessage:(id)arg1;

- (void).cxx_destruct;
- (bool)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2;
- (void)_handleLocalMessage:(id)arg1 targetUUID:(id)arg2;
- (void)_handleRelayedIDSMessage:(id)arg1 handledLocally:(bool)arg2;
- (void)_setRemoteAccessDevice:(id)arg1 forHome:(id)arg2 sendNotification:(bool)arg3;
- (id)adminMsgFilter;
- (void)configureHTTPTransport:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)dealloc;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)disableMessageServer;
- (void)dispatchMessage:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)enableMessageServer;
- (void)handleSecureSessionError:(id)arg1;
- (id)homeManager;
- (id)httpMessageTransport;
- (id)initWithSecureRemoteTransport:(id)arg1 messageFilterChain:(id)arg2;
- (id)messageFilterChain;
- (id)notificationDispatcher;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (id)recvDispatcher;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHomeWithUUID:(id)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id /* block */)arg3;
- (void)relayInternalMessage:(id)arg1;
- (void)relayMessage:(id)arg1;
- (id)relayedMessages;
- (id)remoteAccessDeviceForHome:(id)arg1;
- (id)remoteGateways;
- (void)removeHome:(id)arg1;
- (void)reset;
- (id)secureRemoteMessageFilter;
- (id)secureRemoteTransport;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)setAdminMsgFilter:(id)arg1;
- (void)setCompanionDevice:(id)arg1 forHome:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setNotificationDispatcher:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setRemoteAccessDevice:(id)arg1 forHome:(id)arg2;
- (void)setRemoteGateways:(id)arg1;
- (void)setSecureRemoteMessageFilter:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
- (void)updateLocalAdministratorName;

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
