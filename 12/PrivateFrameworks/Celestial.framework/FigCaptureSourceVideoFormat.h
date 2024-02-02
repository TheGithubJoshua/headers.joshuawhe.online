<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FigCaptureSourceVideoFormat.h</title>
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

/PrivateFrameworks/Celestial.framework/FigCaptureSourceVideoFormat.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat {
    FigCaptureSourceCompanionFormat * _depthCompanionFormat;
    NSArray * _frontEndScalerCompanionFormats;
    bool  _isExternalFormat;
    bool  _isMultiStreamFormat;
    bool  _isStillImageDepthSupported;
    bool  _isStillImageDisparitySupported;
    bool  _isStreamingDepthSupported;
    bool  _isStreamingDisparitySupported;
    FigCaptureSourceCompanionFormat * _nonSIFRCompanionFormat;
    bool  _sifrSupported;
    NSArray * _supportedDepthDataFormats;
}

@property (readonly) NSArray *AVCaptureSessionPresets;
@property (getter=isSIFRSupported, readonly) bool SIFRSupported;
@property (readonly) int autoFocusSystem;
@property (getter=isBinned, readonly) bool binned;
@property (readonly) bool configureForStillImageStabilizationSupport;
@property (readonly) float defaultMaxFrameRate;
@property (readonly) float defaultMinFrameRate;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) struct { int x1; int x2; } dimensions;
@property (getter=isExternalFormat, readonly) bool externalFormat;
@property (readonly) float fieldOfView;
@property (readonly) int formatIndex;
@property (readonly) bool hasSensorHDRCompanionIndex;
@property (getter=isHDRSupported, readonly) bool hdrSupported;
@property (getter=isHighProfileH264Supported, readonly) bool highProfileH264Supported;
@property (getter=isHighResPhotoFormat, readonly) bool highResPhotoFormat;
@property (readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property (getter=isHighResStillImageSupported, readonly) bool highResStillImageSupported;
@property (getter=isIrisSupported, readonly) bool irisSupported;
@property (getter=isIrisVideoStabilizationSupported, readonly) bool irisVideoStabilizationSupported;
@property (getter=isISPMultiBandNoiseReductionSupported, readonly) bool ispMultiBandNoiseReductionSupported;
@property (getter=isLowLightVideoCaptureSupported, readonly) bool lowLightVideoCaptureSupported;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float maxZoomFactor;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (readonly) float minISO;
@property (readonly) float minSimulatedAperture;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly) bool needsPreviewDPCC;
@property (getter=isPhotoFormat, readonly) bool photoFormat;
@property (readonly) bool prefersSensorHDREnabled;
@property (readonly) struct { int x1; int x2; } previewDimensions;
@property (getter=isQuadraHighResStillImageSupported, readonly) bool quadraHighResStillImageSupported;
@property (readonly) int rawBitDepth;
@property (getter=isRedEyeReductionSupported, readonly) bool redEyeReductionSupported;
@property (getter=isSecondaryScalerUnavailable, readonly) bool secondaryScalerUnavailable;
@property (readonly) struct { int x1; int x2; } sensorDimensions;
@property (getter=isStagePreviewRenderingSupported, readonly) bool stagePreviewRenderingSupported;
@property (getter=isStereoFusionSupported, readonly) bool stereoFusionSupported;
@property (getter=isStillImageDepthSupported, readonly) bool stillImageDepthSupported;
@property (getter=isStillImageDisparitySupported, readonly) bool stillImageDisparitySupported;
@property (getter=isStillImageISPMultiBandNoiseReductionSupported, readonly) bool stillImageISPMultiBandNoiseReductionSupported;
@property (getter=isStillImageStabilizationSupported, readonly) bool stillImageStabilizationSupported;
@property (getter=isStreamingDepthSupported, readonly) bool streamingDepthSupported;
@property (getter=isStreamingDisparitySupported, readonly) bool streamingDisparitySupported;
@property (getter=isStudioAndContourPreviewRenderingSupported, readonly) bool studioAndContourPreviewRenderingSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (getter=isVisionDataDeliverySupported, readonly) bool visionDataDeliverySupported;
@property (getter=isWideAsStatsMasterEnabled, readonly) bool wideAsStatsMasterEnabled;
@property (getter=isWideColorSupported, readonly) bool wideColorSupported;
@property (readonly) bool zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (getter=isZeroShutterLagSupported, readonly) bool zeroShutterLagSupported;
@property (getter=isZoomDynamicSensorCropSupported, readonly) bool zoomDynamicSensorCropSupported;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (getter=isZoomSupported, readonly) bool zoomSupported;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)AVCaptureSessionPresets;
- (struct { int x1; int x2; })_highQualitySensorDimensions;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (struct { int x1; int x2; })_outputDimensions;
- (void)_resolveProperties;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(bool)arg1;
- (float)aeMaxGain;
- (int)autoFocusSystem;
- (bool)capturesStillsFromVideoStream;
- (bool)configureForStillImageStabilizationSupport;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (struct { int x1; int x2; })cropDimensionsForFES;
- (void)dealloc;
- (float)defaultMaxFrameRate;
- (float)defaultMinFrameRate;
- (float)defaultSimulatedAperture;
- (id)depthCompanionFormat;
- (struct { int x1; int x2; })dimensions;
- (int)fesBinningFactorHorizontal;
- (int)fesBinningFactorVertical;
- (struct { int x1; int x2; })fesInputCropDimensions;
- (float)fieldOfView;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)formatIndex;
- (id)frontEndScalerCompanionFormats;
- (bool)hasSensorHDRCompanionIndex;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (int)horizontalSensorBinningFactor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBinned;
- (bool)isCompatibleWithInfraredFormat:(id)arg1;
- (bool)isExternalFormat;
- (bool)isHDRSupported;
- (bool)isHighProfileH264Supported;
- (bool)isHighResPhotoFormat;
- (bool)isHighResStillImageSupported;
- (bool)isISPMultiBandNoiseReductionSupported;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isLowLightVideoCaptureSupported;
- (bool)isMultiStreamFormat;
- (bool)isPhotoFormat;
- (bool)isQuadraHighResStillImageSupported;
- (bool)isRedEyeReductionSupported;
- (bool)isSIFRSupported;
- (bool)isSecondaryScalerUnavailable;
- (bool)isStabilizationModeSupported:(int)arg1;
- (bool)isStagePreviewRenderingSupported;
- (bool)isStereoFusionSupported;
- (bool)isStillImageDepthSupported;
- (bool)isStillImageDisparitySupported;
- (bool)isStillImageISPChromaNoiseReductionEnabled;
- (bool)isStillImageISPMultiBandNoiseReductionSupported;
- (bool)isStillImageStabilizationSupported;
- (bool)isStreamingDepthSupported;
- (bool)isStreamingDisparitySupported;
- (bool)isStudioAndContourPreviewRenderingSupported;
- (bool)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1;
- (bool)isVisionDataDeliverySupported;
- (bool)isWideAsStatsMasterEnabled;
- (bool)isWideColorSupported;
- (bool)isZeroShutterLagSupported;
- (bool)isZoomDynamicSensorCropSupported;
- (bool)isZoomSupported;
- (bool)ispChromaNoiseReductionEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (int)maxIntegrationTimeOverride;
- (float)maxSimulatedAperture;
- (float)maxSupportedFrameRate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maxVisibleSensorRect;
- (float)maxZoomFactor;
- (float)maxZoomFactorForDepthDataDelivery;
- (unsigned int)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (float)minSimulatedAperture;
- (float)minSupportedFrameRate;
- (float)minZoomFactorForDepthDataDelivery;
- (struct { int x1; int x2; })nativeDimensions;
- (bool)needsPreviewDPCC;
- (id)nonSIFRCompanionFormat;
- (bool)prefersSensorHDREnabled;
- (struct { int x1; int x2; })previewDimensions;
- (int)previewImageQueueSyncStrategy;
- (int)rawBitDepth;
- (id)rawLensShadingCorrection;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorHDRCompanionIndex;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (struct CGSize { double x1; double x2; })stabilizationOverscanPercentageFromSensorForFESCropDimensions:(struct { int x1; int x2; })arg1;
- (float)stabilizationOverscanPercentageOverrideForCinematic;
- (int)stabilizationTypeOverrideForCinematic;
- (int)stabilizationTypeOverrideForStandard;
- (int)stillImageNoiseReductionAndStabilizationScheme;
- (id)supportedColorSpaces;
- (id)supportedDepthDataFormats;
- (unsigned int)supportedRawPixelFormat;
- (bool)sushiRawBlackBorderingEnabled;
- (int)temporalNoiseReductionMode;
- (int)verticalSensorBinningFactor;
- (bool)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
- (float)zoomFactorUpscaleThreshold;

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