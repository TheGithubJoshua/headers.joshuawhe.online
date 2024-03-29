<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BWFigCaptureDeviceVendor.h</title>
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

/PrivateFrameworks/Celestial.framework/BWFigCaptureDeviceVendor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface BWFigCaptureDeviceVendor : NSObject {
    NSObject<OS_os_transaction> * _activeForClientAssertion;
    NSMutableArray * _controlledStreams;
    struct OpaqueFigCaptureDevice { } * _device;
    BWFigCaptureDeviceClient * _deviceClient;
    double  _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_source> * _deviceCloseTimer;
    int (* _deviceCreateFunction;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    int  _deviceUsageCount;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableArray * _streamsControlledByOtherClients;
    NSMutableArray * _victimizedDeviceClients;
}

+ (bool)activeDeviceEquals:(struct OpaqueFigCaptureDevice { }*)arg1;
+ (struct OpaqueFigCaptureDevice { }*)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 forPID:(int)arg2 clientIDOut:(int*)arg3 withDeviceAvailabilityChangedHandler:(id /* block */)arg4;
+ (struct OpaqueFigCaptureStream { }*)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 errOut:(int*)arg4;
+ (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3;
+ (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 errOut:(int*)arg4;
+ (void)initialize;
+ (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
+ (void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(id /* block */)arg2;
+ (void)resumeSystemPressuredDevice;
+ (id)sharedInstance;
+ (void)shutDownSystemPressuredDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
+ (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
+ (void)takeBackFlashlightDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
+ (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2 requestDeviceWhenAvailableAgain:(bool)arg3 informOtherClients:(bool)arg4;
+ (void)unregisterCallbacksForClient:(int)arg1;
+ (bool)videoCaptureDeviceFirmwareIsLoaded;

- (void)_createDevice:(const char *)arg1 clientPID:(int)arg2;
- (void)_deviceAvailabilityChangedForClient:(id)arg1 available:(bool)arg2 postNotification:(bool)arg3 reason:(int)arg4;
- (void)_dumpInventory;
- (void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(struct OpaqueFigCaptureDevice { }*)arg2;
- (void)_handleErrorForGlobalDevice;
- (void)_handleStreamControlTakenByAnotherClientNotification:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_handleStreamFrameReceiveTimeoutNotification:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_handleStreamRelinquishedByAnotherClientNotification:(struct OpaqueFigCaptureStream { }*)arg1;
- (id)_moveDeviceClientToVictimizedList;
- (void)_performBlockOnDeviceQueue:(id /* block */)arg1;
- (void)_performBlockOnDeviceQueueSynchronously:(id /* block */)arg1;
- (id)_popLatestVictimizedDeviceClient;
- (void)_registerForDeviceNotifications:(struct OpaqueFigCaptureDevice { }*)arg1;
- (void)_registerForStreamNotifications:(struct OpaqueFigCaptureStream { }*)arg1;
- (void)_registerNewDeviceClientForPID:(int)arg1 clientIDOut:(int*)arg2 deviceAvailabilityChangedHandler:(id /* block */)arg3;
- (void)_releaseDevice;
- (void)_relinquishControlOfStreams;
- (void)_removeDeviceClient;
- (void)_removeVictimizedDeviceClientWithClientID:(int)arg1;
- (int)_requestControlOfStreams:(id)arg1 device:(struct OpaqueFigCaptureDevice { }*)arg2;
- (void)_resetDeviceCloseTimer;
- (void)_setupDeviceCloseTimer;
- (void)_unregisterForDeviceNotifications:(struct OpaqueFigCaptureDevice { }*)arg1;
- (void)_unregisterFromStreamNotifications:(struct OpaqueFigCaptureStream { }*)arg1;
- (bool)activeDeviceEquals:(struct OpaqueFigCaptureDevice { }*)arg1;
- (struct OpaqueFigCaptureDevice { }*)copyDefaultVideoDeviceWithStealingBehavior:(int)arg1 forPID:(int)arg2 clientIDOut:(int*)arg3 withDeviceAvailabilityChangedHandler:(id /* block */)arg4;
- (struct OpaqueFigCaptureStream { }*)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 requestControl:(bool)arg4 errOut:(int*)arg5;
- (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice { }*)arg3 requestControl:(bool)arg4 errOut:(int*)arg5;
- (void)dealloc;
- (id)initWithDeviceCreateFunction:(int (*)arg1;
- (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
- (void)prewarmDefaultVideoDeviceForPID:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)resumeSystemPressuredDevice;
- (void)shutDownSystemPressuredDevice:(struct OpaqueFigCaptureDevice { }*)arg1;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1;
- (void)takeBackFlashlightDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2;
- (void)takeBackVideoDevice:(struct OpaqueFigCaptureDevice { }*)arg1 forPID:(int)arg2 requestDeviceWhenAvailableAgain:(bool)arg3 informOtherClients:(bool)arg4;
- (void)unregisterCallbacksForClient:(int)arg1;

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
