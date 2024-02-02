//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class CLLocation, CLSAssetFaceInformationSummary, CLSAssetProcessedSignals, CLSCurationModel, NSArray, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;

@interface PHAsset (Clouseau)
+ (void)prefetchOnAssets:(id)arg1 options:(unsigned long long)arg2 curationContext:(id)arg3;	// IMP=0x001000000005c88c
+ (void)prefetchScenesOnAssets:(id)arg1;	// IMP=0x001000000005c34a
+ (id)clsAllAssetsFromFetchResult:(id)arg1 prefetchOptions:(unsigned long long)arg2 curationContext:(id)arg3;	// IMP=0x001000000005c26a
+ (void)_populateAsset:(id)arg1 withPersonUUIDs:(id)arg2 consolidatedPersonUUIDs:(id)arg3 petUUIDs:(id)arg4;	// IMP=0x001000000005c0c9
+ (id)_filterPersonUUIDs:(id)arg1 fromPersonUUIDsByAssetUUID:(id)arg2 personUUIDByMergeCandidateUUID:(id)arg3;	// IMP=0x001000000005bf91
+ (id)verifiedPersonLocalIdentifiersByAssetUUIDWithAssets:(id)arg1;	// IMP=0x001000000005bea4
+ (id)_petUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x001000000005bde0
+ (id)_personUUIDsByAssetUUIDWithAssetUUIDs:(id)arg1 personUUIDs:(id)arg2 photoLibrary:(id)arg3;	// IMP=0x001000000005bc66
+ (id)_personUUIDsByAssetUUIDWithAssets:(id)arg1 personUUIDs:(id)arg2;	// IMP=0x001000000005b9bc
+ (_Bool)isScore:(double)arg1 closeToValue:(double)arg2;	// IMP=0x001000000005b99b
+ (unsigned long long)clsPrefetchOptionsForKeyAsset;	// IMP=0x001000000005b990
- (_Bool)clsFaceInformationArePrefetched;	// IMP=0x001000000005b95e
- (_Bool)clsSceneClassificationsArePrefetched;	// IMP=0x001000000005b92c
- (_Bool)clsPeopleCountIsPrefetched;	// IMP=0x001000000005b8fa
- (_Bool)clsPersonLocalIdentifiersArePrefetched;	// IMP=0x001000000005b8c8
- (_Bool)prepareWithAlternateJunkingHeuristicsWithContext:(id)arg1 curationContext:(id)arg2;	// IMP=0x001000000005b7bd
- (_Bool)clsIsTragicFailure;	// IMP=0x001000000005b76a
@property(readonly, nonatomic) _Bool clsHasCustomPlaybackVariation;
- (short)clsInterestingAudioClassifications;	// IMP=0x001000000005b6d6
@property(readonly, nonatomic) _Bool clsHasInterestingAudioClassification;
@property(readonly, nonatomic) _Bool clsIsInterestingReframe;
@property(readonly, nonatomic) _Bool clsIsInterestingHDR;
@property(readonly, nonatomic) _Bool clsIsInterestingSDOF;
@property(readonly, nonatomic) _Bool clsIsInterestingPanorama;
@property(readonly, nonatomic) _Bool clsIsInterestingLivePhoto;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
@property(readonly, nonatomic) _Bool clsIsLongExposure;
@property(readonly, nonatomic) _Bool clsIsLoopOrBounce;
@property(readonly, nonatomic) _Bool clsIsInterestingVideo;
- (double)scoreInContext:(id)arg1;	// IMP=0x001000000005b377
- (void)cacheCurationScore:(double)arg1;	// IMP=0x001000000005b32a
@property(readonly, nonatomic) double clsContentScore;
- (double)cropScoreForTargetAspectRatio:(double)arg1 forFaces:(_Bool)arg2;	// IMP=0x001000000005af8e
@property(readonly, nonatomic) double clsSquareCropScore;
@property(readonly) _Bool clsHasInterestingScenes;
@property(readonly) _Bool clsHasPoorResolution;
- (_Bool)clsAvoidIfPossibleAsKeyItemForMemories:(_Bool)arg1 allowGuestAsset:(_Bool)arg2;	// IMP=0x001000000005adff
@property(readonly) _Bool clsIsInhabited;
@property(readonly, nonatomic) _Bool clsIsBlurry;
@property(readonly) unsigned long long clsBaseSceneprintVersion;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint;
- (void)clsSetSceneClassifications:(id)arg1;	// IMP=0x001000000005aa50
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) double clsFaceScore;
- (unsigned long long)clsVideoFaceCount;	// IMP=0x001000000005a84c
- (double)clsActivityScore;	// IMP=0x001000000005a7b6
- (double)clsVideoScore;	// IMP=0x001000000005a720
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsSharpnessScore;
- (double)clsWallpaperScore;	// IMP=0x001000000005a5dd
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) CLSAssetProcessedSignals *clsProcessedSignals;
- (void)clsSetProcessedSignals:(id)arg1;	// IMP=0x001000000005a453
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
- (void)clsSetFaceInformationSummary:(id)arg1;	// IMP=0x001000000005a35f
- (void)clsSetPeopleCount:(id)arg1;	// IMP=0x001000000005a349
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPersonLocalIdentifiers;
- (void)clsSetConsolidatedPersonLocalIdentifiers:(id)arg1;	// IMP=0x0010000000059ee7
@property(readonly, nonatomic) NSArray *clsConsolidatedPersonLocalIdentifiers;
- (void)clsSetPersonLocalIdentifiers:(id)arg1;	// IMP=0x0010000000059d19
@property(readonly, nonatomic) NSArray *clsPersonLocalIdentifiers;
- (void)clsSetPetLocalIdentifiers:(id)arg1;	// IMP=0x0010000000059bcb
@property(readonly, nonatomic) NSArray *clsPetLocalIdentifiers;
@property(readonly, nonatomic) NSArray *clsPersonAndPetLocalIdentifiers;
@property(readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property(readonly, nonatomic) NSString *pl_uuid;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@property(readonly, nonatomic) NSDate *pl_date;
- (void)clsCacheIconicSceneScore:(double)arg1;	// IMP=0x0010000000059898
- (double)clsIconicSceneScoreWithSceneGeography:(id)arg1;	// IMP=0x0010000000059737
@property(readonly, nonatomic) _Bool clsIsInSharedLibrary;
- (_Bool)clsIsGuestAsset;	// IMP=0x001000000005970b
- (_Bool)clsIsFaceProcessed;	// IMP=0x00100000000596b8
- (_Bool)clsIsSceneProcessed;	// IMP=0x0010000000059669
- (_Bool)isRegularGem;	// IMP=0x0010000000059616
- (_Bool)isShinyGem;	// IMP=0x00100000000595c3
- (_Bool)isGold;	// IMP=0x0010000000059570
- (float)clsBehavioralScore;	// IMP=0x0010000000059520
- (float)clsInteractionScore;	// IMP=0x00100000000594d0
@property(readonly, nonatomic) _Bool clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) _Bool clsIsScreenshotOrScreenRecording;
- (void)clsCacheIsUtility:(_Bool)arg1;	// IMP=0x00100000000593f2
@property(readonly, nonatomic) _Bool clsIsUtility;
@property(readonly, nonatomic) _Bool clsIsNonMemorable;
@property(readonly, nonatomic) double clsDuration;
- (_Bool)isSubtype:(unsigned long long)arg1;	// IMP=0x0010000000059220
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSDate *cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate;
@property(readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property(readonly, nonatomic) CLLocation *clsLocation;
@property(readonly, nonatomic) NSString *clsIdentifier;
@property(readonly) _Bool hasCurationModel;
@property(retain) CLSCurationModel *curationModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly) Class superclass;
@end
