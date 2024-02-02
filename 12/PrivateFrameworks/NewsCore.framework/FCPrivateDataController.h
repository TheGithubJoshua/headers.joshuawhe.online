<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCPrivateDataController.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCPrivateDataController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCPrivateDataController : NSObject <FCCKZonePruningAssistant, FCCKZoneRestorationSource, FCCommandQueueDelegate, FCJSONEncodableObjectProviding, FCPrivateRecordSyncManagerDelegate, FCPrivateZoneSyncManagerDelegate> {
    unsigned long long  _changeCount;
    FCCommandQueue * _commandQueue;
    FCCloudContext * _context;
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
    bool  _preparedForUse;
    FCPushNotificationCenter * _pushNotificationCenter;
    NSHashTable * _stateObservers;
    NSString * _storeDirectory;
    NSArray * _syncManagers;
    FCAsyncSerialQueue * _syncQueue;
    bool  _syncingEnabled;
    bool  _waitingForFirstSync;
}

@property (nonatomic) unsigned long long changeCount;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, readonly) FCCloudContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic, readonly) bool dirty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSHashTable *observers;
@property (getter=hasBeenPreparedForUse, nonatomic) bool preparedForUse;
@property (nonatomic, retain) FCPushNotificationCenter *pushNotificationCenter;
@property (nonatomic, retain) NSHashTable *stateObservers;
@property (nonatomic, copy) NSString *storeDirectory;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *syncManagers;
@property (nonatomic, retain) FCAsyncSerialQueue *syncQueue;
@property (getter=isSyncingEnabled, nonatomic, readonly) bool syncingEnabled;
@property (getter=isSyncingEnabled, nonatomic) bool syncingEnabled;
@property (getter=isWaitingForFirstSync) bool waitingForFirstSync;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)internalLocalStoreKeys;
+ (bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_markAsDirtyAndNotifyObservers:(bool)arg1;
- (id)_newSyncState;
- (void)_notifyObservers;
- (void)_possiblySimulateCrashWithMessage:(id)arg1;
- (long long)_qualityOfServiceForFirstSync:(bool)arg1;
- (long long)_qualityOfServiceForNextSync;
- (void)_serialSyncWithCompletion:(id /* block */)arg1;
- (void)_syncWithCondition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addStateObserver:(id)arg1;
- (void)assertReadyForUse;
- (bool)canHelpPruneZoneName:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (unsigned long long)changeCount;
- (id)commandQueue;
- (long long)commandQueue:(id)arg1 qualityOfServiceForCommand:(id)arg2;
- (id)context;
- (void)createLocalStore;
- (void)dealloc;
- (void)disableSyncing;
- (void)enableSyncing;
- (void)forceSyncWithCompletion:(id /* block */)arg1;
- (void)handleSyncCompletion;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasBeenPreparedForUse;
- (id)init;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (bool)isBackedByAnyRecordZoneIDsInSet:(id)arg1;
- (bool)isDirty;
- (bool)isSyncingEnabled;
- (bool)isWaitingForFirstSync;
- (id)jsonEncodableObject;
- (void)loadLocalCachesFromStore;
- (id)localStore;
- (void)manualDirty;
- (void)mergeLocalStoreWithCloud;
- (id)observers;
- (void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareForUse;
- (id)pruneRecords:(id)arg1 forZoneName:(id)arg2;
- (id)pushNotificationCenter;
- (void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)recordSyncManagerNotifyObservers:(id)arg1;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeStateObserver:(id)arg1;
- (void)saveWithCompletion:(id /* block */)arg1;
- (void)setChangeCount:(unsigned long long)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setPreparedForUse:(bool)arg1;
- (void)setPushNotificationCenter:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setStoreDirectory:(id)arg1;
- (void)setSyncManagers:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncingEnabled:(bool)arg1;
- (void)setWaitingForFirstSync:(bool)arg1;
- (double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1;
- (unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1;
- (id)stateObservers;
- (id)storeDirectory;
- (id)syncManagers;
- (id)syncQueue;
- (void)syncWithCallbackQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)syncWithCompletion:(id /* block */)arg1;
- (void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2;
- (void)zoneSyncManagerNotifyObservers:(id)arg1;

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