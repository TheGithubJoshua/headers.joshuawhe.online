<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIFont.h</title>
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

/PrivateFrameworks/UIFoundation.framework/UIFont.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation (553)
 */

@interface UIFont : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) double ascender;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) double descender;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) UIFontDescriptor *fontDescriptor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double leading;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) double maximumPointSizeAfterScaling;
@property (nonatomic, readonly) NAUITextStyleDescriptor *naui_dynamicFontTextStyleDescriptor;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) double pointSizeForScaling;
@property (nonatomic, readonly) UIFont *pu_fontWithMonospacedNumbers;
@property (nonatomic, readonly) UIFont *px_fontWithMonospacedNumbers;
@property (nonatomic, readonly) NSString *rc_textStyle;
@property (nonatomic, readonly) NSString *textStyleForScaling;
@property (nonatomic, readonly) double xHeight;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_fontWithDescriptor:(id)arg1 size:(double)arg2 textStyleForScaling:(id)arg3 pointSizeForScaling:(double)arg4 maximumPointSizeAfterScaling:(double)arg5 forIB:(bool)arg6;
+ (bool)_isSupportedDynamicFontTextStyle:(id)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (double)_pointSize:(double)arg1 scaledLikeTextStyle:(id)arg2 maximumPointSize:(double)arg3 compatibleWithTraitCollection:(id)arg4;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;
+ (id)_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;
+ (double)_readableWidth;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (id)_supportedDynamicFontStyles;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (double)buttonFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (void)initialize;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (double)labelFontSize;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (double)smallSystemFontSize;
+ (bool)supportsSecureCoding;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2 design:(id)arg3;
+ (double)systemFontSize;
+ (id)userFontOfSize:(double)arg1;

- (struct __CTFont { }*)CTFont;
- (id)_alternateSystemFonts;
- (void)_applyToCGContext:(struct CGContext { }*)arg1 graphicsContext:(id)arg2;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (struct CGFont { }*)_backingCGSFont;
- (double)_baseLineHeightForFont:(bool)arg1;
- (double)_bodyLeading;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_familyName;
- (id)_fontAdjustedForContentSizeCategoryCompatibleWithTraitCollection:(id)arg1;
- (id)_fontAdjustedForCurrentContentSizeCategory;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)_fontScaledLikeTextStyle:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3 forIB:(bool)arg4;
- (bool)_getLatin1Glyphs:(const unsigned short**)arg1 advanceWidths:(const double**)arg2;
- (bool)_hasColorGlyphs;
- (bool)_isDefaultFace;
- (bool)_isHiraginoFont;
- (id)_kernOverride;
- (double)_leading;
- (double)_scaledValueForValue:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_textMatrixTransformForContext:(id)arg1;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long long)arg2;
- (struct CGSize { double x1; double x2; })advancementForGlyph:(unsigned short)arg1;
- (double)ascender;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForFont;
- (double)capHeight;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coveredCharacterSet;
- (double)descender;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)familyNameForCSSFontFamilyValue;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(double)arg1;
- (void)getAdvancements:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)getCaretPositions:(double*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (void)getVerticalOriginTranslations:(struct CGSize { double x1; double x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned long long)arg3;
- (unsigned short)glyphWithName:(id)arg1;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (bool)isFixedPitch;
- (bool)isIBFontMetricsScaledFont;
- (bool)isIBTextStyleFont;
- (bool)isSystemFont;
- (bool)isVertical;
- (id)lastResortFont;
- (double)leading;
- (double)lineHeight;
- (id)markupDescription;
- (double)maximumPointSizeAfterScaling;
- (unsigned long long)mostCompatibleStringEncoding;
- (unsigned long long)numberOfGlyphs;
- (double)pointSize;
- (double)pointSizeForScaling;
- (double)readableWidth;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (void)setInContext:(struct CGContext { }*)arg1;
- (id)textStyleForScaling;
- (int)traits;
- (double)underlineThickness;
- (id)verticalFont;
- (double)xHeight;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (id)boldTimeFontOfSize:(double)arg1;
+ (id)italicTimeFontOfSize:(double)arg1;
+ (id)monospacedTimeFontOfSize:(double)arg1;
+ (id)timeFontOfSize:(double)arg1;
+ (id)timeFontWithFont:(id)arg1;
+ (id)timeFontWithName:(id)arg1 size:(double)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (bool)_shouldUseDefaultFont;
+ (bool)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredFontForTextStyle:(id)arg1;
+ (id)ab_preferredRowFontForTextStyle:(id)arg1;
+ (void)ab_setIgnoreUserFontSize:(bool)arg1;
+ (id)cnui_bodyFont;
+ (id)cnui_footnoteFont;

- (id)ab_boldFont;
- (id)ab_italicFont;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (bool)_mapkit_accessibilityTextEnabled;
+ (bool)_mapkit_ax3TextEnabled;
+ (id)_mapkit_preferredFontForTextStyleInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;
+ (id)_mapkit_preferredFontForTextStyleTimeDisplayInTableViewCell:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 useMonospace:(bool)arg3;

- (id)_mapkit_fontByAddingFeaturesForTabularFigures;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplay;
- (id)_mapkit_fontByAddingFeaturesForTimeDisplayUseMonospace:(bool)arg1;
- (double)_mapkit_lineHeight;
- (double)_mapkit_scaledValueForValue:(double)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (struct CGPoint { double x1; double x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromBaselinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromCaplinePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })mf_originPointFromMidlinePoint:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (double)pu_scaledValue:(double)arg1 usingFontOfAttributedString:(id)arg2;

- (id)pu_fontWithMonospacedNumbers;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

+ (bool)_nui_isAccessibilityEnabled;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

+ (id)aa_actionFontForTraitCollection:(id)arg1;
+ (id)aa_cellLabelFontForTraitCollection:(id)arg1;
+ (id)aa_fontForLargeButton;
+ (id)aa_fontForLargerInformationLabel;
+ (id)aa_fontForPageTitle;
+ (id)aa_fontForPrimaryInformationLabel;
+ (id)aa_messageFontForTraitCollection:(id)arg1;
+ (id)aa_primaryActionFontForTraitCollection:(id)arg1;
+ (id)aa_titleFontForTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

+ (id)avt_appropriateContentSizeCategoryForCategory:(id)arg1 minCategory:(id)arg2 maxCategory:(id)arg3;
+ (id)avt_attributeTitleFont;
+ (id)avt_avatarActionButtonTitleFont;
+ (id)avt_funCamItemTitleFont;
+ (id)avt_groupDialBoldLabelFont;
+ (id)avt_groupDialLabelFont;
+ (id)avt_splashContinueButtonFont;
+ (id)avt_splashSubTitleFont;
+ (id)avt_splashTitleFont;
+ (id)avt_templateInstructionLabelFont;
+ (id)avt_templateTitleLabelFont;
+ (id)avt_userInfoLabelFont;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

+ (id)bsui_defaultFont:(bool)arg1 forTextStyle:(id)arg2 hiFontStyle:(long long)arg3 contentSizeCategory:(id)arg4;
+ (id)bsui_defaultFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
+ (id)bsui_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2;
+ (id)bsui_preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

+ (id)cmk_cameraFontForContentSize:(id)arg1;
+ (id)cmk_cameraFontOfSize:(double)arg1;
+ (id)cmk_cameraKerningForFont:(id)arg1;
+ (id)cmk_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cmk_cameraModeDialFontForContentSize:(id)arg1;
+ (id)cmk_cameraMonospacedFontOfSize:(double)arg1;
+ (id)cmk_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cmk_cameraTimerFontForContentSize:(id)arg1;
+ (double)cmk_interpolatedAdditionalFontSizeForMainScreen;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)cui_cameraFontForContentSize:(id)arg1;
+ (id)cui_cameraFontOfSize:(double)arg1;
+ (id)cui_cameraKerningForFont:(id)arg1;
+ (id)cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)cui_cameraModeDialFontForContentSize:(id)arg1;
+ (double)cui_cameraModeDialFontSizeForContentSize:(id)arg1;
+ (id)cui_cameraMonospacedFontOfSize:(double)arg1;
+ (id)cui_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)cui_cameraTimerFontForContentSize:(id)arg1 layoutStyle:(long long)arg2;
+ (double)cui_interpolatedAdditionalFontSizeForMainScreen;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_emphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_monospacedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortDefaultFontForTextStyle:(id)arg1;
+ (id)__ck_shortEmphasizedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortMonospacedPreferredFontForTextStyle:(id)arg1;
+ (id)__ck_shortPreferredFontForTextStyle:(id)arg1;
+ (double)_interpolatedAdditionalFontSizeForMainScreen;
+ (id)ck_cui_cameraFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraFontOfSize:(double)arg1;
+ (id)ck_cui_cameraKerningForFont:(id)arg1;
+ (id)ck_cui_cameraModeDialApproximateFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraPadModeDialFontForContentSize:(id)arg1;
+ (id)ck_cui_cameraTimerFontForContentSize:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit

+ (id)CLKMonospaceNumbersFeatureSettings;

- (id)CLKFontByApplyingFeatureSettings:(id)arg1;
- (id)CLKFontWithAlternativePunctuation;
- (id)CLKFontWithLocalizedLowerCaseSmallCaps;
- (id)CLKFontWithLocalizedSmallCaps;
- (id)CLKFontWithMonospacedNumbers;
- (id)CLKFontWithStraightSix;

// Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI

- (double)_compass_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (struct UIFont { Class x1; }*)dc_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (struct UIFont { Class x1; }*)dc_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;

// Image: /System/Library/PrivateFrameworks/ExposureNotificationUI.framework/ExposureNotificationUI

+ (id)ph_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2;
+ (id)ph_preferredFontForTextStyle:(id)arg1 variant:(long long)arg2 maximumContentSizeCategory:(id)arg3;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

+ (id)fa_fontWithStyle:(id)arg1 traits:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

+ (id)_fiui_nonBoldedVersionOfFont:(id)arg1 size:(double)arg2;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2;
+ (id)_fu_sausageFontOfSize:(double)arg1 fontWeight:(double)arg2 centeredColons:(bool)arg3;
+ (id)fiui_nonBoldingRoundedSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1;
+ (id)fiui_nonBoldingSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)fu_alternateColonsFeatureSetting;
+ (id)fu_bodyEmphasizeFont;
+ (id)fu_bodyShortFont;
+ (id)fu_boldSausageFontOfSize:(double)arg1;
+ (id)fu_fontByApplyingFeatureSettings:(id)arg1 toFont:(id)arg2;
+ (id)fu_heavySausageFontOfSize:(double)arg1;
+ (id)fu_lightSausageFontOfSize:(double)arg1;
+ (id)fu_lightSausageFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_mediumFontOfSize:(double)arg1;
+ (id)fu_mediumFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_mediumSausageFontOfSize:(double)arg1;
+ (id)fu_sausageFontOfSize:(double)arg1;
+ (id)fu_sausageFontOfSize:(double)arg1 centeredColons:(bool)arg2;
+ (id)fu_semiboldSausageFontOfSize:(double)arg1;
+ (id)fu_systemFontOfSize:(double)arg1 centeredColons:(bool)arg2;

- (id)fu_fontWithCenteredColons;
- (id)fu_fontWithSize:(double)arg1;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2;
- (id)fu_fontWithSizeFittingString:(id)arg1 withinWidth:(double)arg2 accountForGlyphOffset:(bool)arg3;
- (id)fu_fontWithStraightSidedNumbers;
- (id)fu_monospacedFont;
- (id)fu_shortSlashFont;
- (id)fu_smallCapsFont;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_chartAxisLabelFont;
+ (id)hk_chartLollipopKeyFont;
+ (id)hk_chartLollipopValueFont;
+ (id)hk_defaultFontWithUIFontTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 attributes:(id)arg3;
+ (double)hk_fittingScaleFactorForUILabels:(id)arg1 constrainingWidth:(double)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2;
+ (id)hk_scalableFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_titleLabelFontScaledBy:(double)arg1;
+ (id)hk_unitLabelFontScaledBy:(double)arg1;

- (id)_hk_fontByModifyingSymbolicTraits:(id /* block */)arg1;
- (id)hk_fontByAddingSymbolicTraits:(unsigned int)arg1;
- (id)hk_fontByRemovingSymbolicTraits:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (id)hr_roundedFontOfSize:(double)arg1;
+ (id)hr_roundedFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)hr_roundedFontOfStyle:(id)arg1 weight:(double)arg2;

- (id)hr_monospacedFont;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (id)_lp_CSSFontWeight;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (double)MPU_scaledValueForValue:(double)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

+ (id)miroPreferredFontForTextStyle:(id)arg1 useBold:(bool)arg2 maxPointSize:(double)arg3;

// Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI

+ (id)mtui_thinTimeFontOfSize:(double)arg1;
+ (id)mtui_timeFontOfSize:(double)arg1;

- (id)mtui_fontByAddingAttributes:(unsigned long long)arg1;
- (id)mtui_fontByAddingTimeFontAttributes;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (id)naui_ultraLightMonospacedFontOfSize:(double)arg1;

- (id)naui_dynamicFontTextStyleDescriptor;

// Image: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI

+ (id)ts_preferredFontForTextStyle:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout

+ (id)_nfl_fontNameWithPrefix:(id)arg1 midfix:(id)arg2 suffix:(id)arg3;
+ (id)_nfl_fontWeightLookup;
+ (id)nfl_drukTextBoldForSize:(double)arg1;
+ (id)nfl_drukWideMediumForSize:(double)arg1;
+ (id)nfl_fontWithName:(id)arg1 size:(double)arg2;
+ (id)nfl_systemFontNameForWeight:(double)arg1;
+ (id)nfl_systemFontNameForWeight:(double)arg1 condensed:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (struct UIFont { Class x1; }*)attachmentBrowserTitleFont;
+ (id)contentSizeCategories;
+ (double)fontSizeForHeaderImport;
+ (double)fontSizeForSubheaderImport;
+ (double)lineHeightForAttachmentTitleText:(long long)arg1;
+ (struct UIFont { Class x1; }*)listViewDetailFont;
+ (struct UIFont { Class x1; }*)listViewTitleFont;
+ (struct UIFont { Class x1; }*)navBarButtonFontUsingSingleLineA:(bool)arg1;
+ (double)pointSizeForBodyTextWithContentSizeCategory:(id)arg1;
+ (double)preferredAttachmentTextScale;
+ (id)preferredFontForAttachmentBoldText;
+ (id)preferredFontForAttachmentRegularText;
+ (id)preferredFontForAttachmentText:(long long)arg1;
+ (id)preferredFontForBodyText;
+ (struct UIFont { Class x1; }*)preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (id)preferredFontForDateText;
+ (id)preferredFontForDateTextWithZoomFactor:(double)arg1;
+ (id)preferredFontForFixedWidthText;
+ (id)preferredFontForFixedWidthTextWithContentSizeCategory:(id)arg1;
+ (id)preferredFontForHeadingText;
+ (struct UIFont { Class x1; }*)preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont { Class x1; }*)preferredFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
+ (id)preferredFontForSubheadingText;
+ (struct UIFont { Class x1; }*)preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont { Class x1; }*)preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (struct UIFont { Class x1; }*)preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;
+ (id)preferredFontForTitleText;
+ (struct UIFont { Class x1; }*)preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (double)preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (struct UIFont { Class x1; }*)preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (double)spacingForAttachmentTitleText:(long long)arg1;
+ (long long)stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;

- (id)fontConvertedToSize:(double)arg1;
- (bool)fontHasSingleLineA;
- (id)fontWithSingleLineA;
- (id)fontWithTabularNumbers;
- (id)ic_fontWithoutSingleLineA;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (bool)pk_loadFontWithFileName:(id)arg1;
+ (bool)pk_loadPeerPaymentCashFont;
+ (bool)pk_loadPeerPaymentChiseledCashFont;
+ (bool)pk_loadTextCondensedSemiboldCashFont;
+ (id)pk_peerPaymentCashFontOfSize:(double)arg1;
+ (id)pk_peerPaymentChiseledCashFontOfSize:(double)arg1;
+ (id)pk_textCondensedSemiboldCashFontOfSize:(double)arg1;

- (id)pk_fixedWidthFont;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_defaultFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2;
+ (id)px_preferredEmphasizedFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)px_preferredFontForTextStyle:(id)arg1 maxContentSizeCategory:(id)arg2 withSymbolicTraits:(unsigned int)arg3;
+ (id)px_preferredFontForTextStyle:(id)arg1 maxContentSizeCategory:(id)arg2 withSymbolicTraits:(unsigned int)arg3 emphasized:(bool)arg4;
+ (id)px_preferredFontForTextStyle:(id)arg1 withSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;

- (id)px_fontWithMonospacedNumbers;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_dynamicBodyFont;
+ (id)siriui_dynamicHeaderFont;
+ (id)siriui_dynamicLightWeightBodySizeFont;
+ (id)siriui_dynamicLightWeightBodySubtextSizeFont;
+ (id)siriui_dynamicMediumWeightBodySizeFont;
+ (id)siriui_dynamicMediumWeightBodySubtextSizeFont;
+ (id)siriui_dynamicThinWeightBodySizeFont;
+ (id)siriui_dynamicThinWeightBodySubtextSizeFont;
+ (id)siriui_dynamicTitle0Font;
+ (id)siriui_headerFont;
+ (id)siriui_largeHeaderFontWithSize:(double)arg1;
+ (id)siriui_lightWeightBodySizeFont;
+ (id)siriui_lightWeightBodySubtextSizeFont;
+ (id)siriui_lightWeightFontWithSize:(double)arg1;
+ (id)siriui_mediumWeightBodySizeFont;
+ (id)siriui_mediumWeightBodySubtextSizeFont;
+ (id)siriui_mediumWeightFontWithSize:(double)arg1;
+ (float)siriui_preferredDynamicBodySize;
+ (float)siriui_preferredDynamicBodySubtextSize;
+ (id)siriui_ratingFont;
+ (id)siriui_serverTipFont;
+ (id)siriui_serverTipPrefixFont;
+ (id)siriui_serverUtteranceCorrectionPromptFont;
+ (id)siriui_serverUtteranceFont;
+ (id)siriui_subtitleFont;
+ (id)siriui_thinWeightBodySizeFont;
+ (id)siriui_thinWeightBodySubtextSizeFont;
+ (id)siriui_thinWeightFontWithSize:(double)arg1;
+ (id)siriui_typedTextInputFont;
+ (id)siriui_userUtteranceFont;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

+ (id)tv_fontFromTextStyle:(id)arg1 fontWeight:(id)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)telephonyUIBodyShortEmphasizedFont;
+ (id)telephonyUIBodyShortFont;
+ (id)telephonyUIBodyShortItalicFont;
+ (id)telephonyUIFontWithDescriptor:(id)arg1;
+ (id)telephonyUIFootnoteShortFont;
+ (id)telephonyUISubheadlineShortFont;

- (id)telephonyUIFontByAddingCaseSensitiveLayoutEnabledAttribute;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_normalizedContentSizeCategory:(id)arg1 default:(bool)arg2;
+ (id)_preferredContentSizeCategory:(unsigned long long)arg1;
+ (id)_ui_bulletFontForFont:(id)arg1;
+ (id)preferredContentSizeCategory;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)_fontFromTextStyle:(long long)arg1 maximumContentSizeCategory:(id)arg2 fontWeight:(long long)arg3 fontSize:(double)arg4 symbolicTraits:(unsigned int)arg5 fontFeature:(long long)arg6;
+ (id)_uiFontAttributesForFeature:(long long)arg1;
+ (id)_uifontWeightFromFontWeight:(long long)arg1;
+ (id)vui_fontFromTextLayout:(id)arg1;
+ (id)vui_fontFromTextStyle:(long long)arg1 fontWeight:(long long)arg2 fontSize:(double)arg3 symbolicTraits:(unsigned int)arg4;

- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;
- (double)topMarginToFont:(id)arg1 withBaselineMargin:(double)arg2 traitCollection:(id)arg3;
- (double)topMarginWithBaselineMargin:(double)arg1 traitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rcs_dynamicMonospacedTitle0Font;
+ (id)rcs_monospacedSubheadlineFont;

- (id)rc_textStyle;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

+ (id)vcui_buttonFont;
+ (id)vcui_preferredContentSize;
+ (id)vcui_preferredFontForTextStyle:(id)arg1;
+ (id)vcui_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

+ (id)preferredFontForStyle:(id)arg1 weight:(double)arg2;

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
