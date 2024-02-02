<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MusicVerticalScrollingContainerViewController.h</title>
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

/PrivateFrameworks/FuseUI.framework/MusicVerticalScrollingContainerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI (1)
 */

@interface MusicVerticalScrollingContainerViewController : UIViewController <MusicClientContextConsuming, MusicVerticalScrollingContainerCollectionViewCellDelegate, MusicVerticalScrollingContainerCollectionViewDelegate, MusicVerticalScrollingContainerItemContextDelegate, SKUIProxyScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    MusicClientContext * _clientContext;
    MusicVerticalScrollingContainerCollectionView * _containerCollectionView;
    bool  _contentOffsetHasAdjustedForTuck;
    <MusicVerticalScrollingContainerViewControllerDelegate> * _delegate;
    struct { 
        unsigned int contentOffsetProxyingPolicyForItem : 1; 
        unsigned int didLayoutSubviews : 1; 
        unsigned int didScroll : 1; 
        unsigned int contentSizeDidChange : 1; 
        unsigned int willEndDraggingWithVelocity : 1; 
    }  _delegateRespondsToSelector;
    bool  _isPerformingLayout;
    NSMapTable * _itemToItemContext;
    long long  _keyboardDismissMode;
    unsigned long long  _numberOfRunningAnimatedInvalidations;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdditions;
    bool  _shouldTuckTopVerticalScrollingContainerItem;
    bool  _shouldUpdateLayoutOfVisibleCollectionViewCellsUponCompletingAnimatedInvalidations;
    NSArray * _verticalScrollingContainerItems;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *containerCollectionView;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicVerticalScrollingContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardDismissMode;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;
@property (nonatomic) bool shouldTuckTopVerticalScrollingContainerItem;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *verticalScrollingContainerItems;

- (void).cxx_destruct;
- (void)_didFinishAnimatedInvalidation;
- (void)_notifyDidLayoutSubviewsIfReady;
- (id)_parentCellForItem:(id)arg1;
- (void)_updateContentOffsetForTucking;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_willBeginAnimatedInvalidation;
- (void)beginOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1 toValue:(double)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)containerCollectionView;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGPoint { double x1; double x2; })contentOffsetForVerticalScrollingContainerItem:(id)arg1;
- (long long)contentOffsetProxyingPolicyForVerticalScrollingContainerItemContext:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1;
- (void)invalidateLayoutForVerticalScrollingContainerItems:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)isOverridingContentHeightOfVerticalScrollingContainerItem:(id)arg1;
- (bool)isPerformingLayout;
- (long long)keyboardDismissMode;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardDismissMode:(long long)arg1;
- (void)setShouldTuckTopVerticalScrollingContainerItem:(bool)arg1;
- (void)setVerticalScrollingContainerItems:(id)arg1;
- (bool)shouldTuckTopVerticalScrollingContainerItem;
- (void)verticalScrollingContainerCollectionViewCell:(id)arg1 didUpdateBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPreviousBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)verticalScrollingContainerCollectionViewContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerItemContextRequestsContentSizeUpdate:(id)arg1;
- (id)verticalScrollingContainerItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

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