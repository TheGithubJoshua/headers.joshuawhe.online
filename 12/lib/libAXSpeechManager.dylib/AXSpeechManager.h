<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXSpeechManager.h</title>
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

/lib/libAXSpeechManager.dylib/AXSpeechManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAXSpeechManager.dylib
 */

@interface AXSpeechManager : NSObject <TTSSpeechSynthesizerDelegate> {
    unsigned int  _audioQueueFlags;
    bool  _isSpeaking;
    NSNumber * _originalSpeechRateForJobOverride;
    id /* block */  _requestWillStart;
    AXSpeechThread * _runThread;
    bool  _showControlCenterControls;
    bool  _speechEnabled;
    NSMutableArray * _speechQueue;
    bool  _supportsAccurateWordCallbacks;
    TTSSpeechSynthesizer * _synthesizer;
    bool  isPaused;
}

@property (nonatomic) unsigned int audioQueueFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPaused;
@property (nonatomic, readonly) bool isSpeaking;
@property (nonatomic, retain) NSNumber *originalSpeechRateForJobOverride;
@property (nonatomic, retain) NSArray *outputChannels;
@property (nonatomic, copy) id /* block */ requestWillStart;
@property (nonatomic, readonly) bool showControlCenterControls;
@property (nonatomic) bool speechEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAccurateWordCallbacks;

+ (id)_resetAvailableVoices;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (struct URegularExpression { }*)createRegularExpressionFromString:(id)arg1;
+ (id)currentLanguageCode;
+ (id)matchedRangesForString:(id)arg1 withRegularExpression:(struct URegularExpression { }*)arg2;
+ (id)pauseMarkupString:(id)arg1;
+ (id)remapLanguageCode:(id)arg1;
+ (id)spellOutMarkupString:(id)arg1 string:(id)arg2;
+ (void)test_actionStartTap:(id /* block */)arg1;
+ (void)test_setAvailableVoices:(id)arg1;
+ (void)test_setUnitTestMode:(bool)arg1;

- (void).cxx_destruct;
- (void)__speechJobFinished:(id)arg1;
- (void)_clearSpeechQueue;
- (void)_continueSpeaking;
- (void)_dispatchSpeechAction:(id)arg1;
- (void)_initialize;
- (void)_isSpeaking:(id)arg1;
- (void)_pauseSpeaking:(id)arg1;
- (id)_phonemeSubstitutionsForAction:(id)arg1;
- (void)_speechJobFinished:(bool)arg1 action:(id)arg2;
- (void)_startNextSpeechJob;
- (void)_stopSpeaking:(id)arg1;
- (void)_tearDown;
- (void)_updateUserSubstitutions;
- (unsigned int)audioQueueFlags;
- (void)clearSpeechQueue;
- (void)continueSpeaking;
- (void)dealloc;
- (void)dispatchSpeechAction:(id)arg1;
- (id)externalVoiceIdentifierUsedForLanguage:(id)arg1;
- (id)init;
- (bool)isPaused;
- (bool)isSpeaking;
- (id)originalSpeechRateForJobOverride;
- (id)outputChannels;
- (void)pauseSpeaking:(int)arg1;
- (id /* block */)requestWillStart;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setIsPaused:(bool)arg1;
- (void)setOriginalSpeechRateForJobOverride:(id)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setRequestWillStart:(id /* block */)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setSupportsAccurateWordCallbacks:(bool)arg1;
- (bool)showControlCenterControls;
- (bool)speechEnabled;
- (void)speechSynthesizer:(id)arg1 didContinueSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didPauseSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(id)arg3;
- (void)stopSpeaking;
- (void)stopSpeaking:(int)arg1;
- (bool)supportsAccurateWordCallbacks;
- (void)tearDown;
- (id)voiceIdentifierUsedForLanguage:(id)arg1;

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
