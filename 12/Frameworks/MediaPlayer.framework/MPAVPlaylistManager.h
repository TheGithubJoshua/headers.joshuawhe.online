<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPAVPlaylistManager.h</title>
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

/Frameworks/MediaPlayer.framework/MPAVPlaylistManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPAVPlaylistManager : NSObject <MPAVQueueController, MPAVQueueCoordinatorDataSource, MPQueueBehaviorManaging, MPQueueFeederDelegate, NSSecureCoding> {
    MPAVController * _avController;
    MPAVItem * _currentItem;
    <MPAVItemQueueIdentifier> * _currentItemQueueIdentifier;
    MPQueueFeeder * _currentQueueFeeder;
    <MPAVPlaylistManagerDelegate> * _delegate;
    bool  _goToTargetIndex;
    long long  _lastSelectionDirection;
    long long  _playbackMode;
    MPQueueFeeder * _playlistFeeder;
    MPAVQueueCoordinator * _queueCoordinator;
    long long  _repeatMode;
    long long  _targetIndex;
    bool  _updatedAudioSessionMode;
}

@property (nonatomic, readonly) bool allowsQueueResetWhenReachingEnd;
@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic) MPAVController *avController;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly) long long currentIndex;
@property (retain) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVPlaylistManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly) MPQueueFeeder *playlistFeeder;
@property (nonatomic, readonly) long long playlistItemCount;
@property (readonly) MPAVQueueCoordinator *queueCoordinator;
@property (nonatomic) long long repeatMode;
@property (nonatomic) bool shouldDeferItemLoading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long upNextItemCount;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyVolumeNormalizationForQueuedItems;
- (long long)_indexForStringIdentifier:(id)arg1;
- (id)_itemToFollowItemIndex:(long long)arg1 skipUnavailableContent:(bool)arg2;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (long long)_nextItemIndex:(long long)arg1 repeatMode:(long long)arg2;
- (void)_notifyQueueFeederContentsChanged;
- (id)_nowplayingContentItemForIndex:(long long)arg1;
- (id)_nowplayingContentItemIdentifierForIndex:(long long)arg1;
- (unsigned long long)_playbackIndexForDelta:(long long)arg1 fromIndex:(unsigned long long)arg2 ignoreElapsedTime:(bool)arg3 totalItemCount:(unsigned long long)arg4 didReachEnd:(bool*)arg5;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queuePlayerFeederItemForIndex:(long long)arg1;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (void)_updateAudioSessionModeWithIndex:(unsigned long long)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)allowsUserVisibleUpcomingItems;
- (id)avController;
- (bool)canSeek;
- (bool)canSeekItem:(id)arg1;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (void)clearQueueFeeder;
- (void)connectQueueCoordinator:(id)arg1;
- (id)contentItemIDForPlaylistIndex:(long long)arg1;
- (long long)currentIndex;
- (id)currentItem;
- (id)currentQueueUUID;
- (void)dealloc;
- (id)delegate;
- (void)disconnectQueueCoordinator;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(id /* block */)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (bool)hasQueueContents;
- (unsigned long long)indexForContentItemID:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaceholderItemForContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (id)musicPlayerControllerQueueForUUID:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (long long)playlistItemCount;
- (id)queueCoordinator;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateAssets:(id)arg1;
- (void)queueFeederDidInvalidateRealRepeatType:(id)arg1;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)queueFeederDidReplaceItem:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)repeatMode;
- (void)requestMusicPlayerControllerQueueWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)setAvController:(id)arg1;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setCurrentItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setMusicPlayerControllerQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(bool)arg3;
- (void)setRepeatMode:(long long)arg1;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (bool)shouldDeferItemLoading;
- (id)uniqueIdentifier;
- (long long)upNextItemCount;
- (void)updateForSoundCheckDefaultsChange;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;
- (bool)userCanChangeShuffleAndRepeatType;

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