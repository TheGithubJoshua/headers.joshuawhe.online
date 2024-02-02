<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDynamicValueAnimation.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIDynamicValueAnimation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
    NSMutableArray * _activeValues;
    id /* block */  _applier;
    double  _decelerationFactor;
    double  _decelerationLnFactor;
    double  _friction;
    double  _multiplier;
    void * _stepFunction;
    double  _unitSize;
    double  _value;
    double  _velocity;
    id /* block */  _viewApplier;
}

@property (nonatomic, copy) NSArray *activeValues;
@property (nonatomic) double friction;
@property (nonatomic) double value;
@property (nonatomic) double velocity;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6;

- (bool)_animateForInterval:(double)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (double)_multiplier;
- (void)_setDecelerationFactor:(double)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setVelocity:(double)arg1;
- (void)_stopAnimation;
- (void)_updateStepFunction;
- (id)activeValues;
- (void)addActiveValue:(id)arg1;
- (void)dealloc;
- (double)friction;
- (id)init;
- (id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeActiveValue:(id)arg1;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)runWithValueApplier:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)runWithValueApplier:(id /* block */)arg1 completion:(id /* block */)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)setActiveValues:(id)arg1;
- (void)setFriction:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)value;
- (double)velocity;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_dynamicValueAnimationWithInitialValue:(double)arg1 initialVelocity:(double)arg2 targetValue:(double)arg3 stiffness:(double)arg4 dampingFactor:(double)arg5 epsilon:(double)arg6;

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