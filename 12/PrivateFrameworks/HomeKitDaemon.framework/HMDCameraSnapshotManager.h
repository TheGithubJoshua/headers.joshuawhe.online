<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDCameraSnapshotManager.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDCameraSnapshotManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDCameraSnapshotManager : HMFObject <HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMDCameraSnapshotRemoteRelaySenderDelegate, HMDCameraSnapshotRemoteRelayStreamDelegate, HMDCameraSnapshotRemoteStreamReceiverDelegate, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMDSnapshotLocalSession * _currentLocalSession;
    NSMutableDictionary * _currentRemoteSessions;
    NSString * _imageCacheDirectory;
    NSString * _logID;
    HMDCameraSnapshotMonitorEvents * _monitorServicesManager;
    HMFMessageDispatcher * _msgDispatcher;
    HMFNetMonitor * _networkMonitor;
    HMDNotificationRegistration * _notificationRegistration;
    NSMutableArray * _pendingRemoteSnapshotRequestDuringStreamSetup;
    NSMutableArray * _pendingSnapshotRequestDuringStreamSetup;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    HMDSnapshotCacheRequestHandler * _snapshotCacheRequestHandler;
    HMDSnapshotRequestHandler * _snapshotRequestHandler;
    HMDSnapshotSlotManager * _snapshotSlotManager;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, retain) HMDSnapshotLocalSession *currentLocalSession;
@property (nonatomic, retain) NSMutableDictionary *currentRemoteSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDCameraSnapshotMonitorEvents *monitorServicesManager;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMFNetMonitor *networkMonitor;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSMutableArray *pendingRemoteSnapshotRequestDuringStreamSetup;
@property (nonatomic, readonly) NSMutableArray *pendingSnapshotRequestDuringStreamSetup;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) HMDSnapshotCacheRequestHandler *snapshotCacheRequestHandler;
@property (nonatomic, readonly) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (nonatomic, readonly) HMDSnapshotSlotManager *snapshotSlotManager;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)auditSnapshotDirectories:(id)arg1;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_endSession:(id)arg1 error:(id)arg2;
- (id)_findSessionWithID:(id)arg1;
- (void)_handleCreateSnapshotFromBulletinContext:(id)arg1;
- (void)_handleReleaseSnapshot:(id)arg1;
- (void)_handleSnapshotReceived:(id)arg1;
- (void)_handleSnapshotRemoteRequest:(id)arg1;
- (void)_handleSnapshotRequest:(id)arg1;
- (void)_handleSnapshotSendFailure:(id)arg1;
- (void)_issueGetSnapshot:(id)arg1;
- (void)_message:(id)arg1 errored:(long long)arg2;
- (void)_removeAllPendingRequests:(id)arg1;
- (void)_sendRemoteResponse:(id)arg1 sessionID:(id)arg2;
- (void)_sendResponse:(id)arg1 error:(id)arg2 sessionID:(id)arg3;
- (void)_sendSnapshotRequestLocal:(id)arg1;
- (void)_sendSnapshotRequestRelayInitiator:(id)arg1;
- (void)_sendSnapshotRequestRelayReceiver:(id)arg1;
- (void)_sendSnapshotRequestRelayStream:(id)arg1;
- (void)_sendSnapshotRequestStreamInitiator:(id)arg1;
- (void)_sendSnapshotRequestStreamReceiver:(id)arg1;
- (void)_sendStreamSnapshotRequest:(id)arg1;
- (void)_startedGettingImageFor:(id)arg1 error:(id)arg2;
- (id)accessory;
- (id)currentLocalSession;
- (id)currentRemoteSessions;
- (void)dealloc;
- (id)getMostRecentSnapshotRequest;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 uniqueIdentifier:(id)arg4 logID:(id)arg5 msgDispatcher:(id)arg6 networkMonitor:(id)arg7 residentMessageHandler:(id)arg8;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (void)monitorForEventsForServices:(id)arg1;
- (id)monitorServicesManager;
- (id)msgDispatcher;
- (id)networkMonitor;
- (id)notificationRegistration;
- (id)pendingRemoteSnapshotRequestDuringStreamSetup;
- (id)pendingSnapshotRequestDuringStreamSetup;
- (void)registerForMessages;
- (void)releaseSnapshot:(id)arg1;
- (id)residentMessageHandler;
- (void)setCurrentLocalSession:(id)arg1;
- (void)setCurrentRemoteSessions:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;
- (id)snapshotCacheRequestHandler;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelaySender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotRelayStream:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (id)snapshotRequestHandler;
- (id)snapshotSlotManager;
- (void)snapshotStreamReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotStreamReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;
- (id)streamSnapshotHandler;
- (void)streamSnapshotHandler:(id)arg1 didChangeStreamSetupInProgress:(bool)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (void)takeSnapshot:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)uniqueIdentifier;
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
