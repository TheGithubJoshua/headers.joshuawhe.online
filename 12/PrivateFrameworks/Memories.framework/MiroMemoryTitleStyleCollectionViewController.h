<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroMemoryTitleStyleCollectionViewController.h</title>
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

/PrivateFrameworks/Memories.framework/MiroMemoryTitleStyleCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroMemoryTitleStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    NSString * _initialTitleStyleID;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    MiroMemory * _memory;
    long long  _numberOfColumnsUsed;
    <MiroMemoryEditorPlayerViewDelegate> * _playerViewDelegate;
    MiroMemoryEditorPosterController * _posterController;
    NSIndexPath * _previouslySelectedIndexPath;
    NSObject<OS_dispatch_queue> * _serialTaskQueue;
    bool  _shouldNoteUserChangedTitleStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *initialTitleStyleID;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) long long numberOfColumnsUsed;
@property (nonatomic) <MiroMemoryEditorPlayerViewDelegate> *playerViewDelegate;
@property (nonatomic, retain) MiroMemoryEditorPosterController *posterController;
@property (nonatomic, retain) NSIndexPath *previouslySelectedIndexPath;
@property (nonatomic) bool shouldNoteUserChangedTitleStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didEndTitleStyleEditing;
- (void)_refreshAllPosters;
- (id)_selectedIndexPathForBlueprint:(id)arg1;
- (void)addObservers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)contentHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initialTitleStyleID;
- (struct CGSize { double x1; double x2; })itemSize;
- (struct CGSize { double x1; double x2; })layoutSize;
- (id)memory;
- (long long)numberOfColumnsUsed;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerViewDelegate;
- (id)posterController;
- (id)previouslySelectedIndexPath;
- (void)removeObservers;
- (void)setInitialTitleStyleID:(id)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMemory:(id)arg1;
- (void)setNumberOfColumnsUsed:(long long)arg1;
- (void)setPlayerViewDelegate:(id)arg1;
- (void)setPosterController:(id)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setShouldNoteUserChangedTitleStyle:(bool)arg1;
- (bool)shouldNoteUserChangedTitleStyle;
- (struct CGSize { double x1; double x2; })sizeForItemForViewWidth:(double)arg1 layout:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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