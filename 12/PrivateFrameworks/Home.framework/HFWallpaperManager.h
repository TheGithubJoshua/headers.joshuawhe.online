<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HFWallpaperManager.h</title>
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

/PrivateFrameworks/Home.framework/HFWallpaperManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Home.framework/Home (1)
 */

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver> {
    HFWallpaperFileManager * _fileManager;
    bool  _hasPreheatedCache;
    HFWallpaperImageCache * _imageCache;
    HFWallpaperLegacyFileManager * _legacyFileManager;
    <HFNamedWallpaperSource> * _namedWallpaperSource;
    NSOperationQueue * _operationQueue;
    NSUserDefaults * _userDefaults;
    NSMutableDictionary * _wallpaperSlices;
    bool  _wallpaperSourceRegistered;
    NSMutableDictionary * _wallpapers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFWallpaperFileManager *fileManager;
@property (nonatomic) bool hasPreheatedCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFWallpaperImageCache *imageCache;
@property (nonatomic, retain) HFWallpaperLegacyFileManager *legacyFileManager;
@property (nonatomic, retain) <HFNamedWallpaperSource> *namedWallpaperSource;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, retain) NSMutableDictionary *wallpaperSlices;
@property (nonatomic, readonly) bool wallpaperSourceRegistered;
@property (nonatomic, retain) NSMutableDictionary *wallpapers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dispatchWallpaperChangedForKey:(id)arg1;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_migrateIfNeeded;
- (long long)_namedCollectionTypeForKey:(id)arg1;
- (void)_preloadWallpaperSlicesForKey:(id)arg1;
- (void)_preloadWallpapersForHome:(id)arg1;
- (void)_pruneUnusedWallpapers;
- (id)_queue_originalImageForWallpaper:(id)arg1;
- (void)_queue_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1;
- (void)_queue_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (id)_queue_wallpaperForKey:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_resolveHomeKitObjectForKey:(id)arg1;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forKey:(id)arg3;
- (id)_sliceFromWallpaper:(id)arg1 variant:(long long)arg2 preloading:(bool)arg3;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (id)fileManager;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (bool)hasPreheatedCache;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)imageCache;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)init;
- (id)legacyFileManager;
- (id)namedWallpaperSource;
- (id)operationQueue;
- (void)preheatCache;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (void)setFileManager:(id)arg1;
- (void)setHasPreheatedCache:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setLegacyFileManager:(id)arg1;
- (void)setNamedWallpaperSource:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (void)setWallpaperSlices:(id)arg1;
- (void)setWallpapers:(id)arg1;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)userDefaults;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)wallpaperSlices;
- (bool)wallpaperSourceRegistered;
- (id)wallpapers;

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