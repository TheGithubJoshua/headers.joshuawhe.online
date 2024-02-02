<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLPhotoLibraryPathManager.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLPhotoLibraryPathManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLPhotoLibraryPathManager : NSObject {
    NSString * _assetUUIDRecoveryMappingPath;
    NSString * _baseDirectory;
    NSString * _changeStoreDatabasePath;
    NSString * _cmmAssetsDirectory;
    NSString * _cplAssetsDirectory;
    NSString * _dcimDirectory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _folderCreationLock;
    NSString * _iTunesPhotosDirectory;
    NSString * _legacyMemoriesRelatedSnapshotDirectory;
    NSString * _legacyModelInterestDatabasePath;
    bool  _persistedAlbumDataDirectoryExists;
    bool  _persistedFaceDataDirectoryExists;
    bool  _photoCloudSharingCacheDataDirectoryExists;
    bool  _photoDataCPLDerivativeDirectoryExists;
    bool  _photoDataCPLDirectoryExists;
    NSString * _photoDataCachesDirectory;
    NSString * _photoDataDirectory;
    bool  _photoDataMISCDirectoryExists;
    bool  _temporaryOutboundSharingDirectoryExists;
}

@property (nonatomic, readonly) NSString *assetUUIDRecoveryMappingPath;
@property (nonatomic, readonly) NSString *baseDirectory;
@property (nonatomic, readonly) NSString *changeStoreDatabasePath;
@property (nonatomic, readonly) NSString *cmmAssetsDirectory;
@property (nonatomic, readonly) NSString *cplAssetsDirectory;
@property (nonatomic, readonly) NSString *dcimDirectory;
@property (nonatomic, readonly) NSString *iTunesPhotosDirectory;
@property (nonatomic, readonly) NSString *legacyMemoriesRelatedSnapshotDirectory;
@property (nonatomic, readonly) NSString *legacyModelInterestDatabasePath;
@property (nonatomic, readonly) NSString *photoDataCachesDirectory;
@property (nonatomic, readonly) NSString *photoDataDirectory;
@property (nonatomic, readonly) NSString *thumbnailsDirectory;
@property (nonatomic, readonly) NSString *thumbnailsV2Directory;

+ (id)systemLibraryManager;

- (void).cxx_destruct;
- (id)assetUUIDRecoveryMappingPath;
- (id)assetsDataDirectory;
- (id)baseDirectory;
- (id)changeStoreDatabasePath;
- (id)cmmAssetsDirectory;
- (id)cplAssetsDirectory;
- (id)dcimDirectory;
- (id)graphServiceCacheDirectory;
- (id)iTunesPhotosDirectory;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncDirectory;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)imageWriterIndicatorFilePath;
- (id)initWithBaseDirectory:(id)arg1;
- (id)knownDBPaths;
- (id)legacyMemoriesRelatedSnapshotDirectory;
- (id)legacyModelInterestDatabasePath;
- (id)libraryAvailableIndicatorFilePath;
- (id)lightweightReimportPhotoCloudSharingDataDirectory;
- (id)miroCacheDirectory;
- (id)pathToAssetsToAlbumsMapping;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)persistedFaceDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoCloudSharingCacheDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoCloudSharingDataDirectory;
- (id)photoCloudSharingMetadataDirectory;
- (id)photoDataCPLDerivativeDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoDataCPLDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoDataCachesDirectory;
- (id)photoDataDirectory;
- (id)photoDataMiscDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoMetadataDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMutationsDirectory;
- (id)photoStreamsDataDirectory;
- (id)photosAsideDatabasePath;
- (id)photosCPLDatabasePath;
- (id)photosDatabasePath;
- (id)sqliteErrorIndicatorFilePath;
- (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
- (id)syncInfoPath;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)temporaryOutboundSharingDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)thumbnailsDirectory;
- (id)thumbnailsV2Directory;
- (id)variationCacheDirectory;
- (id)visionServiceCacheDirectory;

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