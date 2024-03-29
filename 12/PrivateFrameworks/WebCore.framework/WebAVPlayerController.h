<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WebAVPlayerController.h</title>
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

/PrivateFrameworks/WebCore.framework/WebAVPlayerController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore (8607.3.18)
 */

@interface WebAVPlayerController : NSObject {
    bool  _allowsExternalPlayback;
    NSArray * _audioMediaSelectionOptions;
    bool  _canPause;
    bool  _canPlay;
    bool  _canScanBackward;
    bool  _canSeek;
    bool  _canTogglePlayback;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentDimensions;
    double  _contentDuration;
    double  _contentDurationWithinEndTimes;
    WebAVMediaSelectionOption * _currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption * _currentLegibleMediaSelectionOption;
    struct PlaybackSessionModel { int (**x1)(); struct WeakPtrFactory<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_2_1_1; } x2; } * _delegate;
    bool  _externalPlaybackActive;
    NSString * _externalPlaybackAirPlayDeviceLocalizedName;
    long long  _externalPlaybackType;
    bool  _hasEnabledAudio;
    bool  _hasEnabledVideo;
    bool  _hasVideo;
    bool  _isScrubbing;
    NSArray * _legibleMediaSelectionOptions;
    bool  _liveStreamEventModePossible;
    double  _liveUpdateInterval;
    NSArray * _loadedTimeRanges;
    AVValueTiming * _maxTiming;
    AVValueTiming * _minTiming;
    bool  _muted;
    bool  _pictureInPictureInterrupted;
    bool  _pictureInPicturePossible;
    struct PlaybackSessionInterfaceAVKit { int (**x1)(); int (**x2)(); unsigned int x3; struct RetainPtr<WebAVPlayerController> { void *x_4_1_1; } x4; struct WeakPtr<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_5_1_1; } x5; } * _playbackSessionInterface;
    AVPlayerController * _playerControllerProxy;
    bool  _playingOnSecondScreen;
    double  _rate;
    NSArray * _seekableTimeRanges;
    double  _seekableTimeRangesLastModifiedTime;
    long long  _status;
    AVValueTiming * _timing;
}

@property bool allowsExternalPlayback;
@property (retain) NSArray *audioMediaSelectionOptions;
@property bool canPause;
@property bool canPlay;
@property bool canScanBackward;
@property (readonly) bool canScanForward;
@property bool canSeek;
@property (readonly) bool canSeekToBeginning;
@property (readonly) bool canSeekToEnd;
@property bool canTogglePlayback;
@property struct CGSize { double x1; double x2; } contentDimensions;
@property double contentDuration;
@property double contentDurationWithinEndTimes;
@property (retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property /* Warning: unhandled struct encoding: '{PlaybackSessionModel=^^?{WeakPtrFactory<WebCore::PlaybackSessionModel>={RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>' */ struct *delegate; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > >=^{WeakReference<WebCore::PlaybackSessionModel>}}}} */
@property (getter=isExternalPlaybackActive) bool externalPlaybackActive;
@property (retain) NSString *externalPlaybackAirPlayDeviceLocalizedName;
@property long long externalPlaybackType;
@property (readonly) bool hasAudioMediaSelectionOptions;
@property bool hasEnabledAudio;
@property bool hasEnabledVideo;
@property (readonly) bool hasLegibleMediaSelectionOptions;
@property (readonly) bool hasMediaSelectionOptions;
@property bool hasVideo;
@property (readonly) bool isScrubbing;
@property (retain) NSArray *legibleMediaSelectionOptions;
@property double liveUpdateInterval;
@property (retain) NSArray *loadedTimeRanges;
@property (readonly) double maxTime;
@property (nonatomic, retain) AVValueTiming *maxTiming;
@property (readonly) double minTime;
@property (nonatomic, retain) AVValueTiming *minTiming;
@property (getter=isMuted) bool muted;
@property (getter=isPictureInPictureInterrupted) bool pictureInPictureInterrupted;
@property (getter=isPictureInPicturePossible) bool pictureInPicturePossible;
@property struct PlaybackSessionInterfaceAVKit { int (**x1)(); int (**x2)(); unsigned int x3; struct RetainPtr<WebAVPlayerController> { void *x_4_1_1; } x4; /* Warning: unhandled struct encoding: '{WeakPtr<WebCore::PlaybackSessionModel>={RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>' */ struct x5; }*playbackSessionInterface; /* unknown property attribute:  WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > >=^{WeakReference<WebCore::PlaybackSessionModel>}}}} */
@property (retain) AVPlayerController *playerControllerProxy;
@property (getter=isPlaying) bool playing;
@property (getter=isPlayingOnExternalScreen, readonly) bool playingOnExternalScreen;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property double rate;
@property (retain) NSArray *seekableTimeRanges;
@property double seekableTimeRangesLastModifiedTime;
@property long long status;
@property (retain) AVValueTiming *timing;
@property double volume;

+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;

- (bool)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (bool)canPause;
- (bool)canPlay;
- (bool)canScanBackward;
- (bool)canScanForward;
- (bool)canSeek;
- (bool)canSeekToBeginning;
- (bool)canSeekToEnd;
- (bool)canTogglePlayback;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (struct PlaybackSessionModel { int (**x1)(); struct WeakPtrFactory<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_2_1_1; } x2; }*)delegate;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (bool)hasAudioMediaSelectionOptions;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLegibleMediaSelectionOptions;
- (bool)hasLiveStreamingContent;
- (bool)hasMediaSelectionOptions;
- (bool)hasSeekableLiveStreamingContent;
- (bool)hasVideo;
- (id)init;
- (bool)isExternalPlaybackActive;
- (bool)isMuted;
- (bool)isPictureInPictureInterrupted;
- (bool)isPictureInPicturePossible;
- (bool)isPlaying;
- (bool)isPlayingOnExternalScreen;
- (bool)isPlayingOnSecondScreen;
- (bool)isScrubbing;
- (id)legibleMediaSelectionOptions;
- (double)liveUpdateInterval;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)maxTiming;
- (double)minTime;
- (id)minTiming;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (struct PlaybackSessionInterfaceAVKit { int (**x1)(); int (**x2)(); unsigned int x3; struct RetainPtr<WebAVPlayerController> { void *x_4_1_1; } x4; struct WeakPtr<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_5_1_1; } x5; }*)playbackSessionInterface;
- (id)player;
- (id)playerControllerProxy;
- (double)rate;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (double)seekableTimeRangesLastModifiedTime;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setCanPause:(bool)arg1;
- (void)setCanPlay:(bool)arg1;
- (void)setCanScanBackward:(bool)arg1;
- (void)setCanSeek:(bool)arg1;
- (void)setCanTogglePlayback:(bool)arg1;
- (void)setContentDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentDuration:(double)arg1;
- (void)setContentDurationWithinEndTimes:(double)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)setDelegate:(struct PlaybackSessionModel { int (**x1)(); struct WeakPtrFactory<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_2_1_1; } x2; }*)arg1;
- (void)setExternalPlaybackActive:(bool)arg1;
- (void)setExternalPlaybackAirPlayDeviceLocalizedName:(id)arg1;
- (void)setExternalPlaybackType:(long long)arg1;
- (void)setHasEnabledAudio:(bool)arg1;
- (void)setHasEnabledVideo:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLiveUpdateInterval:(double)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setMaxTiming:(id)arg1;
- (void)setMinTiming:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPictureInPictureInterrupted:(bool)arg1;
- (void)setPictureInPicturePossible:(bool)arg1;
- (void)setPlaybackSessionInterface:(struct PlaybackSessionInterfaceAVKit { int (**x1)(); int (**x2)(); unsigned int x3; struct RetainPtr<WebAVPlayerController> { void *x_4_1_1; } x4; struct WeakPtr<WebCore::PlaybackSessionModel> { struct RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > > { struct WeakReference<WebCore::PlaybackSessionModel> {} *x_1_2_1; } x_5_1_1; } x5; }*)arg1;
- (void)setPlayerControllerProxy:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setRate:(double)arg1;
- (void)setSeekableTimeRanges:(id)arg1;
- (void)setSeekableTimeRangesLastModifiedTime:(double)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTiming:(id)arg1;
- (void)setVolume:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (long long)status;
- (id)timing;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateMinMaxTiming;
- (double)volume;
- (void)volumeChanged:(double)arg1;

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
