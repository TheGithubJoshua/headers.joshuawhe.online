<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSWPEquationInfo.h</title>
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

/PrivateFrameworks/TSReading.framework/TSWPEquationInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider> {
    double  _depth;
    EQKitEquation * _equation;
    TSPData * _pdfImage;
    NSString * _source;
    TSSPropertyMap * _textProperties;
}

@property (nonatomic) double depth;
@property (nonatomic, retain) EQKitEquation *equation;
@property (nonatomic, retain) TSPData *pdfImage;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, retain) TSSPropertyMap *textProperties;

+ (bool)archiveHasEquationSource:(id)arg1;
+ (id)defaultTextProperties;
+ (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
+ (id)eqKitEquationWithWithContext:(id)arg1 source:(id)arg2 error:(id*)arg3;
+ (id)equationAttachmentWithEquationAttachment:(id)arg1;
+ (id)equationInfoWithContext:(id)arg1 equationInfo:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4;
+ (id)equationInfoWithContext:(id)arg1 string:(id)arg2 textStorage:(id)arg3 charIndex:(unsigned long long)arg4;
+ (id)filteredTextPropertiesFromTextProperties:(id)arg1;
+ (id)fontNameFromTextProperties:(id)arg1;
+ (id)propertiesForChangePropagation;
+ (id)propertiesForStorage:(id)arg1 characterIndex:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (bool)canAdjustImage;
- (bool)canAnchor;
- (bool)canAspectRatioLockBeChangedByUser;
- (bool)canBeMasked;
- (bool)canBeMediaPlaceholder;
- (bool)canChangeWrapType;
- (bool)canResetMediaSize;
- (id)copyWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultOriginalSize;
- (double)depth;
- (id)description;
- (id)descriptionForDrawableAttachment:(id)arg1;
- (void)didFinalizeUnarchivingFromWPStorage:(id)arg1;
- (int)elementKind;
- (id)equation;
- (id)imageDataWithObjectContext:(id)arg1;
- (id)initWithContext:(id)arg1 string:(id)arg2 filteredTextProperties:(id)arg3 equation:(id)arg4 pdfImageData:(id)arg5 depth:(double)arg6 geometry:(id)arg7 style:(id)arg8;
- (id)initWithContext:(id)arg1 string:(id)arg2 textProperties:(id)arg3;
- (bool)isSelectable;
- (Class)layoutClass;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct Color {} *x9; struct Color {} *x10; struct ShadowArchive {} *x11; struct Color {} *x12; struct Color {} *x13; struct Color {} *x14; float x15; bool x16; bool x17; bool x18; bool x19; int x20; int x21; int x22; int x23; float x24; float x25; int x26; bool x27; }*)arg2 unarchiver:(id)arg3;
- (void)loadFromArchive:(const struct ImageArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct DrawableArchive {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Size {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Size {} *x13; struct Path {} *x14; struct DataReference {} *x15; struct DataReference {} *x16; struct DataReference {} *x17; struct ImageAdjustmentsArchive {} *x18; struct DataReference {} *x19; struct DataReference {} *x20; struct DataReference {} *x21; struct Path {} *x22; }*)arg1 unarchiver:(id)arg2;
- (bool)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (bool)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 isAnchoredOrFloating:(bool)arg3;
- (void)p_rebuildEquationPDF;
- (id)pdfImage;
- (id)promisedDataForType:(id)arg1;
- (id)propertiesForParentAttachment;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (Class)repClass;
- (void)replaceSourceWithNewSource:(id)arg1;
- (void)saveCharacterStylePropertiesFromPropertyMap:(id)arg1 toArchive:(struct CharacterStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct Color {} *x9; struct Color {} *x10; struct ShadowArchive {} *x11; struct Color {} *x12; struct Color {} *x13; struct Color {} *x14; float x15; bool x16; bool x17; bool x18; bool x19; int x20; int x21; int x22; int x23; float x24; float x25; int x26; bool x27; }*)arg2 archiver:(id)arg3;
- (void)saveToArchive:(struct ImageArchive { int (**x1)(); struct ExtensionSet { struct Arena {} *x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; union AllocatedData { struct KeyValue {} *x_4_2_1; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > {} *x_4_2_2; } x_2_1_4; } x2; struct InternalMetadataWithArena { void *x_3_1_1; } x3; struct HasBits<1> { unsigned int x_4_1_1[1]; } x4; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_5_1_1; } x5; struct DrawableArchive {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Size {} *x9; struct Reference {} *x10; struct Reference {} *x11; struct Reference {} *x12; struct Size {} *x13; struct Path {} *x14; struct DataReference {} *x15; struct DataReference {} *x16; struct DataReference {} *x17; struct ImageAdjustmentsArchive {} *x18; struct DataReference {} *x19; struct DataReference {} *x20; struct DataReference {} *x21; struct Path {} *x22; }*)arg1 archiver:(id)arg2;
- (void)setDepth:(double)arg1;
- (void)setEquation:(id)arg1;
- (void)setPdfImage:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTextProperties:(id)arg1;
- (id)source;
- (bool)supportsStyleInspecting;
- (id)textProperties;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2;
- (void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 isAnchoredOrFloating:(bool)arg3;
- (void)updateTextProperties:(id)arg1;
- (void)willChangeProperty:(int)arg1;

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