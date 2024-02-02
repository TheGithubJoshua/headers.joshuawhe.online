<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FigVideoCaptureConnectionConfiguration.h</title>
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

/PrivateFrameworks/Celestial.framework/FigVideoCaptureConnectionConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    bool  _cameraIntrinsicMatrixDeliveryEnabled;
    bool  _mirroringEnabled;
    int  _orientation;
    int  _outputFormat;
    int  _outputHeight;
    int  _outputWidth;
    int  _retainedBufferCount;
    int  _videoStabilizationMethod;
}

@property (nonatomic) bool cameraIntrinsicMatrixDeliveryEnabled;
@property (readonly) bool irisFrameHarvestingEnabled;
@property (readonly) bool irisSDOFEnabled;
@property (readonly) bool irisVISEnabled;
@property (nonatomic) bool mirroringEnabled;
@property (nonatomic) int orientation;
@property (nonatomic) int outputFormat;
@property (nonatomic) int outputHeight;
@property (nonatomic) int outputWidth;
@property (readonly) bool previewDepthDataDeliveryEnabled;
@property (readonly) bool previewDepthFilterRenderingEnabled;
@property (readonly) bool previewFilterRenderingEnabled;
@property (nonatomic) int retainedBufferCount;
@property (readonly) struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; } transform;
@property (nonatomic) int videoStabilizationMethod;

+ (bool)cameraIntrinsicMatrixDeliveryEnabled:(id)arg1 doingFaceTracking:(bool)arg2;
+ (int)videoStabilizationMethod:(id)arg1;

- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })_transformWithSourceDimensions:(struct { int x1; int x2; })arg1 forceSourceDimensions:(bool)arg2;
- (bool)cameraIntrinsicMatrixDeliveryEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransform;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })depthDataTransformWithSourceDimensions;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)irisFrameHarvestingEnabled;
- (bool)irisSDOFEnabled;
- (bool)irisVISEnabled;
- (bool)isEqual:(id)arg1;
- (bool)mirroringEnabled;
- (int)orientation;
- (int)outputFormat;
- (int)outputHeight;
- (int)outputWidth;
- (bool)previewDepthDataDeliveryEnabled;
- (bool)previewDepthFilterRenderingEnabled;
- (bool)previewFilterRenderingEnabled;
- (bool)requiresScalingForInputTransForm:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg1 nodeName:(id)arg2;
- (int)retainedBufferCount;
- (void)setCameraIntrinsicMatrixDeliveryEnabled:(bool)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutputFormat:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (void)setRetainedBufferCount:(int)arg1;
- (void)setVideoStabilizationMethod:(int)arg1;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })transform;
- (int)videoStabilizationMethod;

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