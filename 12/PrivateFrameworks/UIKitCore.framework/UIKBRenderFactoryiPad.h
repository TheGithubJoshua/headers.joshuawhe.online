<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKBRenderFactoryiPad.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKBRenderFactoryiPad.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone

- (id)ZWNJKeyImageName;
- (struct CGPoint { double x1; double x2; })ZWNJKeyOffset;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (bool)_onLeftSide:(id)arg1 onKeyplane:(id)arg2;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)bottomRowDefaultFontSize;
- (id)capslockKeyImageName;
- (double)cornerRadiusForKey:(id)arg1;
- (double)defaultPathWeight;
- (struct CGSize { double x1; double x2; })defaultVariantGeometrySize;
- (double)defaultVariantSizeThreshold;
- (double)deleteKeyFontSize;
- (id)deleteKeyImageName;
- (struct CGPoint { double x1; double x2; })deleteKeyOffset;
- (id)deleteOnKeyImageName;
- (double)dictationKeyFontSize;
- (id)dictationKeyImageName;
- (struct CGPoint { double x1; double x2; })dictationKeyOffset;
- (double)dismissKeyFontSize;
- (id)dismissKeyImageName;
- (struct CGPoint { double x1; double x2; })dismissKeyOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissKeySymbolFrame;
- (id)displayContentsForKey:(id)arg1;
- (double)dualStringKeyFontSizeAdjustment;
- (struct CGPoint { double x1; double x2; })dualStringKeyOffset;
- (double)emailDotKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)fallbackFontSize;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (bool)iPadFudgeLayout;
- (bool)iPadSansHomeButtonLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (double)internationalKeyFontSize;
- (struct CGPoint { double x1; double x2; })internationalKeyOffset;
- (double)keyCornerRadius;
- (double)keyInsetBottom;
- (id)lightKeycapsFontName;
- (id)lowQualityLayeredBackgroundColorName;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (id)messagesWriteboardKeyImageName;
- (double)moreKeyFontSize;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (double)predictiveKeyCornerRadius;
- (id)returnKeyImageName;
- (struct CGPoint { double x1; double x2; })returnKeyOffset;
- (double)returnKeySymbolFrameInset;
- (long long)rowLimitForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })secondaryShiftKeyOffset;
- (void)setAllowsPaddles:(bool)arg1;
- (void)setupLayoutSegments;
- (double)shiftKeyFontSize;
- (id)shiftKeyImageName;
- (struct CGPoint { double x1; double x2; })shiftKeyOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shiftKeySymbolFrame;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)skinnyKeyThreshold;
- (double)smallKanaKeyFontSize;
- (double)spaceKeyFontSize;
- (double)stringKeyFontSize;
- (struct CGPoint { double x1; double x2; })stringKeyOffset;
- (bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolFrameInset;
- (id)tabKeyImageName;
- (id)thinKeycapsFontName;
- (double)tinyPunctuationGlyphFontSize;
- (struct CGPoint { double x1; double x2; })tinyPunctuationGlyphOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantDisplayFrameInsets;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantPaddedFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantSymbolFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPaddleInsets;
- (double)zhuyinFirstToneKeyFontSize;

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
