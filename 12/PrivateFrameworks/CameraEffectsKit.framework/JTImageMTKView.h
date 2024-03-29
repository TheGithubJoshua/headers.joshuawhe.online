<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JTImageMTKView.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/JTImageMTKView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface JTImageMTKView : MTKView <JTImageViewRendering> {
    <MTLCommandQueue> * _commandQueue;
    bool  _enableDebugDrawing;
    bool  _flipX;
    bool  _flipY;
    JTImage * _jtImage;
    <MTLLibrary> * _library;
    <MTLTexture> * _mtlTexture_RGBA;
    <MTLTexture> * _mtlTexture_YUV_Chroma;
    <MTLTexture> * _mtlTexture_YUV_Luma;
    bool  _needsUpdateTexture;
    bool  _needsUpdateVertices;
    void * _pixelBufferColorAttachments;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
        } vertices[4]; 
    }  _quad;
    <MTLRenderPipelineState> * _renderPipelineState;
    long long  _renderingType;
    <MTLSamplerState> * _sampler;
    struct __CVMetalTextureCache { } * _textureCache;
    MTKTextureLoader * _textureLoader;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
    struct __CVBuffer { } * _texture_RGBA;
    struct __CVBuffer { } * _texture_YUV_Chroma;
    struct __CVBuffer { } * _texture_YUV_Luma;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDebugDrawing;
@property (nonatomic) bool flipX;
@property (nonatomic) bool flipY;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (readonly) Class superclass;

+ (id)buildRenderPipelineWithLabel:(id)arg1 vertexFunction:(id)arg2 fragmentFunction:(id)arg3 device:(id)arg4 view:(id)arg5 error:(id*)arg6;
+ (id)buildSamplerStateWithDevice:(id)arg1 addressMode:(unsigned long long)arg2 filter:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)JTImageMTKView_commonInit;
- (void)cleanupTextureCache;
- (void)cleanupTextures;
- (void)configureRenderPipelineForColorAttachments:(void*)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)enableDebugDrawing;
- (bool)flipX;
- (bool)flipY;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (id)jtImage;
- (void)layoutSubviews;
- (long long)renderingType;
- (void)setContentMode:(long long)arg1;
- (void)setEnableDebugDrawing:(bool)arg1;
- (void)setFlipX:(bool)arg1;
- (void)setFlipY:(bool)arg1;
- (void)setJtImage:(id)arg1;
- (void)setRenderingType:(long long)arg1;
- (void)setupTextureCache;
- (void)updateDebugDrawing;
- (void)updateTexture;
- (void)updateVertices;

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
