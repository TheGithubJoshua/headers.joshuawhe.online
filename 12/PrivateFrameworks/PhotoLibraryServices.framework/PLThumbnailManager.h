<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLThumbnailManager.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLThumbnailManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLThumbnailManager : NSObject {
    NSMutableArray * _alreadyFailedAssetObjectIDsForRebuild;
    PLThumbnailCascadingDownscaleContext * _downscaleContext;
    NSLock * _fixLock;
    <PLThumbPersistenceManager> * _lastUsedThumbManager;
    int  _lastUsedThumbManagerFormatID;
    id  _observerToken;
    PLPhotoLibraryPathManager * _pathManager;
    NSMutableSet * _previouslyRequestedThumbnailFixOIDs;
    NSMutableSet * _requestedThumbnailFixAssets;
    NSMutableDictionary * _thumbManagersByFormat;
    NSLock * _thumbManagersLock;
}

@property (nonatomic, retain) id observerToken;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, readonly, retain) NSMutableDictionary *thumbManagersByFormat;

+ (id)_allPossibleThumbnailFormatIDs;
+ (id)_allowedForCameraPreviewWellPredicate;
+ (bool)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id*)arg1;
+ (id)_cameraPreviewWellMetadataQueue;
+ (bool)_compareAsset:(id)arg1 toMetadata:(id)arg2;
+ (int)_configurationThumbnailFormat;
+ (int)_configurationThumbnailVersion;
+ (id)_fastThumbPersistenceManagers;
+ (id)_fetchCameraPreviewWellMetadata;
+ (id)_imageTableSpecifications;
+ (id)_missingThumbnailPredicate;
+ (id)_preheatItemSourcesByFormatID;
+ (id)_rebuildThumbnailsQueue;
+ (void)_recordRebuildThumbnailsAttempt;
+ (void)_refetchAndSaveCameraPreviewWellImage;
+ (void)_saveCameraPreviewWellImage:(struct CGImage { }*)arg1 assetUUID:(id)arg2;
+ (id)_slowThumbPersistenceManagers;
+ (id)_supportedTableFormats;
+ (int)_supportedThumbnailFormatIDFromGeneralFormatID:(int)arg1;
+ (bool)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4;
+ (void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1;
+ (void)addRebuildThumbnailsRequest;
+ (bool)assetIsAllowedForCameraPreviewWell:(id)arg1;
+ (bool)assetIsCameraPreviewWellAsset:(id)arg1;
+ (id)cameraPreviewWellAssetFetchRequest;
+ (id)cameraPreviewWellAssetUUIDFromPersistedFile;
+ (id)cameraPreviewWellImageQueue;
+ (bool)cameraPreviewWellSupportedOnCurrentDevice;
+ (id)defaultThumbnailManager;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (bool)hasDeprecationsOnly;
+ (bool)hasExceededRebuildThumbnailRequestLimit;
+ (bool)hasMissingThumbnailsInLibrary:(id)arg1;
+ (bool)hasRebuildThumbnailsRequest;
+ (bool)hasThumbnailVersionMismatch;
+ (id)imageTableForFormat:(int)arg1;
+ (bool)isMissingThumbnailTables;
+ (bool)isRebuildingThumbnails;
+ (void)rebuildAllMissingThumbnails;
+ (void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1;
+ (void)removeObsoleteMetadata;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (void)removeThumbnailTablesUnsupportedOnly:(bool)arg1;
+ (void)resetThumbnails;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (id)supportedThumbnailFormatIDs;
+ (id)supportedThumbnailFormatIDsForDeviceConfiguration:(id)arg1;
+ (id)supportedThumbnailFormats;
+ (int)thumbnailVersionCurrent;
+ (bool)useImageTableForFormat:(int)arg1;

- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id*)arg2;
- (void)_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (id)_tableDescriptions;
- (id)_thumbManagerForFormatID:(int)arg1;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9;
- (void)dealloc;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)discardCachedThumbnailDownscalerContexts;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)initWithPhotoLibraryPathManager:(id)arg1;
- (struct CGImage { }*)newImageForAsset:(id)arg1 format:(id)arg2;
- (id)observerToken;
- (id)pathManager;
- (id)placeholderDataForFormat:(int)arg1 photoImageSize:(struct CGSize { double x1; double x2; })arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)preheatItemSourceForFormatID:(int)arg1;
- (void)setObserverToken:(id)arg1;
- (void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2;
- (id)thumbManagersByFormat;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;

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