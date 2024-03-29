<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPCPlayer.h</title>
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

/PrivateFrameworks/MediaPlaybackCore.framework/MPCPlayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore (1)
 */

@interface MPCPlayer : NSObject <MPCMediaRemoteMuxerDelegate> {
    NSString * _activeRouteName;
    MPRemoteCommandCenter * _commandCenter;
    MPCPlayerItemContainer * _currentContainer;
    MPCPlayerItem * _currentItem;
    MPCMediaRemoteMuxer * _mediaRemoteMuxer;
    NSString * _parentAppBundleID;
    NSPointerArray * _playbackErrorObservers;
    NSPointerArray * _playbackIntentObservers;
    bool  _restoringPlaybackState;
    bool  _shouldRestorePlaybackState;
    long long  _state;
    bool  _syncingNowPlayingInfo;
    AVPlayerLayer * _videoLayer;
}

@property (nonatomic, readonly, copy) NSString *activeRouteName;
@property (nonatomic, retain) MPRemoteCommandCenter *commandCenter;
@property (nonatomic) MPCPlayerItemContainer *currentContainer;
@property (nonatomic) MPCPlayerItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MPCMediaRemoteMuxer *mediaRemoteMuxer;
@property (nonatomic, copy) NSString *parentAppBundleID;
@property (nonatomic, readonly, copy) NSArray *playbackErrorObservers;
@property (nonatomic, readonly, copy) NSArray *playbackIntentObservers;
@property (getter=isRestoringPlaybackState, nonatomic, readonly) bool restoringPlaybackState;
@property (nonatomic) bool shouldRestorePlaybackState;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (getter=isSyncingNowPlayingInfo, nonatomic, readonly) bool syncingNowPlayingInfo;
@property (nonatomic, readonly) AVPlayerLayer *videoLayer;

+ (Class)queueRequestOperationClass;

- (void).cxx_destruct;
- (id)activeRouteName;
- (void)addPlaybackIntent:(id)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)clearPlaybackQueueWithCompletion:(id /* block */)arg1;
- (id)commandCenter;
- (id)currentContainer;
- (id)currentItem;
- (id)init;
- (bool)isRestoringPlaybackState;
- (bool)isSyncingNowPlayingInfo;
- (id)mediaRemoteMuxer;
- (id)parentAppBundleID;
- (void)performCommandEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)playbackErrorObservers;
- (id)playbackIntentObservers;
- (void)recordLyricsViewEvent:(id)arg1;
- (void)registerPlaybackErrorObserver:(id)arg1;
- (void)registerPlaybackIntentObserver:(id)arg1;
- (void)restorePlaybackStateCompletionHandler:(id /* block */)arg1;
- (void)setCommandCenter:(id)arg1;
- (void)setCurrentContainer:(id)arg1;
- (void)setCurrentItem:(id)arg1;
- (void)setMediaRemoteMuxer:(id)arg1;
- (void)setParentAppBundleID:(id)arg1;
- (void)setShouldRestorePlaybackState:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldRestorePlaybackState;
- (void)startSyncingNowPlayingInfo;
- (long long)state;
- (void)stopSyncingNowPlayingInfo;
- (void)unregisterPlaybackErrorObserver:(id)arg1;
- (void)unregisterPlaybackIntentObserver:(id)arg1;
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
