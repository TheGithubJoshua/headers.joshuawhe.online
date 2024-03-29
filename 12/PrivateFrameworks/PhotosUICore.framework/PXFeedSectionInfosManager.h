<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXFeedSectionInfosManager.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXFeedSectionInfosManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXFeedSectionInfosManager : NSObject <PLAssetChangeObserver, PLCloudCommentsChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver, PXConfigurableFeedSectionInfosManager> {
    <PXFeedSectionInfosManagerDelegate> * _delegate;
    NSDate * _earliestDate;
    long long  _entryFilter;
    unsigned long long  _fetchLimit;
    NSMutableArray * _pendingAssetsChangeNotifications;
    NSMutableArray * _pendingCommentsChangeNotifications;
    NSMutableArray * _pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary * _photoLibrary;
    NSMutableArray * _sectionInfos;
    NSMapTable * _sectionInfosByCloudFeedEntry;
}

@property (nonatomic) <PXFeedSectionInfosManagerDelegate> *delegate;
@property (nonatomic, retain) NSDate *earliestDate;
@property (nonatomic) long long entryFilter;
@property (nonatomic) unsigned long long fetchLimit;

+ (id)mostRecentCreationDate;

- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3;
- (void)_rebuildSectionInfos;
- (id /* block */)_sectionInfoSortingComparator;
- (bool)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2;
- (void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (void)assetsDidChange:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)earliestDate;
- (long long)entryFilter;
- (unsigned long long)fetchLimit;
- (bool)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)indexOfSectionInfo:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 configurationBlock:(id /* block */)arg2;
- (id)initWithPhotoLibraryForTesting:(id)arg1 filter:(long long)arg2;
- (void)loadSectionInfosAtIndexes:(id)arg1;
- (long long)numberOfInvitationsReceived;
- (long long)numberOfSectionInfos;
- (void)reconfigure:(id /* block */)arg1;
- (bool)reconfigureToIncludeCloudFeedEntry:(id)arg1;
- (id)sectionInfoAtIndex:(long long)arg1;
- (id)sectionInfoWithIdentifier:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEarliestDate:(id)arg1;
- (void)setEntryFilter:(long long)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)shouldReload:(id)arg1;

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
