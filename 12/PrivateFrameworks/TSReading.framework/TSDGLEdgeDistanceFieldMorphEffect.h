<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGLEdgeDistanceFieldMorphEffect.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDGLEdgeDistanceFieldMorphEffect.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGLEdgeDistanceFieldMorphEffect : NSObject {
    bool  _didSetupTextureAdjustment;
    bool  _didTeardown;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _incomingTextBounds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _incomingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _incomingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _incomingTextureInfo;
    bool  _isTextStyleIdenticalExceptSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _outgoingTextBounds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _outgoingTextColor;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _outgoingTextureEdgeInsetsAdjustmentMatrix;
    TSDGLTextureInfo * _outgoingTextureInfo;
    TSDGLShader * _shader;
    struct { 
        double skew; 
        double skewOffset; 
        double scale; 
    }  _textureAdjustment;
}

@property (nonatomic, readonly) TSDGLTextureInfo *incomingTextureInfo;
@property (nonatomic) bool isTextStyleIdenticalExceptSize;
@property (nonatomic, readonly) TSDGLTextureInfo *outgoingTextureInfo;
@property (nonatomic, readonly) TSDGLShader *shader;

+ (void)didEndUsingShaders;
+ (id)willBeginUsingShadersWithMotionBlur:(bool)arg1 motionBlurIgnoreTextureOpacity:(bool)arg2;

- (void)dealloc;
- (id)incomingTextureInfo;
- (id)initWithOutgoingTR:(id)arg1 incomingTR:(id)arg2 GLState:(id)arg3 motionBlur:(bool)arg4 motionBlurIgnoreTextureOpacity:(bool)arg5;
- (id)initWithOutgoingTextureName:(unsigned int)arg1 outgoingTextureSize:(struct CGSize { double x1; double x2; })arg2 outgoingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 outgoingColor:(struct { float x1; float x2; float x3; float x4; })arg4 incomingTextureName:(unsigned int)arg5 incomingTextureSize:(struct CGSize { double x1; double x2; })arg6 incomingTextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 incomingColor:(struct { float x1; float x2; float x3; float x4; })arg8 GLState:(id)arg9 motionBlur:(bool)arg10 motionBlurIgnoreTextureOpacity:(bool)arg11;
- (bool)isTextStyleIdenticalExceptSize;
- (struct CGContext { }*)newContextFromTexture:(id)arg1;
- (id)outgoingTextureInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_actualPixelBoundsOfTexturedRectangle:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_affineTransformWithTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 textureSize:(struct CGSize { double x1; double x2; })arg2;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg2 outgoingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg3 incomingScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg4 incomingScanlineZeroes:(struct CGPoint { double x1; double x2; }*)arg5 samples:(unsigned long long)arg6;
- (double)p_errorFromApplyingTextureAdjustment:(struct { double x1; double x2; double x3; })arg1 toOutgoingValue:(double)arg2 incomingValue:(double)arg3 sample:(unsigned long long)arg4 sampleCount:(unsigned long long)arg5;
- (bool)p_fillScanlineCenters:(struct CGPoint { double x1; double x2; }*)arg1 scanlineMinMaxZeroes:(struct CGPoint { double x1; double x2; }*)arg2 samples:(unsigned long long)arg3 fromTexture:(unsigned int)arg4 textureSize:(struct CGSize { double x1; double x2; })arg5;
- (void)setIsTextStyleIdenticalExceptSize:(bool)arg1;
- (void)setupIfNecessary;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 generateTextureMatrices:(bool)arg3;
- (void)setupShaderWithMorphPercent:(double)arg1 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 outgoingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 incomingTextureMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (id)shader;
- (void)teardown;
- (struct { double x1; double x2; double x3; })textureMatchingTextureAdjustment;

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