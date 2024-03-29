<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHAssetCollection.h</title>
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

/Frameworks/Photos.framework/PHAssetCollection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHAssetCollection : PHCollection <PUDisplayAssetCollection, PVMomentProtocol, PXDisplayAssetCollection, PXMediaTypeAggregating> {
    unsigned long long  _approximateCount;
    CLLocation * _approximateLocation;
    unsigned long long  _approximatePhotosCount;
    unsigned long long  _approximateVideosCount;
    long long  _assetCollectionSubtype;
    long long  _assetCollectionType;
    NSArray * _assetOids;
    NSArray * _assets;
    bool  _canContributeToCloudSharedAlbum;
    bool  _canShowCloudComments;
    NSString * _cloudGUID;
    NSDate * _endDate;
    NSURL * _groupURL;
    bool  _hasUnseenContentBoolValue;
    NSString * _importSessionID;
    bool  _isCameraRoll;
    bool  _isCloudSharedAlbum;
    bool  _isLibrary;
    bool  _isMultipleContributorCloudSharedAlbum;
    bool  _isOwnedCloudSharedAlbum;
    bool  _isPanoramasCollection;
    bool  _isPendingPhotoStreamAlbum;
    bool  _isPhotoStreamCollection;
    bool  _isSmartCollection;
    bool  _isStandInCollection;
    NSArray * _localizedLocationNames;
    NSString * _localizedTitle;
    int  _pendingItemsCount;
    int  _pendingItemsType;
    int  _plAlbumKind;
    PHQuery * _query;
    bool  _shouldDeleteWhenEmpty;
    id /* block */  _sortingComparator;
    NSDate * _startDate;
    NSString * _title;
    NSString * _titleFontName;
    NSString * _transientIdentifier;
    NSString * _transientSubtitle;
}

@property (getter=_canShowCloudComments, setter=_setCanShowCloudComments:, nonatomic) bool _canShowCloudComments;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } approximateCoordinate;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly) CLLocation *approximateLocation;
@property (nonatomic, readonly) unsigned long long approximatePhotosCount;
@property (nonatomic, readonly) unsigned long long approximateVideosCount;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly) NSArray *assetOids;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) bool canContainCustomKeyAssets;
@property (nonatomic, readonly) bool canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic, readonly) NSString *cloudGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDateComponents *endDateComponents;
@property (nonatomic, readonly) unsigned long long estimatedAssetCount;
@property (nonatomic, readonly) NSURL *groupURL;
@property (nonatomic, readonly) bool hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *importSessionID;
@property (nonatomic, readonly) bool isCameraRoll;
@property (nonatomic, readonly) bool isCloudSharedAlbum;
@property (nonatomic, readonly) bool isLastImportedAlbum;
@property (nonatomic, readonly) bool isLibrary;
@property (nonatomic, readonly) bool isMultipleContributorCloudSharedAlbum;
@property (nonatomic, readonly) bool isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) bool isPanoramasCollection;
@property (nonatomic, readonly) bool isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) bool isPhotoStreamCollection;
@property (nonatomic, readonly) bool isPlacesAlbum;
@property (nonatomic, readonly) bool isSmartCollection;
@property (nonatomic, readonly) bool isStandInCollection;
@property (nonatomic, readonly) bool isTrashBin;
@property (nonatomic, readonly) bool keyAssetsAtEnd;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) int pendingItemsCount;
@property (nonatomic, readonly) int pendingItemsType;
@property (nonatomic, readonly) int plAlbumKind;
@property (nonatomic, readonly, copy) NSString *px_estimatedAssetsCountLocalizedString;
@property (nonatomic, readonly) bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) bool px_isFolder;
@property (nonatomic, readonly) bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) bool px_isImportedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPlacesVirtualCollection;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isVirtualCollection;
@property (nonatomic, readonly) bool px_supportsFastCuration;
@property (nonatomic, readonly) PHQuery *query;
@property (nonatomic, readonly) bool shouldDeleteWhenEmpty;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDateComponents *startDateComponents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) long long titleCategory;
@property (nonatomic, readonly) NSString *titleFontName;
@property (nonatomic, readonly) unsigned long long titleFontNameHash;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) NSString *transientSubtitle;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)corePropertiesToFetch;
+ (id)defaultTitleFontNames;
+ (id)descriptionOfTitleCategory:(long long)arg1;
+ (id)entityKeyMap;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsBackingSuggestion:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchSharingSuggestionsWithOptions:(id)arg1;
+ (id)fetchSuggestedContributionsForAssetsFetchResult:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForCMMPhotoLibrary:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForFileURLs:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)fetchUserLibraryAlbumWithOptions:(id)arg1;
+ (id)graphOptionsForTransientAssetCollection:(id)arg1 needsCompleteMomentsInfo:(bool)arg2 options:(id)arg3;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 includeTrash:(bool)arg2;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)sharingSuggestionWithRandomPick:(bool)arg1 fallbackToRecentMoments:(bool)arg2 needsNotification:(bool)arg3;
+ (long long)titleCategoryForTitleFontName:(id)arg1;
+ (id)titleFontNameForTitleCategory:(long long)arg1;
+ (unsigned long long)titleFontNameHashFromDate:(id)arg1;
+ (unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2;
+ (unsigned long long)titleFontNameHashFromString:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (bool)_canShowCloudComments;
- (void)_setCanShowCloudComments:(bool)arg1;
- (unsigned long long)approximateCount;
- (id)approximateLocation;
- (unsigned long long)approximatePhotosCount;
- (unsigned long long)approximateVideosCount;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)assetOids;
- (id)assets;
- (bool)canContainAssets;
- (bool)canContainCustomKeyAssets;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (Class)changeRequestClass;
- (id)cloudGUID;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)endDate;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)groupURL;
- (bool)hasLocationInfo;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(long long)arg8;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCameraRoll;
- (bool)isCloudSharedAlbum;
- (bool)isLastImportedAlbum;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasCollection;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamCollection;
- (bool)isPlacesAlbum;
- (bool)isSmartCollection;
- (bool)isStandInCollection;
- (bool)isTrashBin;
- (bool)keyAssetsAtEnd;
- (id)localizedLocationNames;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (int)plAlbumKind;
- (id)pl_assetContainer;
- (id)query;
- (bool)shouldDeleteWhenEmpty;
- (id /* block */)sortingComparator;
- (id)startDate;
- (id)title;
- (long long)titleCategory;
- (id)titleFontName;
- (unsigned long long)titleFontNameHash;
- (id)transientIdentifier;
- (id)transientSubtitle;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)_getLocation;
- (id)endDateComponents;
- (id)localEndDate;
- (id)localStartDate;
- (id)startDateComponents;
- (id)universalEndDate;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (struct CLLocationCoordinate2D { double x1; double x2; })approximateCoordinate;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_importHistoryAssetCollection;
+ (id)px_mediaTypeSmartAlbumSubtypes;
+ (id)px_otherAlbumsSubtypes;
+ (id)px_smartAlbumWithSubtype:(long long)arg1;

- (long long)aggregateMediaType;
- (bool)px_allowsAssetsDrop;
- (id)px_estimatedAssetsCountLocalizedString;
- (bool)px_isAllPhotosSmartAlbum;
- (bool)px_isFavoritesSmartAlbum;
- (bool)px_isHiddenSmartAlbum;
- (bool)px_isImportedAlbum;
- (bool)px_isMacSyncedAlbum;
- (bool)px_isMediaTypeSmartAlbum;
- (bool)px_isMyPhotoStreamAlbum;
- (bool)px_isOwnedSharedAlbum;
- (bool)px_isPlacesVirtualCollection;
- (bool)px_isRecentlyAddedSmartAlbum;
- (bool)px_isRecentlyDeletedSmartAlbum;
- (bool)px_isSharedAlbum;
- (bool)px_isSmartAlbum;
- (bool)px_isStandInAlbum;
- (bool)px_isUserCreated;
- (bool)px_shouldUseFacesRectForSmartCropping;
- (bool)px_supportsFastCuration;

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
