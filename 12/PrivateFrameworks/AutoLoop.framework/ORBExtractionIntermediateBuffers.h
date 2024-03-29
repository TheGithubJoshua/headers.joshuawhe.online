<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ORBExtractionIntermediateBuffers.h</title>
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

/PrivateFrameworks/AutoLoop.framework/ORBExtractionIntermediateBuffers.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop (1)
 */

@interface ORBExtractionIntermediateBuffers : NSObject {
    <MTLTexture> * _boxBlurredTexture_R8Uint;
    <MTLTexture> * _boxBlurredTexture_RGBA8Uint;
    <MTLBuffer> * _compactKeypointsAndResponsesBuffer;
    <MTLBuffer> * _compactKeypointsBuffer;
    <MTLBuffer> * _countOfKeypointsPerRegion;
    unsigned int  _countOfRectRegions;
    <MTLBuffer> * _cumulativeCountOfKeypointsPerRegion;
    <MTLBuffer> * _descriptorBuffer;
    <MTLTexture> * _gaussianBlurredTexture_R8Uint;
    <MTLTexture> * _gaussianBlurredTexture_R8Unorm;
    <MTLTexture> * _gaussianBlurredTexture_RGBA8Uint;
    <MTLBuffer> * _histogramsBuffer;
    <MTLBuffer> * _keypointCountBuffer;
    unsigned long long  _maxDescriptorCount;
    int  _maxKeypointsPerRegion;
    unsigned int  _maxRegionHeight;
    MPSKernel * _mpsFindKeypoints;
    MPSKernel * _mpsHistogram;
    <MTLBuffer> * _mpsRegionStrideBuffer;
    <MTLBuffer> * _rectRegionCount;
    NSArray * _rectRegions;
    <MTLBuffer> * _rectRegionsBuffer;
    <MTLBuffer> * _rectRegionsDesiredKeypoints;
    <MTLBuffer> * _refinedKeypointsBuffer;
    <MTLBuffer> * _refinementIntermediatesBuffer;
    <MTLBuffer> * _responseBuffer;
    <MTLTexture> * _responseTexture;
    <MTLTexture> * _suppressedResponseTexture_R8Uint;
    <MTLTexture> * _suppressedResponseTexture_R8Unorm;
    <MTLTexture> * _suppressedResponseTexture_RGBA8Uint;
    <MTLBuffer> * _thresholdRangeBuffer;
    <MTLBuffer> * _thresholdsBuffer;
    <MTLBuffer> * _truncatedRegionsBuffer;
}

@property (retain) <MTLTexture> *boxBlurredTexture_R8Uint;
@property (retain) <MTLTexture> *boxBlurredTexture_RGBA8Uint;
@property (retain) <MTLBuffer> *compactKeypointsAndResponsesBuffer;
@property (retain) <MTLBuffer> *compactKeypointsBuffer;
@property (retain) <MTLBuffer> *countOfKeypointsPerRegion;
@property unsigned int countOfRectRegions;
@property (retain) <MTLBuffer> *cumulativeCountOfKeypointsPerRegion;
@property (retain) <MTLBuffer> *descriptorBuffer;
@property (retain) <MTLTexture> *gaussianBlurredTexture_R8Uint;
@property (retain) <MTLTexture> *gaussianBlurredTexture_R8Unorm;
@property (retain) <MTLTexture> *gaussianBlurredTexture_RGBA8Uint;
@property (retain) <MTLBuffer> *histogramsBuffer;
@property (retain) <MTLBuffer> *keypointCountBuffer;
@property unsigned long long maxDescriptorCount;
@property int maxKeypointsPerRegion;
@property unsigned int maxRegionHeight;
@property (retain) MPSKernel *mpsFindKeypoints;
@property (retain) MPSKernel *mpsHistogram;
@property (retain) <MTLBuffer> *mpsRegionStrideBuffer;
@property (retain) <MTLBuffer> *rectRegionCount;
@property (copy) NSArray *rectRegions;
@property (retain) <MTLBuffer> *rectRegionsBuffer;
@property (retain) <MTLBuffer> *rectRegionsDesiredKeypoints;
@property (retain) <MTLBuffer> *refinedKeypointsBuffer;
@property (retain) <MTLBuffer> *refinementIntermediatesBuffer;
@property (retain) <MTLBuffer> *responseBuffer;
@property (retain) <MTLTexture> *responseTexture;
@property (retain) <MTLTexture> *suppressedResponseTexture_R8Uint;
@property (retain) <MTLTexture> *suppressedResponseTexture_R8Unorm;
@property (retain) <MTLTexture> *suppressedResponseTexture_RGBA8Uint;
@property (retain) <MTLBuffer> *thresholdRangeBuffer;
@property (retain) <MTLBuffer> *thresholdsBuffer;
@property (retain) <MTLBuffer> *truncatedRegionsBuffer;

- (void).cxx_destruct;
- (void)_reinitializeIntermediateBuffersWithDevice:(id)arg1 templateImage:(struct __CVBuffer { }*)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5;
- (id)boxBlurredTexture_R8Uint;
- (id)boxBlurredTexture_RGBA8Uint;
- (id)compactKeypointsAndResponsesBuffer;
- (id)compactKeypointsBuffer;
- (id)countOfKeypointsPerRegion;
- (unsigned int)countOfRectRegions;
- (id)cumulativeCountOfKeypointsPerRegion;
- (id)descriptorBuffer;
- (id)gaussianBlurredTexture_R8Uint;
- (id)gaussianBlurredTexture_R8Unorm;
- (id)gaussianBlurredTexture_RGBA8Uint;
- (id)histogramsBuffer;
- (id)initWithDevice:(id)arg1 templateImage:(struct __CVBuffer { }*)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5;
- (id)keypointCountBuffer;
- (unsigned long long)maxDescriptorCount;
- (int)maxKeypointsPerRegion;
- (unsigned int)maxRegionHeight;
- (id)mpsFindKeypoints;
- (id)mpsHistogram;
- (id)mpsRegionStrideBuffer;
- (id)rectRegionCount;
- (id)rectRegions;
- (id)rectRegionsBuffer;
- (id)rectRegionsDesiredKeypoints;
- (id)refinedKeypointsBuffer;
- (id)refinementIntermediatesBuffer;
- (id)responseBuffer;
- (id)responseTexture;
- (void)setBoxBlurredTexture_R8Uint:(id)arg1;
- (void)setBoxBlurredTexture_RGBA8Uint:(id)arg1;
- (void)setCompactKeypointsAndResponsesBuffer:(id)arg1;
- (void)setCompactKeypointsBuffer:(id)arg1;
- (void)setCountOfKeypointsPerRegion:(id)arg1;
- (void)setCountOfRectRegions:(unsigned int)arg1;
- (void)setCumulativeCountOfKeypointsPerRegion:(id)arg1;
- (void)setDescriptorBuffer:(id)arg1;
- (void)setGaussianBlurredTexture_R8Uint:(id)arg1;
- (void)setGaussianBlurredTexture_R8Unorm:(id)arg1;
- (void)setGaussianBlurredTexture_RGBA8Uint:(id)arg1;
- (void)setHistogramsBuffer:(id)arg1;
- (void)setKeypointCountBuffer:(id)arg1;
- (void)setMaxDescriptorCount:(unsigned long long)arg1;
- (void)setMaxKeypointsPerRegion:(int)arg1;
- (void)setMaxRegionHeight:(unsigned int)arg1;
- (void)setMpsFindKeypoints:(id)arg1;
- (void)setMpsHistogram:(id)arg1;
- (void)setMpsRegionStrideBuffer:(id)arg1;
- (void)setRectRegionCount:(id)arg1;
- (void)setRectRegions:(id)arg1;
- (void)setRectRegionsBuffer:(id)arg1;
- (void)setRectRegionsDesiredKeypoints:(id)arg1;
- (void)setRefinedKeypointsBuffer:(id)arg1;
- (void)setRefinementIntermediatesBuffer:(id)arg1;
- (void)setResponseBuffer:(id)arg1;
- (void)setResponseTexture:(id)arg1;
- (void)setSuppressedResponseTexture_R8Uint:(id)arg1;
- (void)setSuppressedResponseTexture_R8Unorm:(id)arg1;
- (void)setSuppressedResponseTexture_RGBA8Uint:(id)arg1;
- (void)setThresholdRangeBuffer:(id)arg1;
- (void)setThresholdsBuffer:(id)arg1;
- (void)setTruncatedRegionsBuffer:(id)arg1;
- (id)suppressedResponseTexture_R8Uint;
- (id)suppressedResponseTexture_R8Unorm;
- (id)suppressedResponseTexture_RGBA8Uint;
- (id)thresholdRangeBuffer;
- (id)thresholdsBuffer;
- (id)truncatedRegionsBuffer;

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
