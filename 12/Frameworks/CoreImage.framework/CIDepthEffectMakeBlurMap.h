<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CIDepthEffectMakeBlurMap.h</title>
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

/Frameworks/CoreImage.framework/CIDepthEffectMakeBlurMap.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage (740.0.130)
 */

@interface CIDepthEffectMakeBlurMap : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPosition;
    NSNumber * inputDraftMode;
    CIVector * inputFaceMidPoint;
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIVector * inputLeftEyePosition;
    CIImage * inputMatteImage;
    CIVector * inputRightEyePosition;
    NSNumber * inputScale;
    CIImage * inputShiftmapImage;
    float  simulatedAperture;
    NSDictionary * tuningParameters;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (retain) CIVector *inputChinPosition;
@property (nonatomic, retain) NSNumber *inputDraftMode;
@property (retain) CIVector *inputFaceMidPoint;
@property (nonatomic, retain) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (retain) CIVector *inputLeftEyePosition;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIVector *inputRightEyePosition;
@property (nonatomic, copy) NSNumber *inputScale;
@property (retain) CIImage *inputShiftmapImage;

+ (id)customAttributes;

- (id)blurMapV2:(id)arg1;
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;
- (id)calibrationData;
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;
- (id)faceMaskParams:(id)arg1;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPosition;
- (id)inputDraftMode;
- (id)inputFaceMidPoint;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputLeftEyePosition;
- (id)inputMatteImage;
- (id)inputRightEyePosition;
- (id)inputScale;
- (id)inputShiftmapImage;
- (float)intrinsicMatrixFocalLength;
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;
- (id)lensModelParams:(id)arg1;
- (bool)needToRunFaceMask;
- (struct CGSize { double x1; double x2; })originalShiftMapSize;
- (id)outputImage;
- (id)refineShiftMapV3WithMainImage:(id)arg1 shiftmap:(id)arg2 lensModel:(id)arg3;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPosition:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputFaceMidPoint:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePosition:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputRightEyePosition:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShiftmapImage:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)smoothShiftMapV2:(id)arg1;
- (id)upsampledShiftMap:(id)arg1;

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