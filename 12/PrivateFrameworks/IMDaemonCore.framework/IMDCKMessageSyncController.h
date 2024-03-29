<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMDCKMessageSyncController.h</title>
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

/PrivateFrameworks/IMDaemonCore.framework/IMDCKMessageSyncController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore (1000)
 */

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController {
    IMDCKMessageSyncCKOperationFactory * _CKOperationFactory;
    NSObject<OS_xpc_object> * _activity;
    CKServerChangeToken * _archivedRecordSyncToken;
    NSObject<OS_dispatch_queue> * _ckQueue;
    unsigned long long  _deviceConditionsToCheck;
    IMDRecordZoneManager * _recordZoneManager;
    <IMDCKSyncTokenStore> * _syncTokenStore;
    NSMutableDictionary * _visitedChats;
}

@property (nonatomic, retain) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;
@property NSObject<OS_xpc_object> *activity;
@property (nonatomic, retain) CKServerChangeToken *archivedRecordSyncToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic) unsigned long long deviceConditionsToCheck;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <IMDCKSyncTokenStore> *syncTokenStore;
@property (nonatomic, retain) NSMutableDictionary *visitedChats;

+ (id)sharedInstance;

- (id)CKOperationFactory;
- (id)_changeTokenKey;
- (id)_chatRegistry;
- (id)_ckUtilitiesInstance;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteStingRaySyncToken;
- (bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (bool)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1;
- (void)_fetchArchivedRecordsIfNeeded:(bool)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 WithCompletionBlock:(id /* block */)arg4;
- (void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 completionBlock:(id /* block */)arg4;
- (bool)_isCoreDuetSyncForMaxBatchCount:(long long)arg1;
- (bool)_isDiskSpaceAvailableForSyncType:(long long)arg1 currentBatchCount:(long long)arg2;
- (bool)_isValidCKRecordToSync:(id)arg1;
- (bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(id /* block */)arg2;
- (void)_kickOffWriteOnCKQueueWithCompletion:(id /* block */)arg1;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (unsigned long long)_messageDeleteBatchSize;
- (id)_messageRecordSalt;
- (bool)_messageZoneCreated;
- (id)_messageZoneID;
- (void)_migrateSyncTokens;
- (void)_noteSyncEnded;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_numberOfMessagesToUpload;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(bool)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 NSError:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(id /* block */)arg2;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(bool)arg4 writeCompletionBlock:(id /* block */)arg5;
- (void)_processRecordChange:(id)arg1;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2;
- (void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(bool)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(bool)arg9 completionBlock:(id /* block */)arg10;
- (id)_recordKeyManagerSharedInstance;
- (id)_recordsToSave;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1;
- (void)_resetArvchivedRecordSyncToken;
- (void)_resetSyncToken;
- (void)_scheduleOperation:(id)arg1;
- (id)_sharedIMDMessageStore;
- (bool)_shouldDeferCoreDuetMessagesSync;
- (bool)_shouldFetchArchivedRecords:(id)arg1;
- (bool)_shouldMarkAllMessagesAsNeedingSync;
- (id)_syncOperationGroupName;
- (void)_updateAllMessagesAsNotNeedingReUpload;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_writeDirtyMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (id)activity;
- (id)archivedRecordSyncToken;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (void)dealloc;
- (void)deleteMessageSyncToken;
- (void)deleteMessagesZone;
- (unsigned long long)deviceConditionsToCheck;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)recordZoneManager;
- (void)setActivity:(id)arg1;
- (void)setArchivedRecordSyncToken:(id)arg1;
- (void)setCKOperationFactory:(id)arg1;
- (void)setDeviceConditionsToCheck:(unsigned long long)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (void)setVisitedChats:(id)arg1;
- (long long)syncControllerRecordType;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)syncTokenStore;
- (id)visitedChats;

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
