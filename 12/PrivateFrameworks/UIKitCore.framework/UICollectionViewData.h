<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UICollectionViewData.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UICollectionViewData.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UICollectionViewData : NSObject {
    NSMutableArray * _clonedCellAttributes;
    NSMutableArray * _clonedDecorationAttributes;
    NSMutableArray * _clonedSupplementaryAttributes;
    UICollectionView * _collectionView;
    struct { 
        unsigned int contentSizeIsValid : 1; 
        unsigned int itemCountsAreValid : 1; 
        unsigned int layoutIsPreparing : 1; 
        unsigned int layoutIsPrepared : 1; 
        unsigned int layoutLocked : 1; 
    }  _collectionViewDataFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSMutableDictionary * _decorationLayoutAttributes;
    NSMutableIndexSet * _globalIndexesOfItemsAwaitingValidation;
    id * _globalItems;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    long long  _lastResultForNumberOfItemsBeforeSection;
    long long  _lastSectionTestedForNumberOfItemsBeforeSection;
    UICollectionViewLayout * _layout;
    long long  _numItems;
    long long  _numSections;
    NSMapTable * _screenPageMap;
    long long * _sectionItemCounts;
    NSMutableDictionary * _supplementaryLayoutAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _validLayoutRect;
}

@property (nonatomic, readonly) NSArray *clonedCellAttributes;
@property (nonatomic, readonly) NSArray *clonedDecorationAttributes;
@property (nonatomic, readonly) NSArray *clonedSupplementaryAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) bool layoutIsPrepared;
@property (getter=isLayoutLocked, nonatomic) bool layoutLocked;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_loadEverything;
- (void)_prepareToLoadData;
- (id)_screenPageForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2;
- (void)_updateItemCounts;
- (void)_validateContentSize;
- (void)_validateItemCounts;
- (id)clonedCellAttributes;
- (id)clonedDecorationAttributes;
- (id)clonedSupplementaryAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collectionViewContentRect;
- (struct CGSize { double x1; double x2; })contentSize;
- (bool)dataSourceMatchesCurrentCounts;
- (void)dealloc;
- (id)existingSupplementaryLayoutAttributes;
- (id)existingSupplementaryLayoutAttributesInSection:(long long)arg1;
- (long long)globalIndexForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtGlobalIndex:(long long)arg1;
- (id)initWithCollectionView:(id)arg1 layout:(id)arg2;
- (void)invalidate:(bool)arg1;
- (void)invalidateDecorationIndexPaths:(id)arg1;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryIndexPaths:(id)arg1;
- (bool)isGlobalIndexValid:(long long)arg1;
- (bool)isIndexPathValid:(id)arg1;
- (bool)isIndexPathValid:(id)arg1 validateItemCounts:(bool)arg2;
- (bool)isLayoutLocked;
- (id)knownDecorationElementKinds;
- (id)knownSupplementaryElementKinds;
- (id)layoutAttributesForCellsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 validateLayout:(bool)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInSection:(long long)arg1;
- (id)layoutAttributesForGlobalItemIndex:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)layoutIsPrepared;
- (long long)numberOfItems;
- (long long)numberOfItemsBeforeSection:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForGlobalItemIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutLocked:(bool)arg1;
- (void)validateDecorationViews;
- (void)validateLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)validateSupplementaryViews;
- (long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1;
- (id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1;

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