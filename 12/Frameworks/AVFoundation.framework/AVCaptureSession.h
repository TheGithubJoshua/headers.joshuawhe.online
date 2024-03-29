<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCaptureSession.h</title>
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

/Frameworks/AVFoundation.framework/AVCaptureSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVCaptureSession : NSObject {
    AVCaptureSessionInternal * _internal;
}

@property (nonatomic) bool automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) bool automaticallyConfiguresCaptureDeviceForWideColor;
@property (nonatomic, readonly) NSArray *inputs;
@property (getter=isInterrupted, nonatomic, readonly) bool interrupted;
@property (nonatomic, readonly) struct OpaqueCMClock { }*masterClock;
@property (nonatomic, readonly) NSArray *outputs;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, copy) NSString *sessionPreset;
@property (nonatomic) bool usesApplicationAudioSession;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)_beginConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (void)_finishConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (bool)_isActiveColorSpaceBeingConfiguredForDevice:(id)arg1;
+ (id)allSessionPresets;
+ (bool)automaticallyNotifiesObserversOfMasterClock;
+ (bool)automaticallyNotifiesObserversOfRunning;
+ (id)dotString;
+ (void)initialize;

- (bool)_addConnection:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addInputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id*)arg2;
- (bool)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id*)arg2;
- (void)_beginConfiguration;
- (bool)_buildAndRunGraph;
- (bool)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2;
- (void)_commitConfiguration;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (int)_createFigCaptureSession;
- (void)_determineMasterClock;
- (id)_figCaptureSessionConfiguration;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_handleServerConnectionDiedNotification;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_notifyMediaServerdDied;
- (void)_notifySessionStarted;
- (void)_notifySessionStopped;
- (id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2;
- (void)_postRuntimeError:(id)arg1;
- (void)_rebuildGraph;
- (void)_reconnectAfterServerConnectionDied;
- (void)_removeAllPreviewLayers;
- (void)_removeConnection:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeInput:(id)arg1;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)_setInterrupted:(bool)arg1 withReason:(int)arg2;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)_setRunning:(bool)arg1;
- (bool)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (id)_stopError;
- (bool)_stopFigCaptureSession;
- (void)_teardownFigCaptureSession;
- (void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
- (void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1;
- (void)_updateDeviceActiveFormatsAndActiveConnections;
- (void)addConnection:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (bool)automaticallyConfiguresApplicationAudioSession;
- (bool)automaticallyConfiguresCaptureDeviceForWideColor;
- (void)beginConfiguration;
- (bool)canAddConnection:(id)arg1;
- (bool)canAddInput:(id)arg1;
- (bool)canAddOutput:(id)arg1;
- (bool)canSetSessionPreset:(id)arg1;
- (void)cancelForegroundAutoResumeAfterDate:(id)arg1;
- (void)commitConfiguration;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)inputs;
- (bool)isBeingConfigured;
- (bool)isInterrupted;
- (bool)isRunning;
- (struct OpaqueCMClock { }*)masterClock;
- (bool)notifiesOnMainThread;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputs;
- (void)removeConnection:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)sessionPreset;
- (id)sessionVideoCaptureDevices;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(bool)arg1;
- (void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(bool)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)startRunning;
- (void)stopRunning;
- (bool)usesApplicationAudioSession;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_ensureInputs:(id)arg1;
- (bool)cam_ensureInputs:(id)arg1 exclusively:(bool)arg2;
- (bool)cam_ensureOutputs:(id)arg1 exclusively:(bool)arg2;
- (bool)cam_ensureOutputs:(id)arg1 whileRemoving:(id)arg2;
- (bool)cam_hasAddedInput:(id)arg1;
- (bool)cam_hasAddedOutput:(id)arg1;
- (void)cam_removeAllInputs;
- (void)cam_removeAllOutputs;
- (void)cam_removeInputs:(id)arg1;

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
