<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CIDisparityRefinement.h</title>
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

/Frameworks/CoreImage.framework/CIDisparityRefinement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage (740.0.130)
 */

@interface CIDisparityRefinement : CIFilter {
    CIImage * inputDisparityImage;
    CIImage * inputImage;
    CIVector * inputOriginalSize;
    NSNumber * inputPropagateKernel;
    NSNumber * inputPropagateMinWeightSum;
    NSNumber * inputPropagateSigmaChma;
    NSNumber * inputPropagateSigmaLuma;
    NSNumber * inputScale;
    NSNumber * inputSmoothSigma;
}

@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;
@property (copy) CIVector *inputOriginalSize;
@property (copy) NSNumber *inputPropagateKernel;
@property (copy) NSNumber *inputPropagateMinWeightSum;
@property (copy) NSNumber *inputPropagateSigmaChma;
@property (copy) NSNumber *inputPropagateSigmaLuma;
@property (copy) NSNumber *inputScale;
@property (copy) NSNumber *inputSmoothSigma;

+ (id)customAttributes;

- (id)_combineImages;
- (id)_initialConversionRGB;
- (id)_propagateDisparity;
- (id)_propagateDisparityCombined;
- (id)_propagateDisparityR1;
- (id)_propagateDisparityR1Combined;
- (id)_pyramidGenerateLevel;
- (id)_smoothDisparity;
- (id)generatePyramidLevel:(id)arg1 useMetal:(bool)arg2;
- (id)initialConversionForSize:(struct CGSize { double x1; double x2; })arg1 useMetal:(bool)arg2;
- (id)inputDisparityImage;
- (id)inputImage;
- (id)inputOriginalSize;
- (id)inputPropagateKernel;
- (id)inputPropagateMinWeightSum;
- (id)inputPropagateSigmaChma;
- (id)inputPropagateSigmaLuma;
- (id)inputScale;
- (id)inputSmoothSigma;
- (id)outputImage;
- (id)outputImageUsingMetal:(bool)arg1;
- (id)propagateDisparity:(id)arg1 pyramids:(id*)arg2 useMetal:(bool)arg3 computedPyramidLevels:(int)arg4;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOriginalSize:(id)arg1;
- (void)setInputPropagateKernel:(id)arg1;
- (void)setInputPropagateMinWeightSum:(id)arg1;
- (void)setInputPropagateSigmaChma:(id)arg1;
- (void)setInputPropagateSigmaLuma:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputSmoothSigma:(id)arg1;
- (id)shiftmapLevelZeroWithSize:(struct CGSize { double x1; double x2; })arg1 useMetal:(bool)arg2;
- (id)smoothDisparityImage:(id)arg1 useMetal:(bool)arg2;

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