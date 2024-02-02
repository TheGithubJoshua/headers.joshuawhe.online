<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKTexture.h</title>
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

/Frameworks/SpriteKit.framework/SKTexture.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit (1)
 */

@interface SKTexture : NSObject <NSCopying, NSSecureCoding> {
    int  _alignment;
    unsigned int * _alphaMap;
    struct CGSize { 
        double width; 
        double height; 
    }  _alphaMapSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cropOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cropScale;
    bool  _didGenerateMipmaps;
    bool  _disableAlpha;
    CIFilter * _filter;
    NSString * _imgName;
    bool  _isData;
    bool  _isFlipped;
    bool  _isPath;
    bool  _isRepeatable;
    bool  _isRotated;
    bool  _needsExtrusionWorkaround;
    NSString * _originalAtlasName;
    SKTexture * _originalTexture;
    bool  _performFullCapture;
    SKTextureAtlas * _rootAtlas;
    int  _rowLength;
    NSArray * _searchPaths;
    bool  _shouldGenerateMipmaps;
    NSString * _subTextureName;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textCoords;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textRect;
    SKTextureCache * _textureCache;
    NSObject<OS_dispatch_queue> * _textureSyncQueue;
    unsigned int  _textureTarget;
}

@property (nonatomic, readonly) unsigned int*alphaMap;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } alphaMapSize;
@property (nonatomic) struct CGPoint { double x1; double x2; } cropOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } cropScale;
@property (nonatomic) long long filteringMode;
@property (nonatomic, readonly) bool hasAlpha;
@property (nonatomic, readonly) NSString *imageNameOrPath;
@property (nonatomic) bool isFlipped;
@property (nonatomic, readonly) bool isRepeatable;
@property (nonatomic) bool isRotated;
@property (getter=_needsExtrusionWorkaround, nonatomic) bool needsExtrusionWorkaround;
@property (nonatomic, copy) NSString *originalAtlasName;
@property bool performFullCapture;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, retain) SKTextureAtlas *rootAtlas;
@property (nonatomic, copy) NSString *subTextureName;
@property (nonatomic) unsigned int textureTarget;
@property (nonatomic) bool usesMipmaps;
@property (nonatomic) int wrapMode;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)_cachedTextureNames;
+ (void)_reloadTextureCacheForImageNamed:(id)arg1;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)_textureWithImageNamed:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1;
+ (id)compressedTextureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 bitsPerPixel:(unsigned int)arg3 hasAlpha:(bool)arg4;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (id)preloadQueue;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)textureNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2 grayscale:(bool)arg3;
+ (id)textureVectorNoiseWithSmoothness:(double)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 flipped:(bool)arg3;
+ (id)textureWithData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithIOSurfaceID:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 format:(unsigned int)arg4;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)textureWithMetalTexture:(id)arg1;
+ (id)textureWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTexture:(id)arg2;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })_backingTexture;
- (int)_convert_jet_texture_format_to_ci_format:(unsigned int)arg1;
- (id)_copyImageData;
- (struct CGImage { }*)_createCGImage;
- (void)_ensureImageData;
- (id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)_needsExtrusionWorkaround;
- (struct CGImage { }*)_newTextureFromGLCache;
- (void)_savePngFromGLCache:(id)arg1;
- (void)_setImageName:(id)arg1;
- (id)_textureCache;
- (unsigned int*)alphaMap;
- (struct CGSize { double x1; double x2; })alphaMapSize;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })cropOffset;
- (struct CGPoint { double x1; double x2; })cropScale;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringMode;
- (int)glTextureId;
- (bool)hasAlpha;
- (id)imageNameOrPath;
- (id)imgName;
- (id)init;
- (void)initTextureCacheWithImageData;
- (id)initWithBackingTetxure:(struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithBackingTetxure:(struct shared_ptr<jet_texture> { struct jet_texture {} *x1; struct __shared_weak_count {} *x2; })arg1 logicalWidth:(float)arg2 height:(float)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (bool)isEqualToTexture:(id)arg1;
- (bool)isFlipped;
- (bool)isRepeatable;
- (bool)isRotated;
- (void)loadImageData;
- (void)loadImageDataFromCGImage:(struct CGImage { }*)arg1 pointsSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)loadImageDataFromPVRData:(id)arg1;
- (bool)loadImageDataFromPVRGZData:(id)arg1;
- (id)metalTexture;
- (id)originalAtlasName;
- (bool)performFullCapture;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)preloadWithCompletionHandler:(id /* block */)arg1;
- (id)rootAtlas;
- (void)setCropOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCropScale:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFilteringMode:(long long)arg1;
- (void)setIsData:(bool)arg1;
- (void)setIsFlipped:(bool)arg1;
- (void)setIsRotated:(bool)arg1;
- (void)setNeedsExtrusionWorkaround:(bool)arg1;
- (void)setOriginalAtlasName:(id)arg1;
- (void)setPerformFullCapture:(bool)arg1;
- (void)setRootAtlas:(id)arg1;
- (void)setSubTextureName:(id)arg1;
- (void)setTextureDimension:(const struct CGSize { double x1; double x2; }*)arg1 withPixelSize:(const struct CGSize { double x1; double x2; }*)arg2;
- (void)setTextureTarget:(unsigned int)arg1;
- (void)setUsesMipmaps:(bool)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)subTextureName;
- (id)textureByApplyingCIFilter:(id)arg1;
- (id)textureByGeneratingNormalMap;
- (id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textureRect;
- (unsigned int)textureTarget;
- (bool)usesMipmaps;
- (int)wrapMode;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

+ (id)textureWithNoiseMap:(id)arg1;

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