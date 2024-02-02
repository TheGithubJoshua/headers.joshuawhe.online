<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UICollectionViewFlowLayout.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UICollectionViewFlowLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UICollectionViewFlowLayout : UICollectionViewLayout {
    NSMutableDictionary * _cachedItemAttributes;
    NSMutableDictionary * _cachedItemFrames;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSizeAdjustment;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayoutSize;
    _UIFlowLayoutInfo * _data;
    NSMutableDictionary * _deletedItemsAttributesDict;
    NSMutableDictionary * _deletedSectionFootersAttributesDict;
    NSMutableDictionary * _deletedSectionHeadersAttributesDict;
    struct CGSize { 
        double width; 
        double height; 
    }  _estimatedItemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _footerReferenceSize;
    struct { 
        unsigned int delegateSizeForItem : 1; 
        unsigned int delegateReferenceSizeForHeader : 1; 
        unsigned int delegateReferenceSizeForFooter : 1; 
        unsigned int delegateInsetForSection : 1; 
        unsigned int delegateInteritemSpacingForSection : 1; 
        unsigned int delegateLineSpacingForSection : 1; 
        unsigned int delegateAlignmentOptions : 1; 
        unsigned int layoutDataIsValid : 1; 
        unsigned int delegateInfoIsValid : 1; 
        unsigned int roundsToScreenScale : 1; 
        unsigned int delegateSizesForSection : 1; 
        unsigned int sectionHeadersFloat : 1; 
        unsigned int sectionFootersFloat : 1; 
        unsigned int headerFollowsSectionMargins : 1; 
        unsigned int footerFollowsSectionMargins : 1; 
        unsigned int fetchingItemsInfoForRect : 1; 
        unsigned int isInUpdateVisibleCellsPass : 1; 
    }  _gridLayoutFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerReferenceSize;
    NSMutableArray * _indexPathsToValidate;
    NSMutableDictionary * _insertedItemsAttributesDict;
    NSMutableDictionary * _insertedSectionFootersAttributesDict;
    NSMutableDictionary * _insertedSectionHeadersAttributesDict;
    double  _interitemSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    double  _lineSpacing;
    NSDictionary * _rowAlignmentsOptionsDictionary;
    long long  _scrollDirection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    long long  _sectionInsetReference;
    _UIUpdateVisibleCellsContext * _updateVisibleCellsContext;
}

@property (nonatomic) struct CGSize { double x1; double x2; } estimatedItemSize;
@property (getter=_estimatesSizes, nonatomic, readonly) bool estimatesSizes;
@property (nonatomic) struct CGSize { double x1; double x2; } footerReferenceSize;
@property (nonatomic) struct CGSize { double x1; double x2; } headerReferenceSize;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) bool sectionFootersPinToVisibleBounds;
@property (nonatomic) bool sectionHeadersPinToVisibleBounds;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic) long long sectionInsetReference;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedSectionInsetForSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forAxis:(int)arg2;
- (bool)_boundsAndInsetsAreValidForReferenceDimension;
- (void)_calculateAttributesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (struct CGPoint { double x1; double x2; })_contentOffsetForScrollingToSection:(long long)arg1;
- (void)_didPerformUpdateVisibleCellsPass;
- (double)_dimensionFromCollectionView;
- (struct CGSize { double x1; double x2; })_effectiveEstimatedItemSize;
- (bool)_estimatesSizes;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_focusFastScrollingIndexBarInsets;
- (bool)_footerFollowsSectionMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)arg1;
- (bool)_headerFollowsSectionMargins;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (id)_layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetCachedItems;
- (bool)_roundsToScreenScale;
- (id)_rowAlignmentOptions;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setFooterFollowsSectionMargins:(bool)arg1;
- (void)_setHeaderFollowsSectionMargins:(bool)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (void)_setRoundsToScreenScale:(bool)arg1;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (void)_updateCollectionViewScrollableAxis;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_updateDelegateFlags;
- (void)_updateItemsLayoutForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allowsPartialUpdate:(bool)arg2;
- (void)_willPerformUpdateVisibleCellsPass;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (long long)developmentLayoutDirection;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedItemSize;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize { double x1; double x2; })footerReferenceSize;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingData:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)prepareLayout;
- (long long)scrollDirection;
- (bool)sectionFootersPinToVisibleBounds;
- (bool)sectionHeadersPinToVisibleBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (long long)sectionInsetReference;
- (void)setEstimatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFooterReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setMinimumLineSpacing:(double)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSectionFootersPinToVisibleBounds:(bool)arg1;
- (void)setSectionHeadersPinToVisibleBounds:(bool)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionInsetReference:(long long)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct CGSize { double x1; double x2; })synchronizeLayout;

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