<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGLMotionBlurEffect.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDGLMotionBlurEffect.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGLMotionBlurEffect : NSObject {
    <TSDGLDataBuffer> * _FBODataBuffer;
    TSDGLState * _GLState;
    <TSDGLDataBuffer> * _colorFBODataBuffer;
    TSDGLFrameBuffer * _colorFramebuffer;
    TSDGLFrameBuffer * _combinedFramebuffer;
    long long  _debugDrawMode;
    TSDGLShader * _defaultTextureShader;
    double  _framebufferScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _framebufferSize;
    bool  _isSingleObject;
    double  _motionBlurStrength;
    int  _originalViewport;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _slideSize;
    TSDGLShader * _velocityCollectionShader;
    <TSDGLDataBuffer> * _velocityFBODataBuffer;
    TSDGLFrameBuffer * _velocityFramebuffer;
    TSDGLShader * _velocityNeighborMaxHorizontalShader;
    TSDGLShader * _velocityNeighborMaxVerticalShader;
    <TSDGLDataBuffer> * _velocitySquashedFBODataBuffer;
    TSDGLShader * _velocityTileMaxHorizontalShader;
    TSDGLShader * _velocityTileMaxVerticalShader;
    TSDGLShader * _velocityVisualizerShader;
}

@property (nonatomic, retain) TSDGLState *GLState;
@property (nonatomic) long long debugDrawMode;
@property (nonatomic) double framebufferScale;
@property (nonatomic) bool isSingleObject;
@property (nonatomic) double motionBlurStrength;

- (id)GLState;
- (void)bindColorAndVelocityFramebuffer;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)dealloc;
- (long long)debugDrawMode;
- (id)description;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (double)framebufferScale;
- (id)initWithFramebufferSize:(struct CGSize { double x1; double x2; })arg1 slideSize:(struct CGSize { double x1; double x2; })arg2 randomGenerator:(id)arg3;
- (bool)isSingleObject;
- (double)motionBlurStrength;
- (void)p_blitIntoColorFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_blitIntoVelocityFramebufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupShaders;
- (void)p_setupVelocityFramebufferIfNecessary;
- (struct CGSize { double x1; double x2; })p_squashedVelocityFramebufferSize;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(bool)arg2;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferSize;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferTextureScale;
- (void)setDebugDrawMode:(long long)arg1;
- (void)setFramebufferScale:(double)arg1;
- (void)setGLState:(id)arg1;
- (void)setIsSingleObject:(bool)arg1;
- (void)setMotionBlurStrength:(double)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)updateVelocityScaleInShader:(id)arg1;
- (struct CGSize { double x1; double x2; })velocityScaleForColorFBO:(bool)arg1;

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