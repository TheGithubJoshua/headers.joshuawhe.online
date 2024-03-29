<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCapturePhotoOutput.h</title>
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

/Frameworks/AVFoundation.framework/AVCapturePhotoOutput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVCapturePhotoOutput : AVCaptureOutput {
    AVCapturePhotoOutputInternal * _internal;
}

@property (getter=isAutoRedEyeReductionSupported, nonatomic, readonly) bool autoRedEyeReductionSupported;
@property (nonatomic, readonly) NSArray *availableLivePhotoVideoCodecTypes;
@property (nonatomic, readonly) NSArray *availablePhotoCodecTypes;
@property (nonatomic, readonly) NSArray *availablePhotoFileTypes;
@property (nonatomic, readonly) NSArray *availablePhotoPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableRawPhotoFileTypes;
@property (nonatomic, readonly) NSArray *availableRawPhotoPixelFormatTypes;
@property (getter=isCameraCalibrationDataDeliverySupported, nonatomic, readonly) bool cameraCalibrationDataDeliverySupported;
@property (getter=isDualCameraDualPhotoDeliveryEnabled, nonatomic) bool dualCameraDualPhotoDeliveryEnabled;
@property (getter=isDualCameraDualPhotoDeliverySupported, nonatomic, readonly) bool dualCameraDualPhotoDeliverySupported;
@property (getter=isDualCameraFusionSupported, nonatomic, readonly) bool dualCameraFusionSupported;
@property (getter=isHighResolutionCaptureEnabled, nonatomic) bool highResolutionCaptureEnabled;
@property (nonatomic, readonly) bool isFlashScene;
@property (nonatomic, readonly) bool isStillImageStabilizationScene;
@property (getter=isLensStabilizationDuringBracketedCaptureSupported, nonatomic, readonly) bool lensStabilizationDuringBracketedCaptureSupported;
@property (getter=isLivePhotoAutoTrimmingEnabled, nonatomic) bool livePhotoAutoTrimmingEnabled;
@property (getter=isLivePhotoCaptureEnabled, nonatomic) bool livePhotoCaptureEnabled;
@property (getter=isLivePhotoCaptureSupported, nonatomic, readonly) bool livePhotoCaptureSupported;
@property (getter=isLivePhotoCaptureSuspended, nonatomic) bool livePhotoCaptureSuspended;
@property (nonatomic, readonly) unsigned long long maxBracketedCapturePhotoCount;
@property (nonatomic, copy) AVCapturePhotoSettings *photoSettingsForSceneMonitoring;
@property (nonatomic, readonly) NSArray *preparedPhotoSettingsArray;
@property (getter=isStillImageStabilizationSupported, nonatomic, readonly) bool stillImageStabilizationSupported;
@property (nonatomic, readonly) NSArray *supportedFlashModes;

+ (id)DNGPhotoDataRepresentationForRawSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
+ (id)JPEGPhotoDataRepresentationForJPEGSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
+ (struct __CFDictionary { }*)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (unsigned long long)maxLivePhotoDataSize;
+ (struct { int x1; int x2; })maxLivePhotoMovieDimensions;
+ (id)new;
+ (id)validMetadataTopLevelCGImagePropertiesKeys;

- (bool)_HEVCAndHEIFAreAvailableForSourceDevice:(id)arg1;
- (id)_avErrorUserInfoDictionaryForError:(int)arg1 request:(id)arg2 payload:(id)arg3 isOriginalMovie:(bool)arg4;
- (void)_decrementObserverCountForKeyPath:(id)arg1;
- (void)_dispatchFailureCallbacks:(unsigned int)arg1 forRequest:(id)arg2 withError:(id)arg3 cleanupRequest:(bool)arg4;
- (void)_dispatchFailureCallbacksForSettings:(id)arg1 toDelegate:(id)arg2 withError:(id)arg3;
- (id)_errorForFigCaptureSessionNotificationPayloadErrorStatus:(int)arg1 userInfo:(id)arg2;
- (id)_figCaptureIrisPreparedSettingsForRequest:(id)arg1;
- (id)_figCaptureIrisStillImageSettingsForAVCapturePhotoSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3;
- (void)_handleDidCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidFinishRecordingIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleDidRecordIrisMovieNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handlePreparationCompleteNotificationWithPayload:(id)arg1 settingsID:(long long)arg2;
- (void)_handleStillImageCompleteNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillBeginCaptureNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_handleWillCaptureStillImageNotificationWithPayload:(id)arg1 forRequest:(id)arg2;
- (void)_incrementObserverCountForKeyPath:(id)arg1;
- (id)_photoRequestForUniqueID:(long long)arg1;
- (void)_resetLivePhotoCaptureSuspended;
- (void)_resetLivePhotoMovieProcessingSuspended;
- (id)_sanitizedSettingsForSettings:(id)arg1;
- (void)_setIsFlashScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_setIsHDRScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_setIsStillImageStabilizationScene:(bool)arg1 firingKVO:(bool)arg2;
- (void)_updateAutoRedReductionSupportedForSourceDevice:(id)arg1;
- (void)_updateAvailableLivePhotoVideoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAvailablePhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoFileTypesForSourceDevice:(id)arg1;
- (void)_updateAvailableRawPhotoPixelFormatTypesForSourceDevice:(id)arg1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateDualCameraDualPhotoDeliverySupportedForSourceDevice:(id)arg1;
- (void)_updateDualCameraFusionSupportedForSourceDevice:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLivePhotoCaptureSupportedForSourceDevice:(id)arg1;
- (void)_updateLivePhotoMovieDimensionsForSourceDevice:(id)arg1;
- (void)_updateMaxBracketedCapturePhotoCountForSourceDevice:(id)arg1;
- (void)_updateOfflineVISSupportedForSourceDevice:(id)arg1;
- (void)_updateSceneMonitoringForSourceDevice:(id)arg1;
- (void)_updateStillImageStabilizationSupportedForSourceDevice:(id)arg1;
- (void)_updateSupportedFlashModesForSourceDevice:(id)arg1;
- (void)_updateSupportedHDRModesForSourceDevice:(id)arg1;
- (void)_updateSupportedPropertiesForSourceDevice:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableLivePhotoVideoCodecTypes;
- (id)availablePhotoCodecTypes;
- (id)availablePhotoFileTypes;
- (id)availablePhotoPixelFormatTypes;
- (id)availableRawPhotoFileTypes;
- (id)availableRawPhotoPixelFormatTypes;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (void)capturePhotoWithSettings:(id)arg1 delegate:(id)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)figCaptureIrisPreparedSettings;
- (id)init;
- (bool)isAutoRedEyeReductionSupported;
- (bool)isCameraCalibrationDataDeliverySupported;
- (bool)isDepthDataDeliveryEnabled;
- (bool)isDepthDataDeliverySupported;
- (bool)isDualCameraDualPhotoDeliveryEnabled;
- (bool)isDualCameraDualPhotoDeliverySupported;
- (bool)isDualCameraFusionSupported;
- (bool)isFilterRenderingEnabled;
- (bool)isFlashScene;
- (bool)isHDRScene;
- (bool)isHighResolutionCaptureEnabled;
- (bool)isImageOptimizationForOfflineVideoStabilizationSupported;
- (bool)isLensStabilizationDuringBracketedCaptureSupported;
- (bool)isLivePhotoAutoTrimmingEnabled;
- (bool)isLivePhotoCaptureEnabled;
- (bool)isLivePhotoCaptureSupported;
- (bool)isLivePhotoCaptureSuspended;
- (bool)isLivePhotoMovieProcessingSuspended;
- (bool)isPortraitEffectsMatteDeliveryEnabled;
- (bool)isPortraitEffectsMatteDeliverySupported;
- (bool)isStillImageStabilizationScene;
- (bool)isStillImageStabilizationSupported;
- (struct { int x1; int x2; })livePhotoMovieDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoMovieDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoMovieVideoFrameDuration;
- (unsigned long long)maxBracketedCapturePhotoCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct { int x1; int x2; })optimizedImageDimensionsForOfflineStabilization;
- (bool)optimizesImagesForOfflineVideoStabilization;
- (id)photoSettingsForSceneMonitoring;
- (id)preparedPhotoSettingsArray;
- (void)removeConnection:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setDualCameraDualPhotoDeliveryEnabled:(bool)arg1;
- (void)setFigCaptureSessionSectionProperty:(struct __CFString { }*)arg1 withHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settingStateVaribleToNoOnFailure:(bool*)arg3;
- (void)setFilterRenderingEnabled:(bool)arg1;
- (void)setHighResolutionCaptureEnabled:(bool)arg1;
- (void)setLivePhotoAutoTrimmingEnabled:(bool)arg1;
- (void)setLivePhotoCaptureEnabled:(bool)arg1;
- (void)setLivePhotoCaptureSuspended:(bool)arg1;
- (void)setLivePhotoMovieProcessingSuspended:(bool)arg1;
- (void)setOptimizesImagesForOfflineVideoStabilization:(bool)arg1;
- (void)setPhotoSettingsForSceneMonitoring:(id)arg1;
- (void)setPortraitEffectsMatteDeliveryEnabled:(bool)arg1;
- (void)setPreparedPhotoSettingsArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)supportedFlashModes;
- (id)supportedHDRModes;
- (id)supportedPhotoCodecTypesForFileType:(id)arg1;
- (id)supportedPhotoPixelFormatTypesForFileType:(id)arg1;
- (id)supportedRawPhotoPixelFormatTypesForFileType:(id)arg1;
- (void)userInitiatedCaptureRequestAtTime:(unsigned long long)arg1;

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
