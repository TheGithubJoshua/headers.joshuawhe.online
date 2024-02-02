<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroMemoryEditorRootViewController.h</title>
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

/PrivateFrameworks/Memories.framework/MiroMemoryEditorRootViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroMemoryEditorRootViewController : UIViewController <MiroAssetSuggestionsCollectionViewControllerDelegate, MiroContentEditorViewControllerDelegate, MiroMemoryEditorMenuViewControllerDelegate, MiroMemoryEditorPlayerViewDelegate, MiroMemoryEditorToolbarDelegate, MiroMemoryEditorToolbarOwner, MiroMovieDisplayContainerViewControllerDelegate, UISplitViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    NSLayoutConstraint * _aspectRatio;
    <MiroMemoryEditorAutoEditCompletionActionDelegate> * _autoEditCompletionActionDelegate;
    MiroAutoEditor * _autoEditor;
    UISplitViewController * _contentSplitViewController;
    <MiroEditorViewControllerDelegate> * _delegate;
    MiroMemoryEditorDurationViewController * _durationViewController;
    MiroEditorController * _editorController;
    MiroBlueprint * _initialBlueprint;
    bool  _isDismissing;
    bool  _isSeparatingOrCollapsing;
    MiroMemoryEditorMenuViewController * _menuViewController;
    MiroMovieDisplayContainerViewController * _movieDisplayController;
    UIViewController * _movieDisplayParentViewController;
    UIButton * _orientationButton;
    NSLayoutConstraint * _playerContainerTargetHeight;
    UIView * _playerContainerView;
    NSLayoutConstraint * _playerContainerYOffset;
    MiroMemoryEditorPosterController * _posterController;
    bool  _previousZoomedToFill;
    UIView * _splitViewContainerView;
    int  _splitViewState;
    MiroMemoryEditorBottomToolbar * _toolbar;
    NSLayoutConstraint * _toolbarHeightConstraint;
    NSLayoutConstraint * _toolbarYOffset;
}

@property (nonatomic, retain) NSLayoutConstraint *aspectRatio;
@property (nonatomic) <MiroMemoryEditorAutoEditCompletionActionDelegate> *autoEditCompletionActionDelegate;
@property (nonatomic, retain) MiroAutoEditor *autoEditor;
@property (nonatomic, retain) UISplitViewController *contentSplitViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) MiroMemoryEditorDurationViewController *durationViewController;
@property (nonatomic, retain) MiroEditorController *editorController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MiroBlueprint *initialBlueprint;
@property (nonatomic) bool isDismissing;
@property (nonatomic) bool isSeparatingOrCollapsing;
@property (nonatomic, retain) MiroMemoryEditorMenuViewController *menuViewController;
@property (nonatomic, retain) MiroMovieDisplayContainerViewController *movieDisplayController;
@property (nonatomic, retain) UIViewController *movieDisplayParentViewController;
@property (nonatomic, readonly) unsigned long long numberOfClipsInMovie;
@property (nonatomic, retain) UIButton *orientationButton;
@property (nonatomic, retain) NSLayoutConstraint *playerContainerTargetHeight;
@property (nonatomic, retain) UIView *playerContainerView;
@property (nonatomic, retain) NSLayoutConstraint *playerContainerYOffset;
@property (nonatomic, retain) MiroMemoryEditorPosterController *posterController;
@property (nonatomic) bool previousZoomedToFill;
@property (nonatomic, readonly) double sequenceDuration;
@property (nonatomic, retain) UIView *splitViewContainerView;
@property (nonatomic) int splitViewState;
@property (readonly) Class superclass;
@property (nonatomic, retain) MiroMemoryEditorBottomToolbar *toolbar;
@property (nonatomic, readonly) double toolbarHeight;
@property (nonatomic, retain) NSLayoutConstraint *toolbarHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolbarYOffset;

- (void).cxx_destruct;
- (void)_alertSomeAssetsFailedWithTitle:(id)arg1 message:(id)arg2 okActionBlock:(id /* block */)arg3;
- (id)_containerViewForPlayer;
- (void)_didEndMemoryEditingWithFinalBlueprint:(id)arg1;
- (void)_hideToolbar;
- (void)_showContentEditorViewController;
- (void)_showDebugPickerViewController:(unsigned long long)arg1;
- (void)_showToolbar;
- (void)airPlayDidEnd;
- (void)airPlayDidStart;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)aspectRatio;
- (void)assetSuggestionsController:(id)arg1 didChangeSelectedAsset:(id)arg2;
- (void)assetSuggestionsControllerDidDismiss:(id)arg1;
- (id)assetsFilteredForSuggestions;
- (id)autoEditCompletionActionDelegate;
- (id)autoEditor;
- (void)cancel;
- (void)contentEditorViewControllerDidFinish:(id)arg1;
- (id)contentSplitViewController;
- (id)createNavigationWithViewController:(id)arg1;
- (void)dealloc;
- (void)deferredPlay;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)done;
- (id)durationViewController;
- (id)editorController;
- (void)hideToolbarIfNeeded;
- (id)initialBlueprint;
- (bool)isDismissing;
- (bool)isSeparatingOrCollapsing;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)menuViewController;
- (id)miroPPT;
- (id)movieDisplayController;
- (id)movieDisplayParentViewController;
- (unsigned long long)numberOfClipsInMovie;
- (id)orientationButton;
- (void)pausePlayer;
- (bool)performMainMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (bool)performMusicMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (bool)performScrubberScrollTestScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (bool)performSoundtrackMenuViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (bool)performTitleEditorViewControllerScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (id)placeSnapshotOfPlayerViewInContainerView:(id)arg1;
- (id)playerContainerTargetHeight;
- (id)playerContainerView;
- (id)playerContainerYOffset;
- (void)playerDidDoContentChange;
- (void)playerRateChanged;
- (bool)playerViewShouldShowInChildViewControllers;
- (void)playerViewWillResize:(struct CGSize { double x1; double x2; })arg1;
- (void)playerWillDoContentChange;
- (id)posterController;
- (long long)preferredStatusBarStyle;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)prepareLayoutForCollapsedMode;
- (void)prepareLayoutForSpiltMode;
- (bool)previousZoomedToFill;
- (double)sequenceDuration;
- (void)setAspectRatio:(id)arg1;
- (void)setAutoEditCompletionActionDelegate:(id)arg1;
- (void)setAutoEditor:(id)arg1;
- (void)setContentSplitViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDurationViewController:(id)arg1;
- (void)setEditorController:(id)arg1;
- (void)setInitialBlueprint:(id)arg1;
- (void)setIsDismissing:(bool)arg1;
- (void)setIsSeparatingOrCollapsing:(bool)arg1;
- (void)setMenuViewController:(id)arg1;
- (void)setMovieDisplayController:(id)arg1;
- (void)setMovieDisplayControllerParent:(id)arg1 andSuperview:(id)arg2;
- (void)setMovieDisplayParentViewController:(id)arg1;
- (void)setOrientationButton:(id)arg1;
- (void)setPlayerContainerTargetHeight:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (void)setPlayerContainerYOffset:(id)arg1;
- (void)setPosterController:(id)arg1;
- (void)setPreviousZoomedToFill:(bool)arg1;
- (void)setSplitViewContainerView:(id)arg1;
- (void)setSplitViewState:(int)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarHeightConstraint:(id)arg1;
- (void)setToolbarYOffset:(id)arg1;
- (bool)shouldPreventSplitViewSeperation;
- (void)showContentEditorViewController;
- (void)showDebugEditStylePickerViewController;
- (void)showDebugFilterPickerViewController;
- (void)showDebugTitleStylePickerViewController;
- (void)showDebugTransitionPickerViewController;
- (void)showDurationEditorViewController;
- (void)showKeyAssetSelectionPicker;
- (void)showMusicPickerViewController;
- (void)showTitleEditorViewController;
- (void)showToolbar;
- (id)splitViewContainerView;
- (bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (int)splitViewState;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchPlaybackOrientation:(id)arg1;
- (id)toolbar;
- (double)toolbarHeight;
- (id)toolbarHeightConstraint;
- (id)toolbarYOffset;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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