<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCH3DFill.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCH3DFill.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCH3DFill : TSDFill {
    TSDFill * _cachedImageFill;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedImageFillSize;
    TSDFill * _fallbackFill;
    TSCH3DFillSetIdentifier * _identifier;
    TSCH3DLightingModel * _lightingModel;
    NSNumber * _percentage;
    TSDFill * _swatchFill;
}

@property (nonatomic, retain) TSCH3DFillSetIdentifier *identifier;
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (nonatomic, retain) NSNumber *percentage;
@property (nonatomic, readonly) float percentageValue;
@property (readonly) TSDFill *swatchFill;

+ (id)fill;
+ (id)fillWithIdentifier:(id)arg1;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)fillWithSageFillData:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;

- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (int)fillType;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)identifier;
- (bool)identifierReferencesUnavailableLocalBundle;
- (id)init;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOpaque;
- (id)lightenByPercent:(float)arg1;
- (id)lightingModel;
- (void)nonatomicallyClearLightingModel;
- (void)nonatomicallySetLightingModel:(id)arg1;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)p_imageFillForSize:(struct CGSize { double x1; double x2; })arg1 context:(id)arg2;
- (id)p_lazyLightingModel;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(bool)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)percentage;
- (float)percentageValue;
- (id)referenceColor;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (id)representativeDiffuseColor;
- (id)sageFillData;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setFallbackFill:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPercentage:(id)arg1;
- (id)swatchFill;
- (bool)tsch_hasAllResources;

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
