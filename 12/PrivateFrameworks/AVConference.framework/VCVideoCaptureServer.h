<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCVideoCaptureServer.h</title>
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

/PrivateFrameworks/AVConference.framework/VCVideoCaptureServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCVideoCaptureServer : NSObject <VideoCaptureServer> {
    NSMutableArray * _cameraPreviewClients;
    NSString * _currentCameraUniqueID;
    int  _encodingHeight;
    int  _encodingWidth;
    bool  _forceDisableThermal;
    bool  _isPreviewRunning;
    int  _maxFrameRate;
    int  _newPeakPowerLevel;
    int  _newThermalLevel;
    int  _peakPowerLevel;
    int  _peakPowerNotificationToken;
    unsigned int  _previewSlot;
    int  _thermalLevel;
    int  _thermalNotificationToken;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
    NSObject<AVConferencePreviewDelegate> * appDelegate;
    NSObject<VideoCaptureProtocol> * avCapture;
    VCImageQueue * backQueue;
    struct __CVPixelBufferPool { } * bufferPool;
    NSMutableArray * cameraClients;
    NSObject<OS_dispatch_source> * cameraHealthMonitor;
    NSObject<OS_dispatch_queue> * captureCameraQueue;
    NSObject<OS_dispatch_queue> * captureClientQueue;
    int  captureFrameCount;
    NSObject<OS_dispatch_queue> * captureServerQueue;
    int  currentFrameRate;
    int  currentHeight;
    int  currentWidth;
    NSObject<OS_dispatch_queue> * delegateNotificationQueue;
    double  falteredRenderingtimeStamp;
    bool  firstPreviewFrame;
    VCImageQueue * frontQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localExpectedPortraitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  localScreenPortraitAspectRatio;
    VideoAttributes * localVideoAttributes;
    int  pendingFrameRate;
    int  pendingHeight;
    int  pendingWidth;
    int  previewFrameCount;
    bool  resize;
    NSObject<VideoCaptureProtocol> * screenCapture;
    NSMutableArray * screenCaptureClients;
    NSObject<OS_dispatch_queue> * snapshotQueue;
    int  snapshotRequestCount;
    struct OpaqueVTPixelTransferSession { } * transferSession;
    NSObject<OS_dispatch_queue> * variablesQueue;
}

@property (nonatomic, retain) NSObject<AVConferencePreviewDelegate> *appDelegate;
@property (retain) NSString *currentCameraUniqueID;

+ (id)VCVideoCaptureServerSingleton;

- (void)addStickerWithURL:(id)arg1 isFaceSticker:(bool)arg2 atPosition:(struct CGPoint { double x1; double x2; })arg3 identifier:(id)arg4;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)appDelegate;
- (void)applyPressureLevelChanges;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (bool)cameraSupportsWidth:(int)arg1 height:(int)arg2;
- (bool)canStopPreview;
- (bool)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)changeCameraToPendingSettingsWithReset:(bool)arg1;
- (void)clearAllStickers:(bool)arg1;
- (struct __CFDictionary { }*)copyCameraColorInfo;
- (id)copyLocalScreenAttributesForVideoAttributes:(id)arg1;
- (id)copyLocalVideoAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CVBuffer { }*)createResizedFrame:(struct __CVBuffer { }*)arg1;
- (int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(bool)arg4;
- (id)currentCameraUniqueID;
- (void)dealloc;
- (bool)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (bool)enqueueFrameToQueueFront:(bool)arg1 frame:(struct __CVBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (int)getFrameRateForPeakPowerLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1;
- (int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2;
- (void)handleAVCaptureError:(int)arg1 error:(id)arg2;
- (void)handleCaptureEvent:(id)arg1;
- (void)handleCaptureEvent:(id)arg1 subType:(id)arg2;
- (id)init;
- (bool)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2;
- (struct CGSize { double x1; double x2; })localExpectedRatioForScreenOrientation:(int)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })localScreenRatioForScreenOrientation:(int)arg1;
- (id)localVideoAttributes;
- (void)notifyFrameRateBeingThrottledForClients:(id)arg1 newFrameRate:(int)arg2 thermalLevelDidChange:(bool)arg3 powerLevelDidChange:(bool)arg4;
- (void)notifyThermalChangeForClients:(id)arg1;
- (void)onCaptureFramerateChange:(unsigned int)arg1;
- (void)onCaptureScreenFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 droppedFrames:(int)arg3 orientation:(int)arg4;
- (void)onCaptureVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 preview:(bool)arg3 shouldEnqueueFrame:(bool)arg4 droppedFrames:(int)arg5 switching:(bool)arg6 orientation:(int)arg7 camera:(int)arg8 videoMirrored:(bool)arg9;
- (void)pausePreview;
- (void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)reconnectClientLayerFront:(bool)arg1;
- (void)registerBlocksForServer;
- (bool)registerForFrames:(id)arg1 unpausing:(bool)arg2;
- (bool)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(bool)arg6;
- (oneway void)release;
- (void)resetCameraToPreviewSettingsForced:(bool)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)sendSnapshotFromFrame:(struct __CVBuffer { }*)arg1;
- (void)setAnimoji:(id)arg1;
- (void)setAppDelegate:(id)arg1;
- (bool)setCaptureCameraWithUID:(id)arg1;
- (void)setCaptureFrameRate:(int)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(bool)arg4;
- (void)setCurrentCameraUniqueID:(id)arg1;
- (void)setCurrentFrameRate:(int)arg1;
- (bool)setLocalScreenAttributes:(id)arg1;
- (bool)setLocalVideoAttributes:(id)arg1;
- (unsigned int)setLocalVideoDestination:(id)arg1 facing:(bool)arg2;
- (void)setMemoji:(id)arg1;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(bool)arg4;
- (void)startPreviewUnpausing:(bool)arg1;
- (void)stopCapture;
- (void)stopPreview;
- (void)updateImageQueueFrameRate:(int)arg1;

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