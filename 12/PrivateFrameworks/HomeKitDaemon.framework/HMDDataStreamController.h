<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDDataStreamController.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDDataStreamController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDDataStreamController : NSObject <HMDDataStreamDelegate, HMFLogging> {
    HMDHAPAccessory * _accessory;
    NSMutableArray * _activeProtocols;
    HMDDataStream * _defaultDataStream;
    HMDNotificationRegistration * _notificationRegistration;
    HMDDataStreamSetup * _setupInProgress;
    bool  _supportsDataStreamOverTCP;
    HMDService * _transferManagementService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDHAPAccessory *accessory;
@property (nonatomic, retain) NSMutableArray *activeProtocols;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDDataStream *defaultDataStream;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, retain) HMDDataStreamSetup *setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDataStreamOverTCP;
@property (nonatomic) HMDService *transferManagementService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelStreamTransportWithError:(id)arg1;
- (void)_continueStreamSetupWithResponse:(id)arg1;
- (void)_createBulkStreamProtocol;
- (void)_finishStreamTransport;
- (void)_generateStreamKeys;
- (id)_getActiveProtocolWithClass:(Class)arg1;
- (void)_handleAccessoryIsReachable;
- (void)_initiateStreamSetup;
- (id)accessory;
- (id)activeProtocols;
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;
- (bool)canAcceptBulkSendListeners;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id)defaultDataStream;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;
- (id)notificationRegistration;
- (void)registerForMessages;
- (void)removeBulkSendListener:(id)arg1;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;
- (void)setAccessory:(id)arg1;
- (void)setActiveProtocols:(id)arg1;
- (void)setDefaultDataStream:(id)arg1;
- (void)setSetupInProgress:(id)arg1;
- (void)setSupportsDataStreamOverTCP:(bool)arg1;
- (void)setTransferManagementService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)setupInProgress;
- (bool)supportsDataStreamOverTCP;
- (id)transferManagementService;
- (id)workQueue;

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