<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKBackgroundImageFaceView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKBackgroundImageFaceView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKBackgroundImageFaceView : NTKDigitalFaceView <UIGestureRecognizerDelegate> {
    UIView * _backgroundContainerView;
    UIView * _borrowedCircleView;
    UIView * _borrowedTimeView;
    double  _breathScaleModifier;
    NTKEditOption * _editOptionFrom;
    NTKEditOption * _editOptionTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maskZoomStartingBounds;
    double  _rubberBandScaleModifier;
    UIView * _selectedContentView;
    bool  _shouldAdjustLayoutForTimeTravel;
    NTKDigitalTimeLabel * _timeLabel;
    UIView * _timeTravelDimmingOverlayView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _timeViewZoomEndingCenter;
    UIView * _transitionDimmingView;
    UIView * _transitionViewFrom;
    UIView * _transitionViewTo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _vignetteZoomStartingBounds;
    UIView * _zoomMaskView;
    UIImageView * _zoomVignette;
}

@property (nonatomic, readonly) UIView *backgroundContainerView;
@property (nonatomic, retain) UIView *borrowedCircleView;
@property (nonatomic, retain) UIView *borrowedTimeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskZoomStartingBounds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKDigitalTimeLabel *timeLabel;
@property (nonatomic) struct CGPoint { double x1; double x2; } timeViewZoomEndingCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } vignetteZoomStartingBounds;
@property (nonatomic, retain) UIView *zoomMaskView;
@property (nonatomic, retain) UIImageView *zoomVignette;

- (void).cxx_destruct;
- (id)_animationImageView;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyForegroundZoomAlpha:(double)arg1;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyScaleTransform:(id)arg1;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (double)_backgroundImageAlphaForEditMode:(long long)arg1;
- (void)_beginTransitionToOption;
- (void)_bringForegroundViewsToFront;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_didTransitionToOptionView:(id)arg1;
- (id)_digitalTimeLabelStyle;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (void)_layoutTimeTravelStatusModule:(id)arg1;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (bool)_needsVignette;
- (double)_parallaxScaleFactor;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_removeAllSubviewsFrom:(id)arg1;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)_selectedContentView;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldAdjustLayoutForTimeTravel;
- (bool)_shouldFadeToTransitionView;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (bool)_supportsTimeScrubbing;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (bool)_timeLabelUsesLegibility;
- (double)_timeTravelCaptionLabelMaxWidth;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (double)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (id)_updateFontInStyle:(id)arg1 monospace:(bool)arg2;
- (bool)_usesCustomZoom;
- (id)_viewForEditOption:(id)arg1;
- (bool)_wantsTimeTravelStatusModule;
- (id)backgroundContainerView;
- (id)borrowedCircleView;
- (id)borrowedTimeView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskZoomStartingBounds;
- (void)setBorrowedCircleView:(id)arg1;
- (void)setBorrowedTimeView:(id)arg1;
- (void)setMaskZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setTimeViewZoomEndingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewMode:(long long)arg1;
- (void)setVignetteZoomStartingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setZoomMaskView:(id)arg1;
- (void)setZoomVignette:(id)arg1;
- (id)timeLabel;
- (struct CGPoint { double x1; double x2; })timeViewZoomEndingCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vignetteZoomStartingBounds;
- (id)zoomMaskView;
- (id)zoomVignette;

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
