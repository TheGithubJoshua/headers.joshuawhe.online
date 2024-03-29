<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKeyboardCandidateGridCollectionViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKeyboardCandidateGridCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKeyboardCandidateGridCollectionViewController : UIViewController <UICollectionViewDataSource, UIKeyboardCandidateGridLayoutDelegate, UIKeyboardCandidateList> {
    bool  __usesDeemphasizedTextAppearance;
    NSArray * _candidateGroups;
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    int  _candidatesVisualStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <UIKeyboardCandidateGridCollectionViewControllerDelegate> * _delegate;
    NSArray * _filteredCandidates;
    double  _groupBarWidth;
    bool  _hasSecondaryCandidates;
    UIView * _headerView;
    UISelectionFeedbackGenerator * _indexRetargetFeedbackGenerator;
    bool  _layoutExtensionCandidates;
    UIButton * _padInlineFloatingArrowButton;
    double  _rowHeight;
    UIKBCandidateCollectionView * _secondaryCandidatesView;
    bool  _secondaryCandidatesViewIsCurrent;
    bool  _singleLineMode;
    bool  _supportsNumberKeySelection;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic) bool _usesDeemphasizedTextAppearance;
@property (nonatomic, retain) NSArray *candidateGroups;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic, readonly) UIKeyboardCandidateGridCollectionView *collectionView;
@property (nonatomic, readonly) UIKeyboardCandidateGridLayout *collectionViewGridLayout;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCandidateGridCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filteredCandidates;
@property (nonatomic) double groupBarWidth;
@property (nonatomic) bool hasSecondaryCandidates;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) bool layoutExtensionCandidates;
@property (nonatomic, readonly) UIButton *padInlineFloatingArrowButton;
@property (nonatomic) double rowHeight;
@property (nonatomic, retain) UIKBCandidateCollectionView *secondaryCandidatesView;
@property (nonatomic) bool secondaryCandidatesViewIsCurrent;
@property (nonatomic) bool singleLineMode;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsNumberKeySelection;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

- (void).cxx_destruct;
- (bool)_usesDeemphasizedTextAppearance;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateAtIndexPath:(id)arg1;
- (id)candidateGroups;
- (unsigned long long)candidateIndexOffset;
- (id)candidateListDelegate;
- (id)candidateSet;
- (void)candidateViewDidFinishExtending;
- (void)candidateViewWillBeginExtendingWithVisibleCandidates:(id)arg1;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewGridLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (id)delegate;
- (id)filteredCandidates;
- (id)firstCandidateIndexPath;
- (id)firstCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (id)groupAtIndex:(unsigned long long)arg1;
- (double)groupBarWidth;
- (unsigned long long)groupsCount;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)hasCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)hasCandidates;
- (bool)hasSecondaryCandidates;
- (id)headerView;
- (id)indexPathForCandidate:(id)arg1;
- (id)init;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (id)keyboardBehaviors;
- (id)lastCandidateIndexPath;
- (id)lastCandidateIndexPathInGroupAtIndex:(unsigned long long)arg1;
- (void)layout;
- (bool)layoutExtensionCandidates;
- (bool)loadSecondaryCandidatesView;
- (void)loadView;
- (unsigned long long)maxNumberOfProactiveCells;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)padInlineFloatingArrowButton;
- (void)padInlineFloatingExpand;
- (bool)padInlineFloatingIsExpanded;
- (unsigned long long)padInlineHighlightedRowIndex;
- (void)reloadData;
- (void)revealHiddenCandidates;
- (double)rowHeight;
- (unsigned long long)rowIndexForCellAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForGridLayout;
- (void)scrollToBottomWithAnimation:(bool)arg1;
- (void)scrollToTopWithAnimation:(bool)arg1;
- (void)scrollToTopWithAnimation:(bool)arg1 revealHeaderView:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewIndexChanged:(id)arg1;
- (void)scrollViewIndexTouchesBegan:(id)arg1;
- (void)scrollViewIndexTouchesEnded:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)secondaryCandidatesView;
- (bool)secondaryCandidatesViewIsCurrent;
- (id)secureCandidateRenderTraits;
- (id)selectedItemIndexPath;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateGroups:(id)arg1;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupBarWidth:(double)arg1;
- (void)setHasSecondaryCandidates:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLayoutExtensionCandidates:(bool)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSecondaryCandidatesView:(id)arg1;
- (void)setSecondaryCandidatesViewIsCurrent:(bool)arg1;
- (void)setSingleLineMode:(bool)arg1;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (void)set_usesDeemphasizedTextAppearance:(bool)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (void)showNextCandidate;
- (void)showPreviousCandidate;
- (bool)singleLineMode;
- (id)statisticsIdentifier;
- (void)stepOneLine:(bool)arg1;
- (bool)supportsNumberKeySelection;
- (void)updateBackgroundColor;
- (void)updateHeaderView;
- (void)updateIndexTitles;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

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
