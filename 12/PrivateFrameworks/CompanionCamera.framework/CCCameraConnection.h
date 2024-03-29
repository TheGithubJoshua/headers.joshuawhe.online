<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CCCameraConnection.h</title>
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

/PrivateFrameworks/CompanionCamera.framework/CCCameraConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera (1)
 */

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    bool  _burstInProgress;
    NSDate * _captureStartDate;
    bool  _capturing;
    unsigned long long  _currentPreviewState;
    <CCCameraConnectionDelegate> * _delegate;
    unsigned long long  _desiredPreviewState;
    int  _deviceConnectedNotificationToken;
    int  _deviceDisconnectedNotificationToken;
    CCCameraConnectionInternal * _internal;
    unsigned long long  _interruptionCount;
    float  _lastSentZoomAmount;
    id  _orientationChangeObserver;
    float  _pendingZoomAmount;
    NSString * _previewEndpoint;
    FigCameraViewfinder * _remoteViewfinder;
    FigCameraViewfinderSession * _remoteViewfinderSession;
    long long  _shallowDepthOfFieldStatus;
    NSXPCConnection * _xpc;
    NSObject<OS_dispatch_source> * _zoomTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCCameraConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_burstSupport;
- (long long)_captureMode;
- (void)_checkin;
- (long long)_currentOrientation;
- (long long)_flashMode;
- (long long)_flashSupport;
- (void)_handleInterruption;
- (void)_handleInvalidation;
- (long long)_hdrMode;
- (long long)_hdrSupport;
- (long long)_irisMode;
- (long long)_irisSupport;
- (bool)_isShowingLivePreview;
- (void)_performPreviewStateTransitionsIfNeeded;
- (bool)_shouldReportEvent;
- (id)_supportedCaptureModes;
- (bool)_toggleCameraDeviceSupport;
- (double)_zoomAmount;
- (bool)_zoomSupport;
- (void)_zoomTimerFired;
- (void)burstCaptureDidStop;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1;
- (void)burstCaptureWillStart;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2;
- (void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2;
- (void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1;
- (void)captureDeviceDidChange;
- (void)close;
- (void)closePreview;
- (void)countdownCanceled;
- (void)dealloc;
- (id)delegate;
- (void)didStartCaptureTimer;
- (void)didStopCapture;
- (void)didUpdateShallowDepthOfFieldStatus:(long long)arg1;
- (void)didUpdateThumbnailWithData:(id)arg1 isVideo:(bool)arg2;
- (void)flashModeDidChange;
- (void)hdrModeDidChange;
- (id)init;
- (void)irisModeDidChange;
- (bool)isOpen;
- (bool)isPreviewConnected;
- (void)modeSelected:(long long)arg1;
- (void)open;
- (void)openPreview;
- (void)photoTaken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showingLivePreviewDidChange;
- (void)switchedMirroringMode:(bool)arg1;
- (void)switchedOrientation:(long long)arg1;
- (void)takePhotoWithCountdown:(unsigned long long)arg1;
- (void)willStartCapturing;
- (oneway void)xpc_beginBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_cancelCountdown;
- (oneway void)xpc_endBurstCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(bool)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_setCaptureMode:(long long)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_setFlashMode:(long long)arg1;
- (oneway void)xpc_setFocusPoint:(id)arg1;
- (oneway void)xpc_setHDRMode:(long long)arg1;
- (oneway void)xpc_setIrisMode:(long long)arg1;
- (oneway void)xpc_setPreviewEndpoint:(id)arg1;
- (oneway void)xpc_setZoom:(float)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_startCaptureWithMode:(long long)arg1 reply:(id /* block */)arg2;
- (oneway void)xpc_stopCaptureWithReply:(id /* block */)arg1;
- (oneway void)xpc_toggleCameraDevice;
- (void)zoomDidChange:(double)arg1;

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
