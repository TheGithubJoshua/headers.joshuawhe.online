<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSTextBlock.h</title>
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

/PrivateFrameworks/UIFoundation.framework/NSTextBlock.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation (553)
 */

@interface NSTextBlock : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void * _blockPrimary;
    void * _blockSecondary;
    id  _otherParamVals;
    id  _primParamVal;
    unsigned long long  _propMask;
    void * _propVals;
    unsigned long long  _typeMask;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_attributeDescription;
- (void)_createFloatStorage;
- (void)_destroyFloatStorage;
- (void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (double)_valueForParameter:(unsigned long long)arg1;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)arg1;
- (id)backgroundColor;
- (id)borderColorForEdge:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (double)contentWidth;
- (unsigned long long)contentWidthValueType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 layoutManager:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForLayoutAtPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)setContentWidth:(double)arg1 type:(unsigned long long)arg2;
- (void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4;
- (double)valueForDimension:(unsigned long long)arg1;
- (unsigned long long)valueTypeForDimension:(unsigned long long)arg1;
- (unsigned long long)verticalAlignment;
- (double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2;

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