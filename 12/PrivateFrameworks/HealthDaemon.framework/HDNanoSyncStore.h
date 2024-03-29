<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDNanoSyncStore.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDNanoSyncStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDNanoSyncStore : NSObject <HDSyncStore, NRDevicePropertyObserver> {
    bool  _active;
    <HDNanoSyncStoreDelegate> * _delegate;
    NSMutableDictionary * _expectedSequenceNumbers;
    IDSDevice * _identityServicesDevice;
    NSMutableArray * _incomingSyncObserverTimers;
    bool  _invalidated;
    NSDate * _lastCompleteIncomingSyncDate;
    NSError * _lastCompleteIncomingSyncError;
    NSDate * _lastIncompleteIncomingSyncDate;
    NSUUID * _lastIncompleteIncomingSyncUUID;
    bool  _master;
    NRDevice * _nanoRegistryDevice;
    bool  _needsSyncOnUnlock;
    NSArray * _orderedSyncEntities;
    HDNanoPairingEntity * _pairingEntity;
    NSMutableDictionary * _pendingRequestContexts;
    HDProfile * _profile;
    int  _protocolVersion;
    NSString * _remoteProductType;
    NSString * _remoteSystemBuildVersion;
    HDNanoSyncRestoreSession * _restoreSession;
    long long  _restoreState;
}

@property (getter=isActive, readonly) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDNanoSyncStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) IDSDevice *device;
@property (readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *healthUUID;
@property (nonatomic, retain) IDSDevice *identityServicesDevice;
@property (getter=isInvalidated, readonly) bool invalidated;
@property (readonly) NSDate *lastInactiveDate;
@property (getter=isMaster, readonly) bool master;
@property (nonatomic, retain) NRDevice *nanoRegistryDevice;
@property (readonly) NSUUID *nanoRegistryUUID;
@property (nonatomic) bool needsSyncOnUnlock;
@property (nonatomic, retain) NSUUID *persistentUUID;
@property (nonatomic) HDProfile *profile;
@property (readonly) int protocolVersion;
@property (readonly, copy) NSString *remoteProductType;
@property (readonly, copy) NSString *remoteSystemBuildVersion;
@property (getter=isRestoreComplete, nonatomic, readonly) bool restoreComplete;
@property (nonatomic, readonly) HDNanoSyncRestoreSession *restoreSession;
@property (nonatomic, readonly) long long restoreState;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly) long long syncStoreType;

+ (id)_observedDeviceProperties;
+ (id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3;
+ (id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 protocolVersion:(int)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)_notifyIncomingSyncObservers;
- (bool)_savePairingEntity;
- (void)_setRestoreState:(long long)arg1;
- (void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2;
- (id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(id /* block */)arg3;
- (bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (void)configureOutgoingResponse:(id)arg1;
- (id)createRequestWithMessageID:(unsigned short)arg1;
- (id)databaseIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)device;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)deviceInfo;
- (id)deviceName;
- (id)diagnosticDescription;
- (void)didReceiveRequestWithChangeSet:(id)arg1;
- (bool)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (void)finishRestoreSessionWithError:(id)arg1;
- (id)healthUUID;
- (id)identityServicesDevice;
- (void)invalidate;
- (bool)isActive;
- (bool)isInvalidated;
- (bool)isMaster;
- (bool)isRestoreComplete;
- (id)lastInactiveDate;
- (id)nanoRegistryDevice;
- (id)nanoRegistryUUID;
- (bool)needsSyncOnUnlock;
- (id)orderedSyncEntities;
- (id)pendingRequestContextForUUID:(id)arg1;
- (id)persistentUUID;
- (id)profile;
- (int)protocolVersion;
- (id)remoteProductType;
- (id)remoteSystemBuildVersion;
- (void)removeExpiredIncomingSyncObservers;
- (void)removePendingRequestContextForUUID:(id)arg1;
- (id)restoreSession;
- (long long)restoreState;
- (void)setDelegate:(id)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (void)setHealthUUID:(id)arg1;
- (void)setIdentityServicesDevice:(id)arg1;
- (void)setNanoRegistryDevice:(id)arg1;
- (void)setNeedsSyncOnUnlock:(bool)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setProfile:(id)arg1;
- (bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (bool)shouldEnforceSequenceOrdering;
- (id)sourceBundleIdentifier;
- (bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (long long)syncStoreType;
- (bool)validatePairingUUIDsWithIncomingMessage:(id)arg1;
- (bool)validateVersionWithIncomingMessage:(id)arg1;

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
