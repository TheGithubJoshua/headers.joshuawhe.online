<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFSiriClient.h</title>
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

/PrivateFrameworks/Sharing.framework/SFSiriClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFSiriClient : NSObject <SVXClientSessionServiceDelegate, VSSpeechSynthesizerDelegate> {
    SFSiriRequest * _currentRequest;
    NSObject<OS_dispatch_source> * _currentTimer;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogA;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogB;
    SVXDeviceSetupFlowScene * _deviceSetupSceneDialogC;
    SVXDeviceSetupFlowScene * _deviceSetupSceneIntro;
    SVXDeviceSetupFlowScene * _deviceSetupSceneOutro;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    unsigned int  _invalidateFlags;
    id /* block */  _invalidationHandler;
    NSString * _languageCode;
    struct NSMutableArray { Class x1; } * _requests;
    SVXDeviceSetupContext * _siriDeviceSetupContext;
    SVXClientServiceManager * _siriDeviceSetupManager;
    <SVXClientDeviceServicing> * _siriDeviceSetupService;
    id /* block */  _siriDialogHandler;
    SVXClientServiceManager * _siriServiceManager;
    VSSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ siriDialogHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_deviceSetupEnd;
- (void)_deviceSetupPlayGreetingID:(int)arg1 completion:(id /* block */)arg2;
- (void)_deviceSetupPrepareGreetingFlow:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_deviceSetupSaveDialogATimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogBTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveDialogCTimings:(id)arg1 details:(id)arg2;
- (void)_deviceSetupSaveIntroTimings:(id)arg1 details:(id)arg2;
- (void)_invalidate;
- (void)_processQueuedRequests;
- (void)_speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)_speakText:(id)arg1 languageCode:(id)arg2 flags:(unsigned int)arg3 rate:(double)arg4 delay:(double)arg5 startHandler:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)activate;
- (void)deviceSetupBegin:(unsigned long long)arg1;
- (void)deviceSetupEnd;
- (void)deviceSetupPlayGreetingID:(int)arg1 completion:(id /* block */)arg2;
- (void)deviceSetupPrepareGreeting:(id /* block */)arg1;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (id /* block */)invalidationHandler;
- (void)preWarmDeviceSetupWelcomePhaseWithCompletion:(id /* block */)arg1;
- (void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 didNotStartSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;
- (void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
- (void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
- (void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
- (void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
- (void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
- (void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setSiriDialogHandler:(id /* block */)arg1;
- (id /* block */)siriDialogHandler;
- (void)speakDeviceSetupWelcomePhaseWithCompletion:(id /* block */)arg1;
- (void)speakPasscode:(id)arg1 instructions:(id)arg2 languageCode:(id)arg3 flags:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)speakText:(id)arg1 completion:(id /* block */)arg2;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 rate:(double)arg3 delay:(double)arg4 startHandler:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)speakText:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakText:(id)arg1 rate:(double)arg2 completion:(id /* block */)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo2:(id)arg3;
- (void)speechSynthesizer:(id)arg1 withRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)startDelayedRequest:(id)arg1;
- (void)stopSpeaking;

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
