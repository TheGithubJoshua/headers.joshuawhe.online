<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTransition.h</title>
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

/Frameworks/AVKit.framework/AVTransition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVKit.framework/AVKit (448.1.20)
 */

@interface AVTransition : NSObject {
    NSMutableArray * _allAnimators;
    UIView * _backgroundView;
    UIViewPropertyAnimator * _clientAnimator;
    UIView * _containerView;
    <AVTransitionDelegate> * _delegate;
    AVTransitionPresentationContext * _presentationContext;
    UIView * _touchBlockingView;
    UIViewPropertyAnimator * _transitionAnimator;
    <UIViewControllerContextTransitioningEx> * _transitionContext;
    long long  _transitionType;
    bool  _wasInitiallyInteractive;
}

@property (nonatomic, readonly) NSMutableArray *allAnimators;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIViewPropertyAnimator *clientAnimator;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic) <AVTransitionDelegate> *delegate;
@property (nonatomic, retain) AVTransitionPresentationContext *presentationContext;
@property (nonatomic, readonly) UIView *presentedView;
@property (nonatomic, readonly) UIView *presentingView;
@property (nonatomic, readonly) UIView *touchBlockingView;
@property (nonatomic, readonly) UIViewPropertyAnimator *transitionAnimator;
@property (nonatomic, readonly) <UIViewControllerContextTransitioningEx> *transitionContext;
@property (nonatomic, readonly) long long transitionType;
@property (nonatomic) bool wasInitiallyInteractive;

- (void).cxx_destruct;
- (void)_animateAlongsideInteractiveDismissalTransitionAnimationForCancelling;
- (void)_animateAlongsideInteractivePresentationTransitionAnimationForCancelling;
- (void)_animateFinishInteractiveTransition;
- (void)_dismissalTransitionDidEnd:(bool)arg1;
- (void)_dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_finalFrameForPresentedView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_finalTransformForPresentedView;
- (void)_freezeDismissingViewForFinishing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialFrameForPresentedView;
- (void)_presentationTransitionDidEnd:(bool)arg1;
- (void)_presentationTransitionWillBegin;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransform:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_rotationTransformFromPresentedViewToSourceView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceViewFrameInContainerView;
- (void)_startOrContinueAnimatorsReversed:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForDismissalAnimation;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForScale:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4 sourceRectInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_updateCornerAppearanceAttributesOfView:(id)arg1 toSourceView:(id)arg2 similarity:(double)arg3;
- (void)addRunAlongsideAnimationsIfNeeded;
- (id)allAnimators;
- (id)backgroundView;
- (void)cancelInteractiveTransition;
- (id)clientAnimator;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)finishInteractiveTransition;
- (id)initWithTransitionContext:(id)arg1;
- (void)pauseInteractiveTransition;
- (id)presentationContext;
- (id)presentedView;
- (id)presentingView;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setWasInitiallyInteractive:(bool)arg1;
- (void)startInteractiveTransition;
- (id)touchBlockingView;
- (id)transitionAnimator;
- (id)transitionContext;
- (long long)transitionType;
- (void)updateWithPercentComplete:(double)arg1 translation:(struct CGPoint { double x1; double x2; })arg2 rotation:(double)arg3 locationInWindow:(struct CGPoint { double x1; double x2; })arg4;
- (bool)wasInitiallyInteractive;

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
