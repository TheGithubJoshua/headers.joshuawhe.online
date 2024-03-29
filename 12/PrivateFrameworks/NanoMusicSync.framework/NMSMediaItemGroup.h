<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NMSMediaItemGroup.h</title>
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

/PrivateFrameworks/NanoMusicSync.framework/NMSMediaItemGroup.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync (880.30)
 */

@interface NMSMediaItemGroup : NSObject {
    bool  _downloadedItemsOnly;
    NSDictionary * _itemSizesDict;
    bool  _offPowerSyncAllowed;
    NMSMediaContainerQuotaData * _quotaData;
    id  _referenceObj;
    unsigned long long  _type;
}

@property (nonatomic) bool downloadedItemsOnly;
@property (nonatomic, readonly) bool isEstimate;
@property (nonatomic, retain) NSDictionary *itemSizesDict;
@property (nonatomic) bool offPowerSyncAllowed;
@property (nonatomic, retain) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic, retain) id referenceObj;
@property (nonatomic) unsigned long long type;

+ (id)_fetchSizeDictForItems:(id)arg1;
+ (id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(bool)arg3 includingDownloadedContentOnly:(bool)arg4 sizesDictOut:(id*)arg5;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2 downloadedItemsOnly:(bool)arg3;
+ (id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2 downloadedItemsOnly:(bool)arg3;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2;
+ (id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 downloadedItemsOnly:(bool)arg4;
+ (id)itemGroupWithQuotaRefObj:(id)arg1;
+ (id)itemGroupWithStoreRecommendation:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(bool)arg2;
+ (id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(bool)arg2;

- (void).cxx_destruct;
- (id)description;
- (bool)downloadedItemsOnly;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 offPowerSyncAllowed:(bool)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (bool)isEstimate;
- (id)itemList;
- (id)itemSizesDict;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersForContainerType:(unsigned long long)arg1;
- (bool)offPowerSyncAllowed;
- (id)quotaData;
- (id)referenceObj;
- (void)setDownloadedItemsOnly:(bool)arg1;
- (void)setItemSizesDict:(id)arg1;
- (void)setOffPowerSyncAllowed:(bool)arg1;
- (void)setQuotaData:(id)arg1;
- (void)setReferenceObj:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

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
