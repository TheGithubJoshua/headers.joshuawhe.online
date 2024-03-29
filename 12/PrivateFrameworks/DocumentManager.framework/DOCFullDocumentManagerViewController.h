<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOCFullDocumentManagerViewController.h</title>
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

/PrivateFrameworks/DocumentManager.framework/DOCFullDocumentManagerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager (68.100.44)
 */

@interface DOCFullDocumentManagerViewController : DOCBaseDocumentBrowserViewController <DOCDocumentBrowserDelegate, DOCSourceViewControllerDelegate, UINavigationControllerDelegate, UISearchBarDelegate> {
    DOCSearchBar * _accessorySearchBar;
    NSArray * _additionalToolbarButtonItems;
    UIAlertAction * _createNewFolderAction;
    DOCBrowserViewController * _currentBrowserViewController;
    DOCFullVC_DOCInfoViewController * _currentInfoViewController;
    NSArray * _customActions;
    DOCFlexibleBarButtonItem * _deleteActionBarButton;
    UIBarButtonItem * _deleteAllFromTrashActionBarButton;
    UIBarButtonItem * _deleteFromTrashActionBarButton;
    UIView * _dimmingView;
    DOCFlexibleBarButtonItem * _duplicateActionBarButton;
    <DOCFullDocumentManagerViewControllerDelegate> * _fullDocumentManagerDelegate;
    DOCDocumentManagerNavigationViewController * _internalNavigationController;
    bool  _isDisplayingEmptyCollection;
    bool  _isPreparingParent;
    bool  _isTransitioningToNewLocation;
    DOCFlexibleBarButtonItem * _moveActionBarButton;
    unsigned long long  _numberOfSelectableItemsInCollection;
    unsigned long long  _numberOfSelectedItems;
    DOCBrowserViewController * _previousBrowserViewController;
    DOCPromptView * _promptView;
    UIBarButtonItem * _recoverAllFromTrashActionBarButton;
    UIBarButtonItem * _recoverFromTrashActionBarButton;
    UIViewController * _rootViewController;
    UISearchBar * _searchBar;
    DOCFlexibleBarButtonItem * _shareActionBarButton;
    DOCConcreteLocation * _shownLocation;
    DOCSourceViewController * _sourceViewController;
}

@property (retain) DOCBrowserViewController *currentBrowserViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DOCFullDocumentManagerViewControllerDelegate> *fullDocumentManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) DOCDocumentManagerNavigationViewController *internalNavigationController;
@property (retain) DOCBrowserViewController *previousBrowserViewController;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (retain) UISearchBar *searchBar;
@property (nonatomic, retain) DOCConcreteLocation *shownLocation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canCreateDocumentsFromViewController:(id)arg1;
- (bool)_canPopViewController;
- (void)_clearSearch:(bool)arg1;
- (void)_clearSearch:(bool)arg1 updatePalette:(bool)arg2;
- (void)_commonInit;
- (void)_createDocumentActionFromNavigationBarAction:(id)arg1;
- (id)_createFixedSpace;
- (id)_createFlexibleSpace;
- (id)_defaultTitleTextAttributes;
- (void)_deleteAllItems:(id)arg1;
- (void)_deleteSelectedItems:(id)arg1;
- (void)_dismissPicker;
- (void)_displayInfoControllerForCurrentFolder:(id)arg1;
- (void)_displayInfoControllerWithItem:(id)arg1 inTagMode:(bool)arg2;
- (void)_duplicateSelectedItems:(id)arg1;
- (void)_installKeyCommands;
- (id)_leadingNavigationButtonsForViewController:(id)arg1;
- (void)_loadCurrentBrowserView:(id)arg1;
- (void)_moveSelectedItems:(id)arg1;
- (id)_navigationControllerDimmingColorForParallaxTransition:(id)arg1;
- (bool)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)_recoverAllItems:(id)arg1;
- (void)_recoverSelectedItems:(id)arg1;
- (void)_shareSelectedItems:(id)arg1;
- (bool)_shouldEnableSearchBar;
- (bool)_shouldShowCreateDocumentsOnViewController:(id)arg1;
- (bool)_shouldShowSearchBarInPalette;
- (void)_tapPickerCancelButton;
- (void)_toggleSelectionMode;
- (id)_toolbarButtons;
- (id)_trailingNavigationButtonsForViewController:(id)arg1;
- (void)_trashSelectedItems:(id)arg1;
- (void)_updateAppearance:(id)arg1 onSearchBar:(id)arg2;
- (void)_updateAppearance:(id)arg1 onSearchBar:(id)arg2 previousAppearance:(id)arg3;
- (void)_updateCustomActions;
- (void)_updateOverlayOnViewController:(id)arg1;
- (void)_updateOverlayOnViewController:(id)arg1 animated:(bool)arg2;
- (void)_updatePalette:(bool)arg1;
- (void)_updatePalette:(bool)arg1 withViewController:(id)arg2;
- (void)_updatePopoverOriginsIfNeeded;
- (void)_updateToolbarActionsForViewcontroller:(id)arg1;
- (bool)_wantsCustomSearchbarLayout;
- (void)actionBarButtonTriggered:(id)arg1;
- (id)actionButtonsForSide:(long long)arg1;
- (id)additionalToolbarButtonItems;
- (void)browser:(id)arg1 didResolveShownLocation:(id)arg2 previousLocation:(id)arg3;
- (void)browser:(id)arg1 didSelectItems:(id)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationCanSelect:(bool)arg2;
- (void)browser:(id)arg1 didUpdateCurrentLocationIsWritable:(bool)arg2;
- (void)browser:(id)arg1 didUpdateImportSupportInCurrentLocation:(bool)arg2;
- (void)browser:(id)arg1 didUpdateNumberOfSelectableItems:(unsigned long long)arg2;
- (void)browser:(id)arg1 isDisplayingEmptyCollection:(bool)arg2;
- (void)browser:(id)arg1 wantsToShowInfoForItem:(id)arg2;
- (void)browser:(id)arg1 wantsToShowLocation:(id)arg2 forceReplaceLocation:(bool)arg3;
- (void)browserDidFinishGatheringItemsAndThumbnails:(id)arg1;
- (void)browserWantsToCreateNewFolder:(id)arg1 maxThumbnailSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)canNavigateBack;
- (bool)canPerformAction:(id)arg1;
- (void)changeToLocation:(id)arg1;
- (void)clearCurrentOpenInteraction;
- (void)createNewFolderWithMaxThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (id)createSearchBar;
- (id)currentBrowserViewController;
- (id)currentViewController;
- (void)dealloc;
- (id)deleteActionBarButton;
- (id)deleteAllFromTrashActionBarButton;
- (id)deleteFromTrashActionBarButton;
- (id)deselectAllButton;
- (void)deselectAllTapped:(id)arg1;
- (void)dismissButtonWasTappedInBrowser:(id)arg1;
- (id)duplicateActionBarButton;
- (id)effectiveBrowserViewController;
- (id)fullDocumentManagerDelegate;
- (void)hideDimmingViewIfNeeded;
- (void)hideSearchViewControllerIfNeeded;
- (id)infoAction;
- (id)initWithConfiguration:(id)arg1;
- (id)internalNavigationController;
- (id)locationsButton;
- (void)locationsButtonWasTappedInBrowser:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)moveActionBarButton;
- (id)multipleSelectionAction;
- (void)navigateBack;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)newFolderNameTextFieldDidChange:(id)arg1;
- (void)popToRootViewController;
- (void)prepareParentHierarchyIfNeededWithCompletionBlock:(id /* block */)arg1;
- (id)previousBrowserViewController;
- (id)recoverAllFromTrashActionBarButton;
- (id)recoverFromTrashActionBarButton;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (id)rootViewController;
- (void)safeSetViewControllersHierarchy:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchController;
- (id)selectAllButton;
- (void)selectAllTapped:(id)arg1;
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)setAdditionalToolbarButtonItems:(id)arg1;
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setAllowsDocumentCreation:(bool)arg1;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setCurrentBrowserViewController:(id)arg1;
- (void)setCustomActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFullDocumentManagerDelegate:(id)arg1;
- (void)setPreviousBrowserViewController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setShownLocation:(id)arg1;
- (id)shareAction;
- (id)shareActionBarButton;
- (void)showDimmingViewIfNeeded;
- (void)showLocation:(id)arg1 animated:(bool)arg2 retryingIfNeeded:(bool)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)showLocation:(id)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)showLocationOnTopOfCurrentBrowser:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)showSearchViewControllerIfNeededWithCompletionBlock:(id /* block */)arg1;
- (void)showSources:(id)arg1;
- (void)showSources:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)shownLocation;
- (void)snapshotForParentLocationFrom:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sourceViewController:(id)arg1 didSelectLocation:(id)arg2;
- (id)tagsAction;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updateSearchContextWithSearchBar:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
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
