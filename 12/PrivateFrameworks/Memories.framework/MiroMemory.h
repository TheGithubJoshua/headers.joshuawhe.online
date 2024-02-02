<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroMemory.h</title>
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

/PrivateFrameworks/Memories.framework/MiroMemory.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding> {
    long long  _allAssetCount;
    PHAssetCollection * _assetCollection;
    NSDictionary * _assetsRanges;
    NSArray * _autoPickedAssetIDs;
    MiroBlueprint * _blueprint;
    NSMutableDictionary * _blueprints;
    struct Buckets { 
        long long shortCount; 
        long long mediumCount; 
        long long longCount; 
        double shortDuration; 
        double mediumDuration; 
        double longDuration; 
        int defaultBucketIsNotShort; 
    }  _buckets;
    MiroBlueprint * _customBlueprint;
    double  _customDuration;
    double  _duration;
    long long  _durationRange;
    NSArray * _featuredPeople;
    NSDictionary * _freezeRanges;
    bool  _hasBuildingPosterImageBegun;
    NSString * _initalKeyAssetIdentifier;
    bool  _isPregenerating;
    PHAsset * _keyAsset;
    NSString * _keyAssetID;
    NSString * _keywordedSongID;
    NSDictionary * _loadedFreezeRanges;
    NSURL * _localPersistentFile;
    NSString * _localizedSubTitle;
    NSString * _localizedTitle;
    NSSet * _manuallyAddedAssetIDs;
    NSSet * _manuallyRemovedAssetIDs;
    double  _maximumPossibleMemoryDuration;
    MiroPickList * _pickList;
    long long  _pickedItemCount;
    NSArray * _posters;
    NSArray * _requestedKeywords;
    NSString * _requestedMoodID;
    NSObject<OS_dispatch_queue> * _saveQueue;
    double  _savedDuration;
    long long  _savedMaxDurationRange;
    long long  _schema;
    bool  _storedPosterExists;
    NSDate * _viewedDate;
}

@property (nonatomic) long long allAssetCount;
@property (nonatomic, readonly) PHFetchResult *allAssets;
@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, retain) NSDictionary *assetsRanges;
@property (nonatomic, retain) NSArray *autoPickedAssetIDs;
@property (nonatomic, retain) MiroBlueprint *blueprint;
@property (nonatomic, retain) NSMutableDictionary *blueprints;
@property (nonatomic) struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; } buckets;
@property (nonatomic, retain) MiroBlueprint *customBlueprint;
@property (nonatomic) double customDuration;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *displaySubtitle;
@property (nonatomic) double duration;
@property (nonatomic) long long durationRange;
@property (nonatomic, retain) NSArray *featuredPeople;
@property (nonatomic, retain) NSDictionary *freezeRanges;
@property (nonatomic) bool hasBuildingPosterImageBegun;
@property (nonatomic, retain) NSString *initalKeyAssetIdentifier;
@property (nonatomic) bool isPregenerating;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (retain) NSString *keyAssetID;
@property (nonatomic, retain) NSString *keywordedSongID;
@property (nonatomic, retain) NSDictionary *loadedFreezeRanges;
@property (nonatomic, retain) NSURL *localPersistentFile;
@property (retain) NSString *localizedSubTitle;
@property (retain) NSString *localizedTitle;
@property (nonatomic, retain) NSSet *manuallyAddedAssetIDs;
@property (nonatomic, retain) NSSet *manuallyRemovedAssetIDs;
@property (nonatomic, readonly) long long maxDurationRange;
@property (nonatomic) double maximumPossibleMemoryDuration;
@property (nonatomic, readonly) double minimumPossibleMemoryDuration;
@property (nonatomic, retain) NSString *moodID;
@property (nonatomic, readonly) NSArray *moodIDs;
@property (nonatomic, readonly) bool needsTitleCard;
@property (nonatomic, retain) MiroPickList *pickList;
@property (nonatomic) long long pickedItemCount;
@property (nonatomic, retain) NSArray *posters;
@property (nonatomic, retain) NSArray *requestedKeywords;
@property (nonatomic, retain) NSString *requestedMoodID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *saveQueue;
@property (nonatomic) double savedDuration;
@property (nonatomic) long long schema;
@property (nonatomic) bool storedPosterExists;
@property (nonatomic, retain) NSDate *viewedDate;

+ (id)_assetCollectionUniqueLocalIdentifier:(id)arg1;
+ (id)_displayableUuidWithUuid:(id)arg1;
+ (id)_miroMoodIDForPHMemoryMood:(unsigned long long)arg1;
+ (id)_saveURL;
+ (id)fileURLWithUuid:(id)arg1;
+ (id)grabTestKeywords;
+ (void)initialize;
+ (id)memoryWithPHAssetCollection:(id)arg1;
+ (id)memoryWithPHAssetCollection:(id)arg1 keyAsset:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_deleteMetadata;
- (void)_initAllAssetMetadata;
- (id)_newBlueprintWithMoodID:(id)arg1;
- (void)_persistentRangesChanged:(id)arg1;
- (void)_saveMetadata;
- (void)_updateAddedRemovedLists;
- (void)_writeMetadata:(id)arg1;
- (void)adornIrisUsableToAssets:(id)arg1;
- (long long)allAssetCount;
- (id)allAssets;
- (id)allAssetsAsArray;
- (id)allAssetsIncludingAllMomentsAssets:(bool)arg1;
- (id)assetCollection;
- (bool)assetHasFaces:(id)arg1;
- (id)assetsRanges;
- (id)autoPickedAssetIDs;
- (id)blueprint;
- (id)blueprintForMoodID:(id)arg1;
- (id)blueprints;
- (struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; })buckets;
- (void)clearFreezeDataForPregenerate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentVideoFreezeRangeForAssetID:(id)arg1 index:(int)arg2;
- (id)customBlueprint;
- (double)customDuration;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displaySubtitle;
- (double)duration;
- (long long)durationRange;
- (void)encodeWithCoder:(id)arg1;
- (id)featuredPeople;
- (id)featuredPersonsInMemoryAsFaceRangesInAsset:(id)arg1;
- (id)freezeRanges;
- (id)freezeRangesToEncode;
- (bool)hasBuildingPosterImageBegun;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initalKeyAssetIdentifier;
- (void)invalidateCustomDuration;
- (void)invalidateDuration;
- (bool)isEqual:(id)arg1;
- (bool)isPersistable;
- (bool)isPosterEqual:(id)arg1;
- (bool)isPregenerating;
- (id)keyAsset;
- (id)keyAssetID;
- (id)keywordedSongID;
- (id)loadedFreezeRanges;
- (id)localPersistentFile;
- (id)localizedSubTitle;
- (id)localizedTitle;
- (void)manuallyAdd:(id)arg1 remove:(id)arg2;
- (id)manuallyAddedAssetIDs;
- (void)manuallyModify:(id)arg1 changeInSegmentCount:(long long)arg2;
- (id)manuallyRemovedAssetIDs;
- (long long)maxDurationRange;
- (double)maximumPossibleMemoryDuration;
- (bool)memoryClassificationBased;
- (id)memoryClassificationKeys;
- (bool)memoryFeaturesPeople;
- (bool)memoryFeaturesPersonInAsset:(id)arg1;
- (bool)memoryTypeDisablesCropping;
- (double)minimumPossibleMemoryDuration;
- (id)moodID;
- (id)moodIDs;
- (bool)needsTitleCard;
- (void)persist;
- (void)persistWithoutFreeze;
- (id)pickList;
- (id)pickedAssets;
- (long long)pickedItemCount;
- (id)pickedLocallyAvailableScenes;
- (id)posters;
- (id)rangesWithType:(unsigned long long)arg1 forAssetID:(id)arg2;
- (void)reportCollectionTypeForAggD:(bool)arg1;
- (id)requestedKeywords;
- (id)requestedMoodID;
- (id)saveQueue;
- (double)savedDuration;
- (long long)schema;
- (void)setAllAssetCount:(long long)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)setAssetsRanges:(id)arg1;
- (void)setAutoPickedAssetIDs:(id)arg1;
- (void)setBlueprint:(id)arg1;
- (void)setBlueprints:(id)arg1;
- (void)setBuckets:(struct Buckets { long long x1; long long x2; long long x3; double x4; double x5; double x6; int x7; })arg1;
- (void)setCustomBlueprint:(id)arg1;
- (void)setCustomDuration:(double)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplaySubtitle:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setDurationRange:(long long)arg1;
- (void)setFeaturedPeople:(id)arg1;
- (void)setFreezeRanges:(id)arg1;
- (void)setHasBuildingPosterImageBegun:(bool)arg1;
- (void)setInitalKeyAssetIdentifier:(id)arg1;
- (void)setIsPregenerating:(bool)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setKeyAssetID:(id)arg1;
- (void)setKeywordedSongID:(id)arg1;
- (void)setLoadedFreezeRanges:(id)arg1;
- (void)setLocalPersistentFile:(id)arg1;
- (void)setLocalizedSubTitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setManuallyAddedAssetIDs:(id)arg1;
- (void)setManuallyRemovedAssetIDs:(id)arg1;
- (void)setMaximumPossibleMemoryDuration:(double)arg1;
- (void)setMoodID:(id)arg1;
- (void)setPickList:(id)arg1;
- (void)setPickedItemCount:(long long)arg1;
- (void)setPosters:(id)arg1;
- (void)setRanges:(id)arg1 replaceType:(unsigned long long)arg2 forAssetID:(id)arg3;
- (void)setRequestedKeywords:(id)arg1;
- (void)setRequestedMoodID:(id)arg1;
- (void)setSaveQueue:(id)arg1;
- (void)setSavedDuration:(double)arg1;
- (void)setSchema:(long long)arg1;
- (void)setStoredPosterExists:(bool)arg1;
- (void)setViewedDate:(id)arg1;
- (bool)storedPosterExists;
- (double)titleCardDuration;
- (id)trimRangesForAsset:(id)arg1;
- (void)unPersist;
- (id)viewedDate;
- (bool)wasManuallyAdded:(id)arg1;
- (bool)wasManuallyRemoved:(id)arg1;

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