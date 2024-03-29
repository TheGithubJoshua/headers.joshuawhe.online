<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GQHState.h</title>
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

/PrivateFrameworks/iWorkImport.framework/GQHState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface GQHState : NSObject {
    int  mCachedCellStyleIndex;
    struct __CFDictionary { } * mCachedTableStyles;
    int  mCachedTextStyleIndex;
    struct __CFDictionary { } * mCachedTextStyles;
    struct __CFDictionary { } * mColorStrings;
    int  mColoredBackgroundLayerCount;
    struct __CFArray { } * mGraphicPropertiesStack;
    GQHXML * mHtmlDoc;
    struct __CFArray { } * mImplicitStyles;
    int  mInlineStyleIndex;
    struct __CFDictionary { } * mInlineStyles;
    int  mMultiColumnedDepth;
    int  mOutlineLevel;
    int  mOutlineStyleType;
    int  mParagraphCount;
    int  mParagraphIndex;
    GQSDocument * mProcessorState;
    struct CGSize { 
        double width; 
        double height; 
    }  mScale;
    <GQHContext> * mShapeContext;
    int  mShapeIDCounter;
    struct __CFString { } * mStyleData;
    struct __CFDictionary { } * mStyleIndexes;
    struct __CFDictionary { } * mStyleNameMap;
    GQHTableState * mTableState;
    unsigned int  mTextScale;
}

- (struct __CFString { }*)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString { }*)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)allowInlineWrap;
- (struct __CFString { }*)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(bool)arg6;
- (struct __CFString { }*)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(bool)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(bool)arg6;
- (struct __CFString { }*)className:(id)arg1;
- (bool)coloredBackground;
- (struct __CFString { }*)createStyleName:(id)arg1 type:(const char *)arg2;
- (struct __CFString { }*)createUniqueShapeId:(const char *)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (void)dealloc;
- (bool)drawablesNeedCssZOrdering;
- (void)enterGraphicObject;
- (bool)finishMainHtml;
- (struct __CFString { }*)getColorString:(id)arg1;
- (id)htmlDoc;
- (id)implicitStyle;
- (int)indexForStyle:(const char *)arg1;
- (id)initWithState:(id)arg1;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithState:(id)arg1 needIndexFile:(bool)arg2 documentSize:(struct CGSize { double x1; double x2; })arg3;
- (void)invalidateTextScale;
- (void)leaveGraphicObject;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1 inDocument:(id)arg2;
- (bool)multiColumned;
- (bool)needAbsolutelyPositionedTables;
- (int)outlineLevel;
- (int)outlineStyleType;
- (int)paragraphCount;
- (int)paragraphIndex;
- (void)popImplicitStyle;
- (id)processorState;
- (void)pushImplicitStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })scale;
- (void)setColoredBackground:(bool)arg1;
- (void)setMultiColumned:(bool)arg1;
- (void)setOutlineLevel:(int)arg1;
- (void)setOutlineStyleType:(int)arg1;
- (void)setParagraphCount:(int)arg1;
- (void)setParagraphIndex:(int)arg1;
- (void)setScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextScale:(unsigned int)arg1;
- (id)shapeContext;
- (bool)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (id)tableState;
- (unsigned int)textScale;
- (bool)useOutline;

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
