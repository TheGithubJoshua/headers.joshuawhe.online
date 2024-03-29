<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTMaterialView.h</title>
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

/PrivateFrameworks/MaterialKit.framework/MTMaterialView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit (1)
 */

@interface MTMaterialView : UIView <MTMaterialSettingsObserving> {
    UIViewFloatAnimatableProperty * _backdropFloatAnimatableProperty;
    id /* block */  _backdropScaleAdjustment;
    _MTBackdropView * _backdropView;
    UIView * _baseOverlayView;
    bool  _cornerRadiusIsContinuous;
    bool  _forceCrossfadeIfNecessary;
    NSString * _groupName;
    bool  _highlighted;
    bool  _isConfiguredAsOverlay;
    UIView * _primaryOverlayView;
    UIView * _reducedTransparencyBackdropReplacementView;
    UIView * _secondaryOverlayView;
    MTMaterialSettingsInterpolator * _settingsInterpolator;
    bool  _shouldCrossfadeIfNecessary;
    bool  _useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
}

@property (nonatomic) bool allowsInPlaceFiltering;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *backdropFloatAnimatableProperty;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCrossfadeIfNecessary;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) <MTMaterialSettings><MTMaterialSettingsObservable> *materialSettings;
@property (nonatomic) bool shouldCrossfadeIfNecessary;
@property (readonly) Class superclass;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
@property (nonatomic) bool useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
@property (nonatomic, readonly) MTVibrantStylingProvider *vibrantStylingProvider;
@property (nonatomic) double weighting;

+ (void)_validateRecipe:(long long*)arg1 andOptions:(unsigned long long*)arg2;
+ (double)highlightAlpha;
+ (void)initialize;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3;
+ (id)materialViewWithRecipe:(long long)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
+ (id)materialViewWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)_adjustScaleOfBackdropView:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2;
- (id)_backdropLayer;
- (void)_configureBackdropView:(id)arg1 withSettingsInterpolator:(id)arg2;
- (void)_configureBackdropViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureBaseOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureOverlayView:(id*)arg1 forOverlayOption:(unsigned long long)arg2 withSettingsInterpolator:(id)arg3 colorBlock:(id /* block */)arg4;
- (id)_configureOverlayView:(id*)arg1 ofClass:(Class)arg2 withSettingsInterpolator:(id)arg3 color:(id)arg4;
- (void)_configurePrimaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureSecondaryOverlayViewIfNecessaryWithSettingsInterpolator:(id)arg1;
- (double)_continuousCornerRadius;
- (bool)_isCrossfadeNecessary;
- (id)_observableSettings;
- (void)_reduceMotionStatusDidChange;
- (void)_reduceTransparencyStatusDidChange;
- (void)_reevaluateShouldReduceCaptureBitDepth:(bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setupOrInvalidateTransformer;
- (bool)_supportsVariableWeighting;
- (bool)allowsInPlaceFiltering;
- (id)backdropFloatAnimatableProperty;
- (id /* block */)backdropScaleAdjustment;
- (double)cornerRadius;
- (void)dealloc;
- (bool)forceCrossfadeIfNecessary;
- (id)groupName;
- (id)initWithSettings:(id)arg1 options:(unsigned long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(id /* block */)arg4;
- (bool)isHighlighted;
- (id)materialSettings;
- (void)prune;
- (void)setAllowsInPlaceFiltering:(bool)arg1;
- (void)setBackdropFloatAnimatableProperty:(id)arg1;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setFinalRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (void)setFinalSettings:(id)arg1 options:(unsigned long long)arg2;
- (void)setForceCrossfadeIfNecessary:(bool)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShouldCrossfadeIfNecessary:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(bool)arg1;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(bool)arg1;
- (void)setWeighting:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldCrossfadeIfNecessary;
- (void)transitionToRecipe:(long long)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (void)transitionToSettings:(id)arg1 options:(unsigned long long)arg2 weighting:(double)arg3;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (id)vibrantStylingProvider;
- (double)weighting;

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
