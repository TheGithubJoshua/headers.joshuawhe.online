<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCPVideoFaceMeshAnalyzer.h</title>
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

/PrivateFrameworks/VideoProcessing.framework/VCPVideoFaceMeshAnalyzer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing (699.60)
 */

@interface VCPVideoFaceMeshAnalyzer : NSObject {
    bool  _angleStable;
    NSDictionary * _blendShapes;
    bool  _bufferRotated;
    float * _curLM;
    int  _detectionModeCounter;
    float  _eulerAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBounds;
    int  _faceCount;
    VCPLandmarkValidator * _faceValidator;
    float  _focalLengthInPixels;
    bool  _inDetectionMode;
    bool  _initialized;
    VCPRTLandmarkDetector * _lmDetector;
    VCPRTLandmarkDetector * _lmTracker;
    int  _lostTrackCounter;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _meshVertices;
    bool  _offline;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    float * _prevLM;
    VCPFaceShapeModel * _shapeModel;
    int  _trackingModeCounter;
    float  _uc;
    float * _valAngle;
    struct __CVBuffer { } * _valBuffer;
    struct __CVBuffer { } * _valBufferRotated;
    float * _valLM;
    bool  _validateFailedOnce;
    NSObject<OS_dispatch_group> * _validationGroup;
    NSObject<OS_dispatch_queue> * _validationQueue;
    float  _validationScore;
    float  _vc;
    unsigned long long  _vertexCount;
}

@property (nonatomic, readonly) NSDictionary *blendShapes;
@property (nonatomic, readonly) bool bufferRotated;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;
@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRotation:(int)arg3 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (id)blendShapes;
- (bool)bufferRotated;
- (int)checkResolutionChange:(struct __CVBuffer { }*)arg1 withRotation:(int)arg2;
- (void)dealloc;
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(bool)arg2;
- (int)initialize:(struct __CVBuffer { }*)arg1;
- (bool)isTracked;
- (void)makeValidationDecision;
- (void)mapToCameraNegativeZ;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)rotateLandmarks:(int)arg1 width:(int)arg2 height:(int)arg3 landmarks:(float*)arg4 numLandmarks:(int)arg5;
- (bool)updateFocalLengthInPixels:(float)arg1;
- (void)updateIntrinsicWhenRotated;
- (int)validateFace:(struct __CVBuffer { }*)arg1 eulerAngles:(float*)arg2;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

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
