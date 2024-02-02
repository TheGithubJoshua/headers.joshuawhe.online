<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleDragAndDropCollectionViewLayout.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleDragAndDropCollectionViewLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentPosition;
    NSIndexPath * _dragIndexPathForMerge;
    NSTimer * _dragPauseTimer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastDragPoint;
    bool  _performActualRearrange;
    NSIndexPath * _targetIndexPathForMerge;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } currentPosition;
@property (nonatomic, retain) NSIndexPath *dragIndexPathForMerge;
@property (nonatomic, retain) NSTimer *dragPauseTimer;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastDragPoint;
@property (nonatomic, readonly) <PXPeopleDragAndDropCollectionViewDelegateLayout> *mergeDelegate;
@property (nonatomic) bool performActualRearrange;
@property (nonatomic, retain) NSIndexPath *targetIndexPathForMerge;

- (void).cxx_destruct;
- (void)_cancelDragPauseTimer;
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateDragPause;
- (struct CGPoint { double x1; double x2; })currentPosition;
- (void)dealloc;
- (id)dragIndexPathForMerge;
- (id)dragPauseTimer;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)init;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGPoint { double x1; double x2; })lastDragPoint;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)mergeDelegate;
- (bool)performActualRearrange;
- (bool)performMergeIfPossible;
- (void)setCurrentPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDragIndexPathForMerge:(id)arg1;
- (void)setDragPauseTimer:(id)arg1;
- (void)setLastDragPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPerformActualRearrange:(bool)arg1;
- (void)setTargetIndexPathForMerge:(id)arg1;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)targetIndexPathForMerge;

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