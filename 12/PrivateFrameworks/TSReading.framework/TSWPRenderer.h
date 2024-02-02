<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSWPRenderer.h</title>
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

/PrivateFrameworks/TSReading.framework/TSWPRenderer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSWPRenderer : NSObject {
    struct CGContext { } * _context;
    bool  _flipShadows;
    TSUBezierPath * _interiorClippingPath;
    double  _viewScale;
}

@property (nonatomic, readonly) struct CGContext { }*context;
@property (nonatomic) bool flipShadows;
@property (nonatomic, retain) TSUBezierPath *interiorClippingPath;
@property (nonatomic) double viewScale;

+ (id)correctionAndDictationMarkColor;
+ (id)grammarMarkColor;
+ (void)initialize;
+ (struct __CTFont { }*)invisiblesFont;
+ (id)spellingMarkColor;

- (void).cxx_destruct;
- (struct CGContext { }*)context;
- (struct CGSize { double x1; double x2; })convertSizeToDeviceSpace:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)didRenderFragments;
- (void)drawAdornmentRects:(id)arg1 forColumn:(id)arg2 foreground:(bool)arg3;
- (void)drawFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 updateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3 runState:(struct { struct _NSRange { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; id x2; double x3; id x4[3]; unsigned int x5; struct TSWPDrawingState {} *x6; id x7; id x8; id x9; struct __CTFont {} *x10; struct CGColor {} *x11; id x12; bool x13; int x14; double x15; struct CGColor {} *x16; double x17; }*)arg4 lineDrawFlags:(unsigned int)arg5;
- (bool)flipShadows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getClipBoundingBox;
- (id)initWithContext:(struct CGContext { }*)arg1;
- (id)interiorClippingPath;
- (bool)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2;
- (void)p_drawAdornmentGlyphs:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawAdornmentLine:(id)arg1 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg3 lineFragmentStart:(struct CGPoint { double x1; double x2; })arg4 vertical:(bool)arg5;
- (void)p_drawAdornmentLineBackgroundRect:(id)arg1 lineDrawFlags:(unsigned int)arg2 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)p_drawAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawAttachmentAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawAttachmentGlyphAtPosition:(struct { unsigned long long x1; double x2; })arg1 fragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2;
- (void)p_drawAutocorrectionMarkingsFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2;
- (void)p_drawDictationMarkingsFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2;
- (void)p_drawHiddenDeletionsAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawInvisiblesAdornments:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawInvisiblesBreakLine:(id)arg1 lineFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3;
- (void)p_drawListLabelForFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2 lineDrawFlags:(unsigned int)arg3;
- (void)p_drawTextInRunsForLine:(struct TSWPLineRef { struct __CTLine {} *x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; unsigned long long x4; unsigned long long x5; })arg1 fragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg2 state:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg3 tateChuYoko:(bool)arg4 baseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 isFirstLineRef:(bool)arg6;
- (void)p_drawWordMarkingsForFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 color:(id)arg2 ranges:(id)arg3 suppressRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg5;
- (void)p_setCTMAndTextPositionForFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1;
- (bool)p_shouldClipFragment:(const struct TSWPLineFragment { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; double x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; double x_8_1_5; double x_8_1_6; double x_8_1_7; } x8; id x9; id x10; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_11_1_1; struct TSWPLineRef {} *x_11_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_11_1_3; } x11; double x12; struct vector<TSWPLineRef, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_13_1_1; struct TSWPLineRef {} *x_13_1_2; struct __compressed_pair<TSWPLineRef *, std::__1::allocator<TSWPLineRef> > { struct TSWPLineRef {} *x_3_2_1; } x_13_1_3; } x13; }*)arg1 drawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg2 lineDrawFlags:(unsigned int)arg3 updateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)p_strokeLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3;
- (void)p_strokeWavyLineFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3;
- (void)setFlipShadows:(bool)arg1;
- (void)setInteriorClippingPath:(id)arg1;
- (void)setViewScale:(double)arg1;
- (void)setupFontSmoothingWithDrawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg1 attributes:(id)arg2;
- (double)viewScale;
- (void)willRenderFragmentsWithDrawingState:(const struct TSWPDrawingState { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; unsigned long long x6; struct CGColor {} *x7; double x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; struct _NSRange { unsigned long long x_18_1_1; unsigned long long x_18_1_2; } x18; id x19; id x20; struct _NSRange { unsigned long long x_21_1_1; unsigned long long x_21_1_2; } x21; struct _NSRange { unsigned long long x_22_1_1; unsigned long long x_22_1_2; } x22; unsigned long long x23; struct _NSRange { unsigned long long x_24_1_1; unsigned long long x_24_1_2; } x24; id x25; id x26; }*)arg1;

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