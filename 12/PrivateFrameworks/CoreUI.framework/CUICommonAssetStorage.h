<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUICommonAssetStorage.h</title>
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

/PrivateFrameworks/CoreUI.framework/CUICommonAssetStorage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI (499.12)
 */

@interface CUICommonAssetStorage : NSObject {
    void * _appearancedb;
    void * _bitmapKeydb;
    void * _colordb;
    struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; } * _extendedMetadata;
    NSSet * _externalTags;
    void * _facetKeysdb;
    void * _fontdb;
    void * _fontsizedb;
    NSData * _globals;
    struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } * _header;
    void * _imagedb;
    unsigned int  _isMemoryMapped;
    struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } * _keyfmt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _renditionInfoCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _renditionInfoCacheLock;
    unsigned short  _renditionInfoCacheLookup;
    unsigned int  _reserved;
    unsigned int  _swap;
    void * _zcbezeldb;
    void * _zcglyphdb;
}

@property (nonatomic) void*appearancedb;
@property (nonatomic) void*bitmapKeydb;
@property (nonatomic) void*colordb;
@property (nonatomic) struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*extendedMetadata;
@property (nonatomic) void*facetKeysdb;
@property (nonatomic) void*fontdb;
@property (nonatomic) void*fontsizedb;
@property (nonatomic) NSData *globals;
@property (nonatomic) struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*header;
@property (nonatomic) void*imagedb;
@property (nonatomic) struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*keyfmt;
@property (nonatomic) void*zcbezeldb;
@property (nonatomic) void*zcglyphdb;

+ (void)initialize;
+ (bool)isValidAssetStorageWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (bool)isValidAssetStorageWithURL:(id)arg1;

- (void)_addBitmapIndexForNameIdentifier:(unsigned short)arg1 attribute:(int)arg2 withValue:(unsigned short)arg3 toDictionary:(id)arg4;
- (struct _BOMStorage { }*)_bomStorage;
- (void)_bringHeaderInfoUpToDate;
- (void)_buildBitmapInfoIntoDictionary:(id)arg1;
- (bool)_commonInitWithStorage:(struct _BOMStorage { }*)arg1 forWritting:(bool)arg2;
- (const struct FontValue { BOOL x1[128]; float x2; }*)_fontValueForFontType:(id)arg1;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (void)_loadExtendedMetadata;
- (long long)_storagefileTimestamp;
- (void)_swapHeader;
- (void)_swapKeyFormat;
- (void)_swapRenditionKeyArray:(unsigned short*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; })_swapRenditionKeyToken:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; })arg1;
- (void)_swapZeroCodeInformation:(struct { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_zeroCodeListFromTree:(const void*)arg1;
- (id)allAssetKeys;
- (id)allRenditionNames;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (void*)appearancedb;
- (id)appearances;
- (bool)assetExistsForKey:(id)arg1;
- (bool)assetExistsForKeyData:(const void*)arg1 length:(unsigned long long)arg2;
- (id)assetForKey:(id)arg1;
- (id)assetKeysMatchingBlock:(id /* block */)arg1;
- (unsigned int)associatedChecksum;
- (id)authoringTool;
- (void*)bitmapKeydb;
- (id)catalogGlobalData;
- (unsigned int)colorSpaceID;
- (void*)colordb;
- (unsigned int)coreuiVersion;
- (void)dealloc;
- (id)deploymentPlatform;
- (id)deploymentPlatformVersion;
- (id)description;
- (void)enumerateBitmapIndexUsingBlock:(id /* block */)arg1;
- (bool)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithoutIgnoringUsingBlock:(id /* block */)arg1;
- (struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*)extendedMetadata;
- (id)externalTags;
- (void*)facetKeysdb;
- (float)fontSizeForFontSizeType:(id)arg1;
- (void*)fontdb;
- (void*)fontsizedb;
- (bool)getBaselineOffset:(float*)arg1 forFontType:(id)arg2;
- (bool)getColor:(struct _colordef { unsigned int x1; unsigned int x2; struct _rgbquad { unsigned int x_3_1_1 : 8; unsigned int x_3_1_2 : 8; unsigned int x_3_1_3 : 8; unsigned int x_3_1_4 : 8; } x3; }*)arg1 forName:(const char *)arg2;
- (bool)getFontName:(id*)arg1 baselineOffset:(float*)arg2 forFontType:(id)arg3;
- (id)globals;
- (bool)hasColorForName:(const char *)arg1;
- (struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)header;
- (void*)imagedb;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 forWriting:(bool)arg2;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyfmt;
- (struct os_unfair_lock_s { unsigned int x1; }*)lock;
- (const char *)mainVersionString;
- (long long)maximumRenditionKeyTokenCount;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (id)path;
- (unsigned int)renditionCount;
- (struct os_unfair_lock_s { unsigned int x1; }*)renditionInfoCacheLock;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)renditionNameForKeyBaseList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (id)renditionNameForKeyList:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (unsigned int)schemaVersion;
- (void)setAppearancedb:(void*)arg1;
- (void)setBitmapKeydb:(void*)arg1;
- (void)setColordb:(void*)arg1;
- (void)setExtendedMetadata:(struct _carextendedMetadata { unsigned int x1; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; BOOL x5[256]; }*)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFacetKeysdb:(void*)arg1;
- (void)setFontdb:(void*)arg1;
- (void)setFontsizedb:(void*)arg1;
- (void)setGlobals:(id)arg1;
- (void)setHeader:(struct _carheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6[128]; BOOL x7[256]; unsigned char x8[16]; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; }*)arg1;
- (void)setImagedb:(void*)arg1;
- (void)setKeyfmt:(struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (void)setZcbezeldb:(void*)arg1;
- (void)setZcglyphdb:(void*)arg1;
- (long long)storageTimestamp;
- (unsigned int)storageVersion;
- (bool)swapped;
- (id)thinningArguments;
- (void)updateTimestamp;
- (bool)usesCUISystemThemeRenditionKey;
- (id)uuid;
- (int)validateBitmapInfo;
- (int)validatekeyformat;
- (const char *)versionString;
- (void*)zcbezeldb;
- (void*)zcglyphdb;
- (id)zeroCodeBezelList;
- (id)zeroCodeGlyphList;

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
