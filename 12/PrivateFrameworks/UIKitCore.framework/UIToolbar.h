<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIToolbar.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIToolbar.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIToolbar : UIView <UIAccessibilityHUDGestureDelegate, UIBarPositioning, UIGestureRecognizerDelegatePrivate, _UIBarPositioningInternal> {
    id  __appearanceStorage;
    bool  __wantsLetterpressContent;
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    NSArray * _backgroundEffects;
    long long  _barPosition;
    UIColor * _barTintColor;
    bool  _centerTextButtons;
    <UIToolbarDelegate> * _delegate;
    unsigned long long  _disableAutolayoutWarnings;
    NSArray * _items;
    UIView * _shadowView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder : 1; 
        unsigned int disableBlurTinting : 1; 
    }  _toolbarFlags;
    _UIToolbarVisualProvider * _visualProvider;
}

@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) long long _barTranslucence;
@property (setter=_setDisableBlurTinting:, nonatomic) bool _disableBlurTinting;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) bool _locked;
@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (nonatomic, readonly) bool _shouldStretchDuringCrossfadeTransition;
@property (setter=_setWantsLetterpressContent:, nonatomic) bool _wantsLetterpressContent;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) bool centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (getter=isMinibar, nonatomic, readonly) bool minibar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_forceLegacyVisualProvider;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;

- (void).cxx_destruct;
- (id)__appearanceStorage;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (id)_backdropViewLayerGroupName;
- (id)_backgroundView;
- (long long)_barPosition;
- (long long)_barTranslucence;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableBlurTinting;
- (void)_doCommonToolbarInit;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(bool)arg1 wasMinibar:(bool)arg2;
- (void)_frameOrCenterChanged;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hidesShadow;
- (bool)_hostsLayoutEngineAllowsTAMIC_NO;
- (bool)_isLocked;
- (id)_itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_linkedBeforeWhitetailAndInitializedFromCoder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setDisableBlurTinting:(bool)arg1;
- (void)_setForceTopBarAppearance:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setWantsLetterpressContent:(bool)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_shadowView;
- (bool)_shouldStretchDuringCrossfadeTransition;
- (bool)_subclassImplementsDrawRect;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (bool)_wantsLetterpressContent;
- (void)addConstraint:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundEffects;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (bool)centerTextButtons;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeConstraint:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCenterTextButtons:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)configuration;
- (void)configureTransparent;
- (void)configureWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI

- (id)ts_barButtonViews;
- (void)ts_setBackgroundEffects:(id)arg1;
- (void)ts_setBlurthroughBackground;
- (void)ts_setTransparentBackground;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI

- (void)ts_setBlurthroughBackground;

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