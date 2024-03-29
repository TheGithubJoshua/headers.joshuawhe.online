<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIPlatterMenuPanningTransformer.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIPlatterMenuPanningTransformer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIPlatterMenuPanningTransformer : NSObject {
    int  _axisLock;
    <_UIPlatterMenuPanningTransformerDelegate> * _delegate;
    double  _lastAxisLockTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDirectionChangeTouchPosition;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _lastOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTransformedPoint;
    double  _minimumXVelocityForAxisLock;
    int  _overrideLockAxis;
    NSDate * _panBeginTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panBeginTouchPosition;
    NSDate * _timeForLastDirectionalChange;
    struct CGPoint { 
        double x; 
        double y; 
    }  _transitionZonePosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _transitionZoneRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _transitionZoneSize;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic) int axisLock;
@property (nonatomic) <_UIPlatterMenuPanningTransformerDelegate> *delegate;
@property (nonatomic) double lastAxisLockTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDirectionChangeTouchPosition;
@property (nonatomic) struct CGVector { double x1; double x2; } lastOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTransformedPoint;
@property (nonatomic) double minimumXVelocityForAxisLock;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } offset;
@property (nonatomic) int overrideLockAxis;
@property (nonatomic, retain) NSDate *panBeginTime;
@property (nonatomic) struct CGPoint { double x1; double x2; } panBeginTouchPosition;
@property (nonatomic, retain) NSDate *timeForLastDirectionalChange;
@property (nonatomic) struct CGPoint { double x1; double x2; } transitionZonePosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } transitionZoneRect;
@property (nonatomic) struct CGSize { double x1; double x2; } transitionZoneSize;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1 axisTransitionZoneSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_enterYLockedState;
- (int)axisLock;
- (id)delegate;
- (void)didBeginPanningWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)didEndPanningWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)didPanWithTouchPosition:(struct CGPoint { double x1; double x2; })arg1 currentTransformedPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1 axisTransitionZoneSize:(struct CGSize { double x1; double x2; })arg2;
- (double)lastAxisLockTime;
- (struct CGPoint { double x1; double x2; })lastDirectionChangeTouchPosition;
- (struct CGVector { double x1; double x2; })lastOffset;
- (struct CGPoint { double x1; double x2; })lastTouchPosition;
- (struct CGPoint { double x1; double x2; })lastTransformedPoint;
- (void)lockIntoYAxis;
- (double)minimumXVelocityForAxisLock;
- (struct CGVector { double x1; double x2; })offset;
- (int)overrideLockAxis;
- (id)panBeginTime;
- (struct CGPoint { double x1; double x2; })panBeginTouchPosition;
- (void)setAxisLock:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAxisLockTime:(double)arg1;
- (void)setLastDirectionChangeTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastOffset:(struct CGVector { double x1; double x2; })arg1;
- (void)setLastTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastTransformedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMinimumXVelocityForAxisLock:(double)arg1;
- (void)setOverrideLockAxis:(int)arg1;
- (void)setPanBeginTime:(id)arg1;
- (void)setPanBeginTouchPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimeForLastDirectionalChange:(id)arg1;
- (void)setTransitionZonePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionZoneRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionZoneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (id)timeForLastDirectionalChange;
- (double)timeIntervalSinceLastDirectionChange;
- (struct CGPoint { double x1; double x2; })transitionZonePosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionZoneRect;
- (struct CGSize { double x1; double x2; })transitionZoneSize;
- (struct CGVector { double x1; double x2; })velocity;
- (id)velocityIntegrator;

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
