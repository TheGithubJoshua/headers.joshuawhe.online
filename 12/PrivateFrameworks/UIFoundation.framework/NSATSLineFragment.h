<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSATSLineFragment.h</title>
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

/PrivateFrameworks/UIFoundation.framework/NSATSLineFragment.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation (553)
 */

@interface NSATSLineFragment : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    long long  _elasticCharIndex;
    double  _elasticRangeWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _standaloneAttachment : 1; 
        unsigned int _reserved : 28; 
    }  _flags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    unsigned int  _hyphenGlyph;
    double  _hyphenGlyphWidth;
    void * _line;
    double  _maxPosition;
    double  _minPosition;
    NSATSTypesetter * _typesetter;
}

@property (getter=isElasticOnly, readonly) bool elasticOnly;
@property (getter=isStandaloneTextAttachment, readonly) bool standaloneTextAttachment;

- (long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(bool*)arg3;
- (id)_copyRenderingContextWithGlyphOrigin:(double)arg1;
- (void)_flushCachedObjects;
- (void)_invalidate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (void)finalize;
- (void)getTypographicLineHeight:(double*)arg1 baselineOffset:(double*)arg2 leading:(double*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRange;
- (bool)hasElasticRange;
- (id)initWithTypesetter:(id)arg1;
- (bool)isElasticOnly;
- (bool)isStandaloneTextAttachment;
- (void)justifyWithFactor:(double)arg1;
- (void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (double)lineWidthForType:(int)arg1;
- (void)resolveOpticalAlignmentUpdatingMinPosition:(double*)arg1 maxPosition:(double*)arg2;
- (long long)resolvedLineBreakMode:(bool)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)saveWithGlyphOrigin:(double)arg1;

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
