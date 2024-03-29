<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVRUIStandardTouchProcessor.h</title>
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

/PrivateFrameworks/TVRemoteUI.framework/TVRUIStandardTouchProcessor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI (1)
 */

@interface TVRUIStandardTouchProcessor : NSObject {
    UIView * _debugView;
    <_TVRUIEventDelegate> * _eventDelegate;
    _TVRButtonHaptic * _haptic;
    bool  _isUsingShrunkBoundingBox;
    double  _previousTimestamp;
    double  _previousVelocity;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingPoint;
    long long  _touchCnt;
    UIView * _touchpadView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _virtualBoundingBox;
}

@property (nonatomic, retain) UIView *debugView;
@property (nonatomic) <_TVRUIEventDelegate> *eventDelegate;
@property (nonatomic, retain) _TVRButtonHaptic *haptic;
@property (nonatomic) bool isUsingShrunkBoundingBox;
@property (nonatomic) double previousTimestamp;
@property (nonatomic) double previousVelocity;
@property (nonatomic) struct CGPoint { double x1; double x2; } startingPoint;
@property (nonatomic) long long touchCnt;
@property (nonatomic, retain) UIView *touchpadView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } virtualBoundingBox;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateVirtualBoundingBox:(struct CGPoint { double x1; double x2; })arg1 sizingRatio:(double)arg2;
- (void)_configureGestureRecognizersOnView;
- (void)_processTouches:(id)arg1;
- (void)_sendSelectButtonPressBegan;
- (void)_sendSelectButtonPressEnded;
- (id)_touchEventForTouch:(id)arg1;
- (struct CGPoint { double x1; double x2; })_virtualTouchLocationForTouch:(id)arg1;
- (id)debugView;
- (id)eventDelegate;
- (void)handleLongPress:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)haptic;
- (id)initWithTouchpadView:(id)arg1;
- (bool)isUsingShrunkBoundingBox;
- (double)previousTimestamp;
- (double)previousVelocity;
- (void)setDebugView:(id)arg1;
- (void)setEventDelegate:(id)arg1;
- (void)setHaptic:(id)arg1;
- (void)setIsUsingShrunkBoundingBox:(bool)arg1;
- (void)setPreviousTimestamp:(double)arg1;
- (void)setPreviousVelocity:(double)arg1;
- (void)setStartingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchCnt:(long long)arg1;
- (void)setTouchpadView:(id)arg1;
- (void)setVirtualBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })startingPoint;
- (long long)touchCnt;
- (void)touchesBegan:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesCancelled:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesEnded:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesMoved:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (id)touchpadView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })virtualBoundingBox;

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
