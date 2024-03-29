<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HUCameraStreamViewController.h</title>
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

/PrivateFrameworks/HomeUI.framework/HUCameraStreamViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HUCameraStreamViewController : UIViewController <HFExecutionEnvironmentObserver, HFItemManagerDelegate, HUItemPresentationContainer, HUPresentationDelegate, HUPresentationDelegateHost, PGPictureInPictureProxyDelegate> {
    bool  _barsHidden;
    HFCameraAudioManager * _cameraAudioManager;
    HUCameraStreamContentViewController * _cameraStreamContentViewController;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _defaultCameraBadgeOffset;
    <HUCameraStreamViewControllerDelegate> * _delegate;
    HUCameraDemoPlayerView * _demoPlayerView;
    bool  _didSetupToolbarMicrophoneButtonConstraints;
    bool  _didSetupVolumeSliderConstraints;
    HUCameraFloatingMicrophoneButton * _floatingMicrophoneButton;
    HFItemManager * _itemManager;
    UIViewController * _lastPresentingViewController;
    AVPlayerLooper * _looper;
    UIBarButtonItem * _microphoneBarButtonItem;
    bool  _navigationControllerSetup;
    PGPictureInPictureProxy * _pipProxy;
    <HUPresentationDelegate> * _presentationDelegate;
    HUCameraMicrophoneButton * _toolbarMicrophoneButton;
    UIBarButtonItem * _volumeBarButtonItem;
    MPVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeSliderCenterXConstraint;
    NSLayoutConstraint * _volumeSliderLeadingConstraint;
    NSLayoutConstraint * _volumeSliderWidthConstraint;
}

@property (getter=areBarsHidden, nonatomic) bool barsHidden;
@property (nonatomic, retain) HFCameraAudioManager *cameraAudioManager;
@property (nonatomic, readonly) HFCameraItem *cameraItem;
@property (nonatomic, readonly) HUCameraStreamContentViewController *cameraStreamContentViewController;
@property (nonatomic, readonly) UIView *cameraViewSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } defaultCameraBadgeOffset;
@property (nonatomic) <HUCameraStreamViewControllerDelegate> *delegate;
@property (nonatomic, retain) HUCameraDemoPlayerView *demoPlayerView;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSetupToolbarMicrophoneButtonConstraints;
@property (nonatomic) bool didSetupVolumeSliderConstraints;
@property (nonatomic, retain) HUCameraFloatingMicrophoneButton *floatingMicrophoneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItem *hu_presentedItem;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic) UIViewController *lastPresentingViewController;
@property (nonatomic, retain) AVPlayerLooper *looper;
@property (nonatomic, retain) UIBarButtonItem *microphoneBarButtonItem;
@property (getter=isNavigationControllerSetup, nonatomic) bool navigationControllerSetup;
@property (nonatomic, retain) PGPictureInPictureProxy *pipProxy;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUCameraMicrophoneButton *toolbarMicrophoneButton;
@property (nonatomic) unsigned long long viewAppearanceState;
@property (nonatomic, retain) UIBarButtonItem *volumeBarButtonItem;
@property (nonatomic, retain) MPVolumeSlider *volumeSlider;
@property (nonatomic, retain) NSLayoutConstraint *volumeSliderCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *volumeSliderLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *volumeSliderWidthConstraint;

- (void).cxx_destruct;
- (void)_adjustVolumeSliderToAccomodateHomeAffordance;
- (void)_attachCameraStreamViewController;
- (id)_barBackgroundView;
- (id)_cameraProfile;
- (void)_configureConstraintsForContentView:(id)arg1;
- (void)_detailsButtonPressed;
- (void)_doneButtonPressed;
- (void)_handleApplicationDidBecomeActiveNotification;
- (void)_handleBarHideTapGesture:(id)arg1;
- (void)_microphoneButtonPressed;
- (void)_presentCameraDetailsWithViewController:(id)arg1;
- (void)_setupFloatingMicrphoneButtonIfNeeded;
- (void)_setupNavigationController;
- (void)_setupToolbarMicrophoneConstraintsIfNeeded;
- (void)_setupVolumeSliderConstraintsIfNeeded;
- (unsigned long long)_streamState;
- (void)_updateCameraAudioManager;
- (void)_updateCameraBadgeOffset;
- (void)_updateMicrophoneButton;
- (void)_updatePIPViewFrame;
- (void)_updateTitleAndLoadingState;
- (void)_updateVolumeSliderConstraintsIfNeeded;
- (bool)areBarsHidden;
- (id)cameraAudioManager;
- (id)cameraItem;
- (id)cameraStreamContentViewController;
- (id)cameraViewSnapshot;
- (struct UIOffset { double x1; double x2; })defaultCameraBadgeOffset;
- (id)delegate;
- (id)demoPlayerView;
- (bool)didSetupToolbarMicrophoneButtonConstraints;
- (bool)didSetupVolumeSliderConstraints;
- (void)executionEnvironmentDidBecomeScreenLocked:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)floatingMicrophoneButton;
- (id)hu_presentedItem;
- (id)initWithCameraItem:(id)arg1;
- (bool)isNavigationControllerSetup;
- (id)itemManager;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)lastPresentingViewController;
- (id)looper;
- (id)microphoneBarButtonItem;
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
- (id)pipProxy;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (id)presentationDelegate;
- (id)previewActionItems;
- (void)setBarsHidden:(bool)arg1;
- (void)setCameraAudioManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDemoPlayerView:(id)arg1;
- (void)setDidSetupToolbarMicrophoneButtonConstraints:(bool)arg1;
- (void)setDidSetupVolumeSliderConstraints:(bool)arg1;
- (void)setFloatingMicrophoneButton:(id)arg1;
- (void)setLastPresentingViewController:(id)arg1;
- (void)setLooper:(id)arg1;
- (void)setMicrophoneBarButtonItem:(id)arg1;
- (void)setNavigationControllerSetup:(bool)arg1;
- (void)setPipProxy:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setToolbarMicrophoneButton:(id)arg1;
- (void)setViewAppearanceState:(unsigned long long)arg1;
- (void)setVolumeBarButtonItem:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (void)setVolumeSliderCenterXConstraint:(id)arg1;
- (void)setVolumeSliderLeadingConstraint:(id)arg1;
- (void)setVolumeSliderWidthConstraint:(id)arg1;
- (id)toolbarMicrophoneButton;
- (unsigned long long)viewAppearanceState;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)volumeBarButtonItem;
- (id)volumeSlider;
- (id)volumeSliderCenterXConstraint;
- (id)volumeSliderLeadingConstraint;
- (id)volumeSliderWidthConstraint;

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
