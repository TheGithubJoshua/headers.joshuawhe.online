<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RCCaptureSession.h</title>
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

/PrivateFrameworks/VoiceMemos.framework/RCCaptureSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos (1.0)
 */

@interface RCCaptureSession : NSObject <RCWaveformDataSourceObserver> {
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _beginCapturedHostTime;
    unsigned long long  _beginCapturedSampleCount;
    bool  _captureBeginSoundEffectDisabled;
    bool  _captureEndSoundEffectDisabled;
    AVAudioEngine * _captureEngine;
    NSError * _captureError;
    <RCSAudioFile> * _captureFile;
    RCAudioSessionRoutingAssertion * _captureRouteAssertion;
    NSDate * _captureStartDate;
    RCCaptureInputWaveformDataSource * _captureWaveformDataSource;
    AVURLAsset * _capturedAsset;
    double  _capturedClockDelta;
    double  _capturedDisplayTime;
    bool  _deleteCapturedOutWhenFinished;
    bool  _destinationShouldBeDeleted;
    NSObject<OS_dispatch_group> * _endCaptureTaskGroup;
    bool  _handledFinishedCapturingAfterCompletionSound;
    bool  _handlingDidFinishCapturing;
    RCCaptureInputDevice * _inputDevice;
    SBSLockScreenContentAssertion * _lockScreenAssertion;
    long long  _sessionCaptureState;
    NSString * _sessionRouteName;
    RCSSavedRecordingService * _sharedService;
    double  _storeDemoTimeLimit;
    NSMutableOrderedSet * _weakObservers;
    long long  _writerState;
}

@property (nonatomic, readonly) RCAVState *AVState;
@property (nonatomic, readonly) long long _writerState;
@property (nonatomic, readonly) double captureDestinationComposedDuration;
@property (nonatomic, readonly) RCCaptureInputWaveformDataSource *captureWaveformDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RCCaptureInputDevice *inputDevice;
@property (nonatomic, readonly) bool isCaptureSessionFinished;
@property (nonatomic, retain) SBSLockScreenContentAssertion *lockScreenAssertion;
@property (nonatomic) double storeDemoTimeLimit;
@property (readonly) Class superclass;

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(id /* block */)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)AVState;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (bool)_attachInputToCaptureSession:(id)arg1 withAudioDevice:(id)arg2;
- (id)_audioSettingsForCaptureFormat:(id)arg1;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(bool)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_closeCaptureSession;
- (void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1;
- (void)_didFinishWritingToOutputFileAtURL:(id)arg1 error:(id)arg2;
- (void)_endWritingWithError:(id)arg1;
- (void)_enumerateCaptureSessionObserversWithBlock:(id /* block */)arg1;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (void)_handleCaptureSessionDidStartWritingToURL:(id)arg1;
- (bool)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(bool)arg2;
- (void)_installTapIntoCurrentNode;
- (void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
- (bool)_openAVCaptureSessionAndWaitUntilRunning;
- (void)_pauseWriting;
- (void)_postToObserversWithBlock:(id /* block */)arg1;
- (void)_resumeWriting;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)_takeSBSecureAppAssertion:(bool)arg1;
- (long long)_writerState;
- (void)addCaptureSessionObserver:(id)arg1;
- (bool)canResumeCapturingAtCompositionDestinationTime:(double)arg1;
- (double)captureDestinationComposedDuration;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (id)captureWaveformDataSource;
- (double)capturedDeltaFromDisplayTime:(double)arg1;
- (double)capturedEndTime;
- (double)capturedTimeFromDisplayTime:(double)arg1;
- (void)dealloc;
- (void)deleteCapturedOutWhenFinished;
- (id)description;
- (void)disableCaptureBeginSoundEffect;
- (void)disableCaptureEndSoundEffect;
- (double)finalizedFragmentDuration;
- (void)finishCapturing;
- (void)finishCapturingWithError:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (id)init;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
- (id)inputDevice;
- (bool)isCaptureActive;
- (bool)isCapturePaused;
- (bool)isCaptureSessionFinished;
- (bool)isPreparing;
- (id)lockScreenAssertion;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(id /* block */)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)resumeCapturing;
- (void)setLockScreenAssertion:(id)arg1;
- (void)setStoreDemoTimeLimit:(double)arg1;
- (double)storeDemoTimeLimit;
- (bool)unsaveableRecordingError;
- (bool)updateFromDisplayLink;
- (void)updateObserversFromDisplayLink:(id)arg1;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;

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
