<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXTilingController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXTilingController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXTilingController : NSObject <PXTilingLayoutObserver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __activeRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __cachedRect;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __contentInset;
    PXTilingCoordinateSpace * __coordinateSpace;
    PXTilingCoordinateSpaceConverter * __coordinateSpaceConverter;
    void * __coordinateSpaceIdentifier;
    PXTilingChange * __currentChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __dirtyRect;
    NSMutableIndexSet * __dirtyTileIndexes;
    struct CGPoint { 
        double x; 
        double y; 
    }  __layoutDesiredOrigin;
    PXTilingLayout * __layoutWithInitializedVisibleOrigin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __maxPreheatPadding;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __pagedRect;
    NSMutableArray * __preheatRecords;
    struct CGSize { 
        double width; 
        double height; 
    }  __referenceSize;
    PXTilingScrollInfo * __scrollInfo;
    PXTileStatePool * __tileStates;
    struct CGPoint { 
        double x; 
        double y; 
    }  __updatedPreferredVisibleOrigin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __visibleRect;
    unsigned long long  _bufferCount;
    NSArray * _compositionInvalidationContexts;
    PXTilingLayout * _currentLayout;
    <PXTilingDebugDelegate> * _debugDelegate;
    struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; } * _geometryBuffer;
    bool  _hasInitializedLayout;
    bool  _hasScheduledUpdate;
    struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } * _identifierBuffer;
    bool  _isPerformingUpdates;
    struct { 
        bool scrollControllerMetrics; 
        bool pagedRect; 
        bool layoutMetrics; 
        bool layoutPreferredVisibleOrigin; 
        bool layoutPosition; 
        bool layoutVisibleRect; 
        bool layoutPreparation; 
        bool tiles; 
        bool preheating; 
        bool maxPreheatPadding; 
        bool scrollInfo; 
    }  _needsUpdateFlags;
    <PXTilingControllerObserver> * _observer;
    <PXTilingScrollController> * _scrollController;
    <PXTilingControllerScrollDelegate> * _scrollDelegate;
    struct { 
        bool respondsToInitialVisibleOriginForLayout; 
        bool respondsToTargetVisibleOriginForLayoutProposedVisibleOrigin; 
        bool respondsToScrollInfoForLayout; 
    }  _scrollDelegateFlags;
    bool  _shouldAggressivelyEvictTileCaches;
    PXTilingLayout * _targetLayout;
    <PXTileAnimator> * _tileAnimator;
    <PXTileSource> * _tileSource;
    <PXTilingControllerTransitionDelegate> * _transitionDelegate;
    struct { 
        bool respondsToPrepareForChange; 
        bool respondsToTileIdentifierConverterForChange; 
        bool respondsToTransitionAnimationCoordinatorForChange; 
    }  _transitionDelegateFlags;
}

@property (setter=_setActiveRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _activeRect;
@property (setter=_setCachedRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _cachedRect;
@property (setter=_setContentInset:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInset;
@property (nonatomic, readonly) PXTilingCoordinateSpace *_coordinateSpace;
@property (nonatomic, readonly) PXTilingCoordinateSpaceConverter *_coordinateSpaceConverter;
@property (nonatomic, readonly) void*_coordinateSpaceIdentifier;
@property (nonatomic, readonly) PXTilingChange *_currentChange;
@property (setter=_setDirtyRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _dirtyRect;
@property (nonatomic, readonly) NSMutableIndexSet *_dirtyTileIndexes;
@property (setter=_setLayoutDesiredOrigin:, nonatomic) struct CGPoint { double x1; double x2; } _layoutDesiredOrigin;
@property (setter=_setLayoutWithInitializedVisibleOrigin:, nonatomic) PXTilingLayout *_layoutWithInitializedVisibleOrigin;
@property (setter=_setMaxPreheatPadding:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _maxPreheatPadding;
@property (setter=_setPagedRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _pagedRect;
@property (nonatomic, readonly) NSMutableArray *_preheatRecords;
@property (setter=_setReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _referenceSize;
@property (setter=_setScrollInfo:, nonatomic, copy) PXTilingScrollInfo *_scrollInfo;
@property (nonatomic, readonly) PXTileStatePool *_tileStates;
@property (setter=_setUpdatedPreferredVisibleOrigin:, nonatomic) struct CGPoint { double x1; double x2; } _updatedPreferredVisibleOrigin;
@property (setter=_setVisibleRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _visibleRect;
@property (nonatomic, copy) NSArray *compositionInvalidationContexts;
@property (nonatomic, readonly) void*contentCoordinateSpaceIdentifier;
@property (setter=_setCurrentLayout:, nonatomic, retain) PXTilingLayout *currentLayout;
@property (nonatomic) <PXTilingDebugDelegate> *debugDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PXTilingControllerDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutContentBounds;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } layoutOrigin;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } layoutPreferredOrigin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutScrollBounds;
@property (nonatomic) <PXTilingControllerObserver> *observer;
@property (nonatomic) <PXTilingScrollController> *scrollController;
@property (nonatomic) <PXTilingControllerScrollDelegate> *scrollDelegate;
@property (nonatomic, readonly) PXTilingScrollInfo *scrollInfo;
@property (nonatomic) bool shouldAggressivelyEvictTileCaches;
@property (readonly) Class superclass;
@property (setter=_setTargetLayout:, nonatomic, retain) PXTilingLayout *targetLayout;
@property (nonatomic) <PXTileAnimator> *tileAnimator;
@property (nonatomic) <PXTileSource> *tileSource;
@property (nonatomic) <PXTilingControllerTransitionDelegate> *transitionDelegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_activeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cachedRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (id)_coordinateSpace;
- (id)_coordinateSpaceConverter;
- (void*)_coordinateSpaceIdentifier;
- (id)_currentChange;
- (id)_currentChangeIfExists;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dirtyRect;
- (id)_dirtyTileIndexes;
- (void)_discardCurrentChange;
- (void)_ensureCurrentChange;
- (void)_fillBuffersWithTileStatesAtIndexes:(id)arg1;
- (void)_handleTileAnimationCompletionWithIndex:(unsigned long long)arg1;
- (id)_indexesOfVisibleTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2;
- (void)_invalidateAllCachedRects;
- (void)_invalidateCachesOutsideRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateLayoutMetrics;
- (void)_invalidateLayoutPosition;
- (void)_invalidateLayoutPreferredVisibleOrigin;
- (void)_invalidateLayoutPreparation;
- (void)_invalidateLayoutVisibleRect;
- (void)_invalidateMaxPreheatPadding;
- (void)_invalidatePagedRect;
- (void)_invalidatePreheating;
- (void)_invalidateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_invalidateScrollControllerMetrics;
- (void)_invalidateScrollInfo;
- (void)_invalidateTiles;
- (struct CGPoint { double x1; double x2; })_layoutDesiredOrigin;
- (id)_layoutWithInitializedVisibleOrigin;
- (void)_markRectAsCached:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_maxPreheatPadding;
- (bool)_needsUpdate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pagedRect;
- (id)_preheatRecordForPreheatHandler:(id)arg1 context:(void*)arg2 createIfNeeded:(bool)arg3;
- (id)_preheatRecords;
- (void)_prepareBufferForCount:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_referenceSize;
- (id)_scrollInfo;
- (void)_setActiveRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCachedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setCurrentLayout:(id)arg1;
- (void)_setDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setLayoutDesiredOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLayoutWithInitializedVisibleOrigin:(id)arg1;
- (void)_setMaxPreheatPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setNeedsUpdate;
- (void)_setPagedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setScrollInfo:(id)arg1;
- (void)_setTargetLayout:(id)arg1;
- (void)_setUpdatedPreferredVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_tileStates;
- (void)_updateDebugDelegateIfNeeded;
- (void)_updateLayoutMetricsIfNeeded;
- (void)_updateLayoutPositionIfNeeded;
- (void)_updateLayoutPreferredVisibleOriginIfNeeded;
- (void)_updateLayoutPreparationIfNeeded;
- (void)_updateLayoutVisibleRectIfNeeded;
- (void)_updateMaxPreheatPaddingIfNeeded;
- (void)_updatePagedRectIfNeeded;
- (void)_updatePreheatingIfNeeded;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_updateScrollInfoIfNeeded;
- (void)_updateTilesIfNeeded;
- (struct CGPoint { double x1; double x2; })_updatedPreferredVisibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRect;
- (void)beginUpdate;
- (id)compositionInvalidationContexts;
- (void*)contentCoordinateSpaceIdentifier;
- (struct CGPoint { double x1; double x2; })convertPointFromLayout:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectFromLayout:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)convertScrollInfoFromLayout:(id)arg1;
- (id)currentLayout;
- (void)dealloc;
- (id)debugDelegate;
- (id)debugInfo;
- (id)debugQuickLookObject;
- (void)endUpdate;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getTile:(out void**)arg1 geometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 group:(out unsigned long long*)arg3 userData:(out id*)arg4 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg5;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })hitTestTileAtPoint:(struct CGPoint { double x1; double x2; })arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 passingTest:(id /* block */)arg3;
- (id)imageTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)invalidateLayoutPreferredVisibleOrigin;
- (void)invalidateScrollControllerMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutContentBounds;
- (struct CGPoint { double x1; double x2; })layoutOrigin;
- (struct CGPoint { double x1; double x2; })layoutPreferredOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutScrollBounds;
- (id)observer;
- (void)registerPreheatHandler:(id)arg1 withPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 tileGroup:(unsigned long long)arg3 context:(void*)arg4;
- (void)requestFocus;
- (id)scrollController;
- (id)scrollDelegate;
- (id)scrollInfo;
- (void)setCompositionInvalidationContexts:(id)arg1;
- (void)setDebugDelegate:(id)arg1;
- (void)setLayoutOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setObserver:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setScrollController:(id)arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setShouldAggressivelyEvictTileCaches:(bool)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setTileSource:(id)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (bool)shouldAggressivelyEvictTileCaches;
- (id)targetLayout;
- (id)tileAnimator;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })tileIdentifierForTile:(void*)arg1;
- (id)tileSource;
- (void)tilingLayout:(id)arg1 invalidatedWithContext:(id)arg2;
- (id)transitionDelegate;
- (void)transitionToLayout:(id)arg1;
- (void)unregisterPreheatHandler:(id)arg1 context:(void*)arg2;
- (void)updateLayout;
- (void)updateMetrics;

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
