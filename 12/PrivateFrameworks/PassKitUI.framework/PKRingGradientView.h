<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKRingGradientView.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKRingGradientView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKRingGradientView : UIView {
    CAShapeLayer * _backgroundCap;
    CAShapeLayer * _backgroundLayer;
    UIColor * _baseColor;
    double  _currentAngle;
    CAShapeLayer * _gradientCap;
    UIColor * _gradientEndColor;
    CAGradientLayer * _gradientLayer;
    CAShapeLayer * _gradientMaskLayer;
    UIColor * _gradientStartColor;
    double  _minimumAngle;
    UIColor * _strokeColor;
    CAShapeLayer * _strokeLayer;
}

@property (nonatomic, copy) UIColor *baseColor;
@property (nonatomic) double currentAngle;
@property (nonatomic, copy) UIColor *gradientEndColor;
@property (nonatomic, copy) UIColor *gradientStartColor;
@property (nonatomic) double minimumAngle;
@property (nonatomic, readonly) double radius;
@property (nonatomic, copy) UIColor *strokeColor;
@property (nonatomic, readonly) double totalWidth;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_center;
- (struct CGPoint { double x1; double x2; })_centerPointForMaskViewWithAngle:(double)arg1 adjustToCover:(bool)arg2;
- (double)_maskRadius;
- (double)_offsetEndAngle;
- (double)_offsetStartAngle;
- (double)_radius;
- (void)_updateGradient;
- (id)baseColor;
- (double)currentAngle;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (id)init;
- (void)layoutSubviews;
- (double)minimumAngle;
- (double)radius;
- (double)ringWidth;
- (void)setBaseColor:(id)arg1;
- (void)setCurrentAngle:(double)arg1;
- (void)setGradientEndColor:(id)arg1;
- (void)setGradientStartColor:(id)arg1;
- (void)setMinimumAngle:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (double)strokeWidth;
- (double)totalWidth;

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
