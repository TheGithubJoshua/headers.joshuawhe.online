<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GQHCanvasContext.h</title>
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

/PrivateFrameworks/iWorkImport.framework/GQHCanvasContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface GQHCanvasContext : NSObject <GQHContext> {
    struct __CFString { } * mBezierStr;
    NSMutableString * mFunctionName;
    GQDAffineGeometry * mGeometry;
    bool  mHasFill;
    bool  mHasStroke;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 neighboringCP:(struct CGPoint { double x1; double x2; })arg4 filledPath:(struct CGPath {}**)arg5 strokedPath:(struct CGPath {}**)arg6;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)createMaskedImageWithId:(struct __CFString { }*)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath { }*)arg6 graphicStyle:(id)arg7 isFloating:(bool)arg8 state:(id)arg9;
- (void)createShapeWithId:(struct __CFString { }*)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(bool)arg5 state:(id)arg6;
- (void)dealloc;
- (struct GQHPathEndPointInfo { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; int x6; })endPointInfoForPath:(struct CGPath { }*)arg1;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)prepareContext:(id)arg1;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)setCGPath:(struct CGPath { }*)arg1 state:(id)arg2;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setImageFill:(struct __CFURL { }*)arg1 srcSize:(struct CGSize { double x1; double x2; })arg2 mode:(int)arg3 state:(id)arg4;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (void)teardownContext:(id)arg1;
- (void)translate:(struct CGSize { double x1; double x2; })arg1 state:(id)arg2;

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
