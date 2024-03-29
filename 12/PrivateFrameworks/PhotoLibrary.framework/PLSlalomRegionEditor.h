<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLSlalomRegionEditor.h</title>
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

/PrivateFrameworks/PhotoLibrary.framework/PLSlalomRegionEditor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary (1.0)
 */

@interface PLSlalomRegionEditor : UIControl {
    <PLSlalomRegionEditorDelegate> * _delegate;
    bool  _draggingEnd;
    bool  _draggingStart;
    UIImageView * _endHandleView;
    double  _endValue;
    bool  _forceLayout;
    double  _maxValue;
    double  _minValue;
    unsigned long long  _regionEditorStyle;
    UIImageView * _startHandleView;
    double  _startValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchLocationWhenTrackingZoomBegan;
    double  _touchOffset;
    UIImageView * _trackImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _trackInsets;
    UIImageView * _trackSnapshotView;
    bool  _trackingZoom;
    double  _trimHandleWidth;
    bool  _zoomAnimating;
    double  _zoomDelay;
    double  _zoomMaxValue;
    double  _zoomMinValue;
    bool  _zoomed;
}

@property (nonatomic) <PLSlalomRegionEditorDelegate> *delegate;
@property (nonatomic) double endValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) unsigned long long regionEditorStyle;
@property (nonatomic) double startValue;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } trackInsets;
@property (nonatomic) double trimHandleWidth;
@property (getter=isZoomAnimating, setter=setZoomAnimating:, nonatomic) bool zoomAnimating;
@property (nonatomic) double zoomDelay;

- (void)_beginTrackingZoomWithTouch:(id)arg1;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1;
- (void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_endHandleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_handleFrameForValue:(double)arg1 isStart:(bool)arg2;
- (id)_handleImage;
- (id)_handleTintColor;
- (bool)_isTouch:(id)arg1 inHandleIsStart:(bool)arg2 outTouchOffset:(double*)arg3;
- (bool)_isZoomed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startHandleFrame;
- (void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1;
- (id)_tickColor;
- (id)_trackColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrameNoZoom;
- (id)_trackImageForZoom:(bool)arg1;
- (double)_trackScale;
- (double)_trimHandleWidth;
- (void)_updateSlidersWithTouch:(id)arg1;
- (void)_updateTrack;
- (double)_valueFromEndHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_valueFromHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isStart:(bool)arg2;
- (double)_valueFromStartHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)_zoomPressWasHeld;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)endValue;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isZoomAnimating;
- (void)layoutSubviews;
- (double)maxValue;
- (double)minValue;
- (unsigned long long)regionEditorStyle;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEndValue:(double)arg1 notify:(bool)arg2;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setRegionEditorStyle:(unsigned long long)arg1;
- (void)setStartValue:(double)arg1;
- (void)setStartValue:(double)arg1 notify:(bool)arg2;
- (void)setTrackInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrimHandleWidth:(double)arg1;
- (void)setZoomAnimating:(bool)arg1;
- (void)setZoomDelay:(double)arg1;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)startValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })trackInsets;
- (double)trimHandleWidth;
- (double)zoomDelay;

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
