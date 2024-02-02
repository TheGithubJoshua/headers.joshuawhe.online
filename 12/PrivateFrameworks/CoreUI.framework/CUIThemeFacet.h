<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUIThemeFacet.h</title>
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

/PrivateFrameworks/CoreUI.framework/CUIThemeFacet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI (499.12)
 */

@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCoding, NSCopying> {
    struct { 
        unsigned int hasCheckedButtonGlyph : 1; 
        unsigned int isButtonGlyph : 1; 
        unsigned int reserved : 14; 
    }  _fFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hotSpot;
    int  _isTintable;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _renditionKeyList;
    long long  _renditionType;
    unsigned long long  _themeIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_facetWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
+ (void)_invalidateArtworkCaches;
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;
+ (bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (void)initialize;
+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id*)arg2;
+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3;
+ (void)themeUnregisterThemeRef:(unsigned long long)arg1;
+ (unsigned long long)themeWithBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (void)_applyFixedAttributesToKey:(id)arg1;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 context:(struct CGContext { }*)arg6;
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withKeyAdjustment:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(int)arg6 isFlipped:(bool)arg7 effects:(id)arg8;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3 isFocused:(int)arg4 isFlipped:(bool)arg5 effects:(id)arg6;
- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(int)arg7 isFlipped:(bool)arg8 effects:(id)arg9;
- (struct CGPoint { double x1; double x2; })_hotSpot;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 isMask:(bool)arg3;
- (void)_initWithRenditionKey:(id)arg1;
- (bool)_isButtonGlyph;
- (id)_makeLayerFromCAPackageData;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (void)_setHasCheckedButtonGlyph:(bool)arg1;
- (void)_setIsButtonGlyph:(bool)arg1;
- (void)_setThemeIndex:(unsigned long long)arg1;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;
- (id)_themeStore;
- (struct CGSize { double x1; double x2; })_thumbnailSizeForRendition:(id)arg1;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(bool*)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (double)alpha;
- (double)alphaWithKeyAdjustment:(id)arg1;
- (int)blendMode;
- (id)blendModeAsCAFilterString;
- (id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg1;
- (int)blendModeWithKeyAdjustment:(id)arg1;
- (long long)controlSize;
- (struct CGImage { }*)copyLayerImageContentsAndCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (struct CGImage { }*)copyLayerImageContentsAndCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 renditionKey:(id)arg2;
- (struct CGImage { }*)copySegmentLayerContents:(int)arg1 andCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 leftSeparatorWidth:(double)arg3 rightSeparatorWidth:(double)arg4 renditionKey:(id)arg5 effects:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4 effects:(id)arg5;
- (void)drawGradientInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(int)arg5 keyAdjustment:(id)arg6 context:(struct CGContext { }*)arg7 effects:(id)arg8;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 keyAdjustment:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawHighlightInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 isFocused:(int)arg3 context:(struct CGContext { }*)arg4 effects:(id)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 context:(struct CGContext { }*)arg5 effects:(id)arg6;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFocused:(int)arg2 context:(struct CGContext { }*)arg3;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFocused:(int)arg2 context:(struct CGContext { }*)arg3 effects:(id)arg4;
- (void)drawInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext { }*)arg6;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawMaskInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawPulseInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pulseValue:(double)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawPulseInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext { }*)arg5;
- (void)drawSegmentInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isFocused:(int)arg2 segmentType:(int)arg3 context:(struct CGContext { }*)arg4 effects:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double*)arg2 style:(unsigned long long*)arg3;
- (bool)hasValueSlices;
- (id)highlightWithSize:(struct CGSize { double x1; double x2; })arg1 keyAdjustment:(id)arg2;
- (bool)hitTestAtPoint:(struct CGPoint { double x1; double x2; })arg1 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 owner:(id)arg3 userInfo:(id)arg4;
- (id)image;
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)imageForSliceIndex:(long long)arg1;
- (id)imageForState:(long long)arg1;
- (id)imageForState:(long long)arg1 value:(long long)arg2;
- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageWithKeyAdjustment:(id)arg1;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1 keyAdjustment:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
- (bool)isTintable;
- (bool)isValidButtonImageSource;
- (bool)isValidButtonImageSourceForSize:(unsigned long long)arg1;
- (id)makeLayer;
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)maskWithSize:(struct CGSize { double x1; double x2; })arg1 keyAdjustment:(id)arg2;
- (id)properties;
- (id)renditionForSpecificKeyWrapper:(id)arg1;
- (id)renditionKey;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyAdjustment:(id)arg2;
- (long long)renditionType;
- (void)setControlSize:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForSegmentOfType:(int)arg1;
- (unsigned long long)themeIndex;
- (id)themeRendition;
- (id)thumbnail;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (struct CGSize { double x1; double x2; })topLeftCapSize;
- (void)updateLayer:(id)arg1;
- (void)updateLayer:(id)arg1 effects:(id)arg2;

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