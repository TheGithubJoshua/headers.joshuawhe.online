<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKAstronomyFaceView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKAstronomyFaceView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKAstronomyRotationModelObserver, NTKAstronomyVistaViewObserver, NTKTimeView, UIGestureRecognizerDelegate> {
    long long  _animatingToViewMode;
    NTKAstronomyVistaView * _astronomyVistaView;
    struct NSNumber { Class x1; } * _clockTimerToken;
    NSDate * _crownDate;
    NTKDigitalTimeLabel * _digitalTimeLabel;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelDefaultStyle;
    NTKDigitalTimeLabelStyle * _digitalTimeLabelSmallInUpperRightCornerStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitalTimeLabelZoomEndingCenter;
    NSArray * _editingAnimations;
    NTKDigitialUtilitarianFaceViewComplicationFactory * _faceViewComplicationFactory;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _initialCoordinate;
    UITapGestureRecognizer * _interactiveModeTapGesture;
    unsigned int  _isAnimatingViewMode;
    unsigned int  _isContentLoaded;
    unsigned int  _isHandlingCrownEvents;
    unsigned int  _isLocationCurrent;
    NTKDateComplicationLabel * _legacyDateLabel;
    UIImageView * _legacyLeftBottomImageView;
    UIImageView * _legacyRightBottomImageView;
    NTKAstronomyLocationDot * _locationDot;
    struct NSString { Class x1; } * _locationManagerToken;
    NSDate * _overrideDate;
    NTKColoringLabel * _overrideDateLabel;
    NTKColoringLabel * _phaseLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _phaseLabelDefaultFrame;
    NTKDelayedBlock * _physicalButtonDelayedBlock;
    long long  _previousDataMode;
    void _previousTranslation;
    float  _recentMovement;
    NTKAstronomyRotationModel * _rotationModel;
    NSDateFormatter * _scrubDateFormatter;
    NTKColoringLabel * _scrubLabel;
    UIImageView * _spheroidLabels;
    UIPanGestureRecognizer * _spheroidPanGesture;
    float  _supplementalFontLineHeightPlusDescender;
    UITapGestureRecognizer * _supplementalModeDoubleTapGesture;
    unsigned long long  _vista;
    NTKDelayedBlock * _wheelDelayedBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateTransitionToViewMode:(long long)arg1;
- (void)_applyDataMode;
- (void)_applyDataModeAnimated:(bool)arg1;
- (void)_applyFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2 fraction:(double)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_applyViewMode:(long long)arg1;
- (void)_applyVista:(unsigned long long)arg1;
- (void)_asyncUpdateLocale;
- (void)_asyncUpdateTime;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (void)_bringForegroundViewsToFront;
- (bool)_canEnterInteractiveMode;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (id)_date;
- (id)_detachedComplicationDisplays;
- (unsigned long long)_detentTypeForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_digitalTimeLabelStyle:(long long)arg1;
- (void)_disableCrown;
- (void)_enableCrownForAstronomyVista:(unsigned long long)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (void)_handleInteractiveModeGesture:(id)arg1;
- (void)_handleSpheroidPanGesture:(id)arg1;
- (void)_handleSupplementalModeGesture:(id)arg1;
- (void)_hideLocationDot;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg1 toPose:(const struct NTKAstronomyFaceViewAnimationPose { float x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 progress:(float)arg3;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (void)_layoutForegroundContainerView;
- (void)_layoutLegacyViews;
- (void)_layoutPhaseLabel;
- (void)_layoutSpheroidLabel:(int)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (double)_minimumBreathingScaleForComplicationSlot:(id)arg1;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_performWristRaiseAnimation;
- (void)_physicalButtonDelayedBlockFired;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_setIsAnimatingViewMode:(bool)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (bool)_shouldHideStatusBarForViewMode:(long long)arg1;
- (void)_showLocationDotIfNeeded;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_unloadSnapshotContentViews;
- (void)_updateDigitalTimeLabelStylesForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateLocaleAnimated:(bool)arg1;
- (void)_updateLocation:(id)arg1 lastLocation:(id)arg2;
- (void)_updateTimeAnimated:(bool)arg1;
- (bool)_usesCustomZoom;
- (bool)_wheelChangedWithEvent:(id)arg1;
- (void)_wheelDelayedBlockFired;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (double)keylineStyleForComplicationSlot:(id)arg1;
- (void)layoutSubviews;
- (void)rotationModelStoppedByDecelerating:(id)arg1;
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
