<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BWFileCoordinatorNode.h</title>
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

/PrivateFrameworks/Celestial.framework/BWFileCoordinatorNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface BWFileCoordinatorNode : BWNode {
    <BWAudioSourceRecordingReadinessDelegate> * _audioSourceDelegate;
    long long  _currSettingsID;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    bool  _firstAudioHasBeenProcessed;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstAudioPTSReadyForRecording;
    bool  _flagsLastFrameForVideoCompressor;
    const struct opaqueCMFormatDescription {} ** _formatDescriptionsForInputs;
    bool  _haveSeenAudioWhenStarting;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inputOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestMetadataPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestStagedSupportingAudioVideoStagedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterEndingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterPTS;
    bool  _lowLatencyCanTossExtraVideoWhenStopping;
    bool  _lowLatencyCanTransitionEarlyToRecording;
    bool  _lowLatencyModeEnabled;
    BWNodeInput * _masterInput;
    unsigned long long  _masterInputIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStartingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStoppingPTS;
    unsigned long long  _numActionOnlyOutputs;
    unsigned long long  _numAudioInputs;
    unsigned long long  _numInputs;
    unsigned long long  _numMetadataInputs;
    unsigned long long  _numOutputs;
    unsigned long long  _numVideoInputs;
    int  _recordingState;
    bool  _sendFlushMarkerWhenStopping;
    FigCaptureRecordingSettings * _settings;
    NSArray * _stagingQueues;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopRecordingPTS;
    int  _terminationErrorCode;
}

+ (void)initialize;

- (struct opaqueCMSampleBuffer { }*)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (struct opaqueCMSampleBuffer { }*)_createEmptyMetadataSBufWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forInputIndex:(unsigned long long)arg2;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer { }*)arg1 inputIndex:(unsigned long long)arg2 sbufPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString { }*)arg1 withPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settings:(id)arg3 errorCode:(int)arg4;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 toOutput:(id)arg3;
- (void)_emitStagedBufferForIndex:(unsigned long long)arg1;
- (void)_finishStoppingOrPausing:(bool)arg1 withErrorCode:(int)arg2;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (void)_prepareToStartRecordingWithSettings:(id)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned long long)arg2;
- (void)_stopRecordingWithErrorCode:(int)arg1;
- (id)audioSourceDelegate;
- (void)cancelStartRecordingWithSettings:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)flagsLastFrameForVideoCompressor;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 allowLowLatencyWhenPossible:(bool)arg5;
- (id)nodeSubType;
- (id)nodeType;
- (void)pauseRecording;
- (void)recordingTerminated:(long long)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resumeRecording;
- (void)setAudioSourceDelegate:(id)arg1;
- (void)setFlagsLastFrameForVideoCompressor:(bool)arg1;
- (int)startRecordingWithSettings:(id)arg1 stopAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stopRecordingWithErrorCode:(int)arg1;
- (bool)updateStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 previousStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;

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
