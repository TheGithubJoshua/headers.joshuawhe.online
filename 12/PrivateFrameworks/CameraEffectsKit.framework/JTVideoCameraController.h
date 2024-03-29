<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JTVideoCameraController.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/JTVideoCameraController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface JTVideoCameraController : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCapturePhotoCaptureDelegate, CFXFaceTrackingRendererDelegate, JTARKitFrameDelegate> {
    JTARKitCameraSessionController * _arCameraSessionController;
    NSObject<OS_dispatch_queue> * _audioDelegateQueue;
    NSMutableSet * _audioDelegates;
    AVCaptureDeviceInput * _audioInput;
    NSObject<OS_dispatch_queue> * _audioOutQueue;
    AVCaptureAudioDataOutput * _audioOutput;
    long long  _cachedMovieRecordingTorchMode;
    double  _cameraDeviceCurrentZoom_captureSessionQueue;
    double  _cameraDeviceCurrentZoom_queryDataQueue;
    AVCaptureDeviceInput * _cameraDeviceInput;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraDeviceIntrinsics_dataOutSynchQueue;
    double  _cameraDeviceMaxZoom_captureSessionQueue;
    NSString * _cameraMode_captureSessionQueue;
    NSString * _cameraMode_queryDataQueue;
    AVCaptureSession * _captureSession;
    NSObject<OS_dispatch_queue> * _captureSessionQueue;
    bool  _captureSessionRunning_queryDataQueue;
    id /* block */  _captureStillImageCompletionBlock;
    long long  _captureVideoOrientation_dataOutSynchQueue;
    long long  _captureVideoOrientation_metadataOutQueue;
    long long  _captureVideoOrientation_queryDataQueue;
    long long  _currentCameraPosition_captureSessionQueue;
    long long  _currentCameraPosition_dataOutSynchQueue;
    long long  _currentCameraPosition_queryDataQueue;
    NSNumber * _currentlyTrackedFaceID;
    NSObject<OS_dispatch_queue> * _dataOutSynchQueue;
    AVCaptureDataOutputSynchronizer * _dataOutputSynchronizer_dataOutSynchQueue;
    AVCaptureDepthDataOutput * _depthOutput;
    bool  _hasValidFaceData_queryDataQueue;
    NSObject<OS_dispatch_queue> * _livePlayerSourceQueue;
    NSMutableSet * _livePlayerSources;
    NSArray * _metadataFaceObjectsArray_dataOutSynchQueue;
    NSObject<OS_dispatch_queue> * _metadataOutQueue;
    AVCaptureMetadataOutput * _metadataOutput;
    NSArray * _metadataTrackedFacesArray_dataOutSynchQueue;
    JTFaceAnchor * _mostRecentFaceAnchor_queryDataQueue;
    ARFrame * _mostRecentFrame_queryDataQueue;
    bool  _observingAudioRouteChanges;
    NSString * _photoOutCodec;
    AVCapturePhotoOutput * _photoOutput;
    NSArray * _pvDetectedFacesArray_dataOutSynchQueue;
    NSObject<OS_dispatch_queue> * _queryDataQueue;
    bool  _recordingMovieMode;
    bool  _runningARKit_dataOutSynchQueue;
    bool  _sessionRequiresFaceTracking_queryDataQueue;
    JTFaceAnchor * _stillImageFaceAnchor_queryDataQueue;
    ARFrame * _stillImageFrame_queryDataQueue;
    VCPCaptureAnalysisSession * _vcpAnalyzer;
    NSObject<OS_dispatch_queue> * _videoDelegateQueue;
    NSMutableSet * _videoDelegates;
    AVCaptureVideoDataOutput * _videoOutput;
    id /* block */  _zoomUpdatedBlock_captureSessionQueue;
}

@property (nonatomic, readonly) bool ARKitEnabled;
@property (nonatomic, readonly) bool audioEnabled;
@property (nonatomic) long long cachedMovieRecordingTorchMode;
@property (nonatomic) double cameraDeviceCurrentZoom_captureSessionQueue;
@property (nonatomic) double cameraDeviceCurrentZoom_queryDataQueue;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraDeviceIntrinsics_dataOutSynchQueue;
@property (nonatomic) double cameraDeviceMaxZoom_captureSessionQueue;
@property (nonatomic, readonly) NSString *cameraMode;
@property (nonatomic, retain) NSString *cameraMode_captureSessionQueue;
@property (nonatomic, retain) NSString *cameraMode_queryDataQueue;
@property (nonatomic, readonly) bool cameraSessionRunning;
@property (nonatomic) bool captureSessionRunning_queryDataQueue;
@property (nonatomic) long long captureVideoOrientation_dataOutSynchQueue;
@property (nonatomic) long long captureVideoOrientation_metadataOutQueue;
@property (nonatomic) long long captureVideoOrientation_queryDataQueue;
@property (nonatomic) long long currentCameraPosition_captureSessionQueue;
@property (nonatomic) long long currentCameraPosition_dataOutSynchQueue;
@property (nonatomic) long long currentCameraPosition_queryDataQueue;
@property (nonatomic, retain) NSNumber *currentlyTrackedFaceID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct { int x1; int x2; } depthDimensions;
@property (nonatomic, readonly) bool depthEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasValidFaceData;
@property (nonatomic) bool hasValidFaceData_queryDataQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *metadataFaceObjectsArray_dataOutSynchQueue;
@property (nonatomic, retain) NSArray *metadataTrackedFacesArray_dataOutSynchQueue;
@property (nonatomic, retain) JTFaceAnchor *mostRecentFaceAnchor;
@property (nonatomic, retain) JTFaceAnchor *mostRecentFaceAnchor_queryDataQueue;
@property (nonatomic, retain) ARFrame *mostRecentFrame_queryDataQueue;
@property (nonatomic, retain) NSArray *pvDetectedFacesArray_dataOutSynchQueue;
@property (nonatomic) bool sessionRequiresFaceTracking;
@property (nonatomic) bool sessionRequiresFaceTracking_queryDataQueue;
@property (nonatomic, readonly) JTFaceAnchor *stillImageFaceAnchor;
@property (nonatomic, retain) JTFaceAnchor *stillImageFaceAnchor_queryDataQueue;
@property (nonatomic, readonly) ARFrame *stillImageFrame;
@property (nonatomic, retain) ARFrame *stillImageFrame_queryDataQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCPCaptureAnalysisSession *vcpAnalyzer;
@property (nonatomic) double zoomFactor;
@property (nonatomic, copy) id /* block */ zoomUpdatedBlock_captureSessionQueue;

+ (bool)depthCapableDevice;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)ARKitEnabled;
- (id)JT_biggestDepthFormat:(id)arg1 ofTypeCaptureSessionQueue:(unsigned int)arg2;
- (id)JT_cameraForPosition:(long long)arg1;
- (bool)JT_cameraIsPearlCaptureSessionQueue;
- (void)JT_configureCaptureForNonPearlCameraCaptureSessionQueue;
- (bool)JT_configureCaptureSessionForPosition:(long long)arg1 errorCaptureSessionQueue:(id*)arg2;
- (void)JT_configureDepthDataFormatForPearlCameraCaptureSessionQueue;
- (void)JT_configureInternalMicToUseOmnidirectionalPatternCaptureSessionQueue;
- (void)JT_configureMicForCameraPositionCaptureSessionQueue:(long long)arg1;
- (id)JT_createPVFrameSetFromPixelBuffer:(struct __CVBuffer { }*)arg1 withMetadata:(id)arg2 timeInterval:(double)arg3;
- (id)JT_currentARHWFaceDetection:(id)arg1;
- (id)JT_currentAVMetadataFaceObject:(id)arg1;
- (void)JT_enableCameraIntrinsicMatrixDeliveryCaptureSessionQueue;
- (double)JT_getFocalLengthForSceneCamera;
- (bool)JT_isARKitEnabledCaptureSessionQueue;
- (bool)JT_isAudioEnabledCaptureSessionQueue;
- (bool)JT_isDepthEnabledCaptureSessionQueue;
- (bool)JT_isUsingInternalMicCaptureSessionQueue;
- (void)JT_notifyVideoDelegatesOfFrameSetDataOutSynchQueue:(id)arg1;
- (void)JT_processMetadataObjectsMetadataOutQueue:(id)arg1;
- (id)JT_processPixelBufferForFaceTransform:(struct __CVBuffer { }*)arg1 forNormalizedFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRollAngle:(float)arg3 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 detectionOrientation:(long long)arg6 interfaceOrientation:(long long)arg7 needsMirroring:(bool)arg8;
- (void)JT_resetSessionCaptureSessionQueue;
- (void)JT_resetVideoDataOutVideoSettingsCaptureSessionQueue;
- (void)JT_setCaptureDevicePositionCaptureSessionQueue:(long long)arg1;
- (void)JT_setIdealResolutionOnVideoDataOutVideoSettingsCaptureSessionQueue;
- (void)JT_setMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 requiresLockCaptureSessionQueue:(bool)arg3;
- (void)JT_setPhotoOrientationFromInterfaceOrientationCaptureSessionQueue:(long long)arg1;
- (void)JT_setSelfieExposurePointOfInterestFromFaceMetadataCaptureSessionQueue:(id)arg1;
- (bool)JT_setZoomFactor_captureSessionQueue:(double)arg1;
- (void)JT_setupARCameraSessionController;
- (bool)JT_setupAudioCaptureSessionQueue:(id*)arg1;
- (void)JT_setupDepthCaptureSessionQueue;
- (bool)JT_setupPhotosCaptureSessionQueue:(id*)arg1;
- (bool)JT_setupVideoCaptureSessionQueue:(id*)arg1;
- (bool)JT_switchToCameraPosition:(long long)arg1 errPtrCaptureSessionQueue:(id*)arg2;
- (void)addAudioRenderDelegate:(id)arg1;
- (void)addVideoRenderDelegate:(id)arg1;
- (bool)audioEnabled;
- (void)audioSessionRouteChangedNotification:(id)arg1;
- (long long)cachedMovieRecordingTorchMode;
- (double)cameraDeviceCurrentZoom_captureSessionQueue;
- (double)cameraDeviceCurrentZoom_queryDataQueue;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraDeviceIntrinsics_dataOutSynchQueue;
- (double)cameraDeviceMaxZoom_captureSessionQueue;
- (id)cameraMode;
- (id)cameraMode_captureSessionQueue;
- (id)cameraMode_queryDataQueue;
- (long long)cameraPosition;
- (bool)cameraSessionRunning;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureSessionDidStartRunningNotification:(id)arg1;
- (void)captureSessionDidStopRunningNotification:(id)arg1;
- (void)captureSessionInterruptionEndedNotification:(id)arg1;
- (bool)captureSessionRunning_queryDataQueue;
- (void)captureSessionRuntimeErrorNotification:(id)arg1;
- (void)captureSessionWasInterruptedNotification:(id)arg1;
- (void)captureStillImageWithFlash:(long long)arg1 completion:(id /* block */)arg2;
- (long long)captureVideoOrientation;
- (long long)captureVideoOrientation_dataOutSynchQueue;
- (long long)captureVideoOrientation_metadataOutQueue;
- (long long)captureVideoOrientation_queryDataQueue;
- (void)clear;
- (id)createLivePlayerCameraSource;
- (long long)currentCameraPosition_captureSessionQueue;
- (long long)currentCameraPosition_dataOutSynchQueue;
- (long long)currentCameraPosition_queryDataQueue;
- (id)currentlyTrackedFaceID;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)dealloc;
- (id)debugFrameRateLabel;
- (struct { int x1; int x2; })depthDimensions;
- (bool)depthEnabled;
- (bool)deviceIsUsingBackCamera;
- (void)didUpdateFrame:(id)arg1;
- (void)enableRecordingMovieMode:(bool)arg1 completion:(id /* block */)arg2;
- (bool)faceTrackingEnabled;
- (void)focusAndExposeCameraOnPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hasValidFaceData;
- (bool)hasValidFaceData_queryDataQueue;
- (id)init;
- (id)metadataFaceObjectsArray_dataOutSynchQueue;
- (id)metadataTrackedFacesArray_dataOutSynchQueue;
- (void)minFrameRate:(int*)arg1 maxFrameRate:(int*)arg2;
- (id)mostRecentFaceAnchor;
- (id)mostRecentFaceAnchor_queryDataQueue;
- (id)mostRecentFrame_queryDataQueue;
- (void)notifyExternalImageData:(id)arg1 orientation:(long long)arg2 effectComposition:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)preProcessFrameWithPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (void)prepareCameraForMode:(id)arg1 position:(long long)arg2;
- (id)pvDetectedFacesArray_dataOutSynchQueue;
- (void)rampToZoom:(float)arg1 rate:(float)arg2 withMainThreadUpdateMethod:(id /* block */)arg3;
- (void)rampZoomStop;
- (void)removeAudioRenderDelegate:(id)arg1 async:(bool)arg2;
- (void)removeLivePlayerCameraSource:(id)arg1;
- (void)removeVideoRenderDelegate:(id)arg1 async:(bool)arg2;
- (void)resetZoomFactor;
- (void)saveToPhotoLibrary:(id)arg1;
- (void)scaleCurrentZoomFactor:(double)arg1;
- (bool)sessionRequiresFaceTracking;
- (bool)sessionRequiresFaceTracking_queryDataQueue;
- (void)setCachedMovieRecordingTorchMode:(long long)arg1;
- (void)setCameraDeviceCurrentZoom_captureSessionQueue:(double)arg1;
- (void)setCameraDeviceCurrentZoom_queryDataQueue:(double)arg1;
- (void)setCameraDeviceIntrinsics_dataOutSynchQueue:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraDeviceMaxZoom_captureSessionQueue:(double)arg1;
- (void)setCameraMode_captureSessionQueue:(id)arg1;
- (void)setCameraMode_queryDataQueue:(id)arg1;
- (void)setCaptureSessionRunning_queryDataQueue:(bool)arg1;
- (void)setCaptureTorchMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)setCaptureVideoOrientation_dataOutSynchQueue:(long long)arg1;
- (void)setCaptureVideoOrientation_metadataOutQueue:(long long)arg1;
- (void)setCaptureVideoOrientation_queryDataQueue:(long long)arg1;
- (void)setCurrentCameraPosition_captureSessionQueue:(long long)arg1;
- (void)setCurrentCameraPosition_dataOutSynchQueue:(long long)arg1;
- (void)setCurrentCameraPosition_queryDataQueue:(long long)arg1;
- (void)setCurrentlyTrackedFaceID:(id)arg1;
- (void)setHasValidFaceData_queryDataQueue:(bool)arg1;
- (void)setMetadataFaceObjectsArray_dataOutSynchQueue:(id)arg1;
- (void)setMetadataTrackedFacesArray_dataOutSynchQueue:(id)arg1;
- (void)setMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (void)setMostRecentFaceAnchor:(id)arg1;
- (void)setMostRecentFaceAnchor_queryDataQueue:(id)arg1;
- (void)setMostRecentFrame_queryDataQueue:(id)arg1;
- (void)setPvDetectedFacesArray_dataOutSynchQueue:(id)arg1;
- (void)setSessionRequiresFaceTracking:(bool)arg1;
- (void)setSessionRequiresFaceTracking_queryDataQueue:(bool)arg1;
- (void)setStillImageFaceAnchor_queryDataQueue:(id)arg1;
- (void)setStillImageFrame_queryDataQueue:(id)arg1;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomUpdatedBlock_captureSessionQueue:(id /* block */)arg1;
- (void)startCameraSession:(id /* block */)arg1;
- (void)startCameraSessionInPosition:(long long)arg1 completion:(id /* block */)arg2;
- (id)stillImageFaceAnchor;
- (id)stillImageFaceAnchor_queryDataQueue;
- (id)stillImageFrame;
- (id)stillImageFrame_queryDataQueue;
- (void)stopCameraSession:(id /* block */)arg1;
- (void)supportedFlashModes:(id /* block */)arg1;
- (void)switchCamera:(id /* block */)arg1;
- (void)switchCameraToPosition:(long long)arg1 completion:(id /* block */)arg2;
- (void)thermalLevelChanged:(id)arg1;
- (id)vcpAnalyzer;
- (void)videoAndAudioOutputSettings:(id /* block */)arg1;
- (double)zoomFactor;
- (id /* block */)zoomUpdatedBlock_captureSessionQueue;

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
