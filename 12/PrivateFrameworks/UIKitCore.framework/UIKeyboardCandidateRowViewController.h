<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKeyboardCandidateRowViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKeyboardCandidateRowViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKeyboardCandidateRowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardCandidateBarLayoutDelegate, UIKeyboardCandidateList> {
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    Class  _cellClass;
    <UIKeyboardCandidateRowViewControllerDelegate> * _delegate;
    bool  _showsHiddenCandidates;
}

@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, retain) Class cellClass;
@property (nonatomic, readonly) UIKBCandidateCollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCandidateRowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsHiddenCandidates;
@property (readonly) Class superclass;

+ (double)suggestedHeightForCellClass:(Class)arg1;

- (void).cxx_destruct;
- (void)_reloadCandidates;
- (void)_showCandidateAtIndex:(unsigned long long)arg1 scrollCellToVisible:(bool)arg2 animated:(bool)arg3;
- (void)_stepSelectedCandidateInDirection:(bool)arg1;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (id)candidateListDelegate;
- (id)candidateSet;
- (id)candidates;
- (void)candidatesDidChange;
- (Class)cellClass;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (id)delegate;
- (bool)hasCandidates;
- (id)initWithCellClass:(Class)arg1;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (id)keyboardBehaviors;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)revealHiddenCandidates;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setCellClass:(Class)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsHiddenCandidates:(bool)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)showsHiddenCandidates;
- (struct CGSize { double x1; double x2; })sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;
- (id)statisticsIdentifier;
- (double)suggestedHeight;

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