<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTAvatarAttributeEditorSectionColorController.h</title>
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

/PrivateFrameworks/AvatarUI.framework/AVTAvatarAttributeEditorSectionColorController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorSectionColorController : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSectionColorDataSourceDelegate, AVTAvatarAttributeEditorSectionController, AVTAvatarColorSliderContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    UIView * _containerView;
    AVTAvatarAttributeEditorSectionColorDataSource * _dataSource;
    bool  _dontAnimateSelection;
    AVTUIEnvironment * _environment;
    AVTAttributeEditorSectionHeaderView * _headerView;
    bool  _needsScrollToSelected;
    <AVTAvatarAttributeEditorSection> * _section;
    long long  _selectedIndex;
    bool  _showsHeader;
    AVTAvatarColorSliderContainerView * _sliderContainerView;
    AVTAvatarAttributeEditorSectionColorController * _subController;
    UIView * _subControllerView;
    <AVTAvatarAttributeEditorControllerSubSelectionDelegate> * delegate;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) double currentRelativeContentOffsetX;
@property (nonatomic, readonly) AVTAvatarAttributeEditorSectionColorDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dontAnimateSelection;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTAttributeEditorSectionHeaderView *headerView;
@property (nonatomic) bool needsScrollToSelected;
@property (nonatomic, readonly) <AVTAvatarAttributeEditorSection> *section;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) bool showsHeader;
@property (nonatomic, retain) AVTAvatarColorSliderContainerView *sliderContainerView;
@property (nonatomic, retain) AVTAvatarAttributeEditorSectionColorController *subController;
@property (nonatomic, retain) UIView *subControllerView;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })cellSizeFittingWidth:(double)arg1 environment:(id)arg2;
+ (struct CGPoint { double x1; double x2; })clampedContentOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 collectionView:(id)arg2;
+ (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+ (bool)supportsSelection;
+ (bool)updateCollectionViewLayout:(id)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2 environment:(id)arg3 forExtended:(bool)arg4 withSlider:(bool)arg5 subSection:(bool)arg6 subSectionHeight:(double)arg7 numberOfItems:(long long)arg8;

- (void).cxx_destruct;
- (void)animateWithSpringAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionViewLayout;
- (void)colorDataSource:(id)arg1 didChangeDisplayMode:(long long)arg2 previousDisplayMode:(long long)arg3;
- (void)colorDataSource:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)colorDataSource:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)colorSliderDidFinishChangingVariation:(double)arg1 forItem:(id)arg2;
- (void)colorSliderVariationChanged:(double)arg1 forItem:(id)arg2;
- (id)containerView;
- (void)createCollectionView;
- (void)createSliderContainerView;
- (double)currentRelativeContentOffsetX;
- (id)dataSource;
- (id)delegate;
- (void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;
- (void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)dontAnimateSelection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)environment;
- (id)headerView;
- (double)heightForSectionHeaderFittingWidth:(double)arg1;
- (void)hideSliderAnimated:(bool)arg1;
- (unsigned long long)indexForItem:(id)arg1;
- (id)initWithDataSource:(id)arg1 showsHeader:(bool)arg2 environment:(id)arg3;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 showsHeader:(bool)arg2;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviewsForIndex:(long long)arg1;
- (bool)needsScrollToSelected;
- (long long)numberOfItems;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)prefetchingSectionItemForIndex:(long long)arg1;
- (void)prepareSubControllerView;
- (void)reloadData;
- (void)resetToDefaultState;
- (void)scrollCollectionViewToOrigin;
- (void)scrollCollectionViewToSelectedColor;
- (id)section;
- (id)sectionView;
- (long long)selectedIndex;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentRelativeContentOffsetX:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDontAnimateSelection:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setNeedsScrollToSelected:(bool)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectedState:(bool)arg1 animated:(bool)arg2 forCellAtIndexPath:(id)arg3;
- (void)setSliderContainerView:(id)arg1;
- (void)setSubController:(id)arg1;
- (void)setSubControllerView:(id)arg1;
- (void)showSliderAnimated:(bool)arg1;
- (bool)showsHeader;
- (struct CGSize { double x1; double x2; })sizeForItemAtIndex:(long long)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)sliderContainerView;
- (id)subController;
- (id)subControllerView;
- (void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)updateCollectionViewLayoutWithSizeChanged:(bool)arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updateSectionItem:(id)arg1 withVariation:(double)arg2;
- (void)updateWithSection:(id)arg1;
- (id)viewForIndex:(long long)arg1;
- (void)willDisplayViewForIndex:(long long)arg1;

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