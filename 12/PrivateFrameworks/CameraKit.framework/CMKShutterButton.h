<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMKShutterButton.h</title>
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

/PrivateFrameworks/CameraKit.framework/CMKShutterButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit (1)
 */

@interface CMKShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    UIView * __outerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    CMKTimelapseShutterRingView * __timelapseOuterView;
    long long  _buttonMode;
    bool  _pulsing;
    bool  _showDisabled;
    struct CMKShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
    }  _spec;
    bool  _spinning;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) UIView *_outerView;
@property (nonatomic, readonly) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic, readonly) CMKTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic) long long buttonMode;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic) bool showDisabled;
@property (setter=_setSpec:, nonatomic) struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; } spec;
@property (getter=isSpinning, nonatomic) bool spinning;

+ (id)shutterButton;
+ (id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
+ (id)smallShutterButton;
+ (id)tinyShutterButton;

- (void).cxx_destruct;
- (double)_borderWidthForMode:(long long)arg1;
- (id)_colorForMode:(long long)arg1;
- (void)_commonCMKShutterButtonInitialization;
- (double)_cornerRadiusForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (id)_innerView;
- (bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (id)_progressActivityIndicatorView;
- (void)_setSpec:(struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (long long)buttonMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPulsing;
- (bool)isSpinning;
- (void)layoutSubviews;
- (void)setButtonMode:(long long)arg1;
- (void)setButtonMode:(long long)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setShowDisabled:(bool)arg1;
- (void)setSpinning:(bool)arg1;
- (bool)showDisabled;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })spec;

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