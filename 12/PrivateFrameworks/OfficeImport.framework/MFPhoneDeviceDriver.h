<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MFPhoneDeviceDriver.h</title>
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

/PrivateFrameworks/OfficeImport.framework/MFPhoneDeviceDriver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface MFPhoneDeviceDriver : NSObject <MFDeviceDriver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_canvas;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_canvasTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_combinedTransform;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  m_viewBox;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_viewBoxTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_worldToDeviceTransform;
}

+ (int)getROP:(id)arg1;

- (int)activateTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)alphaBlend:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_sourceConstantOpacity:(unsigned char)arg11 in_useSourceAlphaChannel:(bool)arg12 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg13 in_colour:(unsigned int)arg14;
- (int)angleArc:(id)arg1 x:(int)arg2 y:(int)arg3 radius:(unsigned int)arg4 startAngle:(double)arg5 sweepAngle:(double)arg6;
- (void)applyTransformsToCurrentContext;
- (int)arc:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)arcTo:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)bezier:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7 x4:(int)arg8 y4:(int)arg9;
- (int)bezierTo:(id)arg1 x:(int)arg2 y:(int)arg3 x2:(int)arg4 y2:(int)arg5 x3:(int)arg6 y3:(int)arg7;
- (int)bitBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_rop:(unsigned int)arg9 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg10 in_colour:(unsigned int)arg11;
- (int)chord:(id)arg1 leftRect:(int)arg2 topRect:(int)arg3 rightRect:(int)arg4 bottomRect:(int)arg5 xStartArc:(int)arg6 yStartArc:(int)arg7 xEndArc:(int)arg8 yEndArc:(int)arg9;
- (id)createBitmap:(id)arg1 in_width:(int)arg2 in_height:(int)arg3 in_planes:(int)arg4 in_bitsPerPixel:(int)arg5 in_bitmap:(const char *)arg6 in_bitmapSize:(unsigned int)arg7;
- (id)createDIBitmap:(id)arg1 in_dib:(const char *)arg2 in_dibSize:(unsigned int)arg3 in_usage:(int)arg4;
- (id)createDIBitmap:(id)arg1 in_header:(const char *)arg2 in_headerSize:(unsigned int)arg3 in_bitmap:(const char *)arg4 in_bitmapSize:(unsigned int)arg5 in_usage:(int)arg6;
- (id)createFont:(int)arg1;
- (id)createFont:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15;
- (id)createFontIndirectW:(int)arg1 lfWidth:(int)arg2 lfEscapement:(int)arg3 lfOrientation:(int)arg4 lfWeight:(int)arg5 lfItalic:(bool)arg6 lfUnderline:(bool)arg7 lfStrikeOut:(bool)arg8 lfCharSet:(int)arg9 lfOutPrecision:(int)arg10 lfClipPrecision:(unsigned char)arg11 lfQuality:(int)arg12 pitch:(int)arg13 family:(int)arg14 lfFaceName:(id)arg15 elfFullName:(id)arg16 elfStyle:(id)arg17 elfVersion:(unsigned int)arg18 elfStyleSize:(unsigned int)arg19 elfMatch:(unsigned int)arg20 elfVendorId:(unsigned int)arg21 elfCulture:(unsigned int)arg22;
- (id)createHatchBrush:(id)arg1 in_hatchstyle:(int)arg2;
- (id)createNullBrush;
- (id)createPath;
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(bool)arg2;
- (id)createPen;
- (id)createPen:(int)arg1 in_width:(int)arg2 in_colour:(id)arg3 in_userStyleArray:(double*)arg4;
- (id)createRegionWithPath:(id)arg1;
- (id)createRegionWithRects:(id)arg1 in_dc:(id)arg2;
- (id)createSolidBrush:(id)arg1;
- (void)dealloc;
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(bool)arg3 stroke:(bool)arg4;
- (int)ellipse:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)extTextOut:(id)arg1 px:(int*)arg2 py:(int*)arg3 in_text:(id)arg4 options:(int)arg5 left:(int)arg6 top:(int)arg7 right:(int)arg8 bottom:(int)arg9 spacingValues:(int*)arg10 numValues:(int)arg11;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCanvas;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)lineTo:(id)arg1 x:(double)arg2 y:(double)arg3;
- (int)maskBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_maskImage:(id)arg9 in_xMask:(int)arg10 in_yMask:(int)arg11 in_rop:(unsigned int)arg12 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg13 in_colour:(unsigned int)arg14;
- (int)patBlt:(id)arg1 in_x:(int)arg2 in_y:(int)arg3 in_width:(int)arg4 in_height:(int)arg5 in_rop:(unsigned int)arg6;
- (int)pie:(id)arg1 nLeftRect:(int)arg2 nTopRect:(int)arg3 nRightRect:(int)arg4 nBottomRect:(int)arg5 nXStartArc:(int)arg6 nYStartArc:(int)arg7 nXEndArc:(int)arg8 nYEndArc:(int)arg9;
- (int)plgBlt:(id)arg1 in_destinationParallelogram:(struct CGPoint { double x1; double x2; }*)arg2 in_sourceImage:(id)arg3 in_xSrc:(int)arg4 in_ySrc:(int)arg5 in_widthSrc:(int)arg6 in_heightSrc:(int)arg7 in_maskImage:(id)arg8 in_xMask:(int)arg9 in_yMask:(int)arg10 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg11 in_colour:(unsigned int)arg12;
- (int)polyPolygon:(id)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_polyCounts:(int*)arg3 in_count:(int)arg4;
- (int)polyPolyline:(id)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_polyCounts:(int*)arg3 in_count:(int)arg4;
- (int)polygon:(id)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_count:(int)arg3;
- (int)polyline:(id)arg1 in_points:(struct CGPoint { double x1; double x2; }*)arg2 in_count:(int)arg3;
- (int)rectangle:(id)arg1 x1:(int)arg2 y1:(int)arg3 x2:(int)arg4 y2:(int)arg5;
- (int)roundRect:(id)arg1 left:(int)arg2 top:(int)arg3 right:(int)arg4 bottom:(int)arg5 rx:(double)arg6 ry:(double)arg7;
- (int)setMetaRgn;
- (int)setViewBox:(double)arg1 top:(double)arg2 width:(double)arg3 height:(double)arg4;
- (int)stretchBlt:(id)arg1 in_xDest:(int)arg2 in_yDest:(int)arg3 in_widthDest:(int)arg4 in_heightDest:(int)arg5 in_sourceImage:(id)arg6 in_xSrc:(int)arg7 in_ySrc:(int)arg8 in_widthSrc:(int)arg9 in_heightSrc:(int)arg10 in_rop:(unsigned int)arg11 in_xform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg12 in_colour:(unsigned int)arg13;
- (int)textOut:(id)arg1 px:(int*)arg2 py:(int*)arg3 in_text:(id)arg4;
- (void)updateViewBoxTransform;

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
