<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AFUISpeechSynthesisElement.h</title>
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

/PrivateFrameworks/AssistantUI.framework/AFUISpeechSynthesisElement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI (1)
 */

@interface AFUISpeechSynthesisElement : NSObject {
    NSDictionary * _analyticsContext;
    NSString * _animationIdentifier;
    SAUIAudioData * _audioData;
    id /* block */  _completion;
    bool  _delayed;
    <AFUISpeechSynthesisElementDelegate> * _delegate;
    bool  _durationHasElapsed;
    bool  _eligibleForProcessing;
    bool  _eligibleForSynthesis;
    NSString * _gender;
    NSString * _identifier;
    bool  _isPhonetic;
    NSString * _language;
    bool  _preparationBlockCompleted;
    VSPresynthesizedAudioRequest * _presynthesizedAudioRequest;
    bool  _provisional;
    bool  _shouldCache;
    NSDictionary * _speakableContextInfo;
    VSSpeechRequest * _speechRequest;
    long long  _synthesisResult;
    bool  _synthesizesWhileRecording;
    NSString * _text;
}

@property (nonatomic, readonly) NSDictionary *analyticsContext;
@property (nonatomic, readonly) NSString *animationIdentifier;
@property (nonatomic, readonly) SAUIAudioData *audioData;
@property (getter=_completion, nonatomic, readonly) id /* block */ completion;
@property (getter=isDelayed, nonatomic) bool delayed;
@property (nonatomic) <AFUISpeechSynthesisElementDelegate> *delegate;
@property (setter=_setDurationHasElapsed:) bool durationHasElapsed;
@property (getter=isEligibleForProcessing, setter=_setEligibleForProcessing:, nonatomic) bool eligibleForProcessing;
@property (getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:, nonatomic) bool eligibleForSynthesis;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isPhonetic;
@property (nonatomic, readonly) NSString *language;
@property (setter=_setPreparationBlockCompleted:) bool preparationBlockCompleted;
@property (nonatomic, retain) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (getter=isProvisional, nonatomic, readonly) bool provisional;
@property (nonatomic) bool shouldCache;
@property (nonatomic, retain) NSDictionary *speakableContextInfo;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;
@property (nonatomic) long long synthesisResult;
@property (nonatomic) bool synthesizesWhileRecording;
@property (setter=_setText:, nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id /* block */)_completion;
- (void)_setDurationHasElapsed:(bool)arg1;
- (void)_setEligibleForProcessing:(bool)arg1;
- (void)_setEligibleForSynthesis:(bool)arg1;
- (void)_setPreparationBlockCompleted:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_updateSynthesisEligibility;
- (id)analyticsContext;
- (id)animationIdentifier;
- (id)audioData;
- (id)delegate;
- (id)description;
- (bool)durationHasElapsed;
- (void)executeCompletion;
- (id)gender;
- (id)identifier;
- (id)init;
- (id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(bool)arg6 eligibleAfterDuration:(double)arg7 delayed:(bool)arg8 preparation:(id /* block */)arg9 completion:(id /* block */)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13;
- (bool)isDelayed;
- (bool)isEligibleForProcessing;
- (bool)isEligibleForSynthesis;
- (bool)isPhonetic;
- (bool)isProvisional;
- (id)language;
- (bool)preparationBlockCompleted;
- (id)presynthesizedAudioRequest;
- (void)setDelayed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPhonetic:(bool)arg1;
- (void)setPresynthesizedAudioRequest:(id)arg1;
- (void)setShouldCache:(bool)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSynthesisResult:(long long)arg1;
- (void)setSynthesizesWhileRecording:(bool)arg1;
- (bool)shouldCache;
- (id)speakableContextInfo;
- (id)speechRequest;
- (long long)synthesisResult;
- (bool)synthesizesWhileRecording;
- (id)text;

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
