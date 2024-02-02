<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDocumentPickerDocumentCollectionViewController.h</title>
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

/PrivateFrameworks/CloudDocsUI.framework/_UIDocumentPickerDocumentCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI (113.100.4)
 */

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout, UIViewControllerPreviewingDelegate, _UIDocumentPickerContainedViewController> {
    NSArray * _actions;
    long long  _displayMode;
    bool  _editing;
    _UIDocumentPickerFlowLayout * _gridLayout;
    UIActivityIndicatorView * _initialActivityView;
    _UIDocumentPickerContainerModel * _model;
    NSArray * _modelObjects;
    bool  _monitoring;
    UIView * _pinnedHeaderView;
    <_UIDocumentPickerServiceViewController> * _serviceViewController;
    bool  _shouldHideSortBar;
    _UIDocumentPickerSortOrderView * _sortView;
    _UIDocumentPickerTableLayout * _tableLayout;
    bool  _updatesMayAnimate;
    <UIViewControllerPreviewing> * _viewControllerPreviewContext;
}

@property (nonatomic, retain) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode;
@property (nonatomic, retain) _UIDocumentPickerFlowLayout *gridLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *indexPathsForSelectedItems;
@property (nonatomic, retain) UIActivityIndicatorView *initialActivityView;
@property (nonatomic, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic, copy) NSArray *modelObjects;
@property (nonatomic) bool monitoring;
@property (nonatomic, retain) UIView *pinnedHeaderView;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <_UIDocumentPickerServiceViewController> *serviceViewController;
@property (nonatomic) bool shouldHideSortBar;
@property (nonatomic, retain) _UIDocumentPickerSortOrderView *sortView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsActions;
@property (nonatomic, retain) _UIDocumentPickerTableLayout *tableLayout;
@property (nonatomic) bool updatesMayAnimate;

- (void).cxx_destruct;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2;
- (bool)_smallCells;
- (void)_unlockAnimations;
- (void)_updateIconSpacing;
- (void)_updateRowHeight;
- (id)actionViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)actions;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (long long)displayMode;
- (void)ensureSortViewInvisible;
- (id)gridLayout;
- (id)indexPathsForSelectedItems;
- (id)initWithModel:(id)arg1;
- (id)initialActivityView;
- (id)itemForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)model;
- (void)modelChanged:(id)arg1;
- (id)modelObjects;
- (bool)monitoring;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (id)pinnedHeaderView;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)previewActionItemsForItem:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollSortViewToVisible;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)serviceViewController;
- (void)setActions:(id)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setGridLayout:(id)arg1;
- (void)setIndexPathsForSelectedItems:(id)arg1;
- (void)setInitialActivityView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setPinnedHeaderView:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1 animated:(bool)arg2;
- (void)setServiceViewController:(id)arg1;
- (void)setShouldHideSortBar:(bool)arg1;
- (void)setSortView:(id)arg1;
- (void)setTableLayout:(id)arg1;
- (void)setUpdatesMayAnimate:(bool)arg1;
- (bool)shouldHideSortBar;
- (id)sortView;
- (bool)supportsActions;
- (id)tableLayout;
- (void)updateContentInset;
- (void)updatePinnedHeader;
- (bool)updatesMayAnimate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

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