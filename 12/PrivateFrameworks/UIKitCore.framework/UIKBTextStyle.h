<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKBTextStyle.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKBTextStyle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKBTextStyle : NSObject <NSCopying> {
    long long  _alignment;
    int  _anchorCorner;
    NSString * _etchColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _etchOffset;
    NSString * _fontName;
    double  _fontSize;
    double  _fontWeight;
    bool  _ignoreTextMarginOnKey;
    double  _imageScale;
    double  _kerning;
    double  _minFontSize;
    double  _pathWeight;
    long long  _selector;
    NSString * _textColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textOffset;
    double  _textOpacity;
}

@property (nonatomic) long long alignment;
@property (nonatomic) int anchorCorner;
@property (nonatomic, retain) NSString *etchColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } etchOffset;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) bool ignoreTextMarginOnKey;
@property (nonatomic) double imageScale;
@property (nonatomic) double kerning;
@property (nonatomic) double minFontSize;
@property (nonatomic) double pathWeight;
@property (nonatomic) long long selector;
@property (nonatomic, retain) NSString *textColor;
@property (nonatomic) struct CGPoint { double x1; double x2; } textOffset;
@property (nonatomic) double textOpacity;

+ (id)styleWithFontName:(id)arg1 withFontSize:(double)arg2;
+ (id)styleWithTextColor:(id)arg1;

- (long long)alignment;
- (int)anchorCorner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)etchColor;
- (struct CGPoint { double x1; double x2; })etchOffset;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (bool)ignoreTextMarginOnKey;
- (double)imageScale;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)kerning;
- (double)minFontSize;
- (void)overlayWithStyle:(id)arg1;
- (double)pathWeight;
- (long long)selector;
- (void)setAlignment:(long long)arg1;
- (void)setAnchorCorner:(int)arg1;
- (void)setEtchColor:(id)arg1;
- (void)setEtchOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFontWeight:(double)arg1;
- (void)setIgnoreTextMarginOnKey:(bool)arg1;
- (void)setImageScale:(double)arg1;
- (void)setKerning:(double)arg1;
- (void)setMinFontSize:(double)arg1;
- (void)setPathWeight:(double)arg1;
- (void)setSelector:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextOpacity:(double)arg1;
- (id)textColor;
- (struct CGPoint { double x1; double x2; })textOffset;
- (double)textOpacity;

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
