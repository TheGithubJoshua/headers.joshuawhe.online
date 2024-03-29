<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKUpNextCollectionViewFlowLayout.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKUpNextCollectionViewFlowLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSIndexPath * _bottomElementIndexPath;
    NTKUpNextCollectionViewFlowLayoutAttributes * _decorationLayoutInfo;
    CLKDevice * _device;
    NSSet * _dwellIndexPathes;
    double  _headerAlpha;
    NSDictionary * _headerLayoutInfo;
    double  _highTransitionBottomOffset;
    double  _highTransitionScale;
    double  _highTransitionShift;
    NSIndexPath * _indexPathToSnapTo;
    NSDictionary * _layoutInfo;
    double  _lowTransitionScale;
    double  _lowTransitionShift;
    double  _maximumDarkeningAmount;
    bool  _needsHeaderUpdate;
    bool  _needsInsetsUpdate;
    NSSet * _previousSectionsWithHeaders;
    NSSet * _sectionsWithHeaders;
    bool  _showingAllAttributes;
    bool  _snappingEnabled;
    double  _snappingOffset;
    double  _statusBarDecorationHeight;
    NSIndexPath * _topElementIndexPath;
    double  _topItemsAlpha;
    double  _topItemsShift;
    double  _topOffsetForScrolling;
    double  _topOffsetForSnapping;
    bool  _useFixedLowTransitionLayout;
}

@property (nonatomic, retain) NSIndexPath *bottomElementIndexPath;
@property (nonatomic, readonly) NSSet *dwellIndexPathes;
@property (nonatomic) double headerAlpha;
@property (nonatomic) double highTransitionBottomOffset;
@property (nonatomic) double highTransitionScale;
@property (nonatomic) double highTransitionShift;
@property (nonatomic, retain) NSIndexPath *indexPathToSnapTo;
@property (nonatomic) double lowTransitionScale;
@property (nonatomic) double lowTransitionShift;
@property (nonatomic) double maximumDarkeningAmount;
@property (getter=isShowingAllAttributes, nonatomic) bool showingAllAttributes;
@property (getter=isSnappingEnabled, nonatomic) bool snappingEnabled;
@property (nonatomic) double snappingOffset;
@property (nonatomic) double statusBarDecorationHeight;
@property (nonatomic, retain) NSIndexPath *topElementIndexPath;
@property (nonatomic) double topItemsAlpha;
@property (nonatomic) double topItemsShift;
@property (nonatomic) double topOffsetForScrolling;
@property (nonatomic) double topOffsetForSnapping;
@property (nonatomic) bool useFixedLowTransitionLayout;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (bool)_hasHeaderForSection:(long long)arg1;
- (void)_updateContentInsetsIfNeeded;
- (void)_updateSectionHeaderListIfNeeded;
- (void)_updateVisibilityForLayoutAttributes:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)bottomElementIndexPath;
- (id)dwellIndexPathes;
- (void)finalizeCollectionViewUpdates;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)arg1;
- (double)headerAlpha;
- (double)highTransitionBottomOffset;
- (double)highTransitionScale;
- (double)highTransitionShift;
- (id)indexPathToSnapTo;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingAllAttributes;
- (bool)isSnappingEnabled;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)lowTransitionScale;
- (double)lowTransitionShift;
- (double)maximumDarkeningAmount;
- (void)prepareLayout;
- (void)setBottomElementIndexPath:(id)arg1;
- (void)setHeaderAlpha:(double)arg1;
- (void)setHighTransitionBottomOffset:(double)arg1;
- (void)setHighTransitionScale:(double)arg1;
- (void)setHighTransitionShift:(double)arg1;
- (void)setIndexPathToSnapTo:(id)arg1;
- (void)setLowTransitionScale:(double)arg1;
- (void)setLowTransitionShift:(double)arg1;
- (void)setMaximumDarkeningAmount:(double)arg1;
- (void)setShowingAllAttributes:(bool)arg1;
- (void)setSnappingEnabled:(bool)arg1;
- (void)setSnappingOffset:(double)arg1;
- (void)setStatusBarDecorationHeight:(double)arg1;
- (void)setTopElementIndexPath:(id)arg1;
- (void)setTopItemsAlpha:(double)arg1;
- (void)setTopItemsShift:(double)arg1;
- (void)setTopOffsetForScrolling:(double)arg1;
- (void)setTopOffsetForSnapping:(double)arg1;
- (void)setUseFixedLowTransitionLayout:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)snappingOffset;
- (double)statusBarDecorationHeight;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)topElementIndexPath;
- (double)topItemsAlpha;
- (double)topItemsShift;
- (double)topOffsetForScrolling;
- (double)topOffsetForSnapping;
- (bool)useFixedLowTransitionLayout;

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
