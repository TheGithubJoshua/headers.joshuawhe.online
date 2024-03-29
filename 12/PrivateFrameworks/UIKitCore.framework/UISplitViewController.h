<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UISplitViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UISplitViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling> {
    <UISplitViewControllerImpl> * _impl;
}

@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, copy) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) UISlidingBarState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayMode;
@property (nonatomic, readonly) UIBarButtonItem *displayModeButtonItem;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesMasterViewInPortrait;
@property (nonatomic, retain) UIViewController *leadingViewController;
@property (nonatomic, retain) UIViewController *mainViewController;
@property (nonatomic) float masterColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (getter=_prefersOverlayInRegularWidthPhone, setter=_setPrefersOverlayInRegularWidthPhone:, nonatomic) bool prefersOverlayInRegularWidthPhone;
@property (nonatomic) bool presentsWithGesture;
@property (nonatomic, readonly) double primaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic, copy) UISlidingBarStateRequest *stateRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *trailingViewController;
@property (getter=_usesDeviceOverlayPreferences, setter=_setUsesDeviceOverlayPreferences:, nonatomic) bool usesDeviceOverlayPreferences;
@property (getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:, nonatomic) bool usesExtraWidePrimaryColumn;
@property (nonatomic, copy) NSArray *viewControllers;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
+ (bool)_devicePrefersOverlayInRegularWidth;
+ (bool)doesOverridePreferredInterfaceOrientationForPresentation;
+ (bool)doesOverrideSupportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_animateToRequest:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (void)_commonInit;
- (double)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(bool)arg4;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didEndSnapshotSession;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_disableAutomaticKeyboardBehavior;
- (id)_displayModeButtonItemTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_handlesCounterRotationForPresentation;
- (bool)_hasPreferredInterfaceOrientationForPresentation;
- (bool)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (bool)_isCollapsed;
- (bool)_isRotating;
- (bool)_layoutPrimaryOnRight;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (bool)_optsOutOfPopoverControllerHierarchyCheck;
- (id)_panelImpl;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(bool)arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(bool)arg2;
- (bool)_prefersOverlayInRegularWidthPhone;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setPrefersOverlayInRegularWidthPhone:(bool)arg1;
- (void)_setUsesDeviceOverlayPreferences:(bool)arg1;
- (void)_setUsesExtraWidePrimaryColumn:(bool)arg1;
- (bool)_shouldPersistViewWhenCoding;
- (bool)_shouldSynthesizeSupportedOrientations;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)_super_childViewControllersToSendViewWillTransitionToSize;
- (void)_super_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)_super_disableAutomaticKeyboardBehavior;
- (id)_super_preferredFocusEnvironments;
- (id)_super_preferredFocusedView;
- (long long)_super_preferredInterfaceOrientationForPresentation;
- (void)_super_removeChildViewController:(id)arg1;
- (bool)_super_shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { double x1; double x2; })_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)_super_supportedInterfaceOrientations;
- (void)_super_viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateChildContentMargins;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (bool)_usesDeviceOverlayPreferences;
- (bool)_usesExtraWidePrimaryColumn;
- (bool)_usesPanelImpl;
- (void)_willBeginSnapshotSession;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (id)configuration;
- (id)currentState;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (long long)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)gutterWidth;
- (bool)hidesMasterViewInPortrait;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCollapsed;
- (id)leadingViewController;
- (void)loadView;
- (id)mainViewController;
- (float)masterColumnWidth;
- (id)masterViewController;
- (double)maximumPrimaryColumnWidth;
- (double)minimumPrimaryColumnWidth;
- (id)possibleStates;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredDisplayMode;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (long long)preferredInterfaceOrientationForPresentation;
- (double)preferredPrimaryColumnWidthFraction;
- (bool)presentsWithGesture;
- (double)primaryColumnWidth;
- (long long)primaryEdge;
- (void)purgeMemoryForReason:(int)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(bool)arg1;
- (void)setLeadingViewController:(id)arg1;
- (void)setMainViewController:(id)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setMaximumPrimaryColumnWidth:(double)arg1;
- (void)setMinimumPrimaryColumnWidth:(double)arg1;
- (void)setPreferredDisplayMode:(long long)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
- (void)setPresentsWithGesture:(bool)arg1;
- (void)setPrimaryEdge:(long long)arg1;
- (void)setStateRequest:(id)arg1;
- (void)setTrailingViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)stateRequest;
- (unsigned long long)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (id)trailingViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(bool)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI

- (void)togglePrimaryViewVisibilityAnimated:(bool)arg1;
- (bool)ts_isCollapsedOrCollapsing;
- (bool)ts_isCollapsing;
- (void)ts_setGutterWidth:(double)arg1;
- (void)ts_setPrefersOverlayInRegularWidthPhone:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI

- (bool)ts_isCollapsedOrCollapsing;
- (void)ts_setGutterWidth:(double)arg1;
- (void)ts_setPrefersOverlayInRegularWidthPhone:(bool)arg1;

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
