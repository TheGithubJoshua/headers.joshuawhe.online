<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSCloudHistory.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSCloudHistory.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSCloudHistory : NSObject <WBSCloudKitThrottlerDataStore> {
    bool  _cloudHistoryEnabled;
    NSObject<OS_dispatch_queue> * _cloudHistoryQueue;
    WBSCloudHistoryConfiguration * _configuration;
    WBSCloudKitThrottler * _fetchChangesThrottler;
    bool  _fetchChangesWhenBackoffTimerFires;
    bool  _fetchChangesWhenHistoryLoads;
    id /* block */  _fetchCompletionHandler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _fetchOperationSuddenTerminationDisabler;
    WBSHistory * _history;
    <NSObject> * _historyWasLoadedObserver;
    unsigned long long  _numberOfDevicesInSyncCircle;
    WBSCloudHistoryPushAgentProxy * _pushAgent;
    WBSOneShotTimer * _pushNotificationFetchTimer;
    bool  _removedHistoryItemsArePendingSave;
    bool  _replayLongLivedSaveOperationHasBeenPerformed;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _replayLongLivedSaveOperationSuddenTerminationDisabler;
    WBSCloudKitThrottler * _saveChangesThrottler;
    bool  _saveChangesWhenBackoffTimerFires;
    bool  _saveChangesWhenHistoryLoads;
    id /* block */  _saveCompletionHandler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _saveOperationSuddenTerminationDisabler;
    WBSOneShotTimer * _serverBackoffTimer;
    <WBSCloudHistoryDataStore> * _store;
    NSMutableDictionary * _syncCircleSizeRetrievalCompletionHandlersByOperation;
    WBSCloudKitThrottler * _syncCircleSizeRetrievalThrottler;
}

@property (getter=isCloudHistoryEnabled, nonatomic) bool cloudHistoryEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfDevicesInSyncCircle;
@property (nonatomic) bool removedHistoryItemsArePendingSave;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)arg1;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSaveChangesThrottlerPolicyString;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 withPriority:(long long)arg2;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_getServerChangeTokenDataWithCompletion:(id /* block */)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_initializePushNotificationSupport;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(id /* block */)arg1;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_persistedLongLivedSaveOperationID:(id*)arg1 databaseGeneration:(long long*)arg2;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(bool)arg1;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(bool)arg3;
- (void)_processPendingPushNotifications;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(id /* block */)arg1;
- (void)_registerFetchCompletionHandler:(id /* block */)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_registerSaveCompletionHandler:(id /* block */)arg1;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (long long)_resultFromError:(id)arg1;
- (void)_saveChangesWhenHistoryLoads;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(bool)arg3 longLivedOperationPersistenceCompletion:(id /* block */)arg4 withCallback:(id /* block */)arg5;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)_setPushNotificationAreInitialized:(bool)arg1;
- (void)_setServerChangeToken:(id)arg1;
- (void)_updateDeviceCountInResponseToPushNotification;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(id /* block */)arg2;
- (void)_updateThrottlerPolicies;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)dealloc;
- (void)fetchAndMergeChanges;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChangesBypassingThrottler:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(id /* block */)arg2;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)isCloudHistoryEnabled;
- (unsigned long long)numberOfDevicesInSyncCircle;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (bool)removedHistoryItemsArePendingSave;
- (void)resetForAccountChange;
- (void)saveChangesBypassingThrottler:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)saveChangesToCloudHistoryStore;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)setCloudHistoryEnabled:(bool)arg1;
- (void)setNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (void)setRemovedHistoryItemsArePendingSave:(bool)arg1;

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
