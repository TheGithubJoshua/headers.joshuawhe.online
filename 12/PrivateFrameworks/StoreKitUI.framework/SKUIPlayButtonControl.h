<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIPlayButtonControl.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIPlayButtonControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIPlayButtonControl : UIControl {
    NSString * _backdropGroupName;
    _UIBackdropView * _backdropView;
    UIColor * _backgroundColor;
    UIImage * _backgroundImageForBlurring;
    long long  _backgroundType;
    UIView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bigHitInsets;
    SKUIPlayButtonShapeView * _borderLayer;
    UIColor * _bufferProgressIndicatorColor;
    id  _bufferProgressIndicatorCompositingFilter;
    UIColor * _controlForeGroundColor;
    UIImage * _customPlayImage;
    UIImage * _customToggleImage;
    bool  _didInitialHighlightForTouch;
    bool  _disabledButSelectable;
    SKUIButtonViewElement * _element;
    SKUIPlayButtonGradientView * _gradientBackgroundView;
    NSArray * _gradientColors;
    long long  _gradientType;
    UIImageView * _imageView;
    bool  _indeterminate;
    SKUIPlayButtonShapeView * _innerProgressLayer;
    SKUIPlayButtonShapeView * _outerProgressLayer;
    float  _progress;
    UIColor * _progressIndicatorColor;
    id  _progressIndicatorCompositingFilter;
    SKUIPlayButtonShapeView * _selectedLayer;
    UIColor * _selectionColor;
    id  _selectionCompositingFilter;
    bool  _showBorder;
    bool  _showOuterBorder;
    bool  _showingPlayIndicator;
    bool  _showingProgress;
    bool  _usesBlurredBackground;
}

@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) UIImage *backgroundImageForBlurring;
@property (nonatomic, readonly) long long backgroundType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bigHitInsets;
@property (nonatomic, readonly) UIColor *controlForeGroundColor;
@property (nonatomic, retain) UIImage *customPlayImage;
@property (nonatomic, retain) UIImage *customToggleImage;
@property (getter=isDisabledButSelectable, nonatomic) bool disabledButSelectable;
@property (nonatomic, retain) SKUIButtonViewElement *element;
@property (nonatomic, retain) UIImageView *imageView;
@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic) float progress;
@property (nonatomic, copy) UIColor *progressIndicatorColor;
@property (nonatomic) bool showOuterBorder;
@property (nonatomic, readonly) bool showingPlayIndicator;
@property (nonatomic, readonly) bool showingProgress;

+ (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)blurColorForColor:(id)arg1;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize { double x1; double x2; })arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_beginIndeterminateAnimation;
- (id)_borderLayer;
- (id)_cancelImage;
- (id)_classicBackdropView;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (id)_defaultBackgroundView;
- (id)_gradientBackgroundView;
- (id)_imageView;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (id)_outerProgressLayer;
- (id)_playImage;
- (void)_prepareForReuse;
- (bool)_renderAsEnabled;
- (id)_selectedLayer;
- (void)_showPlayIndicator:(bool)arg1;
- (id)_simpleBackdrop;
- (void)_toggleToPlayState;
- (void)_updateBackdropView;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_useBlurredBackground:(bool)arg1;
- (id)backdropGroupName;
- (id)backgroundImageForBlurring;
- (long long)backgroundType;
- (void)beginIndeterminateAnimation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigHitInsets;
- (float)buttonCornerRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)cancelImage;
- (id)controlForeGroundColor;
- (id)customPlayImage;
- (id)customToggleImage;
- (id)defaultBackgroundColor;
- (id)element;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDisabledButSelectable;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (id)outerBorderColor;
- (float)playButtonDefaultAlpha;
- (id)playImage;
- (void)playIndicatorDidChange:(bool)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (float)progress;
- (id)progressIndicatorColor;
- (void)refresh;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundImageForBlurring:(id)arg1;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)setBackgroundType:(long long)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setControlColor:(id)arg1;
- (void)setControlForegroundColor:(id)arg1;
- (void)setCustomPlayImage:(id)arg1;
- (void)setCustomToggleImage:(id)arg1;
- (void)setDisabledButSelectable:(bool)arg1;
- (void)setElement:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setProgressIndicatorColor:(id)arg1;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setSelectionColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setShowBorder:(bool)arg1;
- (void)setShowOuterBorder:(bool)arg1;
- (bool)showOuterBorder;
- (void)showPlayIndicator:(bool)arg1;
- (void)showPlayIndicator:(bool)arg1 force:(bool)arg2;
- (bool)showingPlayIndicator;
- (bool)showingProgress;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateOuterProgressLayerStroke;

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
