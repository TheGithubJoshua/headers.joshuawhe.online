<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VTVoiceProfileRetrainer.h</title>
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

/PrivateFrameworks/VoiceTrigger.framework/VTVoiceProfileRetrainer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger (1)
 */

@interface VTVoiceProfileRetrainer : NSObject <VTTextDependentSpeakerRecognizerDelegate> {
    VTAnalyzerNDAPI * _analyzer;
    NSString * _configPath;
    NSString * _languageCode;
    unsigned long long  _modelType;
    unsigned long long  _numRetentionUtterances;
    NSString * _resourcePath;
    double  _retrainExplicitUttThresholdSAT;
    double  _retrainExplicitUttThresholdTDSR;
    double  _retrainTDSRScore;
    double  _retrainThresholdSAT;
    double  _retrainThresholdTDSR;
    double  _retrainThresholdTrigger;
    VTTextDependentSpeakerRecognizer * _satRetrainingTdSr;
    NSObject<OS_dispatch_semaphore> * _satRetrainingTdSrSemaphore;
}

@property (nonatomic, retain) VTAnalyzerNDAPI *analyzer;
@property (nonatomic, retain) NSString *configPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic) unsigned long long modelType;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) VTTextDependentSpeakerRecognizer *satRetrainingTdSr;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *satRetrainingTdSrSemaphore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_analyzeEnrollmentUtts:(id)arg1 thresholdTrigger:(double)arg2 thresholdSAT:(double)arg3 thresholdTDSR:(double)arg4 isUpdatingModel:(bool)arg5 extraUtts:(id*)arg6 discardUtts:(id*)arg7 psrTimeout:(bool*)arg8;
- (double)_computeSamplingMSEForUtts:(id)arg1 withBeforeScores:(id)arg2;
- (unsigned long long)_deleteUtterances:(id)arg1;
- (id)_getLastPruningCookie;
- (bool)_updatePruningCookie:(id)arg1;
- (id)analyzer;
- (id)configPath;
- (void)dealloc;
- (id)initWithAnalyzer:(id)arg1 languageCode:(id)arg2 modelType:(unsigned long long)arg3 configPath:(id)arg4 resourcePath:(id)arg5;
- (id)languageCode;
- (unsigned long long)modelType;
- (bool)pruneVoiceProfileIfNecessary;
- (id)resourcePath;
- (void)retrainSATModelWithCompletion:(id /* block */)arg1;
- (id)satRetrainingTdSr;
- (id)satRetrainingTdSrSemaphore;
- (void)setAnalyzer:(id)arg1;
- (void)setConfigPath:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setModelType:(unsigned long long)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSatRetrainingTdSr:(id)arg1;
- (void)setSatRetrainingTdSrSemaphore:(id)arg1;
- (void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2;
- (void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2;

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