<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVPlaybackControlsView.h</title>
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

/Frameworks/AVKit.framework/AVPlaybackControlsView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVKit.framework/AVKit (448.1.20)
 */

@interface AVPlaybackControlsView : UIView {
    _UIVisualEffectBackdropView * _captureView;
    NSArray * _customAudioButtons;
    NSArray * _customControlItems;
    AVPlayerViewControllerCustomControlsView * _customControlsView;
    NSArray * _customDisplayModeButtons;
    NSArray * _customMediaButtons;
    NSArray * _defaultAudioControls;
    NSArray * _defaultDisplayModeControls;
    AVButton * _doneButton;
    bool  _doubleRowLayoutEnabled;
    bool  _fullScreen;
    AVButton * _fullScreenButton;
    long long  _includedContainers;
    AVButton * _mediaSelectionButton;
    AVButton * _miniPlayPauseButton;
    AVBackdropView * _miniPlayPauseButtonBackdropView;
    NSUUID * _mostRecentAnimationCompletionsID;
    bool  _needsIntialLayout;
    AVButton * _pictureInPictureButton;
    UIView * _playbackControlsContainer;
    UIViewPropertyAnimator * _playbackControlsVisibilityAnimator;
    long long  _preferredUnobscuredArea;
    AVButton * _prominentPlayButton;
    AVBackdropView * _prominentPlayButtonBackdropView;
    AVPlaybackControlsRoutePickerView * _routePickerView;
    AVBackdropView * _screenModeControls;
    NSLayoutConstraint * _screenModeControlsToVolumeControlsSpacingConstraint;
    AVScrubber * _scrubber;
    AVButton * _skipBackButton;
    AVButton * _skipForwardButton;
    AVButton * _standardPlayPauseButton;
    AVButton * _startLeftwardContentTransitionButton;
    AVButton * _startRightwardContentTransitionButton;
    AVStyleSheet * _styleSheet;
    bool  _topAreaLayoutGuideExpanded;
    AVView * _transportControlsContainerView;
    AVTransportControlsView * _transportControlsView;
    AVButton * _videoGravityButton;
    AVVolumeButtonControl * _volumeButton;
    NSLayoutConstraint * _volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
    AVBackdropView * _volumeControls;
    UIView * _volumeControlsContainer;
    AVVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeTopToLayoutGuideTopConstraint;
    NSLayoutConstraint * _volumeTopToViewTopConstraint;
}

@property (nonatomic, readonly) _UIVisualEffectBackdropView *captureView;
@property (nonatomic, readonly) NSArray *customAudioButtons;
@property (nonatomic, copy) NSArray *customControlItems;
@property (nonatomic, readonly) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (nonatomic, readonly) NSArray *customDisplayModeButtons;
@property (nonatomic, readonly) NSArray *customMediaButtons;
@property (nonatomic, readonly) NSArray *defaultAudioControls;
@property (nonatomic, readonly) NSArray *defaultDisplayModeControls;
@property (nonatomic, readonly) AVButton *doneButton;
@property (getter=isDoubleRowLayoutEnabled, nonatomic) bool doubleRowLayoutEnabled;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic, readonly) AVButton *fullScreenButton;
@property (nonatomic, readonly) bool hasVisibleSubview;
@property (nonatomic) long long includedContainers;
@property (nonatomic, readonly) AVButton *mediaSelectionButton;
@property (nonatomic, readonly) AVButton *miniPlayPauseButton;
@property (nonatomic, readonly) AVBackdropView *miniPlayPauseButtonBackdropView;
@property (nonatomic, retain) NSUUID *mostRecentAnimationCompletionsID;
@property (nonatomic) bool needsIntialLayout;
@property (nonatomic, readonly) AVButton *pictureInPictureButton;
@property (nonatomic, readonly) UIView *playbackControlsContainer;
@property (nonatomic, readonly) bool playbackControlsIncludeDisplayModeControls;
@property (nonatomic, readonly) bool playbackControlsIncludeTransportControls;
@property (nonatomic, readonly) bool playbackControlsIncludeVolumeControls;
@property (nonatomic, retain) UIViewPropertyAnimator *playbackControlsVisibilityAnimator;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic, readonly) AVButton *prominentPlayButton;
@property (nonatomic, readonly) AVBackdropView *prominentPlayButtonBackdropView;
@property (nonatomic, readonly) AVPlaybackControlsRoutePickerView *routePickerView;
@property (nonatomic, readonly) AVBackdropView *screenModeControls;
@property (nonatomic, readonly) NSLayoutConstraint *screenModeControlsToVolumeControlsSpacingConstraint;
@property (nonatomic, readonly) AVScrubber *scrubber;
@property (nonatomic, readonly) bool showsProminentPlayButton;
@property (nonatomic, readonly) AVButton *skipBackButton;
@property (nonatomic, readonly) AVButton *skipForwardButton;
@property (nonatomic, readonly) AVButton *standardPlayPauseButton;
@property (nonatomic, readonly) AVButton *startLeftwardContentTransitionButton;
@property (nonatomic, readonly) AVButton *startRightwardContentTransitionButton;
@property (nonatomic, retain) AVStyleSheet *styleSheet;
@property (getter=isTopAreaLayoutGuideExpanded, nonatomic) bool topAreaLayoutGuideExpanded;
@property (nonatomic, readonly) AVView *transportControlsContainerView;
@property (nonatomic, readonly) AVTransportControlsView *transportControlsView;
@property (nonatomic, readonly) AVButton *videoGravityButton;
@property (nonatomic, readonly) AVVolumeButtonControl *volumeButton;
@property (nonatomic, readonly) NSLayoutConstraint *volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
@property (nonatomic, readonly) AVBackdropView *volumeControls;
@property (nonatomic, readonly) UIView *volumeControlsContainer;
@property (nonatomic, readonly) AVVolumeSlider *volumeSlider;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToLayoutGuideTopConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToViewTopConstraint;

- (void).cxx_destruct;
- (id)_buttonsForControlItems:(id)arg1 withType:(long long)arg2 limit:(unsigned long long)arg3;
- (id)_customControlsViewIfLoaded;
- (bool)_isDescendantOfNonPagingScrollView;
- (id)_playbackControlsViewItems;
- (void)_setupInitialLayout;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_statusBarHiddenDidChange:(id)arg1;
- (void)_statusBarOrientationWillChange:(id)arg1;
- (void)_updateAreVolumeAndTransportControlsVisible;
- (void)_updateDoubleRowLayoutEnabled;
- (void)_updateLayoutMargins;
- (void)_updateLayoutMargins:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePlaybackControlsVisibility;
- (void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3;
- (id)captureView;
- (id)customAudioButtons;
- (id)customControlItems;
- (id)customControlsView;
- (id)customDisplayModeButtons;
- (id)customMediaButtons;
- (void)dealloc;
- (id)defaultAudioControls;
- (id)defaultDisplayModeControls;
- (id)doneButton;
- (id)fullScreenButton;
- (bool)hasVisibleSubview;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)includedContainers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2 captureView:(id)arg3;
- (bool)isDoubleRowLayoutEnabled;
- (bool)isFullScreen;
- (bool)isTopAreaLayoutGuideExpanded;
- (void)layoutSubviews;
- (id)mediaSelectionButton;
- (id)miniPlayPauseButton;
- (id)miniPlayPauseButtonBackdropView;
- (id)mostRecentAnimationCompletionsID;
- (bool)needsIntialLayout;
- (id)pictureInPictureButton;
- (id)playbackControlsContainer;
- (bool)playbackControlsIncludeDisplayModeControls;
- (bool)playbackControlsIncludeTransportControls;
- (bool)playbackControlsIncludeVolumeControls;
- (id)playbackControlsVisibilityAnimator;
- (long long)preferredUnobscuredArea;
- (id)prominentPlayButton;
- (id)prominentPlayButtonBackdropView;
- (id)routePickerView;
- (void)safeAreaInsetsDidChange;
- (id)screenModeControls;
- (id)screenModeControlsToVolumeControlsSpacingConstraint;
- (id)scrubber;
- (void)setCustomControlItems:(id)arg1;
- (void)setDoubleRowLayoutEnabled:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setIncludedContainers:(long long)arg1;
- (void)setMostRecentAnimationCompletionsID:(id)arg1;
- (void)setNeedsIntialLayout:(bool)arg1;
- (void)setPlaybackControlsVisibilityAnimator:(id)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setTopAreaLayoutGuideExpanded:(bool)arg1;
- (void)setupInitialLayout;
- (bool)showsProminentPlayButton;
- (id)skipBackButton;
- (id)skipForwardButton;
- (id)standardPlayPauseButton;
- (id)startLeftwardContentTransitionButton;
- (id)startRightwardContentTransitionButton;
- (id)styleSheet;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlsContainerView;
- (id)transportControlsView;
- (void)updateLayoutForChangedControlsVisibility;
- (id)videoGravityButton;
- (id)volumeButton;
- (id)volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
- (id)volumeControls;
- (id)volumeControlsContainer;
- (id)volumeSlider;
- (id)volumeTopToLayoutGuideTopConstraint;
- (id)volumeTopToViewTopConstraint;

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
