<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIActionSlider.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIActionSlider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate> {
    bool  _animating;
    double  _cachedTrackMaskWidth;
    UIView * _contentView;
    <_UIActionSliderDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _knobImageOffset;
    UIImageView * _knobImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _knobInsets;
    double  _knobPosition;
    _UIActionSliderKnob * _knobView;
    double  _knobWidth;
    bool  _showingTrackLabel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _slideGestureInitialPoint;
    UIPanGestureRecognizer * _slideGestureRecognizer;
    long long  _style;
    long long  _textStyle;
    UIView * _trackBackgroundView;
    _UIBackdropView * _trackBlurView;
    UIView * _trackDodgeView;
    UIFont * _trackFont;
    UIView<_UIActionSliderLabel> * _trackLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  _trackSize;
    UIView * _trackSolidView;
    NSString * _trackText;
    double  _trackTextBaselineFromBottom;
    double  _trackWidthProportion;
    _UIVibrantSettings * _vibrantSettings;
}

@property (getter=isAnimating, nonatomic) bool animating;
@property (nonatomic) double cachedTrackMaskWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIActionSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *knobColor;
@property (nonatomic, retain) UIImage *knobImage;
@property (nonatomic) struct CGSize { double x1; double x2; } knobImageOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } knobInsets;
@property (nonatomic, readonly) UIBezierPath *knobMaskPath;
@property (nonatomic) double knobPosition;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } knobRect;
@property (getter=_knobView, nonatomic, readonly) UIView *knobView;
@property (nonatomic) double knobWidth;
@property (getter=isShowingTrackLabel, nonatomic) bool showingTrackLabel;
@property (nonatomic, readonly) UIPanGestureRecognizer *slideGestureRecognizer;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) long long textStyle;
@property (nonatomic, retain) UIFont *trackFont;
@property (nonatomic, readonly, retain) UILabel *trackLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } trackSize;
@property (nonatomic, copy) NSString *trackText;
@property (nonatomic) double trackTextBaselineFromBottom;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackTextRect;
@property (nonatomic) double trackWidthProportion;
@property (nonatomic, retain) _UIVibrantSettings *vibrantSettings;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (void)_hideTrackLabel:(bool)arg1;
- (double)_knobAvailableX;
- (double)_knobHorizontalPosition;
- (double)_knobLeftMostX;
- (double)_knobMaxX;
- (double)_knobMaxXInset;
- (double)_knobMinX;
- (double)_knobMinXInset;
- (void)_knobPanGesture:(id)arg1;
- (double)_knobRightMostX;
- (double)_knobVerticalInset;
- (id)_knobView;
- (double)_knobWidth;
- (void)_makeTrackLabel;
- (void)_showTrackLabel;
- (void)_slideCompleted:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrame;
- (id)backgroundColor;
- (double)cachedTrackMaskWidth;
- (void)closeTrackAnimated:(bool)arg1;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 vibrantSettings:(id)arg2;
- (bool)isAnimating;
- (bool)isShowingTrackLabel;
- (id)knobColor;
- (id)knobImage;
- (struct CGSize { double x1; double x2; })knobImageOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })knobInsets;
- (id)knobMaskPath;
- (double)knobPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })knobRect;
- (double)knobWidth;
- (void)layoutSubviews;
- (void)openTrackAnimated:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCachedTrackMaskWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKnobColor:(id)arg1;
- (void)setKnobImage:(id)arg1;
- (void)setKnobImageOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setKnobInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setKnobPosition:(double)arg1;
- (void)setKnobWidth:(double)arg1;
- (void)setMaskFromImage:(id)arg1 onView:(id)arg2;
- (void)setMaskPath:(struct CGPath { }*)arg1 onView:(id)arg2;
- (void)setShowingTrackLabel:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTextStyle:(long long)arg1;
- (void)setTrackFont:(id)arg1;
- (void)setTrackSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTrackText:(id)arg1;
- (void)setTrackTextBaselineFromBottom:(double)arg1;
- (void)setTrackWidthProportion:(double)arg1;
- (void)setVibrantSettings:(id)arg1;
- (bool)shouldHideTrackLabelForXPoint:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)slideGestureRecognizer;
- (long long)style;
- (long long)textStyle;
- (id)trackFont;
- (id)trackLabel;
- (id)trackMaskImage;
- (id)trackMaskPath;
- (struct CGSize { double x1; double x2; })trackSize;
- (id)trackText;
- (double)trackTextBaselineFromBottom;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackTextRect;
- (double)trackWidthProportion;
- (void)updateAllTrackMasks;
- (id)vibrantSettings;
- (bool)xPointIsWithinTrack:(double)arg1;

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
