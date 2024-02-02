<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTTableStyle.h</title>
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

/PrivateFrameworks/TSReading.framework/TSTTableStyle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSTTableStyle : TSSStyle <TSDMixing, TSTTableStrokeProviding>

@property (nonatomic, readonly) TSDStroke *bodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *bodyRowStroke;
@property (nonatomic, readonly) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (nonatomic, readonly) TSDStroke *categoryLevel1BottomStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel1InteriorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel1TopStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel2BottomStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel2InteriorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel2TopStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel3BottomStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel3InteriorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel3TopStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel4BottomStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel4InteriorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel4TopStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel5BottomStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel5InteriorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *categoryLevel5TopStroke;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TSDStroke *defaultHorizontalBorderStroke;
@property (nonatomic, readonly) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (nonatomic, readonly) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSDStroke *footerRowBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *footerRowBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *footerRowBorderStroke;
@property (nonatomic, readonly) TSDStroke *footerRowSeparatorStroke;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSDStroke *headerColumnBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnBorderStroke;
@property (nonatomic, readonly) TSDStroke *headerColumnSeparatorStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBodyColumnStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBodyRowStroke;
@property (nonatomic, readonly) TSDStroke *headerRowBorderStroke;
@property (nonatomic, readonly) TSDStroke *headerRowSeparatorStroke;
@property (readonly) Class superclass;

+ (int)defaultIntValueForProperty:(int)arg1;
+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3;
+ (id)nonEmphasisTableProperties;
+ (unsigned long long)presetIDForStyleID:(id)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)arg1;

- (id)bodyColumnStroke;
- (id)bodyRowStroke;
- (id)bodyRowStrokeEvenIfNotVisible;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)categoryLevel1BottomStroke;
- (id)categoryLevel1InteriorStroke;
- (id)categoryLevel1LabelSeparatorStroke;
- (id)categoryLevel1TopStroke;
- (id)categoryLevel2BottomStroke;
- (id)categoryLevel2InteriorStroke;
- (id)categoryLevel2LabelSeparatorStroke;
- (id)categoryLevel2TopStroke;
- (id)categoryLevel3BottomStroke;
- (id)categoryLevel3InteriorStroke;
- (id)categoryLevel3LabelSeparatorStroke;
- (id)categoryLevel3TopStroke;
- (id)categoryLevel4BottomStroke;
- (id)categoryLevel4InteriorStroke;
- (id)categoryLevel4LabelSeparatorStroke;
- (id)categoryLevel4TopStroke;
- (id)categoryLevel5BottomStroke;
- (id)categoryLevel5InteriorStroke;
- (id)categoryLevel5LabelSeparatorStroke;
- (id)categoryLevel5TopStroke;
- (id)defaultHorizontalBorderStroke;
- (id)defaultHorizontalBorderStrokeEvenIfNotVisible;
- (id)defaultVerticalBorderStroke;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)footerRowBodyColumnStroke;
- (id)footerRowBodyRowStroke;
- (id)footerRowBorderStroke;
- (id)footerRowSeparatorStroke;
- (id)headerColumnBodyColumnStroke;
- (id)headerColumnBodyRowStroke;
- (id)headerColumnBorderStroke;
- (id)headerColumnSeparatorStroke;
- (id)headerRowBodyColumnStroke;
- (id)headerRowBodyRowStroke;
- (id)headerRowBorderStroke;
- (id)headerRowSeparatorStroke;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<3> { unsigned int x_3_1_1[3]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct FillArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; struct Deprecated_TableStrokeArchive {} *x16; struct Deprecated_TableStrokeArchive {} *x17; struct Deprecated_TableStrokeArchive {} *x18; struct Deprecated_TableStrokeArchive {} *x19; struct Deprecated_TableStrokeArchive {} *x20; struct Deprecated_TableStrokeArchive {} *x21; }*)arg2 unarchiver:(id)arg3;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<3> { unsigned int x_3_1_1[3]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct FillArchive {} *x6; struct Deprecated_TableStrokeArchive {} *x7; struct Deprecated_TableStrokeArchive {} *x8; struct Deprecated_TableStrokeArchive {} *x9; struct Deprecated_TableStrokeArchive {} *x10; struct Deprecated_TableStrokeArchive {} *x11; struct Deprecated_TableStrokeArchive {} *x12; struct Deprecated_TableStrokeArchive {} *x13; struct Deprecated_TableStrokeArchive {} *x14; struct Deprecated_TableStrokeArchive {} *x15; struct Deprecated_TableStrokeArchive {} *x16; struct Deprecated_TableStrokeArchive {} *x17; struct Deprecated_TableStrokeArchive {} *x18; struct Deprecated_TableStrokeArchive {} *x19; struct Deprecated_TableStrokeArchive {} *x20; struct Deprecated_TableStrokeArchive {} *x21; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (void)validate;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

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