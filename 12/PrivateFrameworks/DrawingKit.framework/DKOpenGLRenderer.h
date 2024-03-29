<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DKOpenGLRenderer.h</title>
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

/PrivateFrameworks/DrawingKit.framework/DKOpenGLRenderer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit (1)
 */

@interface DKOpenGLRenderer : NSObject {
    void U_COLOR;
    bool  _allowWetComposite;
    double  _backingScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <DKOpenGLRendererDelegate> * _delegate;
    bool  _didNotifyRendererDelegate;
    bool  _drawingEnabled;
    bool  _ignoreFirstUndoItem;
    UIColor * _inkColor;
    double  _lineWidthScale;
    long long  _numPages;
    bool  _undoEnabled;
    unsigned int  mAttributes;
    int  mBufferSize;
    void mCanvasOffset;
    void mCanvasSize;
    unsigned int  mColorProg;
    int  mColorProgColorUniformLocation;
    int  mColorProgModelViewProjectionUniformLocation;
    unsigned int  mCompositeProg;
    int  mCompositeProgViewportUniformLocation;
    struct vector<Vertex, std::__1::allocator<Vertex> > { 
        struct Vertex {} *__begin_; 
        struct Vertex {} *__end_; 
        struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { 
            struct Vertex {} *__value_; 
        } __end_cap_; 
    }  mContiguousVertexStorage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mDirtyCanvasRegion;
    unsigned int  mDryPaintProg;
    int  mDryPaintProgXCoordOffsetUniformLocation;
    struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> > >="__begin_"^{pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> {}  mNonCollisionSegments;
    struct vector<Page, std::__1::allocator<Page> > { 
        struct Page {} *__begin_; 
        struct Page {} *__end_; 
        struct __compressed_pair<Page *, std::__1::allocator<Page> > { 
            struct Page {} *__value_; 
        } __end_cap_; 
    }  mPages;
    unsigned int  mPaperTex;
    float  mParticleLifespan;
    unsigned int  mTextureProg;
    int  mTextureProgModelViewProjectionUniformLocation;
    float  mTime;
    float  mTimeWetBecameDirty;
    unsigned int  mVbo;
    struct vector<VertexGroup, std::__1::allocator<VertexGroup> > { 
        struct VertexGroup {} *__begin_; 
        struct VertexGroup {} *__end_; 
        struct __compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup> > { 
            struct VertexGroup {} *__value_; 
        } __end_cap_; 
    }  mVertexHistory;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mVertexRange;
    unsigned int  mWetPaintBufferFBO;
    void mWetPaintBufferSize;
    unsigned int  mWetPaintBufferT;
    unsigned int  mWetPaintProg;
    int  mWetPaintProgLifespanUniformLocation;
    int  mWetPaintProgSubtractEndPointsOnlyUniformLocation;
    int  mWetPaintProgTimeUniformLocation;
    void mWinSize;
}

@property (nonatomic) bool allowWetComposite;
@property (nonatomic) double backingScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) <DKOpenGLRendererDelegate> *delegate;
@property (nonatomic) bool drawingEnabled;
@property (nonatomic) bool ignoreFirstUndoItem;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic) double lineWidthScale;
@property (nonatomic) long long numPages;
@property (getter=isUndoEnabled, nonatomic) bool undoEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPoints:(id)arg1 withSegmentLength:(unsigned long long)arg2;
- (bool)allowWetComposite;
- (void)appendVertexHistoryElement;
- (double)backingScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canvasIsEmpty;
- (void)clear;
- (void)clearComposite;
- (void)clearDryPaintBuffer;
- (void)clearWetPaintBuffer;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)delegate;
- (void)destroyFrameBuffers;
- (bool)detectCollision;
- (void)didBeginNewStroke;
- (void)didCompleteStroke;
- (void)didResize;
- (void)draw;
- (void)drawComposite;
- (void)drawContiguousVertexStorageImmediatelyWithLayeredBlending:(bool)arg1;
- (bool)drawingEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getVertexBounds;
- (bool)ignoreFirstUndoItem;
- (id)init;
- (bool)initGL;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 bufferSize:(int)arg3;
- (void)initializeFrameBuffers;
- (id)inkColor;
- (bool)isUndoEnabled;
- (double)lineWidthScale;
- (long long)numPages;
- (void)redrawEntireDrawingImmediatelyWithLayeredBlending:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionWithVertices:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex {} *x1; struct Vertex {} *x2; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex {} *x_3_1_1; } x3; })arg1 withInflationAmount:(float)arg2;
- (void)removeVertexHistoryElement;
- (void)renderToComposite:(bool)arg1;
- (void)renderToDryPaintBuffer;
- (void)renderToWetPaintBufferWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)resetRendererState;
- (void)setAllowWetComposite:(bool)arg1;
- (void)setBackingScale:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;
- (void)setIgnoreFirstUndoItem:(bool)arg1;
- (void)setInkColor:(id)arg1;
- (void)setLineWidthScale:(double)arg1;
- (void)setNumPages:(long long)arg1;
- (void)setUndoEnabled:(bool)arg1;
- (id)snapshot;
- (void)teardown;
- (void)undo;
- (void)update;
- (void)updateDryCycleIncludingComposite:(bool)arg1;
- (void)updateDryForcefully;
- (void)updateVertexControllerWithData:(struct vector<Vertex, std::__1::allocator<Vertex> > { struct Vertex {} *x1; struct Vertex {} *x2; struct __compressed_pair<Vertex *, std::__1::allocator<Vertex> > { struct Vertex {} *x_3_1_1; } x3; })arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 allowWet:(bool)arg3;
- (void)updateVertexControllerWithDataRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 allowWet:(bool)arg2;
- (void)updateWet;

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
