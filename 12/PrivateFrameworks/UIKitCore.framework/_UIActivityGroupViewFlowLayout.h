<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIActivityGroupViewFlowLayout.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIActivityGroupViewFlowLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _draggingOffset;
    _UIActivityGroupActivityCell * _draggingView;
    UILongPressGestureRecognizer * _editingGestureRecognizer;
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedContentSize;
    double  _evaluatedHorizontalItemOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _evaluatedInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedItemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _externalSafeInset;
    NSIndexPath * _indexPathForDraggedItem;
    NSArray * _preparedLayoutAttributes;
    NSArray * _preparedUpdateItems;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } draggingOffset;
@property (nonatomic, retain) _UIActivityGroupActivityCell *draggingView;
@property (nonatomic, retain) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } evaluatedInset;
@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedItemSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } externalSafeInset;
@property (nonatomic, copy) NSIndexPath *indexPathForDraggedItem;
@property (nonatomic, copy) NSArray *preparedLayoutAttributes;
@property (nonatomic, copy) NSArray *preparedUpdateItems;

- (void).cxx_destruct;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x1; double x2; })arg1 inset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 offscreenPeekInFactor:(float)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct UIOffset { double x1; double x2; })draggingOffset;
- (id)draggingView;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (id)editingGestureRecognizer;
- (struct CGSize { double x1; double x2; })evaluatedContentSize;
- (double)evaluatedHorizontalItemOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })evaluatedInset;
- (struct CGSize { double x1; double x2; })evaluatedItemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })externalSafeInset;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)handleEditingGesture:(id)arg1;
- (id)indexPathForDraggedItem;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(bool)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)preparedLayoutAttributes;
- (id)preparedUpdateItems;
- (void)setDraggingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setDraggingView:(id)arg1;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)setEvaluatedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEvaluatedHorizontalItemOffset:(double)arg1;
- (void)setEvaluatedInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEvaluatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExternalSafeInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndexPathForDraggedItem:(id)arg1;
- (void)setPreparedLayoutAttributes:(id)arg1;
- (void)setPreparedUpdateItems:(id)arg1;
- (bool)shouldCancelDraggingForGesture:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldReverseLayoutDirection;
- (void)updateDraggingViewForGesture:(id)arg1;

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
