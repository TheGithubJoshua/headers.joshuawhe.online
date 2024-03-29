<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKAnalogFaceView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKAnalogFaceView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKAnalogFaceView : NTKFaceView {
    bool  __contentViewsOpaque;
    bool  __timeViewBehindContentView;
    UIView * _borrowedCircleView;
    UIView * _borrowedHandsView;
    UIView * _contentView;
    UIView * _dialComplicationContainerView;
    double  _maxZoomingIconDiameter;
    UIView * _zoomingClippingView;
}

@property (getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:, nonatomic) bool _contentViewsOpaque;
@property (setter=_setTimeViewBehindContentView:, nonatomic) bool _timeViewBehindContentView;
@property (nonatomic) UIView *borrowedCircleView;
@property (nonatomic) UIView *borrowedHandsView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UIView *dialComplicationContainerView;
@property (nonatomic) double maxZoomingIconDiameter;
@property (nonatomic, retain) NTKAnalogHandsView *timeView;
@property (nonatomic, retain) UIView *zoomingClippingView;

+ (void)_prewarmForDevice:(id)arg1;
+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (long long)_backgroundedTimeViewEditModes;
- (void)_bringForegroundViewsToFront;
- (bool)_canStartTimeScrubbing;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (id)_complicationContainerViewForSlot:(id)arg1;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (struct CGPoint { double x1; double x2; })_contentCenterOffset;
- (bool)_contentViewsAreOpaque;
- (struct CGPoint { double x1; double x2; })_dateComplicationCenterOffset;
- (struct CGPoint { double x1; double x2; })_dateComplicationRightAlignment;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleLocaleDidChange;
- (bool)_isComplicationSlotInsideDial:(id)arg1;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_reuseTimeView;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setContentViewsOpaque:(bool)arg1;
- (void)_setTimeViewBehindContentView:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)_supportsTimeScrubbing;
- (id)_timeTravelCaptionFontSizeOverrides;
- (double)_timeTravelCaptionLabelMaxWidth;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (bool)_timeViewBehindContentView;
- (void)_unloadSnapshotContentViews;
- (void)_updateDateComplicationPositionIfNecessary;
- (bool)_usesCustomZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (id)borrowedCircleView;
- (id)borrowedHandsView;
- (id)contentView;
- (void)dealloc;
- (id)dialComplicationContainerView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (double)maxZoomingIconDiameter;
- (void)setBorrowedCircleView:(id)arg1;
- (void)setBorrowedHandsView:(id)arg1;
- (void)setMaxZoomingIconDiameter:(double)arg1;
- (void)setZoomingClippingView:(id)arg1;
- (id)zoomingClippingView;

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
