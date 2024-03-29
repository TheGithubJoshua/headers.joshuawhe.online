<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDShadow.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDShadow.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDShadow : NSObject <NSCopying, NSMutableCopying, TSDMixing, TSSPreset, TSSPresetSource, TSSPropertyValueArchiving> {
    double  mAngle;
    TSUColor * mColor;
    bool  mEnabled;
    double  mOffset;
    double  mOpacity;
    double  mRadius;
}

@property (nonatomic, readonly) double angle;
@property (nonatomic, readonly, copy) TSUColor *color;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offsetDelta;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) NSString *presetKind;
@property (nonatomic, readonly) double radius;

+ (bool)automaticallyNotifiesObserversOfTSUColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (bool)canMixWithNilObjects;
+ (id)contactShadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 height:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(bool)arg7;
+ (id)curvedShadowWithOffset:(double)arg1 angle:(double)arg2 radius:(double)arg3 curve:(double)arg4 opacity:(double)arg5 color:(id)arg6 enabled:(bool)arg7;
+ (id)defaultDisabledShadow;
+ (id)defaultShadow;
+ (id)instanceWithArchive:(const struct ShadowArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct Color {} *x5; struct DropShadowArchive {} *x6; struct ContactShadowArchive {} *x7; struct CurvedShadowArchive {} *x8; int x9; bool x10; float x11; float x12; int x13; float x14; }*)arg1 unarchiver:(id)arg2;
+ (id)keyPathsForValuesAffectingTSUColor;
+ (id)mixableObjectClasses;
+ (id)p_defaultShadowEnabled:(bool)arg1;
+ (id)presetKinds;
+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(bool)arg6;
+ (id)shadowWithNSShadow:(id)arg1;

- (id)NSShadow;
- (double)angle;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 flipped:(bool)arg3;
- (void)applyToContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 flipped:(bool)arg3 extraOffset:(struct CGSize { double x1; double x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForRep:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInNaturalSpaceForRep:(id)arg1;
- (double)clampOffset:(double)arg1;
- (double)clampOpacity:(double)arg1;
- (double)clampRadius:(double)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)differenceRequiresRebuilding:(id)arg1;
- (unsigned long long)hash;
- (id)i_initWithOpacity:(double)arg1 color:(id)arg2 enabled:(bool)arg3;
- (struct CGImage { }*)i_newEmptyImage;
- (id)initWithArchive:(const struct ShadowArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct Color {} *x5; struct DropShadowArchive {} *x6; struct ContactShadowArchive {} *x7; struct CurvedShadowArchive {} *x8; int x9; bool x10; float x11; float x12; int x13; float x14; }*)arg1 unarchiver:(id)arg2;
- (bool)isContactShadow;
- (bool)isCurvedShadow;
- (bool)isDropShadow;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)mixedBaseObjectWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newShadowClampedForSwatches;
- (struct CGImage { }*)newShadowImageForRep:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 drawSelector:(SEL)arg3 unflipped:(bool)arg4;
- (double)offset;
- (struct CGPoint { double x1; double x2; })offsetDelta;
- (double)opacity;
- (id)presetKind;
- (double)radius;
- (void)saveToArchive:(struct ShadowArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct Color {} *x5; struct DropShadowArchive {} *x6; struct ContactShadowArchive {} *x7; struct CurvedShadowArchive {} *x8; int x9; bool x10; float x11; float x12; int x13; float x14; }*)arg1 archiver:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalAngle:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shadowBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 additionalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)shadowByTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (unsigned long long)shadowType;
- (bool)showForEditingText;
- (id)typeDescription;

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
