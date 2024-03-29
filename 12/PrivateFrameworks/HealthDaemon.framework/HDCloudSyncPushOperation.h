<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCloudSyncPushOperation.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCloudSyncPushOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCloudSyncPushOperation : NSObject <HDSyncSessionDelegate, NSProgressReporting> {
    NSMutableArray * _changeRecordsPendingPush;
    NSString * _cloudKitIdentifier;
    id /* block */  _completion;
    HDCloudSyncOperationConfiguration * _configuration;
    HDCloudSyncFetchOperationResult * _fetchOperationResult;
    bool  _isNewStoreRecord;
    NSUUID * _operationIdentifier;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasStarted;
    HDCloudSyncSequenceRecord * _sequenceRecordForPush;
    NSDate * _startTime;
    HDCloudSyncStoreRecord * _storeRecordForPush;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _HDCloudSyncSessionContext * _syncSessionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_queue_computeSequenceRecordForPushWithStoreRecord:(id)arg1;
- (void)_queue_deactivatePendingOwnerStores;
- (void)_queue_endSyncSessionWithSuccess:(bool)arg1 error:(id)arg2;
- (id)_queue_estimateSyncEntityClassesWithChangesForSession:(id)arg1;
- (id)_queue_excludedStoresForZones:(id)arg1 error:(id*)arg2;
- (bool)_queue_finalizeNextChangeRecordForUploadToSession:(id)arg1 error:(id*)arg2;
- (void)_queue_finalizePushForSession:(id)arg1;
- (id)_queue_getStoreRecordForPushZone:(id)arg1 isNewRecord:(bool*)arg2;
- (void)_queue_performSyncExcludingStoreZones:(id)arg1;
- (void)_queue_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 zoneToCreate:(id)arg3 containerID:(id)arg4 completion:(id /* block */)arg5;
- (id)_queue_pushStoreIdentifier;
- (id)_queue_pushStoreWithIdentifier:(id)arg1;
- (void)_queue_setInitialForwardProgressDateIfNecessary;
- (void)_queue_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(bool)arg2 completion:(id /* block */)arg3;
- (void)_recordForwardProgressDate;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;
- (bool)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(bool)arg2 error:(id)arg3;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSessionWillBegin:(id)arg1;

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
