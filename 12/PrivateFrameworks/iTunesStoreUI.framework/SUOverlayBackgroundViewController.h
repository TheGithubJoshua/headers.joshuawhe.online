<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUOverlayBackgroundViewController.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUOverlayBackgroundViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray * _actionQueue;
    SUScalingFlipView * _activeFlipView;
    bool  _askingToDismissEverything;
    bool  _askingToDismissSelection;
    SUTouchCaptureView * _captureView;
    <SUOverlayBackgroundDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    long long  _selectedViewControllerIndex;
    UISwipeGestureRecognizer * _swipeGestureRecognizer;
    NSMutableArray * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUOverlayBackgroundDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUOverlayViewController *selectedViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *viewControllers;

- (void)_addViewController:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_captureViewAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (void)_enqueueAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(bool)arg2;
- (void)_finishPresentAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performDismissAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (void)_performNextAction;
- (void)_performPresentAction:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_removeViewController:(id)arg1;
- (id)_selectedViewController;
- (void)_sendDidDismiss;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_swipe:(id)arg1;
- (void)_tearDownFlipView;
- (double)_viewControllerHorizontalPadding;
- (double)_viewControllerKeyboardOffset;
- (id)copyArchivableContext;
- (id)copyArchivableJetsamContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissOverlay:(id)arg1 animated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)layoutViewControllers;
- (void)loadView;
- (void)overlayPageViewTapped:(id)arg1;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (void)restoreArchivableContext:(id)arg1;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (id)selectedViewController;
- (void)setDelegate:(id)arg1;
- (bool)shouldExcludeFromNavigationHistory;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

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
