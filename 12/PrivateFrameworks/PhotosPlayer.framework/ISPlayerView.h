<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ISPlayerView.h</title>
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

/PrivateFrameworks/PhotosPlayer.framework/ISPlayerView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer (3462.8.190)
 */

@interface ISPlayerView : UIView <ISBasePlayerDelegate, ISChangeObserver> {
    NSMutableSet * __activeGestures;
    UIGestureRecognizer * __gestureRecognizer;
    ISPlayerItem * __playerItem;
    ISBasePlayerUIView * __playerView;
    ISWrappedAVPlayer * __videoPlayer;
    bool  _audioMuted;
    <ISPlayerViewDelegate> * _delegate;
    struct { 
        bool playbackStateDidChange; 
        bool interactingDidChange; 
        bool gestureRecognizerDidChange; 
    }  _delegateRespondsTo;
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensionsOfReservedVideoMemory;
    NSError * _error;
    bool  _isInteracting;
    bool  _isReadyForDisplay;
    struct { 
        bool playerItemLoadingTarget; 
        bool playerPlayerItem; 
        bool playerView; 
        bool playerMuted; 
        bool status; 
        bool readyForDisplay; 
        bool playbackState; 
    }  _isValid;
    long long  _playbackState;
    unsigned long long  _playbackStyle;
    bool  _readyForDisplay;
    long long  _status;
}

@property (nonatomic, readonly) NSMutableSet *_activeGestures;
@property (setter=_setGestureRecognizer:, nonatomic, retain) UIGestureRecognizer *_gestureRecognizer;
@property (setter=_setPlayerItem:, nonatomic, retain) ISPlayerItem *_playerItem;
@property (setter=_setPlayerView:, nonatomic, retain) ISBasePlayerUIView *_playerView;
@property (nonatomic, readonly) ISWrappedAVPlayer *_videoPlayer;
@property (nonatomic) bool audioMuted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISPlayerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGSize { double x1; double x2; } dimensionsOfReservedVideoMemory;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInteracting;
@property (nonatomic, readonly) bool isReadyForDisplay;
@property (setter=_setPlaybackState:, nonatomic) long long playbackState;
@property (nonatomic) unsigned long long playbackStyle;
@property (setter=_setReadyForDisplay:, nonatomic) bool readyForDisplay;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;

+ (void)setAllowPlayerReuse:(bool)arg1;

- (void).cxx_destruct;
- (id)_activeGestures;
- (id)_gestureRecognizer;
- (void)_handleGesture:(id)arg1;
- (void)_invalidatePlaybackState;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_invalidatePlayerMuted;
- (void)_invalidatePlayerPlayerItem;
- (void)_invalidatePlayerView;
- (void)_invalidateReadyForDisplay;
- (void)_invalidateStatus;
- (bool)_needsUpdate;
- (id)_playerItem;
- (id)_playerView;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_setInteracting:(bool)arg1;
- (void)_setPlaybackState:(long long)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_setPlayerView:(id)arg1;
- (void)_setReadyForDisplay:(bool)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_updateIfNeeded;
- (void)_updatePlaybackStateIfNeeded;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_updatePlayerMutedIfNeeded;
- (void)_updatePlayerPlayerItemIfNeeded;
- (void)_updatePlayerViewIfNeeded;
- (void)_updateReadyForDisplayIfNeeded;
- (void)_updateStatusIfNeeded;
- (id)_videoPlayer;
- (bool)audioMuted;
- (id)delegate;
- (struct CGSize { double x1; double x2; })dimensionsOfReservedVideoMemory;
- (id)error;
- (id)gestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithVideoPlayer:(id)arg1;
- (bool)isInteracting;
- (bool)isReadyForDisplay;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)playbackState;
- (unsigned long long)playbackStyle;
- (void)prepareWithPhoto:(struct CGImage { }*)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (void)prepareWithPlayerItem:(id)arg1;
- (bool)readyForDisplay;
- (void)setAudioMuted:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimensionsOfReservedVideoMemory:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlaybackStyle:(unsigned long long)arg1;
- (long long)status;
- (id)videoPlayerForPlayer:(id)arg1;

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
