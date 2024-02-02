<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UILongPressGestureRecognizer.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UILongPressGestureRecognizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UILongPressGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate> {
    NSMutableSet * _activeTouches;
    double  _allowableMovement;
    unsigned int  _allowsDynamicTouchesList;
    long long  _buttonType;
    unsigned int  _cancelPastAllowableMovement;
    double  _currentImpulse;
    UIHeldAction * _enoughTimeElapsed;
    unsigned int  _gotEnoughTaps;
    unsigned int  _gotTooMany;
    unsigned int  _gotTouchEnd;
    UITapRecognizer * _imp;
    long long  _impulseObservations;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastCentroidScreen;
    double  _lastForce;
    double  _lastForceTimestamp;
    double  _minimumPressDuration;
    unsigned long long  _numberOfTouchesRequired;
    bool  _requiresQuietImpulse;
    bool  _requiresQuietImpulseForCurrentTouchSequence;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPointScreen;
    UIDelayedAction * _tooMuchTimeElapsed;
    NSObservation * _touchForceObservation;
    NSArray * _touches;
}

@property (setter=_setButtonType:, nonatomic) long long _buttonType;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } _centroidScreen;
@property (setter=_setRequiresQuietImpulse:, nonatomic) bool _requiresQuietImpulse;
@property (setter=_setRequiresQuietImpulseForCurrentTouchSequence:, nonatomic) bool _requiresQuietImpulseForCurrentTouchSequence;
@property (nonatomic) double allowableMovement;
@property (nonatomic) bool cancelPastAllowableMovement;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } startPoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } tc_startPoint;
@property (nonatomic, retain) NSArray *touches;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (double)_allowableSeparation;
- (bool)_allowsDynamicTouchesList;
- (long long)_buttonType;
- (struct CGPoint { double x1; double x2; })_centroidInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_centroidScreen;
- (void)_changeTouchesListTo:(id)arg1;
- (long long)_finalStateForRecognition;
- (bool)_impulseQuietEnough;
- (void)_incorporateTouchForceMessageIntoImpulseQuietness:(id)arg1;
- (void)_interactionsEndedWithValidTouches:(bool)arg1;
- (bool)_requiresQuietImpulse;
- (bool)_requiresQuietImpulseForCurrentTouchSequence;
- (void)_resetGestureRecognizer;
- (void)_resetImpulseQuietness;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowsDynamicTouchesList:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setRequiresQuietImpulse:(bool)arg1;
- (void)_setRequiresQuietImpulseForCurrentTouchSequence:(bool)arg1;
- (void)_setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (bool)_shouldReceivePress:(id)arg1;
- (struct CGPoint { double x1; double x2; })_startPointInView:(id)arg1;
- (void)_startTapFinishedTimer;
- (double)_touchSloppinessFactor;
- (bool)_touchesMayBeRecognizedByForcePreviewingRevealGestureRecognizerWhichShouldDelayTimer:(id)arg1;
- (struct CGPoint { double x1; double x2; })_translationInView:(id)arg1;
- (bool)activeTouchesExceedAllowableSeparation;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelPastAllowableMovement;
- (struct CGPoint { double x1; double x2; })centroid;
- (void)clearTimer;
- (double)delay;
- (void)encodeWithCoder:(id)arg1;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)invalidate;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)minimumPressDuration;
- (unsigned long long)numberOfTapsRequired;
- (unsigned long long)numberOfTouches;
- (unsigned long long)numberOfTouchesRequired;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelPastAllowableMovement:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)setTouches:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { double x1; double x2; })startPoint;
- (void)startTimer;
- (bool)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)tooMuchElapsed:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_isHoldingLongPress;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)_automationName;

// Image: /System/Library/PrivateFrameworks/Stocks/TeaCharts.framework/TeaCharts

- (struct CGPoint { double x1; double x2; })tc_startPoint;

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