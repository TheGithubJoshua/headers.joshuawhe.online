<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUICircleProgressIndicator.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUICircleProgressIndicator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUICircleProgressIndicator : UIView {
    double  _animatedValue;
    double  _animationEndTime;
    double  _animationStartTime;
    double  _animationStartValue;
    UIImage * _borderImage;
    UIImage * _centerImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _centerImageInsets;
    CADisplayLink * _displayLink;
    UIImage * _fillImage;
    bool  _highlighted;
    UIImageView * _indeterminateView;
    bool  _isAnimating;
    double  _progress;
    double  _totalAutoFillDuration;
    UIColor * _unhighlightedBackgroundColor;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (getter=isIndeterminate, nonatomic) bool indeterminate;
@property (nonatomic) double progress;
@property (nonatomic) double totalAutoFillDuration;

+ (id)_borderImage;
+ (id)_fillImage;
+ (id)_indeterminateImage;

- (void).cxx_destruct;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_setHidesBorderView:(bool)arg1;
- (void)_startIndeterminateAnimation;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (double)progress;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (void)setTotalAutoFillDuration:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (double)totalAutoFillDuration;

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
