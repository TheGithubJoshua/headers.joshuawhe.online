<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIPreviewInteractionController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIPreviewInteractionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate> {
    bool  _commitTransitionScheduled;
    _UIPreviewInteractionCommitTransition * _currentCommitTransition;
    _UIPreviewInteractionDismissTransition * _currentDismissTransition;
    <_UIPreviewInteractionHighlighting> * _currentHighlighter;
    _UIInteractionEffect_deprecated * _currentInteractionEffect;
    _UIPreviewPresentationController2 * _currentPresentationController;
    _UIPreviewInteractionPresentationTransition * _currentPresentationTransition;
    UIViewController * _currentPreviewViewController;
    <UIViewControllerPreviewing_Internal> * _currentPreviewingContext;
    <_UIPreviewInteractionControllerDelegate> * _delegate;
    bool  _dismissingPreview;
    _UITouchesObservingGestureRecognizer * _gestureRecognizerForPreviewActions;
    bool  _hasTransitionedToPreview;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationForPreviewActionsPanning;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    <_UIPreviewInteractionTouchForceProviding> * _pausingTouchForceProvider;
    bool  _performingCommitTransition;
    bool  _performingPreviewTransition;
    <_UIPreviewInteractionTouchForceProviding> * _presentedViewTouchForceProvider;
    UIViewController * _presentingViewController;
    _UIPreviewActionsController * _previewActionsController;
    _UIPreviewInteractionGestureRecognizer * _previewGestureRecognizer;
    UIPreviewInteraction * _previewInteraction;
    _UIPreviewInteractionGestureRecognizer * _revealGestureRecognizer;
    UIView * _sourceView;
    _UISteadyTouchForceGestureRecognizer * _steadyTouchForceGestureRecognizer;
}

@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic) bool commitTransitionScheduled;
@property (nonatomic, retain) _UIPreviewInteractionCommitTransition *currentCommitTransition;
@property (nonatomic, retain) _UIPreviewInteractionDismissTransition *currentDismissTransition;
@property (nonatomic, retain) <_UIPreviewInteractionHighlighting> *currentHighlighter;
@property (nonatomic, retain) _UIInteractionEffect_deprecated *currentInteractionEffect;
@property (nonatomic, retain) _UIPreviewPresentationController2 *currentPresentationController;
@property (nonatomic, retain) _UIPreviewInteractionPresentationTransition *currentPresentationTransition;
@property (nonatomic, retain) UIViewController *currentPreviewViewController;
@property (nonatomic) <UIViewControllerPreviewing_Internal> *currentPreviewingContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissingPreview;
@property (nonatomic, retain) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions;
@property (nonatomic) bool hasTransitionedToPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocationForPreviewActionsPanning;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *pausingTouchForceProvider;
@property (nonatomic) bool performingCommitTransition;
@property (nonatomic) bool performingPreviewTransition;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *presentedViewTouchForceProvider;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) _UIPreviewActionsController *previewActionsController;
@property (nonatomic, retain) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, retain) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer;
@property (nonatomic) UIView *sourceView;
@property (nonatomic, retain) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)arg1;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
- (void)_finalizeInteractivePreview;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePreviewActionsGesture:(id)arg1;
- (void)_handlePreviewGesture:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleSteadyTouchForceGesture:(id)arg1;
- (bool)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg1;
- (id)_newHighlighterForPreviewingContext:(id)arg1;
- (void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id*)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_preferredNavigationControllerForCommitTransition;
- (void)_preparePreviewPresentationControllerIfNeeded:(id)arg1;
- (bool)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg1;
- (id)_preparedInteractionEffect;
- (bool)_previewInteractionShouldEndOnGestureCompletion:(id)arg1;
- (id)_previewPresentationControllerForViewController:(id)arg1;
- (bool)_previewingIsPossibleForView:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (void)_revertInteractionEffectToStartState;
- (void)_stopCurrentInteractionEffect;
- (bool)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)beginPreviewGestureRecognizer;
- (void)commitInteractivePreview;
- (bool)commitTransitionScheduled;
- (id)currentCommitTransition;
- (id)currentDismissTransition;
- (id)currentHighlighter;
- (id)currentInteractionEffect;
- (id)currentPresentationController;
- (id)currentPresentationTransition;
- (id)currentPreviewViewController;
- (id)currentPreviewingContext;
- (void)dealloc;
- (id)delegate;
- (void)didDismissPreviewActionsController:(id)arg1;
- (bool)dismissingPreview;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizerForPreviewActions;
- (bool)hasTransitionedToPreview;
- (id)initWithView:(id)arg1;
- (struct CGPoint { double x1; double x2; })initialLocationForPreviewActionsPanning;
- (struct CGPoint { double x1; double x2; })initialPlatterPositionForPreviewActionsController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGSize { double x1; double x2; })maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg1;
- (id)pausingTouchForceProvider;
- (bool)performingCommitTransition;
- (bool)performingPreviewTransition;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentationGestureRecognizer;
- (id)presentedViewTouchForceProvider;
- (id)presentingViewController;
- (id)previewActionsController;
- (void)previewActionsController:(id)arg1 didCompleteWithSelectedAction:(id)arg2;
- (void)previewActionsController:(id)arg1 didUpdatePlatterTranslation:(struct CGVector { double x1; double x2; })arg2 withVelocity:(struct CGVector { double x1; double x2; })arg3;
- (id)previewGestureRecognizer;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)revealGestureRecognizer;
- (void)setCommitTransitionScheduled:(bool)arg1;
- (void)setCurrentCommitTransition:(id)arg1;
- (void)setCurrentDismissTransition:(id)arg1;
- (void)setCurrentHighlighter:(id)arg1;
- (void)setCurrentInteractionEffect:(id)arg1;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setCurrentPresentationTransition:(id)arg1;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setCurrentPreviewingContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissingPreview:(bool)arg1;
- (void)setGestureRecognizerForPreviewActions:(id)arg1;
- (void)setHasTransitionedToPreview:(bool)arg1;
- (void)setInitialLocationForPreviewActionsPanning:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPausingTouchForceProvider:(id)arg1;
- (void)setPerformingCommitTransition:(bool)arg1;
- (void)setPerformingPreviewTransition:(bool)arg1;
- (void)setPresentedViewTouchForceProvider:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviewActionsController:(id)arg1;
- (void)setPreviewGestureRecognizer:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setRevealGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSteadyTouchForceGestureRecognizer:(id)arg1;
- (id)sourceView;
- (id)steadyTouchForceGestureRecognizer;

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
