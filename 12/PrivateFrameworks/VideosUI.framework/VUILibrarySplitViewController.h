<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUILibrarySplitViewController.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUILibrarySplitViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUILibrarySplitViewController : UISplitViewController <VUICategoryMenuViewControllerDelegate, VUIHomeShareViewControllerDelegate, VUILibraryCategoryMenuViewModelDelegate, VUILibraryGridCollectionViewControllerDelegate> {
    VUILibraryAlertView * _alertView;
    VUILibraryCategoryMenuViewModel * _categoryViewModel;
    VUILibraryGridCollectionViewController * _currentGridCollectionViewController;
    VUIMediaLibrary * _currentHomeShareMediaLibrary;
    NSIndexPath * _currentlySelectedIndexPath;
    UINavigationController * _detailNavigationController;
    bool  _hasLoaded;
    <VUILibrarySplitViewControllerDelegate> * _librarySplitViewControllerDelegate;
    UINavigationController * _masterNavigationController;
    VUIMediaLibrary * _mediaLibrary;
    VUICategoryMenuViewController * _menuViewController;
    bool  _shouldShowBackButton;
    NSSet * _validCategories;
}

@property (nonatomic, retain) VUILibraryAlertView *alertView;
@property (nonatomic, retain) VUILibraryCategoryMenuViewModel *categoryViewModel;
@property (nonatomic, retain) VUILibraryGridCollectionViewController *currentGridCollectionViewController;
@property (nonatomic, retain) VUIMediaLibrary *currentHomeShareMediaLibrary;
@property (nonatomic, retain) NSIndexPath *currentlySelectedIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UINavigationController *detailNavigationController;
@property (nonatomic) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic) <VUILibrarySplitViewControllerDelegate> *librarySplitViewControllerDelegate;
@property (nonatomic, retain) UINavigationController *masterNavigationController;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, retain) VUICategoryMenuViewController *menuViewController;
@property (nonatomic) bool shouldShowBackButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *validCategories;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_addRentalsUpdateNotificationObserver;
- (id)_createDetailNavigationViewControllerWithRootViewController:(id)arg1;
- (id)_deviceMediaLibrary;
- (id)_getMediaEntitiesForIndexPath:(id)arg1;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_setDisplayModeForLayoutType:(long long)arg1;
- (void)_showOrHideNoContentView;
- (void)_updateRentals;
- (id)alertView;
- (void)categoryMenuViewController:(id)arg1 didSelectMenuItemAtIndexPath:(id)arg2;
- (void)categoryMenuViewControllerShouldDismiss:(id)arg1;
- (id)categoryViewModel;
- (void)categoryViewModel:(id)arg1 categoriesDidChange:(id)arg2;
- (void)categoryViewModel:(id)arg1 fetchDidCompleteWithCategories:(id)arg2 error:(id)arg3;
- (id)currentGridCollectionViewController;
- (id)currentHomeShareMediaLibrary;
- (id)currentlySelectedIndexPath;
- (void)dealloc;
- (id)detailNavigationController;
- (void)gridCollectionViewController:(id)arg1 didSelectMediaEntity:(id)arg2;
- (bool)hasLoaded;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;
- (id)librarySplitViewControllerDelegate;
- (void)loadView;
- (id)masterNavigationController;
- (id)mediaLibrary;
- (id)menuViewController;
- (void)setAlertView:(id)arg1;
- (void)setCategoryViewModel:(id)arg1;
- (void)setCurrentGridCollectionViewController:(id)arg1;
- (void)setCurrentHomeShareMediaLibrary:(id)arg1;
- (void)setCurrentlySelectedIndexPath:(id)arg1;
- (void)setDetailNavigationController:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLibrarySplitViewControllerDelegate:(id)arg1;
- (void)setMasterNavigationController:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMenuViewController:(id)arg1;
- (void)setPageMetricsForCategory:(id)arg1 onLibraryGridCollectionViewController:(id)arg2;
- (void)setShouldShowBackButton:(bool)arg1;
- (void)setValidCategories:(id)arg1;
- (bool)shouldShowBackButton;
- (id)validCategories;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)vui_ppt_isLoading;

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
