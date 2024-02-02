<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGLEdgeDistanceFieldTraceEffect.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSDGLEdgeDistanceFieldTraceEffect.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferSize;
    bool  _canDraw;
    bool  _didTeardown;
    TSDGLTextureInfo * _edgeDistanceFieldTextureInfo;
    bool  _isValid;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGPoint { 
        double x; 
        double y; 
    }  _randomStrokePoint;
    TSDGLShader * _shader;
    NSArray * _strokeLineSegment;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _textureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _traceTextureInfo;
    long long  _traceTextureMaxValue;
    struct __CFArray { } * _zeroesArray;
}

@property (nonatomic, readonly) TSDGLTextureInfo *edgeDistanceFieldTextureInfo;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) <TSDAnimationRandomGenerator> *randomGenerator;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } randomStrokePoint;
@property (nonatomic, readonly) TSDGLShader *shader;
@property (nonatomic, readonly) NSArray *strokeLineSegment;
@property (nonatomic, readonly) TSDGLTextureInfo *traceTextureInfo;

+ (void)didEndUsingShaders;
+ (void)willBeginUsingShaders;

- (void)dealloc;
- (id)description;
- (id)edgeDistanceFieldTextureInfo;
- (id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(bool)arg4 GLState:(id)arg5 randomGenerator:(id)arg6;
- (bool)isValid;
- (void)p_addNearbyPixelsToArray:(struct __CFArray { }*)arg1 pixel:(struct CGPoint { double x1; double x2; })arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char *)arg4 tempDataBuffer:(char *)arg5 localMaximumLookupBuffer:(bool*)arg6 bufferSize:(struct CGSize { double x1; double x2; })arg7;
- (void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char *)arg2 bufferSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(bool)arg2 randomGenerator:(id)arg3;
- (id)p_houghTransformWithZeroes:(struct __CFArray { }*)arg1 bufferSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })p_normalizedPointInTexturedRectangleFrameFromPoint:(struct CGPoint { double x1; double x2; })arg1 inBufferSize:(struct CGSize { double x1; double x2; })arg2;
- (id)randomGenerator;
- (struct CGPoint { double x1; double x2; })randomStrokePoint;
- (void)setupShaderWithPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 opacity:(double)arg3 color:(struct { float x1; float x2; float x3; float x4; })arg4 strokeFadeHardnessLeading:(double)arg5 strokeFadeHardnessTrailing:(double)arg6;
- (id)shader;
- (id)strokeLineSegment;
- (void)teardown;
- (id)traceTextureInfo;

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