<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPPlaybackControlsView.h</title>
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

/Frameworks/MediaPlayer.framework/MPPlaybackControlsView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPPlaybackControlsView : UIView <CAAnimationDelegate, MPDetailSliderDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    <MPPlaybackControlsDelegate> * _delegate;
    unsigned int  _detailScrubbing;
    unsigned long long  _disabledParts;
    unsigned int  _fastForwardAndRewindButtonDisabled;
    MPButton * _fastFowardButton;
    UIView * _fastFowardButtonBezel;
    MPButton * _geniusButton;
    unsigned int  _geniusButtonDisabled;
    MPAVItem * _item;
    MPButton * _mailButton;
    unsigned int  _mailButtonDisabled;
    unsigned int  _mailButtonHidden;
    MPTimeMarker * _markerForProgressControlDuration;
    unsigned int  _needsUpdateButtonVisibility;
    MPButton * _playbackSpeedButton;
    unsigned int  _playbackSpeedButtonDisabled;
    MPAVController * _player;
    MPDetailSlider * _progressControl;
    double  _progressOffset;
    MPButton * _repeatButton;
    MPButton * _rewindButton;
    UIView * _rewindButtonBezel;
    CABasicAnimation * _rewindOpacityAnimation;
    float  _seekedToValue;
    MPButton * _shuffleButton;
    double  _tickInterval;
    UILabel * _trackInfoLabel;
    unsigned int  _useMediaDetailSlider;
    unsigned long long  _visibleParts;
    unsigned int  _wantsTick;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPPlaybackControlsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detailScrubbingHidesControls;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideGeniusButton;
@property (nonatomic, readonly) bool isScrubbing;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, readonly) NSString *localizedScrubSpeedText;
@property (nonatomic, readonly) UIImage *mailButtonImage;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic, readonly) UIImage *repeatButtonImage;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) bool shouldOverrideProgressTimeLabelStyle;
@property (nonatomic, readonly) UIImage *shuffleButtonImage;
@property (nonatomic, readonly) bool shuffleIsOn;
@property (nonatomic, readonly) long long shuffleType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibleParts;

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(bool)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (double)_currentDisplayTime;
- (void)_fastForwardButton:(id)arg1;
- (void)_geniusButton:(id)arg1;
- (void)_handleGeniusButtonClick;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_mailButton:(id)arg1;
- (void)_playbackModeDidChangeNotification:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (void)_registerForAVItemNotifications;
- (void)_repeatButton:(id)arg1;
- (void)_resetGeniusButtonImages;
- (void)_rewindButton:(id)arg1;
- (void)_setCurrentTime:(double)arg1 duration:(double)arg2;
- (void)_setVisiblePartsNeedReload;
- (void)_shuffleButton:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForAVItemNotifications;
- (void)_updateButtonVisibility;
- (void)_updateForPlaybackSpeed;
- (double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(bool)arg2;
- (void)_validityChangedNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (Class)buttonClass;
- (long long)buttonType;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)detailScrubbingHidesControls;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (unsigned long long)disabledParts;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (id)geniusButtonImageForControlState:(unsigned long long)arg1;
- (void)handleChangeToRepeatType:(long long)arg1;
- (void)handleChangeToShuffleType:(long long)arg1;
- (bool)hideGeniusButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isScrubbing;
- (id)item;
- (void)layoutSubviews;
- (id)localizedScrubSpeedText;
- (id)mailButtonImage;
- (id)newButtonBezelViewForPart:(unsigned long long)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newProgressIndicator;
- (id)newTrackInfoLabel;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(long long)arg1;
- (id)playbackSpeedTitleForPlaybackSpeed:(long long)arg1;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)progressBarClipsToChapterDuration;
- (void)registerForPlayerNotifications;
- (void)reloadButtonVisibility;
- (void)reloadControls;
- (void)reloadView;
- (id)repeatButtonImage;
- (long long)repeatType;
- (void)resetDetailSlider:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (bool)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (bool)shuffleIsOn;
- (long long)shuffleType;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (void)updateForEndOfDetailScrubbing;
- (unsigned long long)visibleParts;

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
