<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSSelfTriggerDetector.h</title>
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

/PrivateFrameworks/CoreSpeech.framework/CSSelfTriggerDetector.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech ()
 */

@interface CSSelfTriggerDetector : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSSpeechManagerDelegate> {
    CSAsset * _currentAsset;
    <CSSelfTriggerDetectorDelegate> * _delegate;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    unsigned long long  _outputAudioChannel;
    NSObject<OS_dispatch_queue> * _queue;
    CSSpeechManager * _speechManager;
}

@property (nonatomic, retain) CSAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSelfTriggerDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) CSSpeechManager *speechManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset;
- (void)_setAsset:(id)arg1;
- (id)currentAsset;
- (id)delegate;
- (id)initWithManager:(id)arg1 asset:(id)arg2;
- (id)keywordAnalyzer;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (float)keywordThreshold;
- (unsigned long long)outputAudioChannel;
- (id)queue;
- (void)reset;
- (void)setAsset:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeywordAnalyzer:(id)arg1;
- (void)setKeywordThreshold:(float)arg1;
- (void)setOutputAudioChannel:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (id)speechManager;
- (void)speechManagerDidStartForwarding:(id)arg1 successfully:(bool)arg2 error:(id)arg3;
- (void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;
- (void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
- (void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)start;

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
