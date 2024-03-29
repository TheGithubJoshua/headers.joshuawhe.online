<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIGridViewElementPageSectionConfiguration.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIGridViewElementPageSectionConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIGridViewElementPageSectionConfiguration : NSObject {
    long long  _cardVerticalSpacingStyle;
    double  _cellContentWidth;
    SKUIViewElementLayoutContext * _cellLayoutContext;
    double  _cellPaddingInteriorHorizontal;
    double  _cellPaddingLeftEdgeHorizontal;
    bool  _cellPaddingNeedsReloading;
    double  _cellPaddingRightEdgeHorizontal;
    <SKUIGridViewElementPageSectionConfigurationDataSource> * _dataSource;
    struct { 
        unsigned int configurePositionForItemAtIndexPath : 1; 
    }  _dataSourceRespondsToSelectorFlags;
    bool  _gridIsEdgeToEdge;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _gridViewElementStyleElementPadding;
    double  _gridViewElementStyleItemWidth;
    bool  _gridViewElementStyleItemWidthIsPercentage;
    bool  _hasGridViewElementStyle;
    bool  _hasHeader;
    long long  _lockupType;
    double  _minimumCellHeight;
    long long  _numberOfColumns;
    unsigned long long  _numberOfGridItems;
    SKUIStorePageSectionContext * _pageSectionContext;
    NSArray * _positions;
    bool  _rendersWithPerspective;
    UIColor * _separatorColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorMargins;
    long long  _separatorStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _separatorWidths;
    bool  _showsEditMode;
    NSArray * _viewElements;
}

@property (nonatomic, retain) SKUIViewElementLayoutContext *cellLayoutContext;
@property (nonatomic, readonly) double columnContentWidth;
@property (nonatomic, readonly) double columnWidth;
@property (nonatomic) <SKUIGridViewElementPageSectionConfigurationDataSource> *dataSource;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic, retain) SKUIStorePageSectionContext *pageSectionContext;
@property (nonatomic) bool rendersWithPerspective;
@property (nonatomic, readonly) bool showsEditMode;

- (void).cxx_destruct;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (Class)_cardCellClassForCard:(id)arg1;
- (double)_cellContentWidth;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellPaddingInteriorHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_columnContentWidthPaddingForWidth:(double)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (long long)_lockupTypeForLockup:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;
- (void)_reloadCellPaddingIfNeeded;
- (bool)_useOrdinalPadding;
- (id)backgroundColorForViewElement:(id)arg1;
- (Class)cellClassForViewElement:(id)arg1;
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;
- (id)cellLayoutContext;
- (struct CGSize { double x1; double x2; })cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (double)columnContentWidth;
- (double)columnWidth;
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;
- (id)dataSource;
- (Class)lockupCellClassWithLockup:(id)arg1;
- (long long)numberOfColumns;
- (id)pageSectionContext;
- (long long)positionForIndexPath:(id)arg1;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;
- (bool)rendersWithPerspective;
- (void)requestCellLayoutForViewElement:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forGridViewElement:(id)arg2;
- (void)setCellLayoutContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPageSectionContext:(id)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (bool)showsEditMode;
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;
- (bool)viewElementIsStandardCard:(id)arg1;

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
