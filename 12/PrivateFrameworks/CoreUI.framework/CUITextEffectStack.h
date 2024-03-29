<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUITextEffectStack.h</title>
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

/PrivateFrameworks/CoreUI.framework/CUITextEffectStack.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI (499.12)
 */

@interface CUITextEffectStack : CUIShapeEffectStack {
    bool  _renderHighQuality;
}

- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 atPositions:(const struct CGPoint { double x1; double x2; }*)arg5 count:(unsigned long long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 forGlyphs:(const unsigned short*)arg2 inContext:(struct CGContext { }*)arg3 usingFont:(struct __CTFont { }*)arg4 withAdvances:(const struct CGSize { double x1; double x2; }*)arg5 count:(unsigned long long)arg6;
- (void)_drawShadow:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg1 usingQuartz:(id /* block */)arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 atPositions:(const struct CGPoint { double x1; double x2; }*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 atScale:(double)arg8;
- (void)drawGlyphs:(const unsigned short*)arg1 inContext:(struct CGContext { }*)arg2 usingFont:(struct __CTFont { }*)arg3 withAdvances:(const struct CGSize { double x1; double x2; }*)arg4 count:(unsigned long long)arg5 lineHeight:(double)arg6 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 atScale:(double)arg8;
- (void)drawProcessedMask:(struct CGContext { }*)arg1 atBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 withScale:(double)arg4;
- (void)drawUsingQuartz:(id /* block */)arg1 inContext:(struct CGContext { }*)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atScale:(double)arg4;
- (double)effectiveInteriorFillOpacity;
- (id)initWithEffectPreset:(id)arg1;
- (struct CGColor { }*)newBackgroundPatternColorWithSize:(struct CGSize { double x1; double x2; })arg1 contentScale:(double)arg2 forContext:(struct CGContext { }*)arg3;
- (struct CGContext { }*)newGlyphMaskContextForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContext:(struct CGContext { }*)arg2 withScale:(double)arg3;
- (bool)useCoreImageRendering;

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
