<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUZoomableGridTransition.h</title>
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

/Frameworks/PhotosUI.framework/PUZoomableGridTransition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    UICollectionViewTransitionLayout * __transitionLayout;
    NSIndexPath * _anchorItemIndexPath;
    UICollectionView * _collectionView;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentInteractiveCenterOffset;
    double  _currentInteractiveProgress;
    bool  _interactive;
    unsigned long long  _originZoomLevel;
    unsigned long long  _targetZoomLevel;
    <UIViewControllerContextTransitioning> * _transitionContext;
    unsigned long long  _transitionState;
    PUMomentsZoomLevelManager * _zoomLevelManager;
}

@property (setter=_setTransitionLayout:, nonatomic, retain) UICollectionViewTransitionLayout *_transitionLayout;
@property (nonatomic, retain) NSIndexPath *anchorItemIndexPath;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) double completionSpeed;
@property (setter=_setCurrentInteractiveCenterOffset:, nonatomic) struct CGSize { double x1; double x2; } currentInteractiveCenterOffset;
@property (setter=_setCurrentInteractiveProgress:, nonatomic) double currentInteractiveProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (setter=_setOriginZoomLevel:, nonatomic) unsigned long long originZoomLevel;
@property (readonly) Class superclass;
@property (setter=_setTargetZoomLevel:, nonatomic) unsigned long long targetZoomLevel;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (setter=_setTransitionState:, nonatomic) unsigned long long transitionState;
@property (nonatomic, readonly) bool wantsInteractiveStart;
@property (nonatomic, readonly) PUMomentsZoomLevelManager *zoomLevelManager;

- (void).cxx_destruct;
- (void)_setCurrentInteractiveCenterOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCurrentInteractiveProgress:(double)arg1;
- (void)_setOriginZoomLevel:(unsigned long long)arg1;
- (void)_setTargetZoomLevel:(unsigned long long)arg1;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setTransitionState:(unsigned long long)arg1;
- (id)_transitionLayout;
- (id)anchorItemIndexPath;
- (void)cancelInteractiveTransitionAnimated;
- (struct CGSize { double x1; double x2; })currentInteractiveCenterOffset;
- (double)currentInteractiveProgress;
- (void)finishInteractiveTransitionAnimated;
- (id)initWithOriginLevel:(unsigned long long)arg1 targetLevel:(unsigned long long)arg2 zoomLevelManager:(id)arg3 interactive:(bool)arg4;
- (bool)isInteractive;
- (unsigned long long)originZoomLevel;
- (void)setAnchorItemIndexPath:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (unsigned long long)targetZoomLevel;
- (id)transitionContext;
- (unsigned long long)transitionState;
- (void)updateInteractiveTransitionForProgress:(double)arg1 centerOffset:(struct CGSize { double x1; double x2; })arg2;
- (id)zoomLevelManager;

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