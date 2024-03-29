<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIScreen.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIScreen.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIScreen : NSObject <INUIImageLoaderDelegate, UICoordinateSpace, UIFocusItemContainer, UITraitEnvironment, _CRKImageLoaderDelegate, _UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, _UITraitEnvironmentInternal> {
    bool  __UIIBAlwaysProvidePeripheryInsets;
    FBSDisplayConfiguration * __displayConfiguration;
    UIWindow<UIFocusEnvironment> * __focusedWindow;
    unsigned long long  _artworkSubtype;
    NSArray * _availableDisplayModes;
    _UIScreenBoundingPathUtilities * _boundingPathUtilities;
    NSDictionary * _capabilities;
    bool  _captured;
    struct { 
        unsigned int isKnown : 1; 
        unsigned int isSupported : 1; 
        unsigned int isInRange : 1; 
    }  _carPlayHumanPresenceStatus;
    UITraitCollection * _contentSizeCategoryTraits;
    CARSessionStatus * _currentCarSessionStatus;
    UITraitCollection * _defaultTraitCollection;
    _UIDisplayEdgeInfoProvider * _displayEdgeInfoProvider;
    _UIDragManager * _dragManager;
    _UIScreenFixedCoordinateSpace * _fixedCoordinateSpace;
    _UIFocusMovementPerformer * _focusMovementPerformer;
    _UIFocusScrollManager * _focusScrollManager;
    UIFocusSystem * _focusSystem;
    _UIScreenFocusSystemManager * _focusSystemManager;
    long long  _gamut;
    _UIInteractiveHighlightEnvironment * _interactiveHighlightEnvironment;
    long long  _interfaceOrientation;
    float  _lastNotifiedBacklightLevel;
    UITraitCollection * _lastNotifiedTraitCollection;
    bool  _mainScreen;
    UITraitCollection * _overrideTraitCollection;
    bool  _performingSystemSnapshot;
    double  _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int hasSetOverscanCompensation : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int rightHandDrive : 1; 
        unsigned int carPlayNightModeSupported : 1; 
        unsigned int carPlayNightModeEnabled : 1; 
    }  _screenFlags;
    UISoftwareDimmingWindow * _softwareDimmingWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unjailedReferenceBounds;
    long long  _userInterfaceIdiom;
    bool  _wantsSoftwareDimming;
}

@property (setter=_setUIIBAlwaysProvidePeripheryInsets:, nonatomic) bool _UIIBAlwaysProvidePeripheryInsets;
@property (setter=_setFocusedWindow:, nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _gkBounds;
@property (readonly) double _gkScale;
@property (setter=_setLastNotifiedBacklightLevel:, nonatomic) float _lastNotifiedBacklightLevel;
@property (getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:, nonatomic) bool _performingSystemSnapshot;
@property (nonatomic, readonly) UIWindow *_preferredFocusedWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _referenceBounds;
@property (setter=_setSoftwareDimmingWindow:, nonatomic, retain) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic, readonly, copy) NSArray *availableModes;
@property (getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:, nonatomic, retain) _UIScreenBoundingPathUtilities *boundingPathUtilities;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double brightness;
@property (getter=isCaptured, setter=_setCaptured:, nonatomic) bool captured;
@property (nonatomic, readonly) unsigned long long ck_screenSizeCategory;
@property (readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, retain) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:, nonatomic, retain) UITraitCollection *defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (getter=_dragManager, nonatomic, readonly) _UIDragManager *dragManager;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (readonly) <UICoordinateSpace> *fixedCoordinateSpace;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusMovementPerformer, nonatomic, readonly) _UIFocusMovementPerformer *focusMovementPerformer;
@property (getter=_focusScrollManager, nonatomic, readonly) _UIFocusScrollManager *focusScrollManager;
@property (getter=_focusSystem, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (getter=_focusSystemManager, nonatomic, readonly) _UIScreenFocusSystemManager *focusSystemManager;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (getter=_interactiveHighlightEnvironment, nonatomic, readonly) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } is_scaledSize;
@property (getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *lastNotifiedTraitCollection;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (getter=_isMainScreen, setter=_setMainScreen:, nonatomic) bool mainScreen;
@property (readonly) long long maximumFramesPerSecond;
@property (nonatomic, readonly) UIScreen *mirroredScreen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeBounds;
@property (nonatomic, readonly) double nativeScale;
@property (getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:, nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overscanCompensationInsets;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) UIScreenMode *preferredMode;
@property (nonatomic, readonly) double scale;
@property (readonly) unsigned long long screenSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFocus;
@property (nonatomic, readonly) bool supportsScreenshotEditViewController;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (getter=isUserInterfaceIdiomPad, nonatomic, readonly) bool userInterfaceIdiomPad;
@property (nonatomic) bool wantsSoftwareDimming;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(bool)arg2;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(bool)arg2 forceMain:(bool)arg3;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(bool)arg3 forceMain:(bool)arg4;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(bool)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__displayConfigurationsIncludingMain:(bool)arg1;
+ (id)_carScreen;
+ (void)_enumerateScreensWithBlock:(id /* block */)arg1;
+ (bool)_isProbablyBeingRecorded;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (bool)_shouldDisableJail;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToRotateScreen:(double)arg1;

- (void).cxx_destruct;
- (bool)_UIIBAlwaysProvidePeripheryInsets;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (bool)_areListsLimited;
- (bool)_areMusicListsLimited;
- (unsigned long long)_artworkSubtype;
- (void)_beginObservingBacklightLevelNotifications;
- (id)_boundingPathUtilities;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_clearCarPlayHumanPresenceState;
- (void)_computeMetrics;
- (void)_computeMetrics:(bool)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_disconnectScreen;
- (id)_display;
- (double)_displayCornerRadius;
- (id)_displayEdgeInfoProvider;
- (id)_displayID;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_displayPeripheryInsets;
- (id)_dragManager;
- (long long)_effectiveUserInterfaceStyle;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureFocusSystemIsLoaded;
- (bool)_expectsSecureRendering;
- (void)_externalDeviceNightModeDidChange:(id)arg1;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (id)_focusMapContainer;
- (id)_focusMovementPerformer;
- (id)_focusScrollManager;
- (id)_focusSystem;
- (id)_focusSystemManager;
- (id)_focusedWindow;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (bool)_hasStatusBar;
- (bool)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (id)_interactiveHighlightEnvironment;
- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interfaceOrientedMainSceneBounds;
- (bool)_isCarPlayHumanPresenceInRange;
- (bool)_isCarPlayNightModeEnabled;
- (bool)_isCarPlayNightModeSupported;
- (bool)_isCarScreen;
- (bool)_isExternal;
- (bool)_isForceTouchCapable;
- (bool)_isMainScreen;
- (bool)_isMainScreenPointer;
- (bool)_isOverscanned;
- (bool)_isPerformingSystemSnapshot;
- (bool)_isRightHandDrive;
- (bool)_isRotatable;
- (bool)_isSoftKeyboardLimited;
- (bool)_isUserInterfaceLimited:(unsigned long long)arg1;
- (bool)_isValidInterfaceOrientation:(long long)arg1;
- (bool)_isWorkspaceCapable;
- (float)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_lazySoftwareDimmingWindow;
- (void)_limitedUIDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneFrame;
- (struct CGPoint { double x1; double x2; })_mainSceneOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (double)_maximumSupportedScale;
- (id)_name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nativeDisplayBounds;
- (double)_nativeScale;
- (double)_nativeScaleWithLevel:(unsigned long long)arg1;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overrideReferenceBounds;
- (id)_overrideTraitCollection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_peripheryInsets;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_preferredFocusedWindow;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (double)_rotation;
- (double)_scale;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setArtworkSubtype:(unsigned long long)arg1;
- (void)_setBoundingPathUtilities:(id)arg1;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setCaptured:(bool)arg1;
- (void)_setCarPlayHumanPresenceInRange:(bool)arg1;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(bool)arg2;
- (void)_setExternalDeviceShouldInputText:(bool)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setLastNotifiedBacklightLevel:(float)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainScreen:(bool)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setPerformingSystemSnapshot:(bool)arg1;
- (void)_setScale:(double)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setUIIBAlwaysProvidePeripheryInsets:(bool)arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (bool)_supportsBrightness;
- (bool)_supportsCarPlayHumanPresence;
- (bool)_supportsDeferredFocus;
- (bool)_supportsDragging;
- (double)_touchRadiusScaleFactor;
- (double)_traitCollectionDisplayCornerRadius;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateDisplayConfiguration:(id)arg1;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (bool)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (long long)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)brightness;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)focusedItem;
- (id)focusedView;
- (long long)gamut;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(bool)arg2;
- (bool)isCaptured;
- (long long)maximumFramesPerSecond;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeBounds;
- (double)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overscanCompensationInsets;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (double)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFocusEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setWantsSoftwareDimming:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (bool)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (bool)wantsSoftwareDimming;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cn_mainScreenPeripheryInsets;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)traitCollectionForImageLoader:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_display;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (id)traitCollectionForImageLoader:(id)arg1 image:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)__ck_isFullscreen;
- (unsigned long long)ck_screenSizeCategory;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkBounds;
- (double)_gkScale;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (bool)hk_currentDeviceHas4InchScreen;
+ (bool)hk_currentDeviceHas4Point7InchScreen;
+ (bool)hk_currentDeviceHas5Point8InchScreen;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (bool)hrui_currentDeviceHas5Point8InchScreen;
+ (bool)hrui_currentDeviceHasLargePhoneScreen;
+ (bool)hrui_currentDeviceHasMediumPhoneScreen;
+ (bool)hrui_currentDeviceHasSmallPhoneScreen;

// Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI

- (struct CGSize { double x1; double x2; })pu_workImageSize;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (struct CGSize { double x1; double x2; })is_scaledSize;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

- (bool)supportsScreenshotEditViewController;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (bool)isUserInterfaceIdiomPad;
- (unsigned long long)screenSizeCategory;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_counterTransformForActiveInterfaceOrientation;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForScreenOriginRotation:(double)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nc_bounds;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

+ (bool)vcui_isNarrow;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (bool)tsk_appCanUseSidebar;
+ (double)tsk_appFrameScreenWidthFraction;
+ (bool)tsk_appIsInDarkMode;
+ (bool)tsk_appIsInSplitViewMode;
+ (bool)tsk_deviceCanUseSidebar;
+ (double)tsk_expectedScreenScale;
+ (bool)tsk_is3xScreenScale;
+ (bool)tsk_pad1112H;
+ (bool)tsk_pad1194H;
+ (bool)tsk_pad1366H;
+ (bool)tsk_pad1366HOrLarger;
+ (bool)tsk_phoneUI568H;
+ (bool)tsk_phoneUI568HOrSmaller;
+ (bool)tsk_phoneUI667H;
+ (bool)tsk_phoneUI667HOrSmaller;
+ (bool)tsk_phoneUI736H;
+ (bool)tsk_phoneUI812H;
+ (bool)tsk_phoneUI896H;
+ (void)tsk_resetScreenScaleCache;
+ (double)tsk_screenScale;
+ (void)tsk_setAppIsInDarkMode:(bool)arg1;
+ (bool)tsk_statusBarIsLandscape;

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
