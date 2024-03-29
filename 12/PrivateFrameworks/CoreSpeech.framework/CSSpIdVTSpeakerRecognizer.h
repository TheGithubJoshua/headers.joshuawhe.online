<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSSpIdVTSpeakerRecognizer.h</title>
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

/PrivateFrameworks/CoreSpeech.framework/CSSpIdVTSpeakerRecognizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech ()
 */

@interface CSSpIdVTSpeakerRecognizer : NSObject <CSSpIdProcessorDelegate, CSSpIdSpeakerRecognizer> {
    <CSAudioFileWriter> * _dbgTdTiUttLogger;
    <CSSpIdSpeakerRecognizerDelegate> * _delegate;
    unsigned long long  _extraSamplesAtStart;
    NSString * _invocationStyleStr;
    NSDictionary * _lastSpeakerIdInfo;
    unsigned long long  _myriadResult;
    unsigned long long  _numTdTiSamplesProcessed;
    bool  _processingEnded;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpIdContext * _spIdCtx;
    unsigned long long  _tdEndInSampleCount;
    unsigned long long  _tdtiEndInSampleCount;
    CSSpIdProcessor * _tdtiSpIdProcessor;
    unsigned long long  _totalNumSamplesReceived;
}

@property (nonatomic, retain) <CSAudioFileWriter> *dbgTdTiUttLogger;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSpIdSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyleStr;
@property (nonatomic, retain) NSDictionary *lastSpeakerIdInfo;
@property (nonatomic) unsigned long long myriadResult;
@property (nonatomic) unsigned long long numTdTiSamplesProcessed;
@property (nonatomic) bool processingEnded;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSpIdContext *spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tdEndInSampleCount;
@property (nonatomic) unsigned long long tdtiEndInSampleCount;
@property (nonatomic, retain) CSSpIdProcessor *tdtiSpIdProcessor;
@property (nonatomic) unsigned long long totalNumSamplesReceived;

- (void).cxx_destruct;
- (void)_endAudioProcessing;
- (void)_processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)dbgTdTiUttLogger;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)extraSamplesAtStart;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyleStr;
- (id)lastSpeakerIdInfo;
- (unsigned long long)myriadResult;
- (unsigned long long)numTdTiSamplesProcessed;
- (void)processAudioChunk:(id)arg1;
- (void)processMyriadDecision:(unsigned long long)arg1;
- (bool)processingEnded;
- (id)queue;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)setDbgTdTiUttLogger:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setInvocationStyleStr:(id)arg1;
- (void)setLastSpeakerIdInfo:(id)arg1;
- (void)setMyriadResult:(unsigned long long)arg1;
- (void)setNumTdTiSamplesProcessed:(unsigned long long)arg1;
- (void)setProcessingEnded:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (void)setTdEndInSampleCount:(unsigned long long)arg1;
- (void)setTdtiEndInSampleCount:(unsigned long long)arg1;
- (void)setTdtiSpIdProcessor:(id)arg1;
- (void)setTotalNumSamplesReceived:(unsigned long long)arg1;
- (id)spIdCtx;
- (void)speakerIdProcessor:(id)arg1 hasSpeakerIdInfo:(id)arg2;
- (void)speakerIdProcessorFinishedProcessing:(id)arg1 withSpeakerInfo:(id)arg2;
- (unsigned long long)tdEndInSampleCount;
- (unsigned long long)tdtiEndInSampleCount;
- (id)tdtiSpIdProcessor;
- (unsigned long long)totalNumSamplesReceived;

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
