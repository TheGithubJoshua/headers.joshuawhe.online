<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMKTimelapseBackendController.h</title>
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

/PrivateFrameworks/CameraKit.framework/CMKTimelapseBackendController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit (1)
 */

@interface CMKTimelapseBackendController : NSObject <CMKNebulaDaemonTimelapseProtocol> {
    bool  __capturing;
    CMKTimelapseState * __currentState;
    <CMKTimelapseMovieWriterProtocol> * __movieWriter;
    NSMutableArray * __sessionContexts;
    NSObject<OS_dispatch_queue> * __workQueue;
    bool  __writingMovie;
}

@property (getter=_isCapturing, setter=_setCapturing:, nonatomic) bool _capturing;
@property (setter=_setCurrentState:, nonatomic, retain) CMKTimelapseState *_currentState;
@property (nonatomic, readonly) <CMKTimelapseMovieWriterProtocol> *_movieWriter;
@property (nonatomic, readonly) NSMutableArray *_sessionContexts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_workQueue;
@property (nonatomic, readonly) bool _writingMovie;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (id)_currentState;
- (bool)_deleteItemAtPath:(id)arg1;
- (void)_dispatchToMainQueueWithBlock:(id /* block */)arg1;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(id /* block */)arg2;
- (void)_dispatchToWorkQueueWithBlock:(id /* block */)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_frameTransformForState:(id)arg1;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (bool)_isCameraRunning;
- (bool)_isCapturing;
- (id)_movieWriter;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(double)arg2 state:(id)arg3;
- (void)_performPendingWork;
- (void)_permanentlyFailTimelapseUUID:(id)arg1;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2;
- (bool)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (id)_sessionContexts;
- (void)_setCapturing:(bool)arg1;
- (void)_setCurrentState:(id)arg1;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (id)_workQueue;
- (void)_writeMovieForSessionContext:(id)arg1;
- (bool)_writingMovie;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (id)init;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;

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