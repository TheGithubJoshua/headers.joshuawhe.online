<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTransitionController.h</title>
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

/Frameworks/AVKit.framework/AVTransitionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVKit.framework/AVKit (448.1.20)
 */

@interface AVTransitionController : NSObject <AVInteractiveTransitionGestureTrackerDelegate, AVTransitionDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate> {
    AVTransition * _activeTransition;
    <AVTransitionControllerDelegate> * _delegate;
    AVInteractiveTransitionGestureTracker * _gestureTracker;
    AVTransitionPresentationContext * _presentationContext;
    long long  _state;
}

@property (nonatomic, retain) AVTransition *activeTransition;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTransitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVInteractiveTransitionGestureTracker *gestureTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTransitionPresentationContext *presentationContext;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsInteractiveStart;

- (void).cxx_destruct;
- (void)_createActiveTransitionAndPresentationContextIfNeededForTransitionContext:(id)arg1;
- (void)_recoverFromPresentationInStandaloneWindowIfNeeded:(id)arg1;
- (id)activeTransition;
- (void)addInteractiveGesturesToView:(id)arg1 additionalGesture:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(bool)arg1;
- (void)beginFullScreenDismissal:(id /* block */)arg1;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 isInteractive:(bool)arg3 completion:(id /* block */)arg4;
- (id)delegate;
- (id)gestureTracker;
- (void)gestureTracker:(id)arg1 didBeginTrackingGesture:(long long)arg2;
- (void)gestureTracker:(id)arg1 didTrackPercentComplete:(double)arg2 translation:(struct CGPoint { double x1; double x2; })arg3 rotation:(double)arg4 locationInWindow:(struct CGPoint { double x1; double x2; })arg5;
- (bool)gestureTracker:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)gestureTrackerDidCancelTracking:(id)arg1;
- (void)gestureTrackerDidFinishTracking:(id)arg1;
- (bool)gestureTrackerShouldTrackPanToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToDismiss:(id)arg1;
- (bool)gestureTrackerShouldTrackPinchToPresent:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationContext;
- (void)presentedViewControllerWasForciblyDismissedWithoutAnimation;
- (void)setActiveTransition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationContext:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (long long)state;
- (double)transitionDuration:(id)arg1;
- (void)transitionWillComplete:(id)arg1 success:(bool)arg2;
- (bool)wantsInteractiveStart;

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
