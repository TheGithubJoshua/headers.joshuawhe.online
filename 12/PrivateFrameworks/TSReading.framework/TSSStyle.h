<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSSStyle.h</title>
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

/PrivateFrameworks/TSReading.framework/TSSStyle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSSStyle : TSPObject <NSCopying, TSKModel, TSKTransformableObject, TSSPropertySource, TSSPropertyValueValidator, TSSStyleClient, TSSStyleObject> {
    bool  mIsVariation;
    NSString * mName;
    TSSPropertyMap * mOverridePropertyMap;
    TSSStyle * mParent;
    NSString * mStyleIdentifier;
    TSSStylesheet * mStylesheet;
    bool  mWasUnarchivedAsOrphanVariation;
}

@property (nonatomic, readonly) TSSStyle *baseStyleForVariation;
@property (nonatomic, readonly) TSURetainedPointerSet *children;
@property (nonatomic, readonly) NSString *contentTag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) TSURetainedPointerSet *descendants;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSSStyle *firstIdentifiedAncestor;
@property (nonatomic, readonly) TSSStyle *firstNamedAncestor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIdentified;
@property (nonatomic, readonly) bool isNamed;
@property (nonatomic, readonly) bool isVariation;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSSPropertyMap *overridePropertyMap;
@property (nonatomic, readonly) TSSStyle *parent;
@property (nonatomic, readonly) TSSStyle *rootAncestor;
@property (nonatomic, readonly) TSSStyle *rootIdentifiedAncestor;
@property (nonatomic, readonly) NSString *styleIdentifier;
@property (nonatomic) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;

+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (double)defaultDoubleValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)description;
+ (double)fontSizeForFontSize:(double)arg1 scalingFactor:(double)arg2;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (bool)needsObjectUUID;
+ (struct __CTFont { }*)pCreateFontWithName:(id)arg1 fontSize:(double)arg2;
+ (id)pReplacementForMissingFontName:(id)arg1 outBold:(int*)arg2 outItalic:(int*)arg3 outQuiet:(bool*)arg4;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (bool)shouldWarnWithPersistingWithoutStylesheet;
+ (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (id)validateFontInPropertyMap:(id)arg1 parentStyle:(id)arg2 checkedFontMap:(id)arg3;
+ (id)validateFontName:(id)arg1 size:(double)arg2 bold:(bool)arg3 italic:(bool)arg4 checkedFontMap:(id)arg5 newFontName:(id*)arg6 newBold:(bool*)arg7 newItalic:(bool*)arg8;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

- (void).cxx_destruct;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)additionalPropertiesNeededForVariationWithPropertyMap:(id)arg1;
- (bool)allowsImplicitComponentOwnership;
- (id)archivableRepresentationOfChangeSet:(id)arg1;
- (id)baseStyleForVariation;
- (bool)boolValueForProperty:(int)arg1 defaultValue:(bool)arg2;
- (id)boxedObjectForProperty:(int)arg1;
- (id)boxedOverrideValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)children;
- (id)componentRootObject;
- (void)constrainShadowForSwatchGeneration;
- (id)constrainShapeStyleForContext:(id)arg1;
- (void)constrainStrokeForSwatchGeneration;
- (bool)containsProperty:(int)arg1;
- (id)contentTag;
- (id)copyFlattenedWithContext:(id)arg1;
- (id)copyPropertyMap;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 includeParentProperties:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 context:(id)arg2;
- (bool)definesProperty:(int)arg1;
- (id)descendants;
- (double)doubleValueForProperty:(int)arg1;
- (void)fadeReflectionForSwatchGeneration;
- (id)firstIdentifiedAncestor;
- (id)firstNamedAncestor;
- (float)floatValueForProperty:(int)arg1;
- (id)fullPropertyMap;
- (bool)hasEqualPropertyValues:(id)arg1;
- (bool)hasEqualValues:(id)arg1 forProperties:(id)arg2;
- (bool)hasEqualValuesToPropertyMap:(id)arg1 forProperties:(id)arg2;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (int)intValueForMUXedProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (bool)isAncestorOf:(id)arg1;
- (bool)isChildOf:(id)arg1;
- (bool)isDescendentOf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyle:(id)arg1 ignoreObjectContext:(bool)arg2;
- (bool)isEqualToStyle:(id)arg1 ignoreObjectContext:(bool)arg2 ignoreObjectUUID:(bool)arg3;
- (bool)isEqualToStyle:(id)arg1 ignoreObjectUUID:(bool)arg2;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isIdentified;
- (bool)isNamed;
- (bool)isParentOf:(id)arg1;
- (bool)isRelatedTo:(id)arg1;
- (bool)isVariation;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CharacterStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct Color {} *x9; struct Color {} *x10; struct ShadowArchive {} *x11; struct Color {} *x12; struct Color {} *x13; struct Color {} *x14; float x15; bool x16; bool x17; bool x18; bool x19; int x20; int x21; int x22; int x23; float x24; float x25; int x26; bool x27; }*)arg2 unarchiver:(id)arg3;
- (void)loadFromArchive:(const struct StyleArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 unarchiver:(id)arg2;
- (void)loadParagraphStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ParagraphStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Color {} *x7; struct LineSpacingArchive {} *x8; struct Point {} *x9; struct TabsArchive {} *x10; struct StrokeArchive {} *x11; struct Reference {} *x12; struct Reference {} *x13; int x14; float x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; bool x22; bool x23; bool x24; bool x25; int x26; float x27; float x28; float x29; float x30; unsigned int x31; bool x32; bool x33; bool x34; bool x35; int x36; bool x37; bool x38; bool x39; bool x40; bool x41; bool x42; int x43; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_44_1_1; } x44; }*)arg2 unarchiver:(id)arg3;
- (id)name;
- (id)newOverridePropertyMapWithPropertyMap:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)overriddenProperties;
- (double)overrideCGFloatValueForProperty:(int)arg1;
- (unsigned long long)overrideCount;
- (double)overrideDoubleValueForProperty:(int)arg1;
- (float)overrideFloatValueForProperty:(int)arg1;
- (int)overrideIntValueForProperty:(int)arg1;
- (id)overridePropertyMap;
- (bool)overridePropertyMapIsEqualTo:(id)arg1;
- (id)overridePropertyMapWithPropertyMap:(id)arg1 overridePropertyMap:(id)arg2 collapseSourceOverrides:(bool)arg3;
- (id)overrideValueForProperty:(int)arg1;
- (bool)overridesAnyProperty;
- (bool)overridesProperty:(int)arg1;
- (bool)p_hasEqualValuesTo:(id)arg1 forProperty:(int)arg2;
- (id)parent;
- (id)parentStyleForFixingOrphanVariation;
- (id)propertyMap;
- (id)propertyMapIgnoringStyle:(id)arg1;
- (id)propertyMapThatNeedsToBeTransformedWithTransformedObjects:(id)arg1;
- (id)referencedStyles;
- (void)removeAllValues;
- (void)removeValueForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)arg1;
- (id)rootAncestor;
- (id)rootIdentifiedAncestor;
- (void)saveCharacterStylePropertiesToArchive:(struct CharacterStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena {} *x_4_1_1; int x_4_1_2; int x_4_1_3; struct Rep {} *x_4_1_4; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct Color {} *x9; struct Color {} *x10; struct ShadowArchive {} *x11; struct Color {} *x12; struct Color {} *x13; struct Color {} *x14; float x15; bool x16; bool x17; bool x18; bool x19; int x20; int x21; int x22; int x23; float x24; float x25; int x26; bool x27; }*)arg1 archiver:(id)arg2;
- (void)saveParagraphStylePropertiesToArchive:(struct ParagraphStylePropertiesArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<2> { unsigned int x_3_1_1[2]; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Color {} *x7; struct LineSpacingArchive {} *x8; struct Point {} *x9; struct TabsArchive {} *x10; struct StrokeArchive {} *x11; struct Reference {} *x12; struct Reference {} *x13; int x14; float x15; bool x16; bool x17; bool x18; bool x19; float x20; float x21; bool x22; bool x23; bool x24; bool x25; int x26; float x27; float x28; float x29; float x30; unsigned int x31; bool x32; bool x33; bool x34; bool x35; int x36; bool x37; bool x38; bool x39; bool x40; bool x41; bool x42; int x43; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_44_1_1; } x44; }*)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct StyleArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; struct Reference {} *x8; bool x9; }*)arg1 archiver:(id)arg2;
- (void)setBoolValue:(bool)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setIsVariation:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setObjectUUID:(id)arg1;
- (void)setOverridePropertyMap:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setStyleIdentifier:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(int)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)shapeStyleByRemovingShadowFrameAndReflectionForContext:(id)arg1;
- (id)shapeStyleByRemovingTextShadowForContext:(id)arg1;
- (id)styleIdentifier;
- (id)stylesheet;
- (bool)transformsFontSizes;
- (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
- (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
- (id)validateFontWithCheckedFontMap:(id)arg1;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
- (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
- (id)valueForProperty:(int)arg1;
- (id)valuesForProperties:(id)arg1;

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