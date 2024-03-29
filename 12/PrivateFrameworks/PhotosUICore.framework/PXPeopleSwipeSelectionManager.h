<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleSwipeSelectionManager.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleSwipeSelectionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleSwipeSelectionManager : NSObject <PXAutoScrollerDelegate> {
    PXUIAutoScroller * _autoScroller;
    NSIndexPath * _currentIndexPath;
    <PXPeopleSwipeSelectionManagerDelegate> * _delegate;
    struct { 
        bool respondsToItemIndexPathAtLocation; 
        bool respondsToItemIndexPathClosestLeadingLocation; 
        bool respondsToItemIndexPathClosestAboveLocation; 
    }  _delegateFlags;
    struct { 
        bool selectedIndexPaths; 
    }  _needsUpdateFlags;
    id  _pausingChangesToken;
    UIScrollView * _scrollView;
    NSSet * _selectedIndexPathsBeforeSwipe;
    NSIndexPath * _startingIndexPath;
    unsigned long long  _state;
    UIGestureRecognizer * _swipeGestureRecognizer;
}

@property (nonatomic, readonly) PXUIAutoScroller *autoScroller;
@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleSwipeSelectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelecting;
@property (nonatomic, retain) id pausingChangesToken;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, copy) NSSet *selectedIndexPathsBeforeSwipe;
@property (nonatomic, retain) NSIndexPath *startingIndexPath;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIGestureRecognizer *swipeGestureRecognizer;

- (void).cxx_destruct;
- (void)_beginSelectionFromIndexPath:(id)arg1;
- (void)_endSelection;
- (void)_handleSwipeSelectionGesture:(id)arg1;
- (void)_invalidateSelectedIndexPaths;
- (id)_itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateSelectedIndexPaths;
- (void)_updateSelectionWithHitIndexPath:(id)arg1 leadingClosestIndexPath:(id)arg2 aboveClosestIndexPath:(id)arg3;
- (id)autoScroller;
- (void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithScrollView:(id)arg1;
- (bool)isSelecting;
- (id)pausingChangesToken;
- (id)scrollView;
- (id)selectedIndexPathsBeforeSwipe;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPausingChangesToken:(id)arg1;
- (void)setSelectedIndexPathsBeforeSwipe:(id)arg1;
- (void)setStartingIndexPath:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)startingIndexPath;
- (unsigned long long)state;
- (id)swipeGestureRecognizer;

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
