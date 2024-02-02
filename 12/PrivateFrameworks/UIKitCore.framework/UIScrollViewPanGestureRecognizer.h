<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIScrollViewPanGestureRecognizer.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIScrollViewPanGestureRecognizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
    unsigned int  _caughtDeceleratingScrollView;
    unsigned int  _directionalLockEnabled;
    UIScrollViewDirectionalPressGestureRecognizer * _directionalPressGestureRecognizer;
    unsigned int  _hasParentScrollView;
    long long  _indirectScrollingState;
    unsigned int  _lastLockingAxis;
    unsigned int  _lockingAxis;
    unsigned int  _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered;
    struct CGPoint { 
        double x; 
        double y; 
    }  _reconsideredLockingLocation;
    UIScrollView * _scrollView;
    SEL  _scrollViewAction;
    unsigned int  _transfersTrackingFromParentScrollView;
    double  _translationScaleFactor;
}

@property (getter=_beganCaughtDeceleratingScrollViewAndMoved, nonatomic, readonly) bool beganCaughtDeceleratingScrollViewAndMoved;
@property (getter=_caughtDeceleratingScrollView, nonatomic, readonly) bool caughtDeceleratingScrollView;
@property (getter=isDirectionalLockEnabled, nonatomic) bool directionalLockEnabled;
@property (nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) double translationScaleFactor;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_beganCaughtDeceleratingScrollViewAndMoved;
- (void)_beginScroll;
- (bool)_canTransferTrackingFromParentPagingScrollView;
- (bool)_caughtDeceleratingScrollView;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (void)_handleCaughtDeceleratingScrollViewWithEvent:(id)arg1;
- (double)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (bool)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (bool)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)delaysTouchesBegan;
- (id)directionalPressGestureRecognizer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isDirectionalLockEnabled;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (id)scrollView;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setDirectionalPressGestureRecognizer:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTranslationScaleFactor:(double)arg1;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (double)translationScaleFactor;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

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