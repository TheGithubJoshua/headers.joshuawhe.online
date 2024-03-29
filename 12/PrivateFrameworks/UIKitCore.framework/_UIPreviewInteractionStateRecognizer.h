<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIPreviewInteractionStateRecognizer.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIPreviewInteractionStateRecognizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIPreviewInteractionStateRecognizer : NSObject {
    double  _actualHintForce;
    double  _actualHintTime;
    double  _actualPeekForce;
    double  _actualPeekTime;
    double  _actualPopForce;
    double  _actualPopTime;
    bool  _allowsPopOffsetDecay;
    long long  _currentState;
    double  _currentTime;
    double  _currentTouchForce;
    unsigned long long  _deepPressCount;
    double  _highPopThreshold;
    double  _hintAndPeekInterval;
    double  _hintReductionForce;
    double  _lowpassForceAlpha;
    double  _maximumForce;
    double  _minimumPreviewDuration;
    double  _popAlwaysThreshold;
    double  _popDecayingOffset;
    double  _popForceReductionThreshold;
    double  _popOffsetDecayAlpha;
    double  _popOffsetInitial;
    double  _popOffsetLongterm;
    double  _popReductionForce;
    double  _previousEffectiveTouchForce;
    double  _previousPopThreshold;
    double  _previousTime;
    double  _progressToStrongThreshold;
    double  _revealThreshold;
    double  _saturationForce;
    bool  _shouldDelayReveal;
    double  _smoothedForce;
    double  _standardThreshold;
    double  _strongThreshold;
    double  _timeMark;
}

@property (nonatomic) long long currentState;
@property (nonatomic) double currentTouchForce;
@property (nonatomic) double minimumPreviewDuration;
@property (nonatomic) bool shouldDelayReveal;
@property (nonatomic, readonly) double velocity;

- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (double)_currentTouchForceMultiplier;
- (double)_denormalizedTouchForceValue:(double)arg1;
- (double)_normalizedTouchForceValue:(double)arg1;
- (double)_thresholdForForceLevel:(long long)arg1;
- (double)currentProgressToState:(long long)arg1;
- (long long)currentState;
- (double)currentTouchForce;
- (void)dealloc;
- (id)description;
- (void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (id)init;
- (double)minimumPreviewDuration;
- (void)reset;
- (void)setCurrentState:(long long)arg1;
- (void)setCurrentTouchForce:(double)arg1;
- (void)setMinimumPreviewDuration:(double)arg1;
- (void)setShouldDelayReveal:(bool)arg1;
- (bool)shouldDelayReveal;
- (double)velocity;

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
