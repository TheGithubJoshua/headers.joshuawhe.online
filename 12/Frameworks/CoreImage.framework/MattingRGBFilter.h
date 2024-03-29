<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MattingRGBFilter.h</title>
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

/Frameworks/CoreImage.framework/MattingRGBFilter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage (740.0.130)
 */

@interface MattingRGBFilter : NSObject <MattingFilter> {
    <MTLTexture> * _alphaStack;
    <MTLTexture> * _alphaStackTexture2DView;
    <MTLComputePipelineState> * _applyCoefficientsKernel;
    <MTLComputePipelineState> * _applyCoefficientsSamplingKernel;
    <MTLTexture> * _coefficients;
    <MTLTexture> * _coefficientsTexture2DView;
    <MTLComputePipelineState> * _compute3DCoefficientsKernel;
    <MTLComputePipelineState> * _computeInverted3DGuideCovarianceMatrixKernel;
    <MTLTexture> * _constraints;
    <MTLTexture> * _constraintsTexture2DView;
    <MTLDevice> * _device;
    <MTLTexture> * _guideStack;
    <MTLTexture> * _guideStackTexture2DView;
    <MTLLibrary> * _library;
    <MTLTexture> * _mean_I;
    <MTLTexture> * _mean_alpha;
    <MTLComputePipelineState> * _nearestNeighborDownsamplingKernel;
    NSArray * _var_I;
    MattingBoxTensorFilter * boxTensorFilter;
    bool  coefficientsComputed;
    struct { 
        unsigned int internalWidth; 
        unsigned int internalHeight; 
        unsigned int spatialRadius; 
        unsigned int temporalRadius; 
        unsigned int arrayLength; 
        float epsilon; 
        bool disableForSameResolution; 
    }  config;
    bool  stateComputed;
}

@property (retain) MattingBoxTensorFilter *boxTensorFilter;
@property (readonly) bool coefficientsComputed;
@property struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; } config;
@property (readonly) bool stateComputed;

- (void).cxx_destruct;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (id)boxTensorFilter;
- (bool)coefficientsComputed;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })config;
- (void)dealloc;
- (int)encodeApplyCoefficientsOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 constraints:(id)arg4 destinationAlphaTexture:(id)arg5;
- (int)encodeCoefficientsOn:(id)arg1 guideStack:(id)arg2 alphaStack:(id)arg3 mean_I:(id)arg4 var_I:(id)arg5 coefficients:(id)arg6;
- (void)encodeNearestNeighborDownSamplingOn:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3;
- (int)encodeStateOn:(id)arg1 colorGuide:(id)arg2 disparityGuide:(id)arg3 initialSegmentation:(id)arg4 constraints:(id)arg5;
- (int)encodeStepOn:(id)arg1;
- (int)encodeUpsampleOn:(id)arg1 segmentation:(id)arg2 colorGuide:(id)arg3 disparityGuide:(id)arg4 outputMatte:(id)arg5;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)releaseResources;
- (void)setBoxTensorFilter:(id)arg1;
- (void)setConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; float x6; bool x7; })arg1;
- (bool)stateComputed;

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
