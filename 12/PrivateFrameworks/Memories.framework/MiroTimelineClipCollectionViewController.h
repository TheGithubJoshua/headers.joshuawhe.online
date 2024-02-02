<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroTimelineClipCollectionViewController.h</title>
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

/PrivateFrameworks/Memories.framework/MiroTimelineClipCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroTimelineClipCollectionViewController : UICollectionViewController <MiroCollectionViewDelegate, MiroEditorClipCollection, MiroEditorFlowLayoutDelegate> {
    NSIndexPath * _collectionViewDraggingIndexPath;
    <MiroEditorClipCollectionDataSource> * _dataSource;
    <MiroEditorClipCollectionDelegate> * _delegate;
    bool  _highlightCenterThumbnail;
    NSIndexPath * _initialIndexPath;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewContentInsets;
@property (nonatomic, retain) NSIndexPath *collectionViewDraggingIndexPath;
@property (nonatomic) <MiroEditorClipCollectionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MiroEditorClipCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightCenterThumbnail;
@property (nonatomic, retain) NSIndexPath *initialIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cellSizeForClipAtIndex:(long long)arg1;
- (double)_proximityToCenterForCellAtIndexPath:(id)arg1;
- (void)_snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)_updateHighlightForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateHighlightForVisibleCellsAnimated:(bool)arg1;
- (id)cellForClip:(id)arg1;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 didSnapToItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewContentInsets;
- (id)collectionViewDraggingIndexPath;
- (id)dataSource;
- (id)delegate;
- (bool)highlightCenterThumbnail;
- (id)initialIndexPath;
- (void)miroCollectionView:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2;
- (void)miroCollectionViewDidCancelInteractiveMovement:(id)arg1;
- (void)miroCollectionViewDidEndInteractiveMovement:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCollectionViewDraggingIndexPath:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightCenterThumbnail:(bool)arg1;
- (void)setInitialIndexPath:(id)arg1;
- (void)snapToIndexPath:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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