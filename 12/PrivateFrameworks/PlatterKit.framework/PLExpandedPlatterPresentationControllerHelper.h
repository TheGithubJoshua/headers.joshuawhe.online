<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLExpandedPlatterPresentationControllerHelper.h</title>
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

/PrivateFrameworks/PlatterKit.framework/PLExpandedPlatterPresentationControllerHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit (1)
 */

@interface PLExpandedPlatterPresentationControllerHelper : NSObject <PLViewControllerAnimatorObserving> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    double  _additionalHomeAffordanceSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _childPreferredContentSize;
    bool  _didPlayDismissHaptic;
    _UIStatesFeedbackGenerator * _dismissFeedbackBehavior;
    UILabel * _dismissLabel;
    UIView * _dismissLabelContainerView;
    struct { 
        unsigned int didPerformPresentedExpandedPlatterCheck : 1; 
        unsigned int didSetSourceViewInitialPresentationFrame : 1; 
        unsigned int didSetSourceViewFinalPresentationFrame : 1; 
        unsigned int didSetSourceViewFinalDismissalFrame : 1; 
    }  _expandedPlatterPresentationControllerHelperFlags;
    UINotificationFeedbackGenerator * _homeAffordanceFeedbackGenerator;
    UIPanGestureRecognizer * _homeAffordancePanGesture;
    MTLumaDodgePillView * _homeAffordanceView;
    bool  _homeAffordanceVisible;
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
    <PLKeyboardHomeAffordanceAssertion> * _keyboardHomeAffordance;
    bool  _listenToKeyboardEvents;
    UIPresentationController<PLExpandedPlatterPresentationController> * _presentationController;
    UIView<PLExpandedPlatter> * _presentedExpandedPlatter;
    UIView * _sourceView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFinalDismissalFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewFinalPresentationFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceViewInitialPresentationFrame;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _sourceViewInitialTransform;
}

@property (nonatomic) double additionalHomeAffordanceSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOfPresentedViewInContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPanGestureRecognizer *homeAffordancePanGesture;
@property (getter=isHomeAffordanceVisible, nonatomic) bool homeAffordanceVisible;
@property (getter=_keyboardFrame, setter=_setKeyboardFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (getter=_keyboardHomeAffordance, setter=_setKeyboardHomeAffordance:, nonatomic, retain) <PLKeyboardHomeAffordanceAssertion> *keyboardHomeAffordance;
@property (nonatomic) bool listenToKeyboardEvents;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic) UIPresentationController<PLExpandedPlatterPresentationController> *presentationController;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })_sizeOfExpandedPlatter:(id)arg1 withPreferredContentSize:(struct CGSize { double x1; double x2; })arg2 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGSize { double x1; double x2; })_sizeOfViewWithPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 inUseableContainerViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })useableContainerViewBoundsForExpandedPlatter:(id)arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (bool)_actuateFeedbackForDismissalIfNecessary;
- (void)_actuateFeedbackForDismissalInvalidationIfNecessary;
- (void)_configureDismissFeedbackIfNecessary;
- (void)_configureDismissLabelIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetWithPresentedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })_contentOffsetForPresentedExpandedPlatterView:(id)arg1;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dismissLabelContainerViewFrameForPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_fireHomeGesture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewInContainerViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleBackgroundTap:(id)arg1;
- (void)_handleHomeAffordancePan:(id)arg1;
- (bool)_isKeyboardHomeAffordanceVisible;
- (bool)_isLocalHomeAffordanceVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyboardFrame;
- (id)_keyboardHomeAffordance;
- (void)_popDismissLabel;
- (id)_presentedExpandedPlatter;
- (id)_previewInteractionManager;
- (id)_previewInteractionPresentableViewController;
- (void)_setHomeAffordanceVisible:(bool)arg1;
- (void)_setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setKeyboardHomeAffordance:(id)arg1;
- (void)_setKeyboardHomeAffordanceVisible:(bool)arg1;
- (void)_setLocalHomeAffordanceVisible:(bool)arg1;
- (void)_settleHomeAffordance;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldMakePresentedViewControllerFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFinalDismissalFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFinalPresentationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewInitialPresentationFrame;
- (double)additionalHomeAffordanceSpacing;
- (void)completeDismissal;
- (id)containerView;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalDismissalFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalPresentationFrameOfPresentingViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (void)hintDismissalWithCommitProgress:(double)arg1 overallProgress:(double)arg2;
- (id)homeAffordancePanGesture;
- (id)initWithExpandedPlatterPresentationController:(id)arg1 andSourceView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameOfPresentedViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentationFrameOfPresentingViewInContainerView;
- (bool)isHomeAffordanceVisible;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (bool)listenToKeyboardEvents;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)presentationController;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (id)presentedViewController;
- (id)presentingViewController;
- (void)setAdditionalHomeAffordanceSpacing:(double)arg1;
- (void)setHomeAffordancePanGesture:(id)arg1;
- (void)setHomeAffordanceVisible:(bool)arg1;
- (void)setListenToKeyboardEvents:(bool)arg1;
- (void)setPresentationController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimatorDidFinishFirstResponderChanges:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2 superBlock:(id /* block */)arg3;

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