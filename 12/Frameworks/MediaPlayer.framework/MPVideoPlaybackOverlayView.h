<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPVideoPlaybackOverlayView.h</title>
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

/Frameworks/MediaPlayer.framework/MPVideoPlaybackOverlayView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPVideoPlaybackOverlayView : UIView <MPAVLightweightRoutingControllerDelegate, MPDetailSliderDelegate, MPVideoOverlay, MPVolumeControllerDelegate, UIPopoverPresentationControllerDelegate> {
    MPKnockoutButton * _airplayButton;
    bool  _allowsAudioAndSubtitles;
    bool  _allowsExitFromFullscreen;
    bool  _allowsPictureInPicture;
    bool  _allowsWirelessPlayback;
    UIButton * _audioAndSubtitlesButton;
    MPAudioAndSubtitlesController * _audioAndSubtitlesController;
    bool  _automaticallyHandleTransportControls;
    _UIBackdropView * _bottomBarBackdropView;
    UIView * _bottomBarBottomLayoutGuide;
    NSLayoutConstraint * _bottomBarHeightConstraint;
    UIView * _bottomBarItemsGuide;
    UIView * _bottomBarTopLayoutGuide;
    NSArray * _bottomItems;
    NSLayoutConstraint * _bottomItemsBottomConstraint;
    NSArray * _bottomItemsConstraints;
    NSLayoutConstraint * _bottomItemsLeftConstraint;
    NSLayoutConstraint * _bottomItemsRightConstraint;
    <MPVideoOverlayDelegate> * _delegate;
    UIButton * _doneButton;
    MPKnockoutButton * _fullscreenButton;
    bool  _ignoreTouchUp;
    MPAVItem * _item;
    MPKnockoutButton * _leftButton;
    MPAVLightweightRoutingController * _lightweightRoutingController;
    UIActivityIndicatorView * _loadingIndicator;
    UILabel * _loadingLabel;
    MPMediaControls * _mediaControls;
    long long  _overrideType;
    MPKnockoutButton * _pictureInPictureButton;
    MPKnockoutButton * _playPauseButton;
    MPAVController * _player;
    double  _previousTopBarMargin;
    MPKnockoutButton * _rightButton;
    UIButton * _scaleButton;
    UILabel * _scrubInstructions1;
    UILabel * _scrubInstructions2;
    MPDetailSlider * _scrubber;
    int  _seekDirection;
    bool  _shouldResumePlayback;
    UIStatusBar * _statusBar;
    long long  _style;
    bool  _ticking;
    _UIBackdropView * _topBarBackdropView;
    NSLayoutConstraint * _topBarBottomConstraint;
    NSLayoutConstraint * _topBarHeightConstraint;
    UIView * _topBarItemsGuide;
    UIView * _topBarLayoutGuide;
    NSLayoutConstraint * _topBarLayoutGuideHeightConstraint;
    NSArray * _topBarTraitCollectionConstraints;
    NSArray * _topItems;
    NSArray * _topItemsConstraints;
    NSLayoutConstraint * _topItemsTopConstraint;
    NSLayoutConstraint * _topItemsTrailingConstraint;
    MPVideoView * _videoView;
    UIViewController * _viewControllerForModalPresentationOrientation;
    MPVolumeController * _volumeController;
    MPVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeSliderRightConstraint;
    NSLayoutConstraint * _volumeSliderWidthConstraint;
    unsigned long long  desiredParts;
    unsigned long long  disabledParts;
    bool  navigationBarHidden;
    <MPVideoControllerProtocol> * videoViewController;
    unsigned long long  visibleParts;
}

@property (nonatomic) bool allowsAudioAndSubtitles;
@property (nonatomic) bool allowsDetailScrubbing;
@property (nonatomic) bool allowsExitFromFullscreen;
@property (nonatomic) bool allowsPictureInPicture;
@property (nonatomic) bool allowsScrubbing;
@property (nonatomic) bool allowsWirelessPlayback;
@property (nonatomic) bool automaticallyHandleTransportControls;
@property (nonatomic, readonly) _UIBackdropView *bottomBarBackdropView;
@property (nonatomic, readonly) double bottomBarHeight;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVideoOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPAVItem *item;
@property (nonatomic, readonly, retain) UINavigationBar *navigationBar;
@property (nonatomic) bool navigationBarHidden;
@property (setter=_setOverrideType:, nonatomic) long long overrideType;
@property (nonatomic, retain) MPAVController *player;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UIBackdropView *topBarBackdropView;
@property (nonatomic) MPVideoView *videoView;
@property (nonatomic) <MPVideoControllerProtocol> *videoViewController;
@property (nonatomic) UIViewController *viewControllerForModalPresentationOrientation;
@property (nonatomic) unsigned long long visibleParts;

- (void).cxx_destruct;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_airplayButtonTapped:(id)arg1;
- (void)_alternateTracksAvailable:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_audioAndSubtitlesButtonTapped:(id)arg1;
- (void)_buttonInteractionBegan:(id)arg1;
- (void)_buttonInteractionCanceled:(id)arg1;
- (void)_buttonInteractionEnded:(id)arg1;
- (void)_configureAuxiliaryButtons:(bool)arg1;
- (void)_configureTransportControls;
- (void)_doneButtonTapped:(id)arg1;
- (void)_durationAvailable:(id)arg1;
- (void)_effectiveScaleModeDidChange:(id)arg1;
- (void)_fullscreenButtonTapped:(id)arg1;
- (void)_handleDismissAudioAndSubtitlesController;
- (void)_hideScrubInstructions;
- (id)_imageNamed:(id)arg1;
- (id)_imageNamed:(id)arg1 forControlState:(unsigned long long)arg2;
- (void)_itemChanged:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (id)_newFrostedGlassBackdropView;
- (void)_notifyDelegateOfUserEvent:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1;
- (void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1;
- (void)_observeControl:(id)arg1;
- (void)_pictureInPictureButtonTapped:(id)arg1;
- (void)_playPauseButtonTapped:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_registerForItemNotifications:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_scaleButtonTapped:(id)arg1;
- (void)_seekabilityChanged:(id)arg1;
- (void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(bool)arg3;
- (void)_setOverrideType:(long long)arg1;
- (void)_setScrubberDuration:(double)arg1;
- (void)_setScrubberValue:(double)arg1;
- (bool)_shouldHideStatusBar;
- (void)_showScrubInstructions;
- (void)_skipButtonTouchCancel:(id)arg1;
- (void)_skipButtonTouchDown:(id)arg1;
- (void)_skipButtonTouchUpInside:(id)arg1;
- (void)_skipButtonTouchUpOutside:(id)arg1;
- (void)_startSeeking;
- (void)_tick:(id)arg1;
- (void)_unregisterForItemNotifications:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)_updateAirplayButton;
- (void)_updateLoadingIndicator;
- (void)_updateScaleButton;
- (void)_updateTopBarBoundsBasedConstraints;
- (void)_updateVolumeImage:(float)arg1;
- (void)_updateVolumeSlider;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)allowsAudioAndSubtitles;
- (bool)allowsDetailScrubbing;
- (bool)allowsExitFromFullscreen;
- (bool)allowsPictureInPicture;
- (bool)allowsScrubbing;
- (bool)allowsWirelessPlayback;
- (bool)automaticallyHandleTransportControls;
- (id)bottomBarBackdropView;
- (double)bottomBarHeight;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)desiredParts;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToWindow;
- (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(bool)arg2;
- (void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2;
- (id)navigationBar;
- (bool)navigationBarHidden;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overrideType;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (void)removeFromSuperview;
- (void)setAllowsAudioAndSubtitles:(bool)arg1;
- (void)setAllowsDetailScrubbing:(bool)arg1;
- (void)setAllowsExitFromFullscreen:(bool)arg1;
- (void)setAllowsPictureInPicture:(bool)arg1;
- (void)setAllowsScrubbing:(bool)arg1;
- (void)setAllowsWirelessPlayback:(bool)arg1;
- (void)setAutomaticallyHandleTransportControls:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 animateAlongside:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)setItem:(id)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVideoView:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setViewControllerForModalPresentationOrientation:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (long long)style;
- (id)topBarBackdropView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (bool)updateTimeBasedValues;
- (id)videoView;
- (id)videoViewController;
- (id)viewControllerForModalPresentationOrientation;
- (unsigned long long)visibleParts;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;

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