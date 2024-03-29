<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FigPAMFrameScore.h</title>
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

/PrivateFrameworks/Celestial.framework/FigPAMFrameScore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface FigPAMFrameScore : NSObject {
    FigUtlFaceDetection * _faceDetection;
    NSMutableArray * _frameScoreInputs;
    struct FigPAMFrameScoreWeightsStruct { 
        float eyeOpen; 
        float smile; 
        float size; 
        float focusScore; 
        float time; 
        float quality; 
    }  _weights;
}

+ (bool)computeFrameScoreFeatureVector:(float)arg1 afScore:(float)arg2 face:(const struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; }*)arg3 result:(float*)arg4;
+ (float)computeFrameScoreInnerProduct:(const float*)arg1 weights:(const struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2;
+ (int)featureCount;

- (void).cxx_destruct;
- (id)computeFeatureVectors:(int)arg1;
- (id)computeFrameScores:(int)arg1;
- (void)dealloc;
- (bool)detectFace:(int)arg1 image:(struct __CVBuffer { }*)arg2 meta:(id)arg3 useFocusRegion:(bool)arg4 faceRectangles:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7 result:(struct { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; bool x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; bool x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; bool x7; struct CGPoint { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; bool x10; struct { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; float x_11_1_6; } x11; bool x12; bool x13; bool x14; float x15; bool x16; float x17; float x18; bool x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; } x20; }*)arg8;
- (id)init;
- (id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3;
- (bool)processImage:(struct __CVBuffer { }*)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3 useFocusRegion:(bool)arg4 faceRectangles:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 faceRectangleCount:(int)arg6 toImageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7 orientation:(int)arg8;
- (void)reset;
- (void)setWeights:(struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct FigPAMFrameScoreWeightsStruct { float x1; float x2; float x3; float x4; float x5; float x6; })weights;

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
