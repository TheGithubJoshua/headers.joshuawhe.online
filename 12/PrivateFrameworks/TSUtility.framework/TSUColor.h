<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSUColor.h</title>
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

/PrivateFrameworks/TSUtility.framework/TSUColor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSUColor : NSObject <NSCopying, TSSPreset, TSSPresetSource, TSSPropertyCommandSerializing, TSSPropertyValueArchiving> {
    struct CGColor { } * mCGColor;
    unsigned long long  mColorRGBSpace;
}

@property (readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) UIColor *UIColor;
@property (nonatomic, readonly) double alphaComponent;
@property (nonatomic, readonly) double blueComponent;
@property (nonatomic, readonly) unsigned long long colorRGBSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSUColor *grayscaleColor;
@property (nonatomic, readonly) double greenComponent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hexString;
@property (nonatomic, readonly) TSUColor *invertedColor;
@property (nonatomic, readonly) bool isNearlyWhite;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) double redComponent;
@property (readonly) Class superclass;

+ (id)blackColor;
+ (id)blueColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)highContrastBackgroundColorForPreset:(id)arg1;
+ (id)instanceWithArchive:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)presetKinds;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)tsd_darkInsertSwatchBackgroundColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (double)alphaComponent;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (double)blueComponent;
- (double)brightnessComponent;
- (id)colorByCompositingSourceOverDestinationColor:(id)arg1;
- (unsigned long long)colorRGBSpace;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(double*)arg1;
- (id)grayscaleColor;
- (double)greenComponent;
- (bool)hasSimilarLuminanceToOtherColor:(id)arg1 minRatio:(double)arg2 maxRatio:(double)arg3;
- (unsigned long long)hash;
- (id)hexString;
- (double)hueComponent;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct Color { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; float x15; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1 colorSpace:(unsigned long long)arg2;
- (id)initWithHexString:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithMessage:(const struct Color { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; float x15; }*)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)invertedColor;
- (bool)isAlmostEqualToColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWithTolerance:(id)arg1;
- (bool)isNearlyWhite;
- (bool)isOpaque;
- (double)luminance;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)p_colorForComparingWithColor:(id)arg1;
- (bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)presetKind;
- (double)redComponent;
- (bool)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1;
- (double)saturationComponent;
- (void)saveToArchive:(struct Color { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; float x15; }*)arg1 archiver:(id)arg2;
- (void)saveToMessage:(struct Color { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; int x13; int x14; float x15; }*)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;

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