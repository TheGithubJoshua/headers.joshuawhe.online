<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKSolarFaceView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKSolarFaceView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKSolarFaceView : NTKDigitalFaceView <NTKTimeView, PUICCrownInputSequencerDelegate, UIGestureRecognizerDelegate> {
    NSMutableSet * _animatingReasons;
    UIView * _belowHorizonView;
    UIView * _borrowedCircleViewFromClockIcon;
    UIView * _borrowedTimeViewFromClockIcon;
    NSTimer * _buttonPressTimer;
    struct NSNumber { Class x1; } * _clockTimerToken;
    double  _currentSolarDiskPercentage;
    NTKComplicationController * _dateComplicationController;
    NTKDateComplicationLabel * _dateComplicationLabel;
    NTKLayoutRule * _dateComplicationLayoutRule;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dateLabelZoomEndingCenter;
    NTKDigitalTimeLabel * _digitalTimeLabel;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelSmallInUpperRightCornerStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitalTimeLabelZoomEndingCenter;
    NTKDigitialUtilitarianFaceViewComplicationFactory * _faceViewComplicationFactory;
    UIView * _horizonGradientContainerView;
    UIImageView * _horizonGradientView;
    UIView * _horizonView;
    unsigned int  _isContentLoaded;
    unsigned int  _isHandlingHardwareEvents;
    unsigned int  _isLocationAwareInteractiveModeEnabled;
    unsigned int  _isSolarPathUpdateNeeded;
    double  _labelFontLineHeight;
    struct NSString { Class x1; } * _locationManagerToken;
    NSDateFormatter * _overrideDateFormatter;
    UILabel * _overrideDateLabel;
    NTKColorCurve * _postNoonComplicationColorCurve;
    NTKColorCurve * _postNoonHorizonGradientColorCurve;
    NTKFloatCurve * _postNoonHorizonHeightCurve;
    NTKColorCurve * _postNoonSolarDiskColorCurve;
    NTKColorCurve * _preNoonComplicationColorCurve;
    NTKColorCurve * _preNoonHorizonGradientColorCurve;
    NTKFloatCurve * _preNoonHorizonHeightCurve;
    NTKColorCurve * _preNoonSolarDiskColorCurve;
    long long  _previousViewMode;
    UILabel * _scrubLabel;
    NTKBezierPathView * _solarBezierPathView;
    UIView * _solarContentView;
    UIView * _solarDiskHaloMaskView;
    UIView * _solarDiskHaloParentView;
    UIImageView * _solarDiskHaloView;
    double  _solarDiskOverridePercentage;
    NTKSolarDiskView * _solarDiskView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _solarDiskViewZoomEndingCenter;
    NTKSolarPath * _solarPath;
    UIView * _solarPathObjectContainerView;
    NTKSolarTimeModel * _solarTimeModel;
    UITapGestureRecognizer * _viewModeTapGesture;
    UILabel * _waypointLabel;
    id /* block */  _waypointSettleAnimationBlock;
    NSDictionary * _waypointViews;
    NSDictionary * _waypoints;
    NSTimer * _wheelDelayTimer;
    UIView * _zoomMaskView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_adjustUIForBoundsChange;
- (void)_animateSolarDiskFromPercentage:(double)arg1 toPercentage:(double)arg2 reason:(id)arg3;
- (void)_animateSolarDiskToRestPercentageIfNeeded;
- (void)_applyDataMode;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_asyncUpdateLocale;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (void)_beginAnimatingForReason:(id)arg1;
- (void)_bringForegroundViewsToFront;
- (void)_buttonPressTimerFired;
- (bool)_canEnterInteractiveMode;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterSettingViewMode:(long long)arg1;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_createSolarBezierPath;
- (id)_createWaypointView;
- (id)_detachedComplicationDisplays;
- (id)_digitalTimeLabelStyleForViewMode:(long long)arg1;
- (void)_disableCrown;
- (void)_enableCrown;
- (void)_endAnimatingForReason:(id)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)_handleViewModeTapGesture:(id)arg1;
- (void)_interpolateFromViewMode:(long long)arg1 toViewMode:(long long)arg2 progress:(double)arg3;
- (bool)_isAnimating;
- (bool)_isAnimatingForReason:(id)arg1;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_layoutForegroundContainerView;
- (void)_layoutHorizonForViewMode:(long long)arg1;
- (void)_layoutLegacyDateComplication;
- (void)_layoutSolarDiskViewForViewMode:(long long)arg1;
- (void)_layoutSolarPathAndContainerForViewMode:(long long)arg1;
- (void)_layoutTimeLabelForViewMode:(long long)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (double)_percentageForWaypoint:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_pointOnSolarPathForPercentage:(double)arg1;
- (void)_prepareForEditing;
- (void)_prepareForSettingViewMode:(long long)arg1;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_setSolarBezierPath:(id)arg1 animated:(bool)arg2;
- (void)_setViewMode:(long long)arg1 animated:(bool)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_sharedLocationManagerUpdatedLocation:(id)arg1 error:(id)arg2;
- (double)_solarDiskIdealizedDatePercentage;
- (void)_solarDiskPercentageChanged:(double)arg1;
- (double)_solarDiskRestPercentage;
- (bool)_solarPathRequiresUpdateForChangedLocation:(id)arg1;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_timeZoneChanged:(id)arg1;
- (void)_transitionToViewMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateColorCurves;
- (void)_updateComplicationColorWithPercentage:(double)arg1;
- (void)_updateDigitalTimeLabelStylesForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateLocale;
- (void)_updateSolarDiskHaloViewPosition;
- (void)_updateSolarHaloWithPercentage:(double)arg1;
- (void)_updateSolarHorizonGradientAlphaWithPercentage:(double)arg1;
- (void)_updateSolarHorizonGradientAlphaWithSolarDiskCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateSolarHorizonGradientColorWithPercentage:(double)arg1;
- (void)_updateSolarPathForChangedDate:(id)arg1;
- (void)_updateSolarPathForChangedLocation:(id)arg1;
- (void)_updateTimeScrubbingContent;
- (void)_updateToViewMode:(long long)arg1;
- (void)_updateWaypointLabelForCrownMovement;
- (void)_updateWaypoints;
- (bool)_usesCustomZoom;
- (long long)_waypointBetweenPreviousOffset:(double)arg1 currentOffset:(double)arg2;
- (long long)_waypointForPercentage:(double)arg1 withSmallThreshold:(double)arg2 largeThreshold:(double)arg3;
- (id)_waypointLabelTextForPercentage:(double)arg1;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_wheelDelayTimerFired;
- (void)dealloc;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setViewMode:(long long)arg1;

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