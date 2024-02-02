<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOMCSSStyleDeclaration.h</title>
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

/PrivateFrameworks/WebKitLegacy.framework/DOMCSSStyleDeclaration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy (8607.3.18)
 */

@interface DOMCSSStyleDeclaration : DOMObject

@property (copy) NSString *cssText;
@property (readonly) unsigned int length;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } mf_margin;
@property (readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } mf_padding;
@property (readonly) DOMCSSRule *parentRule;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_fontSizeDelta;
- (void)_setFontSizeDelta:(id)arg1;
- (id)azimuth;
- (id)background;
- (id)backgroundAttachment;
- (id)backgroundColor;
- (id)backgroundImage;
- (id)backgroundPosition;
- (id)backgroundRepeat;
- (id)border;
- (id)borderBottom;
- (id)borderBottomColor;
- (id)borderBottomStyle;
- (id)borderBottomWidth;
- (id)borderCollapse;
- (id)borderColor;
- (id)borderLeft;
- (id)borderLeftColor;
- (id)borderLeftStyle;
- (id)borderLeftWidth;
- (id)borderRight;
- (id)borderRightColor;
- (id)borderRightStyle;
- (id)borderRightWidth;
- (id)borderSpacing;
- (id)borderStyle;
- (id)borderTop;
- (id)borderTopColor;
- (id)borderTopStyle;
- (id)borderTopWidth;
- (id)borderWidth;
- (id)bottom;
- (id)captionSide;
- (id)clear;
- (id)clip;
- (id)color;
- (id)content;
- (id)counterIncrement;
- (id)counterReset;
- (id)cssFloat;
- (id)cssText;
- (id)cue;
- (id)cueAfter;
- (id)cueBefore;
- (id)cursor;
- (void)dealloc;
- (id)direction;
- (id)display;
- (id)elevation;
- (id)emptyCells;
- (id)font;
- (id)fontFamily;
- (id)fontSize;
- (id)fontSizeAdjust;
- (id)fontStretch;
- (id)fontStyle;
- (id)fontVariant;
- (id)fontWeight;
- (id)getPropertyCSSValue:(id)arg1;
- (id)getPropertyPriority:(id)arg1;
- (id)getPropertyShorthand:(id)arg1;
- (id)getPropertyValue:(id)arg1;
- (id)height;
- (bool)isPropertyImplicit:(id)arg1;
- (id)item:(unsigned int)arg1;
- (id)left;
- (unsigned int)length;
- (id)letterSpacing;
- (id)lineHeight;
- (id)listStyle;
- (id)listStyleImage;
- (id)listStylePosition;
- (id)listStyleType;
- (id)margin;
- (id)marginBottom;
- (id)marginLeft;
- (id)marginRight;
- (id)marginTop;
- (id)markerOffset;
- (id)marks;
- (id)maxHeight;
- (id)maxWidth;
- (id)minHeight;
- (id)minWidth;
- (id)orphans;
- (id)outline;
- (id)outlineColor;
- (id)outlineStyle;
- (id)outlineWidth;
- (id)overflow;
- (id)padding;
- (id)paddingBottom;
- (id)paddingLeft;
- (id)paddingRight;
- (id)paddingTop;
- (id)page;
- (id)pageBreakAfter;
- (id)pageBreakBefore;
- (id)pageBreakInside;
- (id)parentRule;
- (id)pause;
- (id)pauseAfter;
- (id)pauseBefore;
- (id)pitch;
- (id)pitchRange;
- (id)playDuring;
- (id)position;
- (id)quotes;
- (id)removeProperty:(id)arg1;
- (id)richness;
- (id)right;
- (void)setAzimuth:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundAttachment:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundPosition:(id)arg1;
- (void)setBackgroundRepeat:(id)arg1;
- (void)setBorder:(id)arg1;
- (void)setBorderBottom:(id)arg1;
- (void)setBorderBottomColor:(id)arg1;
- (void)setBorderBottomStyle:(id)arg1;
- (void)setBorderBottomWidth:(id)arg1;
- (void)setBorderCollapse:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderLeft:(id)arg1;
- (void)setBorderLeftColor:(id)arg1;
- (void)setBorderLeftStyle:(id)arg1;
- (void)setBorderLeftWidth:(id)arg1;
- (void)setBorderRight:(id)arg1;
- (void)setBorderRightColor:(id)arg1;
- (void)setBorderRightStyle:(id)arg1;
- (void)setBorderRightWidth:(id)arg1;
- (void)setBorderSpacing:(id)arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setBorderTop:(id)arg1;
- (void)setBorderTopColor:(id)arg1;
- (void)setBorderTopStyle:(id)arg1;
- (void)setBorderTopWidth:(id)arg1;
- (void)setBorderWidth:(id)arg1;
- (void)setBottom:(id)arg1;
- (void)setCaptionSide:(id)arg1;
- (void)setClear:(id)arg1;
- (void)setClip:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setCounterIncrement:(id)arg1;
- (void)setCounterReset:(id)arg1;
- (void)setCssFloat:(id)arg1;
- (void)setCssText:(id)arg1;
- (void)setCue:(id)arg1;
- (void)setCueAfter:(id)arg1;
- (void)setCueBefore:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setElevation:(id)arg1;
- (void)setEmptyCells:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontFamily:(id)arg1;
- (void)setFontSize:(id)arg1;
- (void)setFontSizeAdjust:(id)arg1;
- (void)setFontStretch:(id)arg1;
- (void)setFontStyle:(id)arg1;
- (void)setFontVariant:(id)arg1;
- (void)setFontWeight:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setLeft:(id)arg1;
- (void)setLetterSpacing:(id)arg1;
- (void)setLineHeight:(id)arg1;
- (void)setListStyle:(id)arg1;
- (void)setListStyleImage:(id)arg1;
- (void)setListStylePosition:(id)arg1;
- (void)setListStyleType:(id)arg1;
- (void)setMargin:(id)arg1;
- (void)setMarginBottom:(id)arg1;
- (void)setMarginLeft:(id)arg1;
- (void)setMarginRight:(id)arg1;
- (void)setMarginTop:(id)arg1;
- (void)setMarkerOffset:(id)arg1;
- (void)setMarks:(id)arg1;
- (void)setMaxHeight:(id)arg1;
- (void)setMaxWidth:(id)arg1;
- (void)setMinHeight:(id)arg1;
- (void)setMinWidth:(id)arg1;
- (void)setOrphans:(id)arg1;
- (void)setOutline:(id)arg1;
- (void)setOutlineColor:(id)arg1;
- (void)setOutlineStyle:(id)arg1;
- (void)setOutlineWidth:(id)arg1;
- (void)setOverflow:(id)arg1;
- (void)setPadding:(id)arg1;
- (void)setPaddingBottom:(id)arg1;
- (void)setPaddingLeft:(id)arg1;
- (void)setPaddingRight:(id)arg1;
- (void)setPaddingTop:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setPageBreakAfter:(id)arg1;
- (void)setPageBreakBefore:(id)arg1;
- (void)setPageBreakInside:(id)arg1;
- (void)setPause:(id)arg1;
- (void)setPauseAfter:(id)arg1;
- (void)setPauseBefore:(id)arg1;
- (void)setPitch:(id)arg1;
- (void)setPitchRange:(id)arg1;
- (void)setPlayDuring:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setProperty:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setProperty:(id)arg1 value:(id)arg2 priority:(id)arg3;
- (void)setQuotes:(id)arg1;
- (void)setRichness:(id)arg1;
- (void)setRight:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setSpeak:(id)arg1;
- (void)setSpeakHeader:(id)arg1;
- (void)setSpeakNumeral:(id)arg1;
- (void)setSpeakPunctuation:(id)arg1;
- (void)setSpeechRate:(id)arg1;
- (void)setStress:(id)arg1;
- (void)setTableLayout:(id)arg1;
- (void)setTextAlign:(id)arg1;
- (void)setTextDecoration:(id)arg1;
- (void)setTextIndent:(id)arg1;
- (void)setTextShadow:(id)arg1;
- (void)setTextTransform:(id)arg1;
- (void)setTop:(id)arg1;
- (void)setUnicodeBidi:(id)arg1;
- (void)setVerticalAlign:(id)arg1;
- (void)setVisibility:(id)arg1;
- (void)setVoiceFamily:(id)arg1;
- (void)setVolume:(id)arg1;
- (void)setWhiteSpace:(id)arg1;
- (void)setWidows:(id)arg1;
- (void)setWidth:(id)arg1;
- (void)setWordSpacing:(id)arg1;
- (void)setZIndex:(id)arg1;
- (id)size;
- (id)speak;
- (id)speakHeader;
- (id)speakNumeral;
- (id)speakPunctuation;
- (id)speechRate;
- (id)stress;
- (id)tableLayout;
- (id)textAlign;
- (id)textDecoration;
- (id)textIndent;
- (id)textShadow;
- (id)textTransform;
- (id)top;
- (id)unicodeBidi;
- (id)verticalAlign;
- (id)visibility;
- (id)voiceFamily;
- (id)volume;
- (id)whiteSpace;
- (id)widows;
- (id)width;
- (id)wordSpacing;
- (id)zIndex;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })mf_margin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })mf_padding;

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