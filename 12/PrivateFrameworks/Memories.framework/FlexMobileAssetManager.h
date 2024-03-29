<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FlexMobileAssetManager.h</title>
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

/PrivateFrameworks/Memories.framework/FlexMobileAssetManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface FlexMobileAssetManager : FlexCloudManager {
    NSString * _clientID;
    NSObject<OS_dispatch_queue> * _downloadQueue;
    NSObject * _downloadThrottleLock;
    NSString * _mobileAssetTypeIdentifier;
    NSMutableDictionary * _pendingDownloadMapping;
    NSMutableOrderedSet * _pendingDownloadSet;
    NSMutableDictionary * _processedDownloadMapping;
    NSMutableSet * _processedDownloadSet;
    NSObject<OS_dispatch_queue> * _purgeQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *downloadQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *purgeQueue;

+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(bool)arg2;
+ (id)compatibilityFilterPredicate;

- (void).cxx_destruct;
- (bool)_isCompatible:(id)arg1;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (void)_makeBundledArtworkCloudBacked;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (id)_newQueryDictForQuery:(id)arg1 songUID:(id)arg2 existingSong:(id)arg3 asset:(id)arg4;
- (void)_processArtwork;
- (void)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (void)_purgeAsset:(id)arg1;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 predicates:(id)arg2;
- (id)_queryAssetsWithClientIDForAssetType:(id)arg1 songUID:(id)arg2 predicates:(id)arg3;
- (id)_queryLocalAssetInformation;
- (long long)_responseForError:(id)arg1;
- (void)_runAsyncAssetDownloadQuery:(id)arg1 existingSong:(id)arg2 cloudAsset:(id)arg3;
- (void)_runNextAsyncAssetDownloadQuery;
- (unsigned long long)_statusForAssetState:(long long)arg1;
- (void)_updateWithLocalArtwork;
- (unsigned long long)assetStatus:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)downloadQueue;
- (void)fetchAllSongsWithCompletion:(id /* block */)arg1;
- (id)filteredResults:(id)arg1 forMetadataMapping:(id)arg2;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)loadCachedSongs;
- (id)mobileAssetForSongAsset:(id)arg1;
- (id)purgeQueue;
- (void)requestDownloadOfAsset:(id)arg1;
- (void)requestPurgeOfAsset:(id)arg1;
- (void)setDownloadQueue:(id)arg1;
- (void)setPurgeQueue:(id)arg1;

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
