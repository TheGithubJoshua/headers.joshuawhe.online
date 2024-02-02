<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXMemoriesUIViewController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXMemoriesUIViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXMemoriesUIViewController : UIViewController <PXActionPerformerDelegate, PXChangeObserver, PXMemoriesUITileSourceDelegate, PXScrollViewControllerObserver, PXSectionedDataSourceManagerObserver, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUIViewControllerZoomTransitionEndPoint, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate> {
    PXSectionedObjectReference * __actionPresentationMemoryReference;
    PXSectionedObjectReference * __activatedMemoryReference;
    PXMemoriesFeedViewControllerHelper * __helper;
    PXSectionedObjectReference * __highlightedMemoryReference;
    PXSectionedLayoutEngine * __layoutEngine;
    UILongPressGestureRecognizer * __longPressRecognizer;
    unsigned long long  __memoriesStyle;
    bool  __performNextTransitionWithoutAnimation;
    <UIViewControllerPreviewing> * __previewingItem;
    PXMemoriesSpec * __spec;
    PXMemoriesSpecManager * __specManager;
    PXUITapGestureRecognizer * __tapRecognizer;
    PXBasicUIViewTileAnimator * __tileAnimator;
    PXMemoriesUITileSource * __tileSource;
    PXTouchingUIGestureRecognizer * __touchRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorMemoryOrigin;
    PXSectionedObjectReference * _anchorMemoryReference;
    PXMemoriesDataSourceManager * _dataSourceManager;
    bool  _embedded;
    unsigned long long  _pageIndex;
    PXUIScrollViewController * _scrollViewController;
    PXTilingController * _tilingController;
    struct { 
        bool layoutEngine; 
        bool layout; 
    }  _updateFlags;
}

@property (setter=_setActionPresentationMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_actionPresentationMemoryReference;
@property (setter=_setActivatedMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_activatedMemoryReference;
@property (nonatomic, readonly) PXMemoriesFeedViewControllerHelper *_helper;
@property (setter=_setHighlightedMemoryReference:, nonatomic, retain) PXSectionedObjectReference *_highlightedMemoryReference;
@property (nonatomic, readonly) PXSectionedLayoutEngine *_layoutEngine;
@property (setter=_setLongPressRecognizer:, nonatomic, retain) UILongPressGestureRecognizer *_longPressRecognizer;
@property (nonatomic, readonly) unsigned long long _memoriesStyle;
@property (setter=_setPerformNextTransitionWithoutAnimation:, nonatomic) bool _performNextTransitionWithoutAnimation;
@property (setter=_setPreviewingItem:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingItem;
@property (setter=_setSpec:, nonatomic, retain) PXMemoriesSpec *_spec;
@property (nonatomic, readonly) PXMemoriesSpecManager *_specManager;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXMemoriesUITileSource *_tileSource;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchRecognizer;
@property (setter=_setAnchorMemoryOrigin:, nonatomic) struct CGPoint { double x1; double x2; } anchorMemoryOrigin;
@property (setter=_setAnchorMemoryReference:, nonatomic, retain) PXSectionedObjectReference *anchorMemoryReference;
@property (nonatomic, readonly) PXMemoriesDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmbedded, nonatomic) bool embedded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, readonly) PXUIScrollViewController *scrollViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) long long userInterfaceFeature;

- (void).cxx_destruct;
- (id)_actionPresentationMemoryReference;
- (id)_activatedMemoryReference;
- (void)_configureLayout:(id)arg1;
- (id)_createNewLayout;
- (void)_handleScrollViewLongPress:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (id)_helper;
- (id)_highlightedMemoryReference;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_indexPathForMemoryAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_indexPathForMemoryInScrollViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_invalidateLayout;
- (id)_layoutEngine;
- (id)_longPressRecognizer;
- (unsigned long long)_memoriesStyle;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })_memoryIndexPathForViewController:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (bool)_needsUpdate;
- (bool)_performNextTransitionWithoutAnimation;
- (id)_photosDetailsContextForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_presentActionsForMemoryReference:(id)arg1;
- (id)_previewingItem;
- (void)_reconfigureTargetLayout;
- (void)_saveAnchor;
- (void)_setActionPresentationMemoryReference:(id)arg1;
- (void)_setActivatedMemoryReference:(id)arg1;
- (void)_setAnchorMemoryOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAnchorMemoryReference:(id)arg1;
- (void)_setHighlightedMemoryReference:(id)arg1;
- (void)_setLongPressRecognizer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setPerformNextTransitionWithoutAnimation:(bool)arg1;
- (void)_setPreviewingItem:(id)arg1;
- (void)_setSpec:(id)arg1;
- (id)_sourceViewForMemoryActionsController;
- (id)_spec;
- (id)_specManager;
- (id)_tapRecognizer;
- (id)_tileAnimator;
- (id)_tileSource;
- (id)_touchRecognizer;
- (void)_updateIfNeeded;
- (void)_updateLayoutEngineIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateLongPressGestureRecognizer;
- (void)_updatePreviewing;
- (void)_updateScrollViewControllerContentInset;
- (bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject { Class x1; }*)arg2;
- (struct CGPoint { double x1; double x2; })anchorMemoryOrigin;
- (id)anchorMemoryReference;
- (id)createNewLayoutGenerator;
- (id)dataSourceManager;
- (void)datasourceManagerDidChange;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1 style:(unsigned long long)arg2;
- (void)invalidateLayoutEngine;
- (bool)isEmbedded;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)pageIndex;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForInteractiveTransition:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)scrollViewController;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)setEmbedded:(bool)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (id)tilingController;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (long long)userInterfaceFeature;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;

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