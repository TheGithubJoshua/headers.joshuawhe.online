<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TDreamManager.h</title>
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

/PrivateFrameworks/ProVideo.framework/TDreamManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface TDreamManager : NSObject {
    float  AUX1INPUT;
    float  AUX2INPUT;
    float  AUX3INPUT;
    float  BRIGHTNESSPARAM;
    float  LOOSEPARAM;
    int  QUANTIZE_LEVELS;
    float  SMOOTHPARAM;
    NSMutableDictionary * _contextProgramMap;
    float  coloresDobles;
    float  coloresVignette;
    float  coloresVignetteLookUpsBN;
    float  coloresVignetteLookUpsEspeciales;
    float  coloresVignetteLookUpsNORMALES;
    float  false1B;
    float  false1G;
    float  false1R;
    float  false2B;
    float  false2G;
    float  false2R;
    int  filterMode;
    TDreamFramebufferManager * framebufferManager;
    EAGLContext * glContext;
    float  inputAspectRatio;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  inputImage;
    struct CGSize { 
        double width; 
        double height; 
    }  inputTextureSize;
    struct CGSize { 
        double width; 
        double height; 
    }  largeUseSize;
    int  lookUpIndex;
    bool  lookUpTextureNeedUpdate;
    NSArray * lookups;
    NSArray * lookupsBN;
    NSArray * lookupsEE;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  maskImage;
    int  modeLookUps;
    int  oldFilterMode;
    struct IPImage { 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } fullRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } imageRect; 
        float xScale; 
        float yScale; 
        unsigned int textureID; 
        unsigned int textureTarget; 
        unsigned int textureInternalFormat; 
        unsigned int textureFormat; 
        unsigned int textureType; 
        unsigned int textureUnit; 
        unsigned int drawFBO; 
    }  outputImage;
    struct CGSize { 
        double width; 
        double height; 
    }  smallUseSize;
    struct CGSize { 
        double width; 
        double height; 
    }  smallUseSizeNoSmooth;
    float  vigneteB;
    float  vigneteBaux;
    float  vigneteG;
    float  vigneteGaux;
    float  vigneteR;
}

- (void).cxx_destruct;
- (void)addImageBufferToPool:(int)arg1 ipImage:(struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; })arg2;
- (void)allocatePrograms:(id)arg1;
- (unsigned int)bufferFromCacheNumber:(int)arg1;
- (bool)checkIPImage:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (bool)checkMaskIPImage:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1;
- (void)dealloc;
- (void)deleteAllFilters;
- (void)fillConstants;
- (unsigned int)getOutputBufferName;
- (id)glContext;
- (id)init;
- (int)largeBufferCount;
- (void)newLookUpFilterMode;
- (long long)processTextureOnTexture:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 andOutput:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg2 andParams:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg3;
- (long long)processTextureOnTexture:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 andOutput:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg2 andParams:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg3 withMask:(const struct IPImage { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; float x3; float x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg4;
- (id)programsForCurrentContext;
- (void)renderPipeline;
- (void)setBlackFillBasedOnSlider;
- (void)setUniformsAndParameters;
- (int)smallBufferCount;
- (unsigned int)textureFromCacheNumber:(int)arg1;
- (bool)updateParameters:(struct imageProcessingParams { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; })arg1;

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