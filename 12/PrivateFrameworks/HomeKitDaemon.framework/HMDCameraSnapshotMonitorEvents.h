<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDCameraSnapshotMonitorEvents.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDCameraSnapshotMonitorEvents.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMDBulletinBoard * _bulletinBoard;
    NSString * _bulletinImagesDirectory;
    NSMutableSet * _characteristicsList;
    NSString * _logID;
    NSMutableSet * _monitoredCharacteristicsList;
    HMFMessageDispatcher * _msgDispatcher;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _snapShotNotificationResponseTimers;
    HMDCameraSnapshotManager * _snapshotManager;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) HMDBulletinBoard *bulletinBoard;
@property (nonatomic, readonly) NSString *bulletinImagesDirectory;
@property (nonatomic, readonly) NSMutableSet *characteristicsList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSMutableSet *monitoredCharacteristicsList;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSMutableSet *snapShotNotificationResponseTimers;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2;
- (void)_enableNotificationForCharacteristics:(id)arg1 newMonitoredCharacteristicsList:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleRemoteNotification:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_monitorForEventsForServices:(id)arg1;
- (void)_removeBulletins:(id)arg1 sessionID:(id)arg2;
- (void)_sendReleaseSnapshot:(id)arg1;
- (void)_subscribeToNotifications;
- (id)accessory;
- (id)bulletinBoard;
- (id)bulletinImagesDirectory;
- (id)characteristicsList;
- (void)dealloc;
- (void)handleAccessoryReachable:(id)arg1;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)monitorForEventsForServices:(id)arg1;
- (id)monitoredCharacteristicsList;
- (id)msgDispatcher;
- (id)notificationRegistration;
- (void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSnapShotNotificationResponseTimers:(id)arg1;
- (id)snapShotNotificationResponseTimers;
- (id)snapshotManager;
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