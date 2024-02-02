<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDShapeRep.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDShapeRep.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDShapeRep : TSDStyledRep <TSDMagicMoveMatching> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mAvailableToCommitPointRange;
    struct CGContext { } * mCommittedPathContext;
    struct CGImage { } * mCommittedPathImage;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mCommittedPointRange;
    bool  mDirectlyManagesLayerContent;
    bool  mDirectlyManagesLayerContentCacheValid;
    bool  mFillChanged;
    bool  mFrameInUnscaledCanvasIsValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameInUnscaledCanvasRelativeToSuper;
    NSMutableDictionary * mHitTestCache;
    bool  mIsInvisibleCache;
    bool  mIsInvisibleCacheValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLastDynamicInvalidRect;
    bool  mNeedsDisplay;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOriginalAliasedAlignmentFrameInLayerFrame;
    double  mOverriddenValue;
    unsigned int  mOverrideState;
    bool  mShadowOnChildrenDisabled;
    bool  mShouldForceRenderableGeometryUpdate;
}

@property (nonatomic, readonly) bool isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
@property (nonatomic, readonly) bool isPartiallyAnimated;
@property (nonatomic, readonly) TSDShapeInfo *shapeInfo;
@property (nonatomic, readonly) TSDShapeLayout *shapeLayout;
@property (nonatomic, readonly) double strokeEnd;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;

- (void).cxx_destruct;
- (bool)canDrawShadowInOneStepWithChildren:(bool)arg1;
- (bool)canDrawWithOtherShapeRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (id)colorBehindLayer:(id)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1 usingPathOverride:(id)arg2 patternOffsetsBySubpathOverride:(id)arg3 transparencyLayersBySubpath:(id)arg4;
- (void)drawInContextWithoutEffects:(struct CGContext { }*)arg1 withContent:(bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(bool)arg4 forAlphaOnly:(bool)arg5 drawChildren:(bool)arg6 keepingChildrenPassingTest:(id /* block */)arg7;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)dynamicOverrideDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInUnscaledCanvas;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isInvisible;
- (bool)isMoreOptimalToDrawWithOtherShapeRepsIfPossible;
- (bool)isPartiallyAnimated;
- (double)opacity;
- (bool)p_beginApplyOpacity:(struct CGContext { }*)arg1 forDrawingInOneStep:(bool)arg2;
- (unsigned long long)p_bitmapContextOptionsForDrawingStroke:(id)arg1;
- (id)p_brushStrokeFromStroke:(id)arg1;
- (void)p_drawChildrenWithoutOpacityInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(bool)arg4;
- (void)p_drawInContext:(struct CGContext { }*)arg1 withContent:(bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(bool)arg4 usingPathOverride:(id)arg5 patternOffsetsBySubpathOverride:(id)arg6 transparencyLayersBySubpath:(id)arg7;
- (void)p_drawLineEndForHead:(bool)arg1 withDelta:(struct CGPoint { double x1; double x2; })arg2 andStroke:(id)arg3 inContext:(struct CGContext { }*)arg4 useFastDrawing:(bool)arg5;
- (id)p_drawingPlaybackSession;
- (bool)p_drawsSelfInOneStep;
- (void)p_endApplyOpacity:(struct CGContext { }*)arg1 apply:(bool)arg2;
- (bool)p_hasFreehandDrawingBrushStroke;
- (bool)p_isInsidePlayingFreehandDrawing;
- (bool)p_isNormalShapeInsideFreehandDrawing;
- (bool)p_shouldDrawStrokeWide:(id)arg1;
- (bool)p_shouldUpgradeStrokeForPlayback:(id)arg1;
- (id)p_strokeForRenderingIncludingPlaybackFromStroke:(id)arg1;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)setTextureAttributes:(id)arg1 textureBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)shapeInfo;
- (id)shapeLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBoundsWithOptions:(unsigned long long)arg1 fallbackBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)strokeEnd;

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