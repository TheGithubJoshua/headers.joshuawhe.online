<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleCollectionViewController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleCollectionViewController : UICollectionViewController <PXPeopleCollectionViewCellDelegate, PXPeopleDragAndDropCollectionViewDelegate, PXPeopleDragAndDropCollectionViewDelegateLayout, PXPeoplePreviewActionViewControllerDelegate, PXPeopleSectionedDataSourceChangeObserver, PXPeopleSwipeSelectionManagerDelegate, PXPeopleZoomOverlayTransitionEndPoint, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerTransitioningDelegate> {
    NSDictionary * _contactByPersonLocalIdentifier;
    PXPeopleSectionedDataSource * _dataSource;
    UIBarButtonItem * _debugMenuItem;
    UILongPressGestureRecognizer * _dragRecognizer;
    UIBarButtonItem * _favoriteToolbarItem;
    bool  _ignoreChangeUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    PXPeopleMeViewController * _meViewController;
    UIBarButtonItem * _mergeToolbarItem;
    unsigned long long  _mode;
    bool  _needToCheckProgress;
    bool  _pendingChanges;
    id /* block */  _ppt_cellsLoadedCompletionBlock;
    long long  _ppt_numCellsLeft;
    unsigned long long  _ppt_sampledCountOfEmptyCells;
    unsigned long long  _ppt_sampledCountOfFrames;
    NSMutableDictionary * _ppt_seenPeople;
    bool  _ppt_shouldRunPPTCode;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _ppt_visibleCollectionViewRect;
    bool  _progressFooterAvailable;
    PXPeopleProgressFooterView * _progressFooterView;
    PXPeopleProgressManager * _progressManager;
    UIBarButtonItem * _removeToolbarItem;
    UIBarButtonItem * _selectItem;
    bool  _shouldShowMeHeader;
    bool  _shouldShowProgressFooter;
    NSIndexPath * _sourceDragIndexPath;
    UITapGestureRecognizer * _statusDebugRecognizer;
    PXPeopleSwipeSelectionManager * _swipeSelectionManager;
    NSIndexPath * _targetIndexPath;
    <UIViewControllerAnimatedTransitioning> * _transitionAnimator;
    NSArray * _transitionIndices;
}

@property (nonatomic, retain) NSDictionary *contactByPersonLocalIdentifier;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIBarButtonItem *debugMenuItem;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXPeopleDragAndDropCollectionViewLayout *dragAndDropCollectionViewLayout;
@property (nonatomic, retain) UILongPressGestureRecognizer *dragRecognizer;
@property (nonatomic, retain) UIBarButtonItem *favoriteToolbarItem;
@property (readonly) unsigned long long hash;
@property bool ignoreChangeUpdates;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDragPoint;
@property (nonatomic, retain) PXPeopleMeViewController *meViewController;
@property (nonatomic, retain) UIBarButtonItem *mergeToolbarItem;
@property (nonatomic) unsigned long long mode;
@property bool needToCheckProgress;
@property (nonatomic) bool pendingChanges;
@property (nonatomic, copy) id /* block */ ppt_cellsLoadedCompletionBlock;
@property (nonatomic, readonly) unsigned long long ppt_countOfEmptyCells;
@property (nonatomic) long long ppt_numCellsLeft;
@property (nonatomic) unsigned long long ppt_sampledCountOfEmptyCells;
@property (nonatomic) unsigned long long ppt_sampledCountOfFrames;
@property (nonatomic, readonly) NSDictionary *ppt_scrollingInformation;
@property (nonatomic, retain) NSMutableDictionary *ppt_seenPeople;
@property (nonatomic) bool ppt_shouldRunPPTCode;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } ppt_visibleCollectionViewRect;
@property (getter=isProgressFooterAvailable, nonatomic) bool progressFooterAvailable;
@property (nonatomic, retain) PXPeopleProgressFooterView *progressFooterView;
@property (nonatomic, retain) PXPeopleProgressManager *progressManager;
@property (nonatomic, retain) UIBarButtonItem *removeToolbarItem;
@property (nonatomic, retain) UIBarButtonItem *selectItem;
@property (nonatomic) bool shouldShowMeHeader;
@property (nonatomic) bool shouldShowProgressFooter;
@property (nonatomic, retain) NSIndexPath *sourceDragIndexPath;
@property (nonatomic, retain) UITapGestureRecognizer *statusDebugRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXPeopleSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, retain) NSIndexPath *targetIndexPath;
@property (retain) <UIViewControllerAnimatedTransitioning> *transitionAnimator;
@property (nonatomic, copy) NSArray *transitionIndices;

- (void).cxx_destruct;
- (void)_animateCellAtIndexPathToDefaultState:(id)arg1;
- (void)_applyChangeDetailsArrayOnCollectionView:(id)arg1;
- (id)_bestTargetIndexGivenMergeIndexes:(id)arg1;
- (double)_bottomInsetForSection:(unsigned long long)arg1;
- (id)_changeMemberAtIndex:(id)arg1 toPersonType:(long long)arg2;
- (void)_changeSelectedIndexesToPersonType:(long long)arg1;
- (long long)_changeTypeForIndexPaths:(id)arg1;
- (double)_currentItemSpacing;
- (double)_currentLineSpacing;
- (id)_detailViewControllerAtIndexPath:(id)arg1;
- (bool)_favoritesEmpty;
- (unsigned long long)_fixedColumnCountForIndexPath:(id)arg1;
- (void)_handleToolbarFavoriteAction:(id)arg1;
- (void)_handleToolbarMergeAction:(id)arg1;
- (void)_handleToolbarRemoveAction:(id)arg1;
- (long long)_horizontalSizeClass;
- (bool)_indexPathsContainMixedSections:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForItemAtIndexPath:(id)arg1;
- (id)_originalTargetIndexPathFromDragIndexPath:(id)arg1 targetIndexPath:(id)arg2;
- (void)_performMerge:(bool)arg1 targetPerson:(id)arg2 dragPerson:(id)arg3;
- (id)_personItemAtIndexPath:(id)arg1;
- (void)_presentAllPeopleViewControllerWithCompletion:(id /* block */)arg1;
- (void)_progressChanged:(id)arg1;
- (void)_resetHomeIfNeeded;
- (id)_rightBarItemsForMode:(unsigned long long)arg1;
- (void)_selectAction:(id)arg1;
- (void)_showFavoritingBootstrapForPersonIfApplicable:(id)arg1;
- (void)_startProgressMonitoring;
- (void)_stopProgressMonitoring;
- (id)_toolBarItemsForMode:(unsigned long long)arg1;
- (double)_topInsetForSection:(unsigned long long)arg1;
- (void)_updateMeHeaderVisibilityIfNeeded:(bool)arg1 animated:(bool)arg2;
- (void)_updateToolbarItemsForIndexPaths:(id)arg1;
- (void)_updateVisibleCellsForSelectionMode:(unsigned long long)arg1;
- (long long)_verticalSizeClass;
- (id)_visibleIndexPathForTransitionContextObject:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didBeginMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didCancelMergeWithDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didMergeDragIndexPath:(id)arg2 targetIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidEndDrag:(id)arg1;
- (void)collectionViewDidEndInteractiveMode:(id)arg1;
- (void)collectionViewDidLayout:(id)arg1;
- (void)commonInit;
- (id)contactByPersonLocalIdentifier;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)debugMenuItem;
- (id)dragAndDropCollectionViewLayout;
- (id)dragRecognizer;
- (id)favoriteToolbarItem;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handleReorderingGesture:(id)arg1;
- (bool)ignoreChangeUpdates;
- (id)init;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (bool)isProgressFooterAvailable;
- (struct CGPoint { double x1; double x2; })lastDragPoint;
- (id)meViewController;
- (id)mergeToolbarItem;
- (unsigned long long)mode;
- (bool)needToCheckProgress;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (bool)pendingChanges;
- (void)peopleCollectionViewCellDidToggleFavoriteState:(id)arg1;
- (void)peoplePreviewActionViewController:(id)arg1 wantsToChangePerson:(id)arg2 toType:(long long)arg3;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChanged:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)ppt_bestPersonForBootstrap;
- (id /* block */)ppt_cellsLoadedCompletionBlock;
- (void)ppt_changeIndexPaths:(id)arg1 toType:(long long)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)ppt_countOfEmptyCells;
- (id)ppt_indexPathOfPersonWithMostAssets;
- (id)ppt_indexPathsForPeopleThatCanChangeToType:(long long)arg1;
- (bool)ppt_namePerson:(id)arg1;
- (long long)ppt_numCells;
- (long long)ppt_numCellsLeft;
- (id)ppt_randomPerson;
- (unsigned long long)ppt_sampledCountOfEmptyCells;
- (unsigned long long)ppt_sampledCountOfFrames;
- (id)ppt_scrollingInformation;
- (id)ppt_seenPeople;
- (bool)ppt_shouldRunPPTCode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ppt_visibleCollectionViewRect;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)progressFooterView;
- (id)progressManager;
- (id)removeToolbarItem;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectItem;
- (id)selectionModeTitle;
- (void)setContactByPersonLocalIdentifier:(id)arg1;
- (void)setDebugMenuItem:(id)arg1;
- (void)setDragRecognizer:(id)arg1;
- (void)setFavoriteToolbarItem:(id)arg1;
- (void)setIgnoreChangeUpdates:(bool)arg1;
- (void)setLastDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMeViewController:(id)arg1;
- (void)setMergeToolbarItem:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setNeedToCheckProgress:(bool)arg1;
- (void)setPendingChanges:(bool)arg1;
- (void)setPpt_cellsLoadedCompletionBlock:(id /* block */)arg1;
- (void)setPpt_numCellsLeft:(long long)arg1;
- (void)setPpt_sampledCountOfEmptyCells:(unsigned long long)arg1;
- (void)setPpt_sampledCountOfFrames:(unsigned long long)arg1;
- (void)setPpt_seenPeople:(id)arg1;
- (void)setPpt_shouldRunPPTCode:(bool)arg1;
- (void)setPpt_visibleCollectionViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgressFooterAvailable:(bool)arg1;
- (void)setProgressFooterView:(id)arg1;
- (void)setProgressManager:(id)arg1;
- (void)setRemoveToolbarItem:(id)arg1;
- (void)setSelectItem:(id)arg1;
- (void)setShouldShowMeHeader:(bool)arg1;
- (void)setShouldShowProgressFooter:(bool)arg1;
- (void)setSourceDragIndexPath:(id)arg1;
- (void)setStatusDebugRecognizer:(id)arg1;
- (void)setSwipeSelectionManager:(id)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (void)setTransitionAnimator:(id)arg1;
- (void)setTransitionIndices:(id)arg1;
- (bool)shouldPerformZoomingTransitionWithAnimator:(id)arg1;
- (bool)shouldShowMeHeader;
- (bool)shouldShowProgressFooter;
- (void)showDetailsForMemberAtIndexPath:(id)arg1;
- (id)snapshotRectsInScreenCoordinatesWithAnimator:(id)arg1;
- (id)snapshotViewsForZoomingTransitionWithAnimator:(id)arg1;
- (id)sourceDragIndexPath;
- (id)statusDebugRecognizer;
- (void)statusDebugRecognizerTapped:(id)arg1;
- (id)swipeSelectionManager;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPath;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionAnimator;
- (id)transitionIndices;
- (void)updateNavTitleForIndexes:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)zoomOverlayTransitionDidBeginAnimationWithAnimator:(id)arg1;
- (void)zoomOverlayTransitionDidEndAnimationWithAnimator:(id)arg1;
- (void)zoomOverlayTransitionWillEndAnimationWithAnimator:(id)arg1;

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
