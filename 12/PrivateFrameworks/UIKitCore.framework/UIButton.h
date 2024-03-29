<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIButton.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIButton : UIControl <ABText, CAMAccessibilityHUDItemProvider, NSCoding, TSDPlatformButtonProtocol, UIAccessibilityContentSizeCategoryImageAdjusting, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate> {
    long long  __imageContentMode;
    UIColor * __plainButtonBackgroundColor;
    UIImageView * _backgroundView;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
        unsigned int titleFrozen : 1; 
        unsigned int resendTraitToImageViews : 2; 
        unsigned int animateNextHighlightChange : 1; 
        unsigned int blurEnabled : 1; 
        unsigned int visualEffectViewEnabled : 1; 
        unsigned int suppressAccessibilityUnderline : 1; 
        unsigned int requiresLayoutForPropertyChange : 1; 
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory : 1; 
        unsigned int disableAutomaticTitleAnimations : 1; 
    }  _buttonFlags;
    UIVisualEffectView * _contentBackdropView;
    NSArray * _contentConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    struct __CFDictionary { } * _contentLookup;
    UIView * _effectiveContentView;
    unsigned long long  _externalFlatEdge;
    _UIFloatingContentView * _floatingContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageEdgeInsets;
    UIImageView * _imageView;
    bool  _initialized;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalTitlePaddingInsets;
    unsigned long long  _lastDrawingControlState;
    UIFont * _lazyTitleViewFont;
    _UIButtonMaskAnimationView * _maskAnimationView;
    UITapGestureRecognizer * _selectGestureRecognizer;
    UIView * _selectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _titleEdgeInsets;
    UILabel * _titleView;
}

@property (setter=_setContentConstraints:, nonatomic, copy) NSArray *_contentConstraints;
@property (nonatomic, readonly, retain) UIColor *_currentImageColor;
@property (getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:, nonatomic) bool _disableAutomaticTitleAnimations;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (setter=_setImageContentMode:, nonatomic) long long _imageContentMode;
@property (setter=_setInternalTitlePaddingInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _internalTitlePaddingInsets;
@property (getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:, nonatomic, retain) UIColor *_plainButtonBackgroundColor;
@property (setter=_setWantsAccessibilityUnderline:, nonatomic) bool _wantsAccessibilityUnderline;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) bool adjustsImageWhenDisabled;
@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (nonatomic, readonly) long long buttonType;
@property (getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:, nonatomic) bool contentBackgroundHidden;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, readonly) NSAttributedString *currentAttributedTitle;
@property (nonatomic, readonly) UIImage *currentBackgroundImage;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic, readonly) NSString *currentTitle;
@property (nonatomic, readonly) UIColor *currentTitleColor;
@property (nonatomic, readonly) UIColor *currentTitleShadowColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageEdgeInsets;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool reversesTitleShadowWhenHighlighted;
@property (nonatomic) bool showsTouchWhenHighlighted;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleEdgeInsets;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, copy) NSString *vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_buttonTypeIsModernUI:(long long)arg1;
+ (id)_checkmarkImage;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_detailDisclosureImage;
+ (id)_exclamationMarkImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_minusImage;
+ (id)_plusImage;
+ (id)_questionMarkImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 baseAlpha:(double)arg4;
+ (void)_setVisuallyHighlighted:(bool)arg1 forViews:(id)arg2 initialPress:(bool)arg3 highlightBlock:(id /* block */)arg4;
+ (id)_xImage;
+ (id)buttonWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (bool)_accessibilityShouldActivateOnHUDLift;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)_applyAppropriateChargeForButton;
- (void)_applyCarPlaySystemButtonCustomizations;
- (id)_archivableContent:(id*)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(bool*)arg2;
- (id)_backgroundView;
- (void)_beginTitleAnimation;
- (bool)_blurEnabled;
- (id)_borderColorForState:(unsigned long long)arg1;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)_buttonType;
- (bool)_canHaveTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippedHighlightBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_combinedContentPaddingInsets;
- (id)_contentBackdropView;
- (id)_contentConstraints;
- (id)_contentForState:(unsigned long long)arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createPreparedImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_currentImageColor;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticTitleAnimations;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (long long)_drawingStyleForStroke:(double)arg1;
- (id)_effectiveContentView;
- (struct CGSize { double x1; double x2; })_effectiveSizeForImage:(id)arg1;
- (id)_encodableSubviews;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (unsigned long long)_externalFlatEdge;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalTitleColorForState:(unsigned long long)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_floatingContentView;
- (id)_font;
- (void)_gestureRecognizerFailed:(id)arg1;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasDrawingStyle;
- (bool)_hasHighlightColor;
- (bool)_hasImageForProperty:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightBoundsForDrawingStyle;
- (double)_highlightCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_highlightRectForTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_imageColorForState:(unsigned long long)arg1;
- (long long)_imageContentMode;
- (id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(bool*)arg2;
- (bool)_imageNeedsCompositingModeWhenSelected;
- (id)_imageView;
- (void)_installSelectGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_internalTitlePaddingInsets;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateContentConstraints;
- (bool)_isCarPlaySystemTypeButton;
- (bool)_isContentBackgroundHidden;
- (bool)_isEffectivelyDisabledExternalButton;
- (bool)_isExternalRoundedRectButtonWithPressednessState;
- (bool)_isInCarPlay;
- (bool)_isModernButton;
- (bool)_isTitleFrozen;
- (void)_layoutBackgroundImageView;
- (void)_layoutContentBackdropView;
- (id)_layoutDebuggingTitle;
- (void)_layoutImageView;
- (void)_layoutTitleView;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (bool)_likelyToHaveTitle;
- (long long)_lineBreakMode;
- (id)_newImageViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_pathTitleEdgeInsets;
- (id)_plainButtonBackgroundColor;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_prepareMaskAnimationViewIfNecessary;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (bool)_requiresLayoutForPropertyChange;
- (struct CGSize { double x1; double x2; })_roundSize:(struct CGSize { double x1; double x2; })arg1;
- (double)_scaleFactorForImage;
- (void)_selectGestureChanged:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBlurEnabled:(bool)arg1;
- (void)_setButtonType:(long long)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setContentBackgroundHidden:(bool)arg1;
- (void)_setContentConstraints:(id)arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDisableAutomaticTitleAnimations:(bool)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)_setExternalFlatEdge:(unsigned long long)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 deferLayout:(bool)arg2;
- (void)_setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageContentMode:(long long)arg1;
- (void)_setInternalTitlePaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setPlainButtonBackgroundColor:(id)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(bool)arg1;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleFrozen:(bool)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setVisualEffectViewEnabled:(bool)arg1 backgroundColor:(id)arg2;
- (void)_setWantsAccessibilityUnderline:(bool)arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(bool)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (bool)_shouldDefaultToTemplatesForImageViewBackground:(bool)arg1;
- (bool)_shouldHaveFloatingAppearance;
- (bool)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
- (bool)_shouldUpdatePressedness;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (bool)_textNeedsCompositingModeWhenSelected;
- (void)_titleAttributesChanged;
- (void)_titleAttributesThatDoNotAffectSizeOrLayoutChanged;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calculatePositionForEmptyTitle:(bool)arg2;
- (struct CGSize { double x1; double x2; })_titleShadowOffset;
- (id)_titleView;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundImageView;
- (void)_updateContentBackdropView;
- (void)_updateEffectsForImageView:(id)arg1 background:(bool)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (void)_updateTitleView;
- (bool)_visualEffectViewEnabled;
- (bool)_wantsAccessibilityUnderline;
- (bool)_wantsContentBackdropView;
- (void)_willMoveToWindow:(id)arg1;
- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (bool)adjustsImageWhenDisabled;
- (bool)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (bool)autosizesToFit;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)buttonType;
- (bool)canBecomeFocused;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)currentAttributedTitle;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)font;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageEdgeInsets;
- (id)imageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isSpringLoaded;
- (void)layoutSubviews;
- (long long)lineBreakMode;
- (struct CGPoint { double x1; double x2; })pressFeedbackPosition;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)reversesTitleShadowWhenHighlighted;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;
- (void)setAdjustsImageWhenDisabled:(bool)arg1;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAutosizesToFit:(bool)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setDisabledDimsImage:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNeedsLayout;
- (void)setReversesTitleShadowWhenHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShowPressFeedback:(bool)arg1;
- (void)setShowsTouchWhenHighlighted:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsTouchWhenHighlighted;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleEdgeInsets;
- (id)titleForState:(unsigned long long)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_accessoryControlToExtendWithCallout;
- (void)_mapkit_setAttributedTitle:(id)arg1;
- (void)_mapkit_setImage:(id)arg1;
- (id)_mapkit_title;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_sendActionForControlEventsWithHighlightTimeout:(unsigned long long)arg1;
- (void)pu_setRTLAwareContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)pu_setTitle:(id)arg1 withFallback:(id /* block */)arg2 forState:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (long long)_nui_isUIButtonType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_nui_rectInsetsForBaseline;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;

// Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI

+ (id)ak_passwordRecoveryButton;

- (void)_ak_passwordRecoveryButtonTapped:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

- (void)cam_updateContentInsetsToCenterImageWithinMinimumSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)selectedByAccessibilityHUDManager:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (void)cps_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

- (void)fa_setBackgroundColor:(id)arg1;
- (void)fa_setTitleColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)_hkecg_detailButton;
+ (double)hk_buddyButtonHorizontalMargin;
+ (id)hk_buddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_buttonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_multiLineRoundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundRectButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)hk_roundedRectBuddyButtonTintedWithColor:(id)arg1 title:(id)arg2 target:(id)arg3 action:(SEL)arg4;

// Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages

+ (id)_iam_closeButton;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (void)mpu_configureButtonWithTextDrawingContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)buttonBackgroundImageForType:(unsigned long long)arg1 color:(id)arg2 cornerRadius:(double)arg3 controlState:(unsigned long long)arg4;
+ (id)buttonWithPXType:(unsigned long long)arg1 color:(id)arg2;
+ (id)px_actionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 color:(id)arg4;

- (void)px_setTitle:(id)arg1 orAttributedTitle:(id)arg2 forState:(unsigned long long)arg3;
- (void)px_updateTitleUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)SKUITrending_defaultButtonFont;
+ (id)SKUITrending_searchButtonWithElement:(id)arg1;
+ (id)SKUITrending_searchButtonWithTitle:(id)arg1;

- (void)SKUITrending_applyConfigurationFromElement:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tsdPlatformButtonWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (void)setAlternateImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setImageNamed:(id)arg1 inBundle:(id)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

- (void)setVs_normalTitle:(id)arg1;
- (id)vs_normalTitle;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

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
