<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSTypesetter.h</title>
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

/PrivateFrameworks/UIFoundation.framework/NSTypesetter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation (553)
 */

@interface NSTypesetter : NSObject {
    void * _reserved;
}

+ (bool)_usesATSTypesetter;
+ (bool)allowsDefaultLineBreakStrategy;
+ (unsigned long long)defaultLineBreakStrategy;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (long long)defaultTypesetterBehavior;
+ (void)initialize;
+ (id)sharedSystemTypesetter;
+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;

- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); double x8; double x9; double x10; double x11; double x12; double x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; id x17; double x18; long long x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 3; unsigned int x_20_1_14 : 7; } x20; }*)_allocateAuxData;
- (bool)_allowsEllipsisGlyphSubstitution;
- (long long)_baseWritingDirection;
- (id)_ellipsisFontForFont:(id)arg1;
- (bool)_forceOriginalFontBaseline;
- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); double x8; double x9; double x10; double x11; double x12; double x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; id x17; double x18; long long x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 3; unsigned int x_20_1_14 : 7; } x20; }*)_getAuxData;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 andParagraphSeparatorRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (bool)_isLineBreakModeOverridden;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long*)arg5 nextCharacterIndex:(unsigned long long*)arg6;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; }*)_lineFragmentRectForProposedRectArgs;
- (void)_setForceOriginalFontBaseline:(bool)arg1;
- (void)_setLineBreakModeOverridden:(bool)arg1;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (long long)applicationFrameworkContext;
- (id)attributedString;
- (id)attributesForExtraLineFragment;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)beginParagraph;
- (bool)bidiProcessingEnabled;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)currentParagraphStyle;
- (id)currentTextContainer;
- (void)dealloc;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endParagraph;
- (void)finalize;
- (bool)finalizeLineFragmentRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 baselineOffset:(inout double*)arg3 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned long long*)arg3 glyphInscriptions:(unsigned long long*)arg4 elasticBits:(bool*)arg5 bidiLevels:(char *)arg6;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 glyphs:(unsigned short*)arg2 properties:(long long*)arg3 characterIndexes:(unsigned long long*)arg4 bidiLevels:(char *)arg5;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 atProposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (float)hyphenationFactor;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })layoutCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4;
- (id)layoutManager;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (double)lineFragmentPadding;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphCharacterRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphGlyphRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphSeparatorCharacterRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })paragraphSeparatorGlyphRange;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setAttachmentSize:(struct CGSize { double x1; double x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributedString:(id)arg1;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBidiProcessingEnabled:(bool)arg1;
- (void)setDrawsOutsideLineFragment:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setHardInvalidation:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 baselineOffset:(double)arg4;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1 withAdvancements:(const double*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setNotShownAttribute:(bool)arg1 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setParagraphGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 separatorGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTightenThresholdForTruncation:(float)arg1;
- (void)setTypesetterBehavior:(long long)arg1;
- (void)setUsesFontLeading:(bool)arg1;
- (id)substituteFontForFont:(id)arg1;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withGlyphs:(unsigned int*)arg2;
- (id)textContainers;
- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;
- (float)tightenThresholdForTruncation;
- (long long)typesetterBehavior;
- (bool)usesFontLeading;

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