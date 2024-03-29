<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPCMediaPlayerLegacyPlayer.h</title>
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

/PrivateFrameworks/MediaPlaybackCore.framework/MPCMediaPlayerLegacyPlayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore (1)
 */

@interface MPCMediaPlayerLegacyPlayer : MPCPlayer <MPNowPlayingPlaybackQueueDataSource, MPRemoteCommandDelegate_Private> {
    bool  _allowsNewPlaybackErrorItem;
    NSMapTable * _avItemToPlayerItemWeakMap;
    MPCMediaPlayerLegacyItemContainer * _currentContainer;
    MPCMediaPlayerLegacyItem * _currentItem;
    MPCPlaybackIntent * _fallbackPlaybackIntent;
    MPAVItem * _firstPlaybackErrorItem;
    bool  _hasReceivedAddPlaybackIntent;
    bool  _hasScheduledPlaybackStatePreservation;
    bool  _iAmTheiPod;
    bool  _isRestoringPlaybackState;
    MPLibraryAddStatusObserver * _libraryAddStatusObserver;
    bool  _mediaRemoteSync;
    MPCMediaPlayerLegacyAVController * _player;
    MPCMediaPlayerLegacyNowPlayingObserver * _playerObserver;
    MPCMediaPlayerLegacyReportingController * _reportingController;
    NSObject<OS_dispatch_queue> * _stateRestorationSerialQueue;
}

@property (nonatomic, readonly) MPAVController *avController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPCPlaybackIntent *fallbackPlaybackIntent;
@property (nonatomic, readonly) unsigned long long hardQueueItemCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iAmTheiPod;
@property (getter=isMediaRemoteSyncing, nonatomic, readonly) bool mediaRemoteSync;
@property (nonatomic) bool pictureInPictureSupported;
@property (nonatomic, retain) MPCMediaPlayerLegacyAVController *player;
@property (nonatomic, retain) MPCMediaPlayerLegacyNowPlayingObserver *playerObserver;
@property (nonatomic, retain) MPCMediaPlayerLegacyReportingController *reportingController;
@property (readonly) Class superclass;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (id)_adjustedPlaybackContextForContext:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_currentItemChangedNotification:(id)arg1;
- (void)_currentItemInvalidedCommandsNotification:(id)arg1;
- (void)_getPlaybackContextForPlaybackQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleCreateRadioStationCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleInsertIntoQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleSetQueueCommandEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_notifySupportedCommandsChanged;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1;
- (void)_playerDidPausePlaybackForLeaseEndNotification:(id)arg1;
- (id)_playerItemForAVItem:(id)arg1;
- (void)_playerPlaybackErrorNotification:(id)arg1;
- (void)_refreshIAmTheiPod;
- (void)_reloadPlayerWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_repeatShuffleTypeChangedNotification:(id)arg1;
- (bool)_shouldVendContentItemForOffset:(long long)arg1;
- (void)_soundCheckEnabledChangedNotification:(id)arg1;
- (void)_updateSupportedCommandsForCommandCenter:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)avController;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)contentItemForOffset:(long long)arg1;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)currentContainer;
- (id)currentItem;
- (void)dealloc;
- (id)fallbackPlaybackIntent;
- (unsigned long long)hardQueueItemCount;
- (bool)iAmTheiPod;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isMediaRemoteSyncing;
- (bool)isRestoringPlaybackState;
- (bool)isSyncingNowPlayingInfo;
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (bool)pictureInPictureSupported;
- (id)player;
- (id)playerObserver;
- (void)preservePlaybackStateImmediately;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerWithPlaybackLeaseController:(id)arg1;
- (bool)remoteCommand:(id)arg1 isEnabledForContentItemIdentifier:(id)arg2;
- (bool)remoteCommand:(id)arg1 isSupportedForContentItemIdentifier:(id)arg2;
- (id)reportingController;
- (void)restorePlaybackStateCompletionHandler:(id /* block */)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)setFallbackPlaybackIntent:(id)arg1;
- (void)setIAmTheiPod:(bool)arg1;
- (void)setPictureInPictureSupported:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerObserver:(id)arg1;
- (void)setReportingController:(id)arg1;
- (void)startMediaRemoteSync;
- (void)startPictureInPicture;
- (void)startSyncingNowPlayingInfo;
- (long long)state;
- (void)stopMediaRemoteSync;
- (void)stopSyncingNowPlayingInfo;
- (void)updateSupportedCommandsForCommandCenter:(id)arg1 muxer:(id)arg2 action:(SEL)arg3;
- (id)videoLayer;

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
