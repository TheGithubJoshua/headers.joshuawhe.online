<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDRep.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDRep.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDRep : NSObject <TSDMagicMoveMatching> {
    TSDCanvas * mCanvas;
    bool  mHasBeenRemoved;
    TSDLayout * mLayout;
    TSDRep<TSDContainerRep> * mParentRep;
    TSDLayout * mTemporaryMixingLayout;
    NSDictionary * mTextureAnimationInfo;
}

@property (nonatomic, readonly) double angleInRoot;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsForStandardKnobs;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } centerForRotation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } clipRect;
@property (nonatomic, readonly) NSObject *dynamicOverride;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForMagicMove;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInUnscaledCanvas;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInUnscaledCanvasIncludingChrome;
@property (nonatomic, readonly) NSArray *hyperlinkRegions;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } i_layerFrameInScaledCanvasIgnoringDragging;
@property (nonatomic, readonly) NSObject<TSDInfo> *info;
@property (nonatomic, readonly) bool isDrawingInFlippedContext;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layerFrameInScaledCanvas;
@property (nonatomic, readonly) TSDLayout *layout;
@property (nonatomic, readonly) bool masksToBounds;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } naturalBounds;
@property (nonatomic, readonly) double opacity;
@property (nonatomic) TSDRep<TSDContainerRep> *parentRep;
@property (nonatomic, retain) TSDLayout *temporaryMixingLayout;
@property (nonatomic, copy) NSDictionary *textureAnimationInfo;
@property (nonatomic, readonly) bool wantsToDistortWithImagerContext;

- (void).cxx_destruct;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addToSet:(id)arg1;
- (double)angleInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })centerForRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (double)contentsScale;
- (struct CGPoint { double x1; double x2; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertNaturalPointToUnscaledCanvas:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectFromUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertNaturalRectToUnscaledCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)didDisplayTextureWithDescription:(id)arg1 isAtEndOfBuild:(bool)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)dynamicOverride;
- (void)dynamicOverrideDidChange;
- (bool)forcesPlacementOnTop;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForMagicMove;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvasIncludingChrome;
- (id)hyperlinkRegions;
- (void)i_configureFontSmoothingForContext:(struct CGContext { }*)arg1 layer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_layerFrameInScaledCanvasIgnoringDragging;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_partition_deepClipRect;
- (void)i_willBeRemoved;
- (id)info;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isDrawingInFlippedContext;
- (bool)isLocked;
- (bool)isPlaceholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layerFrameInScaledCanvasRelativeToParent;
- (id)layout;
- (bool)masksToBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })naturalBounds;
- (const struct CGPath { }*)newPathInScaledCanvasFromNaturalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)opacity;
- (id)parentRep;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)setParentRep:(id)arg1;
- (void)setTemporaryMixingLayout:(id)arg1;
- (void)setTextureAnimationInfo:(id)arg1;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)temporaryMixingLayout;
- (id)textureAnimationInfo;
- (id)textureForDescription:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })unRotatedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)updateChildrenFromLayout;
- (void)updateFromLayout;
- (bool)wantsToDistortWithImagerContext;
- (void)willBeRemoved;
- (void)willLayoutAndRenderInBackground;

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
