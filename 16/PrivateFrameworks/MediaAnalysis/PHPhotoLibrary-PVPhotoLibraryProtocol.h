//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol)
+ (id)_defaultFacePropertySets;	// IMP=0x0010000000005f60
+ (id)_defaultAssetPropertySets;	// IMP=0x0010000000005ec8
+ (id)_phPeopleSortDescriptors;	// IMP=0x0010000000005e2a
+ (id)_phFaceSortDescriptors;	// IMP=0x0010000000005d8c
+ (id)vcp_defaultMediaAnalysisDatabaseFilepath;	// IMP=0x001000000009ac47
+ (id)vcp_defaultURL;	// IMP=0x001000000009abdb
+ (id)vcp_defaultPhotoLibrary;	// IMP=0x001000000009ab70
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x00100000000085eb
- (id)pv_lastAssetDate;	// IMP=0x001000000000848c
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x0010000000008071
- (float)pv_faceProcessingProgress;	// IMP=0x001000000000805a
- (double)_progressFromWorkerStatesDictionary:(id)arg1;	// IMP=0x0010000000007dee
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x0010000000007d64
- (id)pv_fetchFaceGroups;	// IMP=0x0010000000007d0d
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x0010000000007c2c
- (id)pv_fetchAssetsForPerson:(id)arg1;	// IMP=0x0010000000007b4b
- (id)pv_fetchAssetsInMoment:(id)arg1;	// IMP=0x0010000000007ac1
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x0010000000007a37
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x001000000000797a
- (id)pv_fetchMomentsForPerson:(id)arg1;	// IMP=0x0010000000007968
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x00100000000078ab
- (id)pv_fetchMoments;	// IMP=0x0010000000007761
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x001000000000765d
- (id)pv_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x0010000000007559
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x00100000000070d5
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x0010000000006ff8
- (id)pv_fetchFacesForPerson:(id)arg1;	// IMP=0x0010000000006ee2
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x0010000000006dde
- (unsigned long long)pv_numberOfFacesWithFaceprints;	// IMP=0x0010000000006cc0
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x0010000000006bce
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x0010000000006b00
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x0010000000006a32
- (id)pv_fetchPersonsInMoment:(id)arg1;	// IMP=0x0010000000006940
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x0010000000006468
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x0010000000006376
- (id)pv_persistentStorageDirectoryURL;	// IMP=0x00100000000060ae
- (id)_defaultAssetFetchOptions;	// IMP=0x001000000000603a
- (id)_defaultFetchOptions;	// IMP=0x0010000000005fe6
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0010000000005f4e
- (_Bool)vcp_requiresDownloadForTask:(unsigned long long)arg1;	// IMP=0x001000000009c5e6
- (id)vcp_description;	// IMP=0x001000000009c596
- (unsigned long long)vcp_requiredFaceLibraryProcessingSubTasks;	// IMP=0x001000000009c578
- (_Bool)vcp_requiresProcessingForTask:(unsigned long long)arg1;	// IMP=0x001000000009c483
- (_Bool)vcp_isSyndicationLibrary;	// IMP=0x001000000009c469
- (unsigned long long)mad_countOfUnclusteredFaces;	// IMP=0x001000000009c3bc
- (id)mad_unclusteredFacesFetchOptions;	// IMP=0x001000000009c2c0
- (id)vcp_faceAnalysisStateFilepath;	// IMP=0x001000000009c1ee
- (id)vcp_vipModelLastGenerationDateForVIPType:(unsigned long long)arg1;	// IMP=0x001000000009c05a
- (id)vcp_vipModelFilepathForVIPType:(unsigned long long)arg1;	// IMP=0x001000000009be5e
- (void)vcp_setAnalysisPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000009bcc6
- (void)_updateAnalysisPreferencesWithEntries:(id)arg1 keysToRemove:(id)arg2;	// IMP=0x001000000009b906
- (id)vcp_analysisPreferences;	// IMP=0x001000000009b84f
- (id)_analysisPreferencesURL;	// IMP=0x001000000009b7e4
- (id)vcp_visionCacheStorageDirectoryURL;	// IMP=0x001000000009b60e
- (id)vcp_libraryScaleShortDescription;	// IMP=0x001000000009b588
- (_Bool)vcp_allowInMemoryDownload;	// IMP=0x001000000009b518
- (_Bool)vcp_supportsInMemoryDownload;	// IMP=0x001000000009b4df
- (_Bool)vcp_eligibleForStreaming:(_Bool)arg1;	// IMP=0x001000000009b49d
- (_Bool)vcp_isCPLDownloadComplete;	// IMP=0x001000000009b3d4
- (_Bool)vcp_isCPLSyncComplete;	// IMP=0x001000000009b30b
- (_Bool)vcp_isCPLEnabled;	// IMP=0x001000000009b2f9
- (unsigned long long)vcp_assetCountWithInternalPredicate:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x001000000009b03f
- (unsigned long long)vcp_assetCountWithMediaType:(long long)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x001000000009af82
- (unsigned long long)vcp_assetCountForTaskID:(unsigned long long)arg1;	// IMP=0x001000000009aec8
- (_Bool)vcp_anyAssetsForTaskID:(unsigned long long)arg1;	// IMP=0x001000000009adf5
- (id)vcp_mediaAnalysisDatabaseFilepath;	// IMP=0x001000000009ad81
- (id)vcp_mediaAnalysisDirectory;	// IMP=0x001000000009acb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
