<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDModifyRecordsOperation.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDModifyRecordsOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDModifyRecordsOperation : CKDDatabaseOperation {
    bool  _atomic;
    CKDRecordCache * _cache;
    NSData * _cachedUserBoundaryKeyData;
    bool  _canSetPreviousProtectionEtag;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    CKDDecryptRecordsOperation * _decryptOperation;
    id /* block */  _deleteCompletionBlock;
    NSMapTable * _handlersByAsset;
    NSMapTable * _handlersByAssetNeedingRecordFetch;
    NSDictionary * _handlersByRecordID;
    bool  _haveOutstandingHandlers;
    NSMutableDictionary * _modifyHandlersByZoneID;
    NSObject<OS_dispatch_queue> * _modifyRecordsQueue;
    NSDictionary * _parentsByRecordID;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    id /* block */  _recordsInFlightBlock;
    NSArray * _recordsToSave;
    bool  _retriedRecords;
    bool  _retryPCSFailures;
    int  _saveAttempts;
    id /* block */  _saveCompletionBlock;
    long long  _savePolicy;
    id /* block */  _saveProgressBlock;
    bool  _shouldModifyRecordsInDatabase;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
    CKDProtocolTranslator * _translator;
    bool  _trustProtectionData;
    id /* block */  _uploadCompletionBlock;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) CKDRecordCache *cache;
@property (nonatomic, copy) NSData *cachedUserBoundaryKeyData;
@property (nonatomic) bool canSetPreviousProtectionEtag;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, copy) id /* block */ deleteCompletionBlock;
@property (nonatomic, retain) NSMapTable *handlersByAsset;
@property (nonatomic, retain) NSMapTable *handlersByAssetNeedingRecordFetch;
@property (nonatomic, retain) NSDictionary *handlersByRecordID;
@property (nonatomic, readonly) bool hasDecryptOperation;
@property (nonatomic) bool haveOutstandingHandlers;
@property (nonatomic, retain) NSMutableDictionary *modifyHandlersByZoneID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modifyRecordsQueue;
@property (nonatomic, retain) NSDictionary *parentsByRecordID;
@property (nonatomic, retain) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, readonly) CKDDecryptRecordsOperation *recordDecryptOperation;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, copy) id /* block */ recordsInFlightBlock;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) bool retriedRecords;
@property (nonatomic) bool retryPCSFailures;
@property (nonatomic) int saveAttempts;
@property (nonatomic, copy) id /* block */ saveCompletionBlock;
@property (nonatomic) long long savePolicy;
@property (nonatomic, copy) id /* block */ saveProgressBlock;
@property (nonatomic) bool shouldModifyRecordsInDatabase;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;
@property (nonatomic, readonly) CKDProtocolTranslator *translator;
@property (nonatomic) bool trustProtectionData;
@property (nonatomic, copy) id /* block */ uploadCompletionBlock;

+ (bool)_claimPackagesInRecord:(id)arg1 error:(id*)arg2;
+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_applySideEffects;
- (void)_clearProtectionDataIfNotEntitled;
- (id)_containerIDsNotToTopoSort;
- (void)_continueRecordsModify;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 handlersByRecordID:(id)arg4;
- (void)_determineEnvironment;
- (void)_didCompleteRecordFetchOperation:(id)arg1 assetArrayByRecordID:(id)arg2;
- (void)_enumerateHandlersInState:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)_fetchAssetRecordsForRereferencing;
- (void)_fetchContainerScopedUserID;
- (void)_fetchRecordPCSData;
- (void)_fetchSharePCSData;
- (void)_fetchShareParticipants;
- (void)_fetchUserBoundaryKey;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleDecryptionFailure:(id)arg1 forRecordID:(id)arg2;
- (void)_handleRecordDeleted:(id)arg1 handler:(id)arg2 responseCode:(id)arg3;
- (void)_handleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 serverRecord:(id)arg8;
- (bool)_hasHandlerInState:(unsigned long long)arg1;
- (void)_markRecordHandlersAsUploaded;
- (void)_performCallbacksForAtomicZoneHandlers:(id)arg1;
- (void)_performCallbacksForNonAtomicZoneHandlers:(id)arg1;
- (void)_performHandlerCallbacks;
- (id)_prepareAssetsForUpload;
- (void)_prepareForUpload;
- (void)_prepareParentPCS;
- (bool)_prepareRecordsForSave;
- (void)_reallyHandleRecordSaved:(id)arg1 handler:(id)arg2 etag:(id)arg3 dateStatistics:(id)arg4 responseCode:(id)arg5 keysAssociatedWithETag:(id)arg6 recordForOplockFailure:(id)arg7 decryptedServerRecord:(id)arg8;
- (void)_reportRecordsInFlight;
- (void)_setBoundaryKeyOnAssetsToUpload:(id)arg1;
- (bool)_shouldToposortInContainerID:(id)arg1;
- (bool)_topoSortRecords;
- (id)_topoSortRecordsForHandlers:(id)arg1;
- (void)_uploadAssets;
- (void)_verifyRecordEncryption;
- (id)activityCreate;
- (void)assetArrayByRecordID:(id)arg1 didFetchRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (bool)atomic;
- (id)cache;
- (id)cachedUserBoundaryKeyData;
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;
- (bool)canSetPreviousProtectionEtag;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)deleteCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id /* block */)deleteCompletionBlock;
- (void)finishWithError:(id)arg1;
- (id)handlersByAsset;
- (id)handlersByAssetNeedingRecordFetch;
- (id)handlersByRecordID;
- (bool)hasDecryptOperation;
- (bool)haveOutstandingHandlers;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)modifyHandlersByZoneID;
- (id)modifyRecordsQueue;
- (id)nameForState:(unsigned long long)arg1;
- (id)parentsByRecordID;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordDecryptOperation;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id /* block */)recordsInFlightBlock;
- (id)recordsToSave;
- (bool)retriedRecords;
- (bool)retryPCSFailures;
- (int)saveAttempts;
- (void)saveCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id /* block */)saveCompletionBlock;
- (long long)savePolicy;
- (id /* block */)saveProgressBlock;
- (void)setAtomic:(bool)arg1;
- (void)setCache:(id)arg1;
- (void)setCachedUserBoundaryKeyData:(id)arg1;
- (void)setCanSetPreviousProtectionEtag:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeleteCompletionBlock:(id /* block */)arg1;
- (void)setHandlersByAsset:(id)arg1;
- (void)setHandlersByAssetNeedingRecordFetch:(id)arg1;
- (void)setHandlersByRecordID:(id)arg1;
- (void)setHaveOutstandingHandlers:(bool)arg1;
- (void)setModifyHandlersByZoneID:(id)arg1;
- (void)setModifyRecordsQueue:(id)arg1;
- (void)setParentsByRecordID:(id)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsInFlightBlock:(id /* block */)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setRetriedRecords:(bool)arg1;
- (void)setRetryPCSFailures:(bool)arg1;
- (void)setSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlock:(id /* block */)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSaveProgressBlock:(id /* block */)arg1;
- (void)setShouldModifyRecordsInDatabase:(bool)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (void)setTrustProtectionData:(bool)arg1;
- (void)setUploadCompletionBlock:(id /* block */)arg1;
- (bool)shouldModifyRecordsInDatabase;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;
- (id)translator;
- (bool)trustProtectionData;
- (id /* block */)uploadCompletionBlock;

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
