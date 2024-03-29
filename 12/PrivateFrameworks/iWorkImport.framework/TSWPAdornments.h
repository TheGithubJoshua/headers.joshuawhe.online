<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSWPAdornments.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSWPAdornments.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSWPAdornments : NSObject {
    double  _advance;
    double  _ascent;
    struct vector<TSWPAttachmentPosition, std::__1::allocator<TSWPAttachmentPosition> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSWPAttachmentPosition *, std::__1::allocator<TSWPAttachmentPosition> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _attachmentPositions;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _charIndexes;
    struct CGColor { } * _color;
    double  _descent;
    struct __CTFont { } * _font;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _glyphs;
    int  _location;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { 
            struct CGPoint {} *__value_; 
        } __end_cap_; 
    }  _positions;
    struct vector<CGRect, std::__1::allocator<CGRect> > { 
        struct CGRect {} *__begin_; 
        struct CGRect {} *__end_; 
        struct __compressed_pair<CGRect *, std::__1::allocator<CGRect> > { 
            struct CGRect {} *__value_; 
        } __end_cap_; 
    }  _rects;
    bool  _shouldRotate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textPosition;
    int  _type;
    double  _verticalAdjustment;
}

@property (nonatomic, readonly) double advance;
@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) unsigned long long attachmentPositionCount;
@property (nonatomic, readonly) struct { unsigned long long x1; double x2; }*attachmentPositions;
@property (nonatomic, readonly) unsigned long long charIndexCount;
@property (nonatomic, readonly) unsigned long long*charIndexes;
@property (nonatomic, retain) struct CGColor { }*color;
@property (nonatomic, readonly) double descent;
@property (nonatomic, retain) struct __CTFont { }*font;
@property (nonatomic, readonly) unsigned long long glyphCount;
@property (nonatomic, readonly) unsigned short*glyphs;
@property (nonatomic) int location;
@property (nonatomic, readonly) unsigned long long positionCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; }*positions;
@property (nonatomic, readonly) unsigned long long rectCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*rects;
@property (nonatomic) bool shouldRotate;
@property (nonatomic) struct CGPoint { double x1; double x2; } textPosition;
@property (nonatomic, readonly) int type;
@property (nonatomic) double verticalAdjustment;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAdornmentWithAttachmentPosition:(struct { unsigned long long x1; double x2; })arg1;
- (void)addAdornmentWithCharIndex:(unsigned long long)arg1 point:(struct CGPoint { double x1; double x2; })arg2 glyph:(unsigned short)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)addAdornmentWithPoint:(struct CGPoint { double x1; double x2; })arg1 glyph:(unsigned short)arg2;
- (double)advance;
- (double)ascent;
- (unsigned long long)attachmentPositionCount;
- (struct { unsigned long long x1; double x2; }*)attachmentPositions;
- (unsigned long long)charIndexCount;
- (unsigned long long*)charIndexes;
- (struct CGColor { }*)color;
- (double)descent;
- (struct __CTFont { }*)font;
- (unsigned long long)glyphCount;
- (unsigned short*)glyphs;
- (void)incrementCharIndexes:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)initWithType:(int)arg1 color:(struct CGColor { }*)arg2 font:(struct __CTFont { }*)arg3;
- (int)location;
- (unsigned long long)positionCount;
- (struct CGPoint { double x1; double x2; }*)positions;
- (unsigned long long)rectCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)rects;
- (void)removeAdornmentAt:(unsigned long long)arg1;
- (void)setAscent:(double)arg1 descent:(double)arg2 advance:(double)arg3;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setFont:(struct __CTFont { }*)arg1;
- (void)setLocation:(int)arg1;
- (void)setShouldRotate:(bool)arg1;
- (void)setTextPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVerticalAdjustment:(double)arg1;
- (bool)shouldRotate;
- (struct CGPoint { double x1; double x2; })textPosition;
- (int)type;
- (double)verticalAdjustment;

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
