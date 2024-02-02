<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VideosExtrasRootViewController.h</title>
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

/PrivateFrameworks/VideosUI.framework/VideosExtrasRootViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VideosExtrasRootViewController : UIViewController <IKAppContextDelegate, IKAppDeviceConfig, IKApplication, MPVideoOverlayDelegate, UICollectionViewDelegate, UINavigationControllerDelegate> {
    IKAppContext * _applicationContext;
    VideosExtrasArtworkDataSource * _artworkDataSource;
    UIButton * _backButton;
    NSLayoutConstraint * _bottomConstraint;
    VideosExtrasContext * _context;
    <VideosExtrasRootViewControllerDelegate> * _delegate;
    bool  _didAttemptRestartAfterAppContextFailure;
    UIView * _extrasMenuBarView;
    UIStackView * _extrasMenuButtonsStackView;
    NSLayoutConstraint * _extrasScrollViewLeadingConstraint;
    VideosExtrasFeatureContainerViewController * _featureContainer;
    NSObject<OS_dispatch_queue> * _imageRequestQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialPresentationSize;
    NSArray * _lastSelectedSnapshotViewControllers;
    <IKAppDataStoring> * _localStorage;
    VideosExtrasMainTemplateViewController * _mainTemplateViewController;
    VideosExtrasNavigationController * _navigationController;
    bool  _showsBuiltInNavigationControls;
    bool  _showsMenuBar;
    <IKAppUserDefaultsStoring> * _userDefaultsStorage;
    <IKAppDataStoring> * _vendorStorage;
}

@property (nonatomic, retain) IKAppContext *applicationContext;
@property (nonatomic, retain) VideosExtrasArtworkDataSource *artworkDataSource;
@property (nonatomic, retain) UIButton *backButton;
@property (nonatomic, readonly) VideosExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasRootViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *extrasMenuBarView;
@property (nonatomic, retain) UIStackView *extrasMenuButtonsStackView;
@property (nonatomic, retain) NSLayoutConstraint *extrasScrollViewLeadingConstraint;
@property (nonatomic, retain) VideosExtrasFeatureContainerViewController *featureContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } initialPresentationSize;
@property (nonatomic, retain) NSArray *lastSelectedSnapshotViewControllers;
@property (nonatomic, retain) <IKAppDataStoring> *localStorage;
@property (nonatomic, readonly) UIView *mainMenuBar;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic, retain) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, copy) UITraitCollection *overrideTraitCollection;
@property (nonatomic) bool showsBuiltInNavigationControls;
@property (nonatomic) bool showsMenuBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) <IKAppUserDefaultsStoring> *userDefaultsStorage;
@property (nonatomic, retain) <IKAppDataStoring> *vendorStorage;

+ (id)currentController;

- (void).cxx_destruct;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_areExtrasVisible;
- (void)_attemptRestart;
- (void)_backButtonPressed:(id)arg1;
- (id)_createDataStorageForIdentifier:(id)arg1;
- (id)_extrasMenuBarViewForElements:(id)arg1;
- (void)_extrasMenuItemSelected:(id)arg1;
- (void)_playbackWillEndNotification:(id)arg1;
- (bool)_setMainDocumentWithViewController:(id)arg1;
- (void)_setNavigationController:(id)arg1;
- (void)_setUpForApplication;
- (void)_showExtrasBar:(bool)arg1;
- (void)_stopOldContextIfNeeded;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (id)appIdentifier;
- (bool)appIsTrusted;
- (id)appJSURL;
- (id)appLaunchParams;
- (bool)appUsesDefaultStyleSheets;
- (id)applicationContext;
- (id)artworkDataSource;
- (id)backButton;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)detectMainDocument:(id)arg1;
- (id)deviceConfigForContext:(id)arg1;
- (id)extrasMenuBarView;
- (id)extrasMenuButtonsStackView;
- (id)extrasScrollViewLeadingConstraint;
- (id)featureContainer;
- (id)initWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })initialPresentationSize;
- (bool)isTimeZoneSet;
- (id)lastSelectedSnapshotViewControllers;
- (id)localStorage;
- (id)mainMenuBar;
- (id)mainMenuItemElements;
- (id)mainTemplateViewController;
- (id)navigationController;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerForContext:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)popToFeatureOrMain;
- (unsigned long long)preferredVideoFormat;
- (unsigned long long)preferredVideoPreviewFormat;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setApplicationContext:(id)arg1;
- (void)setArtworkDataSource:(id)arg1;
- (void)setBackButton:(id)arg1;
- (void)setClearsStackOnNextPush;
- (void)setDelegate:(id)arg1;
- (void)setExtrasMenuBarView:(id)arg1;
- (void)setExtrasMenuButtonsStackView:(id)arg1;
- (void)setExtrasScrollViewLeadingConstraint:(id)arg1;
- (void)setFeatureContainer:(id)arg1;
- (void)setInitialPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLastSelectedSnapshotViewControllers:(id)arg1;
- (void)setLocalStorage:(id)arg1;
- (void)setMainTemplateViewController:(id)arg1;
- (void)setShowsBuiltInNavigationControls:(bool)arg1;
- (void)setShowsMenuBar:(bool)arg1;
- (void)setUserDefaultsStorage:(id)arg1;
- (void)setVendorStorage:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldExtrasBeVisibleForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldIgnoreJSValidation;
- (void)showExtrasMenuBarInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)showsBuiltInNavigationControls;
- (bool)showsMenuBar;
- (void)start;
- (id)storeFrontCountryCode;
- (unsigned long long)supportedInterfaceOrientations;
- (id)systemLanguage;
- (id)timeZone;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)arg1 deselectedIndex:(unsigned long long)arg2;
- (id)userDefaultsStorage;
- (id)vendorIdentifier;
- (id)vendorStorage;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewElementRegistry;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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