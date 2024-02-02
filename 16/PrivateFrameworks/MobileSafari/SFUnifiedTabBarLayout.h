//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableIndexSet, SFUnifiedBarItem, SFUnifiedBarMetrics, SFUnifiedTabBarItemArrangement, UIScrollView;

__attribute__((visibility("hidden")))
@interface SFUnifiedTabBarLayout : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    _Bool _flipped;	// 16 = 0x10
    struct CGRect _visibleRectOverride;	// 24 = 0x18
    struct CGSize _lastLayoutSize;	// 56 = 0x38
    struct CGPoint _lastLayoutMidpoint;	// 72 = 0x48
    struct CGPoint _lastLayoutContentOffset;	// 88 = 0x58
    double _activeItemWidth;	// 104 = 0x68
    double _itemWidth;	// 112 = 0x70
    double _squishedActiveItemWidth;	// 120 = 0x78
    double _leadingItemOffset;	// 128 = 0x80
    double _pinnedItemsWidth;	// 136 = 0x88
    _Bool _standalone;	// 144 = 0x90
    double _itemSpacing;	// 152 = 0x98
    double _transitioningItemScale;	// 160 = 0xa0
    double _scrollSlowingInset;	// 168 = 0xa8
    NSMutableIndexSet *_visibleItemIndexes;	// 176 = 0xb0
    NSMutableIndexSet *_occludedItemIndexes;	// 184 = 0xb8
    _Bool _expandedItemIsCentered;	// 192 = 0xc0
    double _offsetForCenteringExpandedItem;	// 200 = 0xc8
    double _activeItemWidthWhenNotExpanded;	// 208 = 0xd0
    _Bool _contentIsCentered;	// 216 = 0xd8
    SFUnifiedTabBarItemArrangement *_itemArrangement;	// 224 = 0xe0
    SFUnifiedBarMetrics *_barMetrics;	// 232 = 0xe8
    unsigned long long _sizeClass;	// 240 = 0xf0
    SFUnifiedBarItem *_hoveringItem;	// 248 = 0xf8
    struct CGPoint _midpointForCenteredContent;	// 256 = 0x100
    struct CGSize _contentSize;	// 272 = 0x110
}

+ (double)_minimumActiveItemWidthForSizeClass:(unsigned long long)arg1;	// IMP=0x0060000000050097
+ (double)minimumInactiveItemWidthForSizeClass:(unsigned long long)arg1;	// IMP=0x006000000004ff84
+ (unsigned long long)pinnedItemLimitForItemArrangement:(id)arg1 tabBarWidth:(double)arg2 sizeClass:(unsigned long long)arg3;	// IMP=0x006000000004f3a5
- (void).cxx_destruct;	// IMP=0x0000000000050659
@property(retain, nonatomic) SFUnifiedBarItem *hoveringItem; // @synthesize hoveringItem=_hoveringItem;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) _Bool contentIsCentered; // @synthesize contentIsCentered=_contentIsCentered;
@property(nonatomic) struct CGPoint midpointForCenteredContent; // @synthesize midpointForCenteredContent=_midpointForCenteredContent;
@property(nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(retain, nonatomic) SFUnifiedBarMetrics *barMetrics; // @synthesize barMetrics=_barMetrics;
@property(readonly, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement; // @synthesize itemArrangement=_itemArrangement;
- (struct CGPoint)_midpointForCenteredContentInScrollView;	// IMP=0x000000000005051b
- (double)_maximumActiveItemWidthForCenteringExpandedItem;	// IMP=0x00000000000504d6
@property(readonly, nonatomic) _Bool horizontalSpaceIsExtremelyConstrained;
@property(readonly, nonatomic) _Bool centersActiveItemWhenExpanded;
- (double)_insetToRevealNextItem;	// IMP=0x000000000005039c
- (double)_minimumHorizontalOffsetForOccludedItems;	// IMP=0x0000000000050358
- (double)_maximumItemSpacing;	// IMP=0x000000000005033f
- (double)_minimumItemSpacing;	// IMP=0x0000000000050326
- (double)_effectiveMinimumActiveItemWidth;	// IMP=0x0000000000050289
@property(readonly, nonatomic) double maximumActiveItemWidth;
- (double)_minimumActiveItemWidthRatio;	// IMP=0x000000000005017f
- (double)_minimumActiveItemWidth;	// IMP=0x000000000005006c
- (double)_minimumInactiveItemWidth;	// IMP=0x000000000004ff59
- (struct UIEdgeInsets)_insetsForActiveItemPinnableArea;	// IMP=0x000000000004fdbd
- (struct CGRect)_contentArea;	// IMP=0x000000000004fd9c
- (struct CGRect)_activeItemPinnableArea;	// IMP=0x000000000004fd19
- (struct CGRect)_unpinnedItemSafeArea;	// IMP=0x000000000004fc9b
@property(readonly, nonatomic) struct CGRect _safeArea;
- (id)itemsVisibleInRect:(struct CGRect)arg1;	// IMP=0x000000000004fa94
- (id)indexesOfItemsVisibleInRect:(struct CGRect)arg1;	// IMP=0x000000000004f7aa
- (void)setItemAtIndex:(unsigned long long)arg1 isOccluded:(_Bool)arg2;	// IMP=0x000000000004f781
- (void)setItemAtIndex:(unsigned long long)arg1 isVisible:(_Bool)arg2;	// IMP=0x000000000004f758
@property(readonly, nonatomic) NSArray *visibleItems;
@property(readonly, nonatomic) NSIndexSet *visibleItemIndexes;
- (_Bool)_itemAtIndexIsPinned:(unsigned long long)arg1;	// IMP=0x000000000004f657
- (_Bool)_activeItemIsPinned;	// IMP=0x000000000004f5e2
@property(readonly, nonatomic) struct UIEdgeInsets autoScrollTouchInsets;
@property(readonly, nonatomic) struct CGRect pinnedItemDropArea;
@property(readonly, nonatomic) double pinnedItemsSeparatorOpacity;
@property(readonly, nonatomic) struct CGRect pinnedItemsSeparatorFrame;
@property(readonly, nonatomic) _Bool isCurrentlyScrollable;
- (struct UIEdgeInsets)_insetsForScrollingToItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004ea7e
- (struct CGPoint)_contentOffsetForScrollingToRegionWithMinX:(double)arg1 maxX:(double)arg2 insets:(struct UIEdgeInsets)arg3;	// IMP=0x000000000004e96b
- (struct CGPoint)contentOffsetForScrollingToDroppingItems;	// IMP=0x000000000004e751
- (struct CGPoint)contentOffsetForScrollingToItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004e60b
- (id)itemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000004e427
- (unsigned long long)_indexOfItemClosestToPoint:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e120
- (id)itemClosestToPoint:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e099
- (struct CGRect)frameForPreviewingItem:(id)arg1 pinned:(_Bool)arg2;	// IMP=0x000000000004df03
- (struct CGRect)frameForItem:(id)arg1;	// IMP=0x000000000004dd95
@property(readonly, nonatomic) unsigned long long maximumNumberOfVisibleItems;
@property(readonly, nonatomic) unsigned long long indexOfCenterItem;
- (double)_zPositionForItem:(id)arg1;	// IMP=0x000000000004dbea
- (double)_spacingBeforeItem:(id)arg1;	// IMP=0x000000000004da71
- (double)_spacingAfterItem:(id)arg1;	// IMP=0x000000000004d957
- (double)_widthForItem:(id)arg1;	// IMP=0x000000000004d875
- (double)_offsetForItemAtIndex:(unsigned long long)arg1 inItems:(id)arg2;	// IMP=0x000000000004d708
- (double)_offsetForPinnedItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004d69d
- (double)_offsetForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004d57e
- (CDStruct_c9ef18f1)_scrollSlowingLayoutInfoForItemAtIndex:(unsigned long long)arg1 withLayoutInfo:(CDStruct_c9ef18f1)arg2 activeItemFrame:(struct CGRect)arg3;	// IMP=0x000000000004cee8
- (struct CGRect)_slideFrame:(struct CGRect)arg1 forItemAtIndex:(unsigned long long)arg2 pinnedActiveItemOffset:(double)arg3;	// IMP=0x000000000004ce4f
- (double)_distanceToEdgeForItemAtIndex:(unsigned long long)arg1 withFrame:(struct CGRect)arg2 activeItemFrame:(struct CGRect)arg3 occludedEdge:(unsigned long long *)arg4;	// IMP=0x000000000004c8b8
- (struct CGRect)_adjustedActiveItemFrame:(struct CGRect)arg1 pinActiveItem:(_Bool)arg2 squishActiveItem:(_Bool)arg3 centerExpandedItem:(_Bool)arg4;	// IMP=0x000000000004c67c
- (double)_pinnedActiveItemOffsetSquishingActiveItem:(_Bool)arg1 activeItemFrame:(struct CGRect *)arg2;	// IMP=0x000000000004c536
- (struct CGRect)_frameForItem:(id)arg1 withOffset:(double)arg2 pinActiveItem:(_Bool)arg3 squishActiveItem:(_Bool)arg4 centerExpandedItem:(_Bool)arg5;	// IMP=0x000000000004c420
- (struct CGRect)_unpinnedFrameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004c34d
- (void)_enumerateFramesForItemsAtIndexes:(id)arg1 pinActiveItem:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004be00
- (void)enumerateFinalLayoutForDisappearingItemsAtIndexes:(id)arg1 withDistanceScrolled:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ba0f
- (void)enumerateInitialLayoutForAppearingItemsAtIndexes:(id)arg1 withDistanceToScroll:(double)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b4c8
- (void)enumerateLayoutForItemsAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004afc4
- (void)_determineOffsetForCenteringExpandedItem;	// IMP=0x000000000004ae6e
- (void)_updateSquishedActiveItemWidth;	// IMP=0x000000000004ad9f
- (void)_updateContentSize;	// IMP=0x000000000004aac9
- (void)_updateItemWidths;	// IMP=0x000000000004a43e
- (void)updateItemSizes;	// IMP=0x000000000004a403
- (void)updateItemSizesIfNeeded;	// IMP=0x000000000004a2a7
@property(readonly, nonatomic) _Bool activeItemIsSquished;
- (id)initWithItemArrangement:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000004a061

@end
