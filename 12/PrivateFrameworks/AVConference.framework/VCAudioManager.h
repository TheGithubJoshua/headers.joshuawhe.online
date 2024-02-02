<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCAudioManager.h</title>
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

/PrivateFrameworks/AVConference.framework/VCAudioManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource, VCAudioSessionDelegate> {
    NSMutableArray * _allClients;
    struct opaqueVCAudioLimiter { } * _audioLimiter;
    VCAudioSessionMediaProperties * _currentAudioSessionMediaProperties;
    VCAudioUnitProperties * _currentAudioUnitProperties;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct AudioEventQueue_t { } * _eventQueue;
    struct tagHANDLE { int x1; } * _hAUIO;
    AVAudioDevice * _inputDevice;
    bool  _isGKVoiceChat;
    bool  _isInDaemon;
    bool  _isInputMeteringEnabled;
    bool  _isMicrophoneMuted;
    bool  _isOutputMeteringEnabled;
    bool  _isSpeakerPhoneEnabled;
    bool  _isSuspended;
    AVAudioDevice * _outputDevice;
    NSMutableSet * _sinkClients;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
    }  _sinkData;
    struct AudioEventQueue_t { } * _sinkEventQueue;
    struct opaqueVCAudioBufferList { } * _sourceBuffer;
    NSMutableSet * _sourceClients;
    struct _VCAudioIOControllerIOState { 
        bool timestampInitialized; 
        double lastHostTime; 
        unsigned int lastInputTimestamp; 
        unsigned int lastInputSampleCount; 
        double lastBlockSize; 
        unsigned long long lastTimestamp; 
    }  _sourceData;
    struct AudioEventQueue_t { } * _sourceEventQueue;
    NSMutableArray * _startingIOClients;
    unsigned int  _state;
    NSMutableArray * _suspendedClients;
    NSDictionary * _vpOperatingModeToAudioSessionMediaFormatMapping;
}

@property (nonatomic, retain) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties;
@property (nonatomic, retain) VCAudioUnitProperties *currentAudioUnitProperties;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isInDaemon;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (getter=isSpeakerPhoneEnabled, nonatomic) bool speakerPhoneEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_cleanupDeadClients;
- (void)_resumeSuspendedClients;
- (void)_suspendAllClients;
- (bool)addClient:(id)arg1;
- (void)addSinkClient:(id)arg1;
- (void)addSourceClient:(id)arg1;
- (void)computeHardwarePreferences;
- (id)currentAudioSessionMediaProperties;
- (id)currentAudioUnitProperties;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (void)dealloc;
- (void)didSessionEnd;
- (void)didSessionPause;
- (void)didSessionResume;
- (void)didSessionStop;
- (void)flushEventQueue:(struct AudioEventQueue_t { }*)arg1;
- (bool)getAudioSessionMediaProperties:(id)arg1 forVPOperatingMode:(unsigned int)arg2;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 blockSize:(double*)arg2 vpOperatingMode:(unsigned int*)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg6;
- (id)init;
- (bool)isGKVoiceChat;
- (bool)isInDaemon;
- (bool)isMicrophoneMuted;
- (bool)isSpeakerPhoneEnabled;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t { }*)arg1 clientList:(id)arg2;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList { }*)arg1;
- (void)refreshInputMetering;
- (void)refreshOutputMetering;
- (bool)removeClient:(id)arg1;
- (void)removeSinkClient:(id)arg1;
- (void)removeSourceClient:(id)arg1;
- (void)resetAUIOWithProperties:(id)arg1;
- (void)resetAudioSessionWithProperties:(id)arg1;
- (void)resetAudioTimestamps;
- (void)setCurrentAudioSessionMediaProperties:(id)arg1;
- (void)setCurrentAudioUnitProperties:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setInputMetering;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsInDaemon:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMetering;
- (void)setSpeakerPhoneEnabled:(bool)arg1;
- (void)setupIODevicesForAUIO:(struct tagHANDLE { int x1; }*)arg1;
- (bool)shouldResetAudioSessionWithProperties:(id)arg1;
- (bool)shouldResetAudioUnitWithProperties:(id)arg1;
- (bool)startAUIOWithProperties:(id)arg1;
- (bool)startAudioSessionWithProperties:(id)arg1;
- (void)startClient:(id)arg1;
- (bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (void)stateRunningToSessionStarted;
- (bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int*)arg4;
- (void)stopAUIO;
- (void)stopAudioSession;
- (void)stopClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (bool)updateStateWithAudioIOClient:(id)arg1;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;

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