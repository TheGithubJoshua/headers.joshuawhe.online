<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKCGalleryCell.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKCGalleryCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    _NTKCAddNewFace * _addNewFace;
    NTKCGalleryCollection * _collection;
    UICollectionView * _collectionView;
    UIStackView * _collectionViewFooterStack;
    NSLayoutConstraint * _cvHeightConstraint;
    <NTKCGalleryCellDelegate> * _delegate;
    NSLayoutConstraint * _faceContainerTopConstraint;
    UILabel * _footer;
    bool  _hasCalloutImage;
    bool  _hasCalloutName;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    UICollectionViewFlowLayout * _layout;
    NSLayoutConstraint * _leadingInsetConstraint;
    long long  _selectedIndex;
    UILabel * _title;
    NSLayoutConstraint * _titleBaselineConstraint;
    UIStackView * _titleStack;
}

@property (nonatomic, retain) _NTKCAddNewFace *addNewFace;
@property (nonatomic, retain) NTKCGalleryCollection *collection;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIStackView *collectionViewFooterStack;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, retain) NSLayoutConstraint *cvHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCGalleryCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSLayoutConstraint *faceContainerTopConstraint;
@property (nonatomic, retain) UILabel *footer;
@property (nonatomic) bool hasCalloutImage;
@property (nonatomic) bool hasCalloutName;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, retain) UICollectionViewFlowLayout *layout;
@property (nonatomic, retain) NSLayoutConstraint *leadingInsetConstraint;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *title;
@property (nonatomic, retain) NSLayoutConstraint *titleBaselineConstraint;
@property (nonatomic, retain) UIStackView *titleStack;

+ (id)reuseIdentifier;
+ (double)rowHeightForCollection:(id)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentInsetPoint;
- (void)_fontSizeDidChange;
- (bool)_shouldShowAddNewFace;
- (id)addNewFace;
- (void)calculateHeightForCollection;
- (id)collection;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewFooterStack;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)cvHeightConstraint;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)ensureCorrectTitleViewOrientation;
- (id)faceContainerTopConstraint;
- (id)faceForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)footer;
- (bool)hasCalloutImage;
- (bool)hasCalloutName;
- (bool)hasFooterText;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layout;
- (void)layoutSubviews;
- (id)leadingInsetConstraint;
- (id)previewViewAndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forFace:(id)arg2;
- (long long)selectedIndex;
- (void)setAddNewFace:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewFooterStack:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCvHeightConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceContainerTopConstraint:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setHasCalloutImage:(bool)arg1;
- (void)setHasCalloutName:(bool)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayout:(id)arg1;
- (void)setLeadingInsetConstraint:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBaselineConstraint:(id)arg1;
- (void)setTitleStack:(id)arg1;
- (bool)shouldShowFooterTextInCollectionView;
- (void)showFooterTextIfNeeded;
- (id)title;
- (id)titleBaselineConstraint;
- (id)titleStack;
- (void)updateFaceAtIndex:(unsigned long long)arg1;

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