<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDetailsPhotosViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKDetailsPhotosViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKDetailsPhotosViewController : CKViewController <CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKFeedCollectionViewLayoutDelegate, CKQLPreviewControllerDelegate, CKSharedAssetsControllerProtocol, QLPreviewControllerDelegate, UICollectionViewDataSource, UICollectionViewDragSource, UIGestureRecognizerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    CKAttachmentCollectionView * _collectionView;
    <CKSharedAssetsControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteButton;
    CKFeedCollectionViewLayout * _feedLayout;
    bool  _initialLoad;
    NSArray * _mediaObjects;
    UIBarButtonItem * _parentRightBarButtonItem;
    CKQLDetailsPreviewController * _qlPreviewController;
    UIBarButtonItem * _saveButton;
    bool  _selectingAttachments;
    NSArray * _visibleMediaObjects;
}

@property (nonatomic, retain) CKAttachmentCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSharedAssetsControllerDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *deleteButton;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKFeedCollectionViewLayout *feedLayout;
@property (readonly) unsigned long long hash;
@property (getter=isInitialLoad, nonatomic) bool initialLoad;
@property (nonatomic, retain) NSArray *mediaObjects;
@property (nonatomic, retain) UIBarButtonItem *parentRightBarButtonItem;
@property (nonatomic, retain) CKQLDetailsPreviewController *qlPreviewController;
@property (nonatomic, retain) UIBarButtonItem *saveButton;
@property (getter=isSelectingAttachments, nonatomic) bool selectingAttachments;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *visibleMediaObjects;

- (void).cxx_destruct;
- (id)_collectionView:(id)arg1 dragItemsForItemAtIndexPath:(id)arg2;
- (void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)_deleteAttachments:(id)arg1;
- (void)_deleteSelectedAttachments:(id)arg1;
- (void)_faultInAttachments;
- (id)_iconForFileURL:(id)arg1 UTIType:(id)arg2;
- (void)_invalidateCaches;
- (void)_prewarmNextChunk;
- (void)_saveAttachments:(id)arg1;
- (void)_saveSelectedAttachments:(id)arg1;
- (void)_updateToolbar;
- (unsigned long long)assetType;
- (void)attachmentCellTapped:(id)arg1;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3;
- (struct CKFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct CKFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; })arg5;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (bool)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (id)committedViewControllerForPreviewViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)deleteButton;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)feedLayout;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithAttachmentItems:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (bool)isDisplayingAttachmentContent;
- (bool)isInitialLoad;
- (bool)isSelectingAttachments;
- (void)loadView;
- (id)mediaObjects;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (unsigned long long)numberOfSectionsInFeedLayout:(id)arg1;
- (id)parentRightBarButtonItem;
- (void)parentScrollViewDidScroll:(struct CGPoint { double x1; double x2; })arg1;
- (void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2;
- (bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)qlPreviewController;
- (void)reloadData;
- (id)saveButton;
- (void)selectAttachments:(id)arg1;
- (id)selectedAttachmentIndexes;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setFeedLayout:(id)arg1;
- (void)setInitialLoad:(bool)arg1;
- (void)setMediaObjects:(id)arg1;
- (void)setParentRightBarButtonItem:(id)arg1;
- (void)setQlPreviewController:(id)arg1;
- (void)setSaveButton:(id)arg1;
- (void)setSelectingAttachments:(bool)arg1;
- (void)setVisibleMediaObjects:(id)arg1;
- (void)updateAttachmentItems:(id)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleMediaObjects;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

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
