<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CVAFilterGuided.h</title>
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

/PrivateFrameworks/AppleCVAPhoto.framework/CVAFilterGuided.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAFilterGuided : ImageSaverRegistrator {
    <MTLTexture> * _alphaTexture;
    CVAFilterBox * _boxFilter;
    <MTLTexture> * _convolutedCoeff;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _filteredAlphaTexture;
    <MTLTexture> * _gfGGGBBB;
    <MTLTexture> * _gfMeanGGGBBB;
    <MTLTexture> * _gfMeanNormalizationFactor;
    <MTLTexture> * _gfMeanRRRGRB;
    <MTLTexture> * _gfMeanSrcGuide;
    <MTLTexture> * _gfMeanSrcWithGuide;
    <MTLTexture> * _gfMeanWeight;
    <MTLTexture> * _gfRRRGRB;
    <MTLTexture> * _gfSrcGuide;
    <MTLTexture> * _gfSrcWithGuide;
    <MTLTexture> * _gfTmp;
    <MTLTexture> * _gfTmp2;
    <MTLComputePipelineState> * _guidedFilterApplyRGBAKernel;
    <MTLComputePipelineState> * _guidedFilterEmbedGuideKernel;
    <MTLComputePipelineState> * _guidedFilterInvertKernel;
    <MTLComputePipelineState> * _guidedFilterMultiplyKernel;
    <MTLComputePipelineState> * _guidedFilterPremultiplyKernel;
    <MTLComputePipelineState> * _guidedFilterRegressionKernel;
    <MTLComputePipelineState> * _guidedFilterSecondOrderProductsKernel;
    CVAFilterHybridResampling * _hybridResampler;
    <MTLTexture> * _hybridUpscalingIntermediateR32Texture;
    <MTLTexture> * _hybridUpscalingIntermediateTexture;
    CVAFilterInfimumConvolution * _infConvolution;
    NSString * _label;
    <MTLTexture> * _laplacianLimitedAlphaTexture;
    <MTLLibrary> * _library;
    <MTLTexture> * _lowResLaplacianLimitedMatte;
    <MTLTexture> * _lowResMatte;
    <MTLComputePipelineState> * _postProcessAlphaKernel;
    int  _smallGuidedFilterKernelSize;
    <MTLTexture> * _srcTexture;
    <MTLTexture> * _upscaledCoeff;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (void)encodeFilterApplyToBuffer:(id)arg1 coeff:(id)arg2 source:(id)arg3 destination:(id)arg4;
- (void)encodeHybridUpSamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)encodePostProcessAlphaToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 alphaMaxLaplacian:(float)arg4 infConvOrientation:(float)arg5 infConvMajorRadius:(float)arg6 infConvMinorRadius:(float)arg7 gammaExponent:(float)arg8 enableInfConvolution:(bool)arg9;
- (void)encodeReconstructToCommandBuffer:(id)arg1 inGuidancePixelBuffer:(struct __CVBuffer { }*)arg2 inCoeffTexture:(id)arg3 outFilteredTexture:(id)arg4;
- (void)encodeRegressionToCommandBuffer:(id)arg1 inSourceTexture:(id)arg2 inGuidanceTexture:(id)arg3 inWeightTexture:(id)arg4 outCoeffTexture:(id)arg5 epsilon:(float)arg6;
- (void)initSourceTexture:(struct __CVBuffer { }*)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 textureSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 alphaSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 kernelSize:(int)arg6 alphaDownsamplingScale:(float)arg7 error:(id*)arg8;
- (id)label;

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
