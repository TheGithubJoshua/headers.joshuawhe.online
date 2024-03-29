<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroIOSPlayerViewController.h</title>
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

/PrivateFrameworks/Memories.framework/MiroIOSPlayerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroIOSPlayerViewController : MiroPlayerViewController <MiroActivityContainerViewControllerProtocol, MiroEditorViewControllerDelegate, MiroMovieDisplayContainerViewControllerDelegate, MiroPreventDismissalDelegate, MiroSliderViewControllerDataSource, PLDismissableViewController, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate> {
    UIBarButtonItem * _airPlayBBItem;
    bool  _airPlayIsAvailable;
    bool  _askedToCreateMemory;
    MiroAutoEditController * _autoEditController;
    UIView * _bottomBar;
    UIButton * _cancelButton;
    NSLayoutConstraint * _cancelButtonLeadingConstraint;
    NSLayoutConstraint * _cancelButtonTopConstraint;
    bool  _controlVisibility;
    bool  _customDurationSelected;
    bool  _didDragSlider;
    NSArray * _durationDisplayNames;
    MiroSliderViewController * _durationSlider;
    UIView * _editorPresentationSnapshot;
    NSError * _error;
    NSLayoutConstraint * _horizontalCenteredLabel;
    NSLayoutConstraint * _horizontalOffsetLabel;
    double  _initialDuration;
    NSString * _initialMood;
    UILabel * _label;
    RoundProgressView * _landscapeProgressView;
    UIButton * _loadErrorButton;
    MiroMemoryEditorRootViewController * _memoryEditor;
    MiroSliderViewController * _moodSlider;
    MiroMovieDisplayContainerViewController * _movieContainerViewController;
    NSLayoutConstraint * _nonCompactRoundProgressCenterY;
    UIView * _offscreenPresentationSnapshot;
    unsigned long long  _playerSpinnerState;
    UIView * _progressContainerView;
    bool  _progressIncludesDownload;
    NSLayoutConstraint * _progressTopLine;
    RoundProgressView * _progressView;
    UIScreenEdgePanGestureRecognizer * _screenEdgePanLeftGestureRecognizer;
    MiroVideoScrubberContainerViewController * _scrubberContainer;
    int  _selectedDuration;
    UIBarButtonItem * _shareBBItem;
    bool  _shouldPlayOnAppearance;
    bool  _showCancelButton;
    unsigned long long  _startTime;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeAtTeardown;
    UILabel * _titleLabel;
    NSLayoutConstraint * _toolbarBlurBottomConstraint;
    NSLayoutConstraint * _toolbarBottomConstraint;
    NSLayoutConstraint * _toolbarHeightConstraint;
    MiroTTRLoadingViewController * _ttrLoadingView;
    NSLayoutConstraint * _verticalCenteredLabel;
    NSLayoutConstraint * _verticalProgressLabelSpace;
    UITapGestureRecognizer * _zoomDoubleTap;
    bool  preventDismissalByPhotosIfPossible;
}

@property (nonatomic, readonly) UIBarButtonItem *activityBBItem;
@property (nonatomic, retain) UIBarButtonItem *airPlayBBItem;
@property (nonatomic, readonly) UIBarButtonItem *airPlayCompactBBItem;
@property (nonatomic) bool airPlayIsAvailable;
@property (nonatomic) bool askedToCreateMemory;
@property (retain) MiroAutoEditController *autoEditController;
@property (nonatomic, readonly) UIBarButtonItem *backBBItem;
@property (nonatomic, retain) UIView *bottomBar;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) NSLayoutConstraint *cancelButtonLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *cancelButtonTopConstraint;
@property (nonatomic) bool controlVisibility;
@property (nonatomic, readonly) bool customDurationAvailable;
@property bool customDurationSelected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didDragSlider;
@property (nonatomic, retain) NSArray *durationDisplayNames;
@property (nonatomic, retain) MiroSliderViewController *durationSlider;
@property (nonatomic, readonly) UIBarButtonItem *editBBItem;
@property (nonatomic, retain) UIView *editorPresentationSnapshot;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) UIBarButtonItem *flexSpaceBBItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *horizontalOffsetLabel;
@property (nonatomic) double initialDuration;
@property (nonatomic, retain) NSString *initialMood;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) RoundProgressView *landscapeProgressView;
@property (nonatomic, retain) UIButton *loadErrorButton;
@property (nonatomic, retain) MiroMemoryEditorRootViewController *memoryEditor;
@property (nonatomic, retain) MiroSliderViewController *moodSlider;
@property (nonatomic, retain) MiroMovieDisplayContainerViewController *movieContainerViewController;
@property (nonatomic, readonly) UIBarButtonItem *navBarShareBBItem;
@property (nonatomic, retain) NSLayoutConstraint *nonCompactRoundProgressCenterY;
@property (nonatomic, retain) UIView *offscreenPresentationSnapshot;
@property (nonatomic, readonly) UIBarButtonItem *playPauseBBItem;
@property unsigned long long playerSpinnerState;
@property (nonatomic) bool preventDismissalByPhotosIfPossible;
@property (nonatomic, retain) UIView *progressContainerView;
@property (nonatomic) bool progressIncludesDownload;
@property (nonatomic, retain) NSLayoutConstraint *progressTopLine;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic, retain) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer;
@property (nonatomic, retain) MiroVideoScrubberContainerViewController *scrubberContainer;
@property (nonatomic) int selectedDuration;
@property (nonatomic, retain) UIBarButtonItem *shareBBItem;
@property bool shouldPlayOnAppearance;
@property (nonatomic) bool showCancelButton;
@property unsigned long long startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeAtTeardown;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *toolbarBlurBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolbarBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolbarHeightConstraint;
@property (nonatomic, retain) MiroTTRLoadingViewController *ttrLoadingView;
@property (nonatomic, retain) NSLayoutConstraint *verticalCenteredLabel;
@property (nonatomic, retain) NSLayoutConstraint *verticalProgressLabelSpace;
@property (nonatomic, retain) UITapGestureRecognizer *zoomDoubleTap;

- (void).cxx_destruct;
- (id)_addHorizontalDividerToSuperView:(id)arg1 constrainedToYAxisAnchor:(id)arg2;
- (void)_addToggleControlsGestureRecognizer;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_atexitInitialize;
- (void)_atexitUninitialize;
- (void)_autoEditOnAppear;
- (void)_cancelProgress:(id)arg1;
- (void)_clearEditorPresentationSnapshot;
- (void)_clearOffscreenPresentationSnapshot;
- (unsigned long long)_countForDurationOptions;
- (bool)_deviceIsRunningInternalOS;
- (void)_exportDidEnd:(id)arg1;
- (void)_exportWillBegin:(id)arg1;
- (void)_launchAutoEditDebugView:(id)arg1;
- (void)_mediaServicesReset:(id)arg1;
- (void)_memoryEditorWithCompletion:(id /* block */)arg1;
- (id)_moodIDForIndexPath:(id)arg1;
- (void)_movePlayerToBeginning;
- (void)_reEnableToolbar:(id)arg1;
- (void)_resetAudioSession;
- (void)_resetMovieAndUserInterfaceHidePoster:(bool)arg1;
- (void)_setupBottomToolbar;
- (void)_setupProgressScreen;
- (id)_snapshotPlayer;
- (id)_snapshotPlayerWithAspect:(double)arg1;
- (void)_takeAndDisplayEditorPresentationSnapshot;
- (void)_takeAndDisplayOffscreenPresentationSnapshot;
- (void)_updateControls;
- (void)_updateDurationSlider;
- (void)_updateInitialAggdValues;
- (void)_updateMoodSlider;
- (void)_updateTitleButton:(id)arg1;
- (id)activityBBItem;
- (void)activityContainerDidCancel;
- (id)airPlayBBItem;
- (id)airPlayCompactBBItem;
- (void)airPlayDidEnd;
- (void)airPlayDidStart;
- (bool)airPlayIsAvailable;
- (void)airPlayTapped:(id)arg1;
- (bool)askedToCreateMemory;
- (id)autoEditController;
- (void)autoEditorQueueBecameEmpty:(id)arg1;
- (void)back:(id)arg1;
- (id)backBBItem;
- (id)bottomBar;
- (void)cancelAutoEditorAndAllPendingPlayback;
- (id)cancelButton;
- (id)cancelButtonLeadingConstraint;
- (id)cancelButtonTopConstraint;
- (bool)controlVisibility;
- (unsigned long long)countForSliderViewController:(id)arg1;
- (double)currentDuration;
- (bool)customDurationAvailable;
- (bool)customDurationSelected;
- (void)dealloc;
- (void)debugPrefsStart:(id)arg1;
- (bool)didDragSlider;
- (void)didReceiveMemoryWarning;
- (void)dismissAllModalViewControllers;
- (void)dismissEditor;
- (void)displayCloudDownloadErrorCount:(unsigned long long)arg1;
- (id)displayNameForIndexPath:(id)arg1 forSliderViewController:(id)arg2;
- (void)downloadErrorButtonTapped:(id)arg1;
- (id)durationDisplayNames;
- (id)durationSlider;
- (id)editBBItem;
- (void)editSelector:(id)arg1;
- (id)editorPresentationSnapshot;
- (void)editorViewController:(id)arg1 didEditMemory:(id)arg2;
- (id)error;
- (id)fillerSpaceBBItem;
- (void)fixWonderfulIPadProgressSpinner;
- (id)flexSpaceBBItem;
- (void)generatePosterAndAbandonItWithMemory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)gentlyRefreshPlayerIfNeccesary;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hideProgressScreen;
- (id)horizontalCenteredLabel;
- (id)horizontalOffsetLabel;
- (long long)indexForMoodID:(id)arg1;
- (double)initialDuration;
- (id)initialMood;
- (id)label;
- (id)labelText;
- (id)landscapeProgressView;
- (id)loadErrorButton;
- (void)memoryDebugViewControllerDidFinish:(id)arg1;
- (void)memoryDidGetViewed;
- (id)memoryEditor;
- (id)miroPPT;
- (id)moodSlider;
- (id)movieContainerViewController;
- (id)movieController;
- (id)navBarShareBBItem;
- (id)nonCompactRoundProgressCenterY;
- (unsigned long long)nonLocalPickedAssetCount;
- (id)offscreenPresentationSnapshot;
- (void)performEditorTestBlock:(id /* block */)arg1;
- (void)performPlayerTestBlock:(id /* block */)arg1;
- (bool)ph_isTransitionOverlayView:(id)arg1;
- (void)ph_loadTransitionSourcePlaceholderViewUsingFactory:(id /* block */)arg1;
- (unsigned long long)ph_preferredChrome;
- (long long)ph_preferredChromeAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ph_rectOfInterestForTransitionInCoordinateSpace:(id)arg1 withInfo:(id)arg2;
- (void)playAfterAutoEdit;
- (void)playPause:(id)arg1;
- (id)playPauseBBItem;
- (id)playPauseBBItemWithRate:(float)arg1;
- (void)playerContentChangeDownloadProgress:(float)arg1;
- (void)playerContentChangeFailed;
- (void)playerContentChangeProgress:(float)arg1;
- (void)playerDidDoContentChange;
- (void)playerDidGenerateNewPosters;
- (void)playerDidPlayToEnd;
- (void)playerNotReadyForDisplay;
- (void)playerRateChanged;
- (void)playerReadyForDisplay;
- (unsigned long long)playerSpinnerState;
- (void)playerWillRefreshMovie;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (bool)preventDismissalByPhotosIfPossible;
- (void)processPendingActionState;
- (float)progress;
- (id)progressContainerView;
- (bool)progressIncludesDownload;
- (id)progressTopLine;
- (id)progressView;
- (bool)readyForDisplay;
- (void)rebuildMovieController;
- (void)rebuildMovieControllerIfNeccesary;
- (void)rebuildToolbarsToTraitCollection:(id)arg1;
- (void)rebuildToolbarsToTraitCollection:(id)arg1 withPlayRate:(float)arg2;
- (void)removeLoadErrorButton;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (id)screenEdgePanLeftGestureRecognizer;
- (id)scrubberContainer;
- (int)selectedDuration;
- (id)selectedIndexPathForSliderViewController:(id)arg1;
- (void)setAirPlayBBItem:(id)arg1;
- (void)setAirPlayIsAvailable:(bool)arg1;
- (void)setAskedToCreateMemory:(bool)arg1;
- (void)setAutoEditController:(id)arg1;
- (void)setAutoEditor:(id)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonLeadingConstraint:(id)arg1;
- (void)setCancelButtonTopConstraint:(id)arg1;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setControlVisibility:(bool)arg1;
- (void)setControlVisibility:(bool)arg1 traitCollection:(id)arg2;
- (void)setCustomDurationSelected:(bool)arg1;
- (void)setDidDragSlider:(bool)arg1;
- (void)setDurationDisplayNames:(id)arg1;
- (void)setDurationSlider:(id)arg1;
- (void)setDurationWithIndexPath:(id)arg1;
- (void)setEditorPresentationSnapshot:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHorizontalCenteredLabel:(id)arg1;
- (void)setHorizontalOffsetLabel:(id)arg1;
- (void)setInitialDuration:(double)arg1;
- (void)setInitialMood:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLandscapeProgressView:(id)arg1;
- (void)setLoadErrorButton:(id)arg1;
- (void)setMemory:(id)arg1;
- (void)setMemoryEditor:(id)arg1;
- (void)setMoodSlider:(id)arg1;
- (void)setMoodWithIndexPath:(id)arg1;
- (void)setMovieContainerViewController:(id)arg1;
- (void)setNonCompactRoundProgressCenterY:(id)arg1;
- (void)setOffscreenPresentationSnapshot:(id)arg1;
- (void)setPlayerSpinnerState:(unsigned long long)arg1;
- (void)setPreventDismissalByPhotosIfPossible:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressContainerView:(id)arg1;
- (void)setProgressIncludesDownload:(bool)arg1;
- (void)setProgressTopLine:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setScreenEdgePanLeftGestureRecognizer:(id)arg1;
- (void)setScrubberContainer:(id)arg1;
- (void)setSelectedDuration:(int)arg1;
- (void)setShareBBItem:(id)arg1;
- (void)setShouldPlayOnAppearance:(bool)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTimeAtTeardown:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setToolbarBlurBottomConstraint:(id)arg1;
- (void)setToolbarBottomConstraint:(id)arg1;
- (void)setToolbarHeightConstraint:(id)arg1;
- (void)setTtrLoadingView:(id)arg1;
- (void)setVerticalCenteredLabel:(id)arg1;
- (void)setVerticalProgressLabelSpace:(id)arg1;
- (void)setZoomDoubleTap:(id)arg1;
- (void)setupDownloadHandler;
- (void)share:(id)arg1;
- (id)shareBBItem;
- (bool)shouldPlayOnAppearance;
- (bool)showCancelButton;
- (void)showProgressScreen;
- (void)sliderViewController:(id)arg1 changeSliderWithIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 didEndDraggingAtIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 setSelectedIndexPath:(id)arg2;
- (void)sliderViewController:(id)arg1 updateSliderPercentage:(float)arg2;
- (void)sliderViewControllerDidBeginDragging:(id)arg1;
- (bool)startMiroPlayerDismissAllTest;
- (bool)startMiroScrollDurationTest;
- (bool)startMiroScrollEditorMainTest;
- (bool)startMiroScrollEditorMusicTest;
- (bool)startMiroScrollEditorScrubberTest;
- (bool)startMiroScrollEditorSoundtrackTest;
- (bool)startMiroScrollEditorTitleTest;
- (bool)startMiroScrollMoodTest;
- (bool)startMiroScrollScrubberTest;
- (bool)startMiroT2PTest;
- (unsigned long long)startTime;
- (void)swipeBack:(id)arg1;
- (void)takeOwnershipOfMovieContainerViewController;
- (id)tapGestureRecognizer;
- (void)teardownMovieController;
- (void)testMemoryEditorFor:(id)arg1 withCompletion:(id /* block */)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeAtTeardown;
- (id)titleLabel;
- (void)toggleControlVisibility:(id)arg1;
- (void)toggleZoom:(id)arg1;
- (id)toolbarBlurBottomConstraint;
- (id)toolbarBottomConstraint;
- (id)toolbarHeightConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (id)ttrLoadingView;
- (void)updateDownloadErrorButton;
- (void)updateIndicator;
- (void)updateProgressLayoutWithTraitCollection:(id)arg1;
- (void)updateScrubberPlaceholderImage;
- (id)verticalCenteredLabel;
- (id)verticalProgressLabelSpace;
- (void)videoScrubberViewController:(id)arg1 seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomDoubleTap;

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
