<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMImagePickerCameraViewController.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMImagePickerCameraViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMImagePickerCameraViewController : CAMCameraViewController <CAMCameraCaptureDelegate, CAMCameraConfigurationDelegate, PLCropOverlayDelegate, PLVideoViewDelegate, UIImagePickerCameraViewController> {
    PLCropOverlay * __cropOverlay;
    PLPhotoTileViewController * __photoTileViewController;
    PLVideoView * __videoView;
    bool  _currentlyReviewing;
    UIView * _customOverlayView;
    bool  _editingAllowed;
    NSDictionary * _mostRecentPhotoProperties;
    NSDictionary * _mostRecentVideoProperties;
    int  _photoSavingOptions;
    bool  _statusBarWasHidden;
    bool  _usingTelephonyUI;
    bool  _videoEditingAllowed;
}

@property (nonatomic, readonly) PLCropOverlay *_cropOverlay;
@property (nonatomic, readonly) PLPhotoTileViewController *_photoTileViewController;
@property (nonatomic, readonly) PLVideoView *_videoView;
@property (getter=_isCurrentlyReviewing, setter=_setCurrentlyReviewing:, nonatomic) bool currentlyReviewing;
@property (nonatomic, retain) UIView *customOverlayView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } customPreviewViewTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_isEditingAllowed, setter=_setEditingAllowed:, nonatomic) bool editingAllowed;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long imagePickerVideoQuality;
@property (nonatomic) double maximumVideoRecordingDuration;
@property (getter=_mostRecentPhotoProperties, setter=_setMostRecentPhotoProperties:, nonatomic, copy) NSDictionary *mostRecentPhotoProperties;
@property (getter=_mostRecentVideoProperties, setter=_setMostRecentVideoProperties:, nonatomic, copy) NSDictionary *mostRecentVideoProperties;
@property (getter=_photoSavingOptions, setter=_setPhotoSavingOptions:, nonatomic) int photoSavingOptions;
@property (getter=isShowingStandardControls, nonatomic) bool showingStandardControls;
@property (getter=_statusBarWasHidden, setter=_setStatusBarWasHidden:, nonatomic) bool statusBarWasHidden;
@property (readonly) Class superclass;
@property (getter=_isUsingTelephonyUI, setter=_setUsingTelephonyUI:, nonatomic) bool usingTelephonyUI;
@property (getter=_isVideoEditingAllowed, setter=_setVideoEditingAllowed:, nonatomic) bool videoEditingAllowed;

+ (bool)isEmulatingImagePicker;

- (void).cxx_destruct;
- (void)_applyPropertiesFromImagePicker:(id)arg1;
- (long long)_cameraCaptureMode;
- (long long)_cameraDevice;
- (long long)_cameraFlashMode;
- (id)_cameraOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_cameraViewTransform;
- (long long)_captureDeviceForImagePickerCameraDevice:(long long)arg1;
- (long long)_captureModeForImagePickerCameraCaptureMode:(long long)arg1;
- (id)_containingImagePickerController;
- (void)_createCropOverlayIfNecessary;
- (id)_cropOverlay;
- (long long)_flashModeForImagePickerCameraFlashMode:(long long)arg1;
- (void)_handleCapturedImagePickerPhotoWithCropOverlayOutput:(id)arg1;
- (void)_handleCapturedImagePickerVideoAtPath:(id)arg1 withEditingMetadata:(id)arg2;
- (void)_handleEditabilityChanged:(id)arg1;
- (long long)_imagePickerCameraCaptureModeForCaptureMode:(long long)arg1;
- (long long)_imagePickerCameraDeviceForCaptureDevice:(long long)arg1;
- (long long)_imagePickerCameraFlashModeForFlashMode:(long long)arg1;
- (long long)_imagePickerQualityTypeForVideoConfiguration:(long long)arg1;
- (bool)_isCurrentlyReviewing;
- (bool)_isEditingAllowed;
- (bool)_isUsingTelephonyUI;
- (bool)_isVideoEditingAllowed;
- (id)_mostRecentPhotoProperties;
- (id)_mostRecentVideoProperties;
- (int)_photoSavingOptions;
- (id)_photoTileViewController;
- (void)_removeFileAtPath:(id)arg1;
- (void)_resetTileViewControllerAndVideoView;
- (void)_setCameraCaptureMode:(long long)arg1;
- (void)_setCameraDevice:(long long)arg1;
- (void)_setCameraFlashMode:(long long)arg1;
- (void)_setCameraOverlayView:(id)arg1;
- (void)_setCameraViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setCurrentlyReviewing:(bool)arg1;
- (void)_setEditingAllowed:(bool)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_setMostRecentPhotoProperties:(id)arg1;
- (void)_setMostRecentVideoProperties:(id)arg1;
- (void)_setPhotoSavingOptions:(int)arg1;
- (void)_setShowsCameraControls:(bool)arg1;
- (void)_setStatusBarWasHidden:(bool)arg1;
- (void)_setUsingTelephonyUI:(bool)arg1;
- (void)_setVideoEditingAllowed:(bool)arg1;
- (bool)_showsCameraControls;
- (bool)_startVideoCapture;
- (bool)_statusBarWasHidden;
- (void)_stopVideoCapture;
- (void)_takePicture;
- (void)_updateFromEditabilityChange;
- (long long)_videoConfigurationForImagePickerQualityType:(long long)arg1;
- (id)_videoView;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasToggled:(id)arg1;
- (id)customOverlayView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })customPreviewViewTransform;
- (void)handleReviewButtonReleased:(id)arg1;
- (long long)imagePickerVideoQuality;
- (id)initWithInitialImagePickerProperties:(id)arg1;
- (bool)isShowingStandardControls;
- (void)loadView;
- (double)maximumVideoRecordingDuration;
- (bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)setCustomOverlayView:(id)arg1;
- (void)setCustomPreviewViewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setImagePickerVideoQuality:(long long)arg1;
- (void)setMaximumVideoRecordingDuration:(double)arg1;
- (void)setShowingStandardControls:(bool)arg1;
- (bool)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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
