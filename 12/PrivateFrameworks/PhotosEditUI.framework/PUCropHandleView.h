<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUCropHandleView.h</title>
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

/PrivateFrameworks/PhotosEditUI.framework/PUCropHandleView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI (1)
 */

@interface PUCropHandleView : UIView {
    UIView * __layoutReferenceView;
    NSArray * __lineViews;
    NSLayoutConstraint * __lineWidthConstraint;
    NSArray * __overlayViews;
    unsigned long long  _handle;
    bool  _lineWeightHeavy;
    bool  _overlayHidden;
}

@property (setter=_setLayoutReferenceView:, nonatomic, retain) UIView *_layoutReferenceView;
@property (setter=_setLineViews:, nonatomic, retain) NSArray *_lineViews;
@property (setter=_setLineWidthConstraint:, nonatomic, retain) NSLayoutConstraint *_lineWidthConstraint;
@property (setter=_setOverlayViews:, nonatomic, retain) NSArray *_overlayViews;
@property (nonatomic, readonly) NSArray *adjacentHandles;
@property (getter=isBottom, nonatomic, readonly) bool bottom;
@property (getter=isCorner, nonatomic, readonly) bool corner;
@property (nonatomic, readonly) unsigned long long handle;
@property (getter=isLateral, nonatomic, readonly) bool lateral;
@property (nonatomic, readonly) id layoutReferenceItem;
@property (getter=isLeft, nonatomic, readonly) bool left;
@property (getter=isLineWeightHeavy, nonatomic) bool lineWeightHeavy;
@property (nonatomic, readonly) unsigned long long oppositeHandle;
@property (getter=isOverlayHidden, nonatomic) bool overlayHidden;
@property (getter=isRight, nonatomic, readonly) bool right;
@property (getter=isTop, nonatomic, readonly) bool top;

+ (id)allHandles;

- (void).cxx_destruct;
- (id)_createCornerOverlayView;
- (id)_createLineView;
- (id)_layoutReferenceView;
- (id)_lineViews;
- (id)_lineWidthConstraint;
- (id)_overlayViews;
- (void)_setLayoutReferenceView:(id)arg1;
- (void)_setLineViews:(id)arg1;
- (void)_setLineWidthConstraint:(id)arg1;
- (void)_setOverlayViews:(id)arg1;
- (void)_updateLineWidth;
- (id)adjacentHandles;
- (unsigned long long)handle;
- (id)initForHandle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBottom;
- (bool)isCorner;
- (bool)isLateral;
- (bool)isLeft;
- (bool)isLineWeightHeavy;
- (bool)isOverlayHidden;
- (bool)isRight;
- (bool)isTop;
- (id)layoutReferenceItem;
- (unsigned long long)oppositeHandle;
- (void)setLineWeightHeavy:(bool)arg1;
- (void)setOverlayHidden:(bool)arg1;

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
