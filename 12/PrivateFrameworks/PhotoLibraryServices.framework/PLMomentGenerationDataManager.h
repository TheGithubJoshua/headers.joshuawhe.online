<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLMomentGenerationDataManager.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLMomentGenerationDataManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement_Private> {
    void * _addressBook;
    PLMomentAnalyzer * _analyzer;
    NSDictionary * _generationOptions;
    PLMomentGeneration * _generator;
    bool  _isLightweightMigrationManager;
    PLXPCTransaction * _keepAliveTransaction;
    NSArray * _locationsOfInterest;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _momentGenerationLibrary;
    bool  _observingReachability;
    id /* block */  _reachabilityBlock;
    bool  _simulatesTimeout;
}

@property (nonatomic, readonly) void*_addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) PLPhotoLibrary *momentGenerationLibrary;
@property (nonatomic) bool simulatesTimeout;
@property (readonly) Class superclass;

+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (bool)isManagerMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (id)sharedMomentGenerationDataManager;

- (void*)_addressBook;
- (id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2;
- (id)_currentHomeAddressDictionary;
- (void)_finalizeInit;
- (id)_locationsOfInterest;
- (id)_metadataPath;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)_removeKeepAlive;
- (id)_serverVersionInfoFilePath;
- (void)_updateKeepAlive;
- (id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
- (id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (id)allMomentsWithError:(id*)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)analysisMetadata;
- (id)analyzer;
- (id)assetWithUniqueID:(id)arg1 error:(id*)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)deletedObjects;
- (void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)findOrCreateYearMomentListForYear:(long long)arg1;
- (id)generationOptions;
- (id)generator;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (bool)hasChanges;
- (bool)hasLocationsOfInterestInformation;
- (id)homeAddressDictionary;
- (id)initWithManagedObjectContextForLightweightMigration:(id)arg1;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (id)insertedObjects;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (bool)isMomentAnalysisNeeded;
- (bool)isMomentsSupportedOnPlatform;
- (bool)isNetworkReachable;
- (id)locationCoordinatesForAssetIDs:(id)arg1;
- (id)locationsOfInterest;
- (id)managedObjectContext;
- (id)momentAnalysisTransactionWithName:(const char *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (id)momentGenerationLibrary;
- (id)momentListContainingDate:(id)arg1 forLevel:(short)arg2 wantsEarliest:(bool)arg3;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id*)arg2;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(bool)arg3;
- (id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2;
- (id)momentsSinceDate:(id)arg1;
- (id)momentsWithinDateInterval:(id)arg1;
- (bool)needsLocationsOfInterestProcessing;
- (id)orphanedAssetIDsWithError:(id*)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)performBlock:(id /* block */)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)performBlock:(id /* block */)arg1 synchronously:(bool)arg2 priority:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)performDataTransaction:(id /* block */)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)performDataTransaction:(id /* block */)arg1 synchronously:(bool)arg2 priority:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(bool)arg2;
- (void)reloadGenerationOptions;
- (id)replayLogPath;
- (void)resetOnFailure;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
- (bool)save:(id*)arg1;
- (bool)saveAnalysisMetadata:(id)arg1;
- (bool)saveServerVersionInfo:(id)arg1;
- (id)serverVersionInfo;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMomentAnalysisNeeded:(bool)arg1;
- (void)setMomentGenerationLibrary:(id)arg1;
- (void)setSimulatesTimeout:(bool)arg1;
- (void)setupPhotoLibrary;
- (bool)simulatesTimeout;
- (void)stopObservingNetworkReachabilityChanges;
- (id)updatedObjects;
- (void)verifyAndRepairOrphanedAssets:(id)arg1;
- (bool)wantsMomentReplayLogging;
- (id)yearMomentListForYear:(long long)arg1 wantsEarliest:(bool)arg2;

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