<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKSelectionView.h</title>
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

/PrivateFrameworks/PencilKit.framework/PKSelectionView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit (1)
 */

@interface PKSelectionView : UIView <UIDragInteractionDelegate_Private, UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer * _dragGR;
    UIDragInteraction * _dragInteraction;
    UITapGestureRecognizer * _editMenuGR;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialDragPosition;
    bool  _isClearingSelection;
    bool  _isDragging;
    CAShapeLayer * _lassoLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offsetInTouchView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalStrokePosition;
    UIDragPreview * _previewProvider;
    PKSelectionController * _selectionController;
    PKStrokeSelection * _strokeSelection;
    UIImage * _strokeSelectionImage;
    UIImageView * _strokeSelectionImageView;
    bool  _wantsDragPlatter;
    CAShapeLayer * _whiteLassoLayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILongPressGestureRecognizer *dragGR;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDragging;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offsetInTouchView;
@property (nonatomic, retain) PKStrokeSelection *strokeSelection;
@property (nonatomic, retain) UIImage *strokeSelectionImage;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDragPlatter;

- (void).cxx_destruct;
- (void)_addShadowToStroke;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)_dragWillBegin;
- (void)animateViewToOriginalPosition;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)dealloc;
- (id)dragGR;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragSelection:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 strokeSelection:(id)arg2 selectionController:(id)arg3;
- (bool)isDragging;
- (bool)lassoContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })offsetInTouchView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGColor { }*)selectionColor;
- (void)setStrokeSelection:(id)arg1;
- (void)setStrokeSelectionImage:(id)arg1;
- (void)setWantsDragPlatter:(bool)arg1;
- (void)setupAnimatedLasso;
- (id)strokeSelection;
- (id)strokeSelectionImage;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)toggleEditMenu;
- (void)updateLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)wantsDragPlatter;
- (void)willMoveToWindow:(id)arg1;

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