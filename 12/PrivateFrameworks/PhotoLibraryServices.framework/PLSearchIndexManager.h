<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLSearchIndexManager.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLSearchIndexManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLSearchIndexManager : NSObject {
    bool  __indexing;
    id /* block */  __inqAfterIndexingDidIterate;
    NSCountedSet * __pauseReasons;
    PLSearchIndexDateFormatter * _dateFormatter;
    PSIDatabase * _db;
    bool  _hasScheduledCloseIndex;
    bool  _hasValidSearchIndex;
    NSMutableDictionary * _inqGraphDataByUUID;
    NSMutableDictionary * _inqSynonymsByIndexCategoryMask;
    NSDictionary * _inqUUIDsToProcess;
    bool  _isTrackingRebuild;
    PLKeywordManager * _keywordManager;
    double  _lastIndexingStartTime;
    PLPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _rebuildReason;
    bool  _receivedUpdatesWhileIndexing;
    <PLSearchIndexManagerSceneTaxonomyProxy> * _sceneTaxonomyProxy;
    NSString * _searchIndexDirectory;
    PLSearchMetadataStore * _searchMetadataStore;
    NSDictionary * _searchSystemInfo;
    PLClientServerTransaction * _serverTransaction;
    bool  _startedIndexing;
    PLThrottleTimer * _throttleTimer;
    long long  _updateState;
    PLZeroKeywordStore * _zeroKeywordStore;
}

@property (getter=_isIndexing, setter=_setIndexing:) bool _indexing;
@property (setter=_setInqAfterIndexingDidIterate:, nonatomic, copy) id /* block */ _inqAfterIndexingDidIterate;
@property (readonly) PLPhotoLibrary *_inqPhotoLibrary;
@property (nonatomic, readonly, copy) NSCountedSet *_pauseReasons;
@property (readonly) unsigned long long enqueuedUUIDsCount;
@property (getter=isIndexingPaused, readonly) bool indexingPaused;

+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2;
+ (id)_searchMetadataStorePathInDirectory:(id)arg1;
+ (id)_zeroKeywordStorePathInDirectory:(id)arg1;
+ (int)currentSearchIndexVersion;
+ (id)defaultDatabasePath;
+ (id)defaultSearchMetadataStorePath;
+ (id)defaultZeroKeywordStorePath;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchMomentUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (id)localeForSearchIndex;
+ (Class)sceneTaxonomyProxyClass;
+ (id)searchIndexManagerLog;
+ (void)setSceneTaxonomyProxyClass:(Class)arg1;
+ (id)sharedInstance;

- (void)_appendBusinessCategories:(id)arg1 toTrip:(id)arg2;
- (void)_appendBusinessNames:(id)arg1 toTrip:(id)arg2;
- (void)_appendDates:(id)arg1 withDateFormatter:(id)arg2 withSynonyms:(id)arg3 toTrip:(id)arg4;
- (void)_appendHolidays:(id)arg1 toTrip:(id)arg2;
- (void)_appendHomeToTrip:(id)arg1;
- (void)_appendLocationsInfo:(id)arg1 toTrip:(id)arg2;
- (void)_appendMeanings:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendPOIs:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendPersonsWithUUIDs:(id)arg1 toTrip:(id)arg2;
- (void)_appendPublicEventCategories:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendPublicEventStrings:(id)arg1 toTrip:(id)arg2 forSearchIndexCategory:(unsigned long long)arg3;
- (void)_appendROIs:(id)arg1 withSynonyms:(id)arg2 toTrip:(id)arg3;
- (void)_appendScenesWithIdentifiers:(id)arg1 toTrip:(id)arg2 sceneTaxonomyProxy:(id)arg3;
- (void)_appendSocialGroupIdentifiers:(id)arg1 toTrip:(id)arg2;
- (void)_appendWorkText:(id)arg1 toTrip:(id)arg2;
- (id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_cxindexProgressPath;
- (id)_dbPath;
- (id)_dbSearchSystemInfoPath;
- (void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(id /* block */)arg3;
- (id)_graphDataProcessPath;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (id /* block */)_inqAfterIndexingDidIterate;
- (void)_inqCloseIndexIfAbleOrForce:(bool)arg1 isDelete:(bool)arg2;
- (void)_inqCloseSearchIndexAndDelete:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqEndTrackingUpdateIfNeeded;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(bool)arg1;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSceneTaxonomyProxyExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqEnsureSearchSystemInfoExists;
- (void)_inqIndexPhotoLibrary;
- (bool)_inqIsIndexingPaused;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1;
- (id)_inqPhotoLibrary;
- (long long)_inqReasonIfSearchIndexIsInvalid;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(id /* block */)arg2;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqSetIndexingPaused:(bool)arg1 reason:(id)arg2;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (bool)_inqUpdateLocale;
- (bool)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (bool)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (bool)_inqUpdateVersion;
- (bool)_inqUpdateWordEmbeddingVersion:(id)arg1;
- (bool)_isIndexing;
- (void)_localeDidChange:(id)arg1;
- (id)_oldDbPath;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(id /* block */)arg2;
- (void)_onQueueSync:(id /* block */)arg1;
- (id)_pauseReasons;
- (bool)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (id)_searchMetadataStorePath;
- (void)_setIndexing:(bool)arg1;
- (void)_setIndexingPaused:(bool)arg1 synchronously:(bool)arg2 reason:(id)arg3;
- (void)_setInqAfterIndexingDidIterate:(id /* block */)arg1;
- (id)_synonymsProcessPath;
- (void)_throttleTimerFire:(id)arg1;
- (id)_tripUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (id)_zeroKeywordStorePath;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(id /* block */)arg3;
- (void)applyUpdates:(id)arg1 completion:(id /* block */)arg2;
- (void)closeSearchIndexWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg1;
- (unsigned long long)enqueuedUUIDsCount;
- (void)ensureSearchIndexExists;
- (void)getSearchIndexContentsForTrip:(id)arg1 fromTripKeywords:(id)arg2 withDateFormatter:(id)arg3 synonymsDictionaries:(id)arg4 sceneTaxonomyProxy:(id)arg5;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (bool)isIndexingPaused;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(id /* block */)arg2;
- (void)unpauseIndexingWithReason:(id)arg1;

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
