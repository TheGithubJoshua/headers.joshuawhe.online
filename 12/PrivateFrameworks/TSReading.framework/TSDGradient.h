<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGradient.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDGradient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGradient : TSDFill <NSCopying, NSMutableCopying, TSDMixing, TSSPresetSource> {
    bool  mIsAdvancedGradient;
    double  mOpacity;
    struct CGShading { } * mShadingRef;
    NSMutableArray * mStops;
    unsigned long long  mType;
}

@property (nonatomic, readonly) TSUColor *firstColor;
@property (nonatomic, readonly, retain) NSArray *gradientStops;
@property (nonatomic, readonly) unsigned long long gradientType;
@property (nonatomic, readonly) bool hasAlpha;
@property (nonatomic, readonly) bool isAdvancedGradient;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) TSUColor *lastColor;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) struct CGShading { }*shadingRef;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)disableInflections;
+ (void)enableInflections;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)linearGradientWithGradientStops:(id)arg1;
+ (id)linearGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (id)presetKinds;
+ (id)radialGradientWithGradientStops:(id)arg1;
+ (id)radialGradientWithStartColor:(id)arg1 endColor:(id)arg2;
+ (void)sortStopsArray:(id)arg1;
+ (bool)useInflections;
+ (bool)useQuartzShadings;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })centeredRadialTransformInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGPoint { double x1; double x2; })endPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)fillType;
- (id)firstColor;
- (id)gradientStops;
- (unsigned long long)gradientType;
- (bool)hasAlpha;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithGradientStops:(id)arg1 type:(unsigned long long)arg2 opacity:(double)arg3;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned long long)arg3;
- (bool)isAdvancedGradient;
- (bool)isAdvancedGradientIgnoringFlag;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringTransform:(id)arg1;
- (bool)isOpaque;
- (id)lastColor;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newColorAtFraction:(double)arg1;
- (double)opacity;
- (struct CGContext { }*)p_beginBitmapWrapperContextInContext:(struct CGContext { }*)arg1 returningIntegralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)p_endBitmapWrapperContext:(struct CGContext { }*)arg1 inContext:(struct CGContext { }*)arg2 withIntegralBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)p_evenlyDistributeStops;
- (void)p_insertGradientStop:(id)arg1;
- (id)p_insertStopAtFraction:(double)arg1;
- (id)p_insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (void)p_moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)p_removeStop:(id)arg1;
- (id)p_removeStopAtIndex:(unsigned long long)arg1;
- (void)p_reverseStopOrder;
- (void)p_setAlpha:(struct CGContext { }*)arg1;
- (void)p_setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)p_setGradientStops:(id)arg1;
- (void)p_setGradientType:(unsigned long long)arg1;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)p_setIsAdvancedGradient:(bool)arg1;
- (void)p_setOpacity:(double)arg1;
- (void)p_swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 atAngle:(double)arg3;
- (id)presetKind;
- (id)referenceColor;
- (void)releaseShadingRef;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (struct CGShading { }*)shadingRef;
- (struct CGPoint { double x1; double x2; })startPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)stopAfterFraction:(double)arg1;
- (id)stopAtIndex:(unsigned long long)arg1;
- (id)stopBeforeFraction:(double)arg1;

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