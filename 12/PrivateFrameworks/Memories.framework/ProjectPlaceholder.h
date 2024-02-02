<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ProjectPlaceholder.h</title>
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

/PrivateFrameworks/Memories.framework/ProjectPlaceholder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface ProjectPlaceholder : NSObject <ProjectDelegate> {
    bool  _downloadStarted;
    NSMutableArray * _essentialNrURLS;
    <NSFilePresenter> * _filePresenter;
    bool  _inihibitCoordinatedWrites;
    bool  _isInCloud;
    NSMutableDictionary * _nonresidentURLs;
    bool  _projectPreviewNeedsToBeRegenerated;
    bool  _restartCloudDownload;
    NSMetadataQuery * _ubiquitousQuery;
    bool  _unsynched;
    unsigned long long  m_bytesComplete;
    unsigned long long  m_bytesToDownload;
    int  m_currentTime;
    NSString * m_displayName;
    int  m_duration;
    NSString * m_exportedTrashPath;
    int  m_frameRate;
    int  m_isReadOnly;
    NSDate * m_modDate;
    NSString * m_path;
    Project * m_project;
    NSDate * m_theaterSavedDate;
    NSString * m_theaterUUID;
    NSString * m_themeID;
    NSString * m_trashPath;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool downloadStarted;
@property (nonatomic, retain) NSMutableArray *essentialNrURLS;
@property (nonatomic, retain) NSString *exportedTrashPath;
@property (nonatomic) <NSFilePresenter> *filePresenter;
@property bool inihibitCoordinatedWrites;
@property (nonatomic) bool isInCloud;
@property (nonatomic, retain) NSMutableDictionary *nonresidentURLs;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, readonly) NSString *persistedStorageName;
@property (nonatomic, readonly) Project *project;
@property bool projectPreviewNeedsToBeRegenerated;
@property bool restartCloudDownload;
@property (nonatomic, retain) NSDate *theaterSavedDate;
@property (nonatomic, retain) NSString *theaterUUID;
@property (nonatomic, readonly) NSString *themeID;
@property (getter=isTrailer, nonatomic, readonly) bool trailer;
@property (nonatomic, retain) NSString *trashPath;
@property (nonatomic, retain) NSMetadataQuery *ubiquitousQuery;
@property bool unsynched;

+ (id)documentPathForNewProject:(bool)arg1;
+ (id)miroProjectPlaceholder;
+ (void)setProjectPlaceholderClass:(Class)arg1;
+ (id)tempProjectPath:(id)arg1;
+ (id)tempProjectPlaceHolderAtPath:(id)arg1;
+ (id)tempProjectPlaceHolderWithName:(id)arg1;
+ (id)themeProjectPreviewPath:(id)arg1;
+ (id)timelineProjectPlaceholderWithID:(id)arg1 name:(id)arg2 previewMode:(bool)arg3;
+ (id)trailerPlaceholderWithID:(id)arg1 previewMode:(bool)arg2;
+ (id)trashProjectPath:(id)arg1;
+ (id)trashProjectPlaceHolderWithName:(id)arg1;

- (void)addCloudDownloadProject;
- (void)addQueryObservers;
- (id)assetsDirectory;
- (void)cacheItem:(id)arg1 downloadImmediately:(bool)arg2;
- (bool)checkForEmoji:(id)arg1;
- (void)clearMicacheFolder;
- (void)configureFilePresenter;
- (void)coordinateMove:(id /* block */)arg1;
- (void)coordinateRemove:(id /* block */)arg1;
- (void)coordinateRenameFrom:(id)arg1 to:(id)arg2 renameHandler:(id /* block */)arg3;
- (void)coordinateWrite:(id /* block */)arg1;
- (void)coordinateWrite:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)currentTime;
- (id)dateFormatter;
- (void)dealloc;
- (bool)deletable;
- (void)didFinishDownload:(id)arg1;
- (void)didStart:(id)arg1;
- (void)didUpdate:(id)arg1;
- (void)disablePreviewContent;
- (id)displayName;
- (void)downloadEssentials;
- (bool)downloadEverything;
- (bool)downloadStarted;
- (id)durationDictionary;
- (int)durationInFrame;
- (id)essentialNrURLS;
- (id)exportedTrashPath;
- (id)filePresenter;
- (id)filePresenterForURL:(id)arg1;
- (void)finishGathering:(id)arg1;
- (int)frameRate;
- (void)gathering:(id)arg1;
- (bool)hasMissingCloudAssets;
- (id)holderFilePath;
- (bool)inihibitCoordinatedWrites;
- (id)init;
- (id)initAsUnpersistable;
- (id)initWithPath:(id)arg1;
- (bool)isDuplicateProjectName:(id)arg1;
- (bool)isEssentialURL:(id)arg1;
- (bool)isInCloud;
- (bool)isMissingAssets;
- (bool)isReadOnly;
- (bool)isTrailer;
- (id)legacyThumbnailImagePath;
- (id)loadPreviewProject;
- (id)loadProjectAndValidate:(bool)arg1;
- (bool)lowOnSpace;
- (id)modificationDate;
- (unsigned long long)movieFileSizeForPath:(id)arg1 preset:(id)arg2;
- (id)nonresidentURLs;
- (void)notifyLowSpace;
- (id)path;
- (void)pauseDownloading;
- (double)percentDownloaded;
- (id)persistedStorageName;
- (id)previewImagesCacheFolder;
- (id)project;
- (void)projectDidInvalidateSharingInfo:(id)arg1;
- (bool)projectIsEmpty;
- (bool)projectNotOptimizedAndNotMissingAssets;
- (bool)projectPreviewNeedsToBeRegenerated;
- (void)projectWasChanged:(id)arg1;
- (void)projectWasSaved:(id)arg1;
- (void)queryTheCloud;
- (void)readFile;
- (void)rebuildNonEssentialCacheForProjectURL:(id)arg1 oldURL:(id)arg2;
- (void)removeCloudDownloadProject;
- (void)removeFilePresenter;
- (void)removeQueryObservers;
- (bool)renameTo:(id)arg1;
- (void)resetCloudQuery;
- (bool)restartCloudDownload;
- (void)resync;
- (void)setDisplayName:(id)arg1;
- (void)setEssentialNrURLS:(id)arg1;
- (void)setExportedTrashPath:(id)arg1;
- (void)setFilePresenter:(id)arg1;
- (void)setInihibitCoordinatedWrites:(bool)arg1;
- (void)setIsInCloud:(bool)arg1;
- (void)setNonresidentURLs:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setProjectPreviewNeedsToBeRegenerated:(bool)arg1;
- (void)setRestartCloudDownload:(bool)arg1;
- (void)setTheaterSavedDate:(id)arg1;
- (void)setTheaterUUID:(id)arg1;
- (void)setTrashPath:(id)arg1;
- (void)setUbiquitousQuery:(id)arg1;
- (void)setUnsynched:(bool)arg1;
- (unsigned long long)sizeOfExportForPresets:(id)arg1;
- (void)startCloudQuery;
- (void)startDownloading;
- (void)stopCloudQuery;
- (id)theaterPosterImage;
- (id)theaterSavedDate;
- (id)theaterUUID;
- (id)themeID;
- (id)thumbnailImage;
- (id)thumbnailImageForProject:(id)arg1;
- (id)trashPath;
- (id)ubiquitousQuery;
- (void)unloadAllProjectsExceptMe;
- (void)unloadProject;
- (bool)unsynched;
- (void)updateCurrentTime;
- (bool)updateFile;
- (void)updateImage:(id)arg1 atPath:(id)arg2;
- (void)updateWithMediaURL:(id)arg1 asset:(id)arg2 adjustments:(id)arg3 selectedRange:(id)arg4;
- (void)updateWithTrailerID:(id)arg1 previewMode:(bool)arg2;
- (id)validateProposedName:(id)arg1 minimumLength:(long long)arg2;
- (id)videoPreviewImage;
- (id)videoPreviewImageAllowingLowQuality:(bool)arg1 lowQualityFetched:(bool*)arg2;
- (id)videoPreviewImagePathForSize:(struct CGSize { double x1; double x2; })arg1;

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