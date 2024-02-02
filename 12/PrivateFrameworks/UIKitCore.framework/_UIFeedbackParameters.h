<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFeedbackParameters.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFeedbackParameters.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFeedbackParameters : NSObject <NSCopying> {
    float  _attackTime;
    float  _decayTime;
    _UIFeedback * _feedback;
    _UIFeedbackParameters * _parentParameters;
    float  _rate;
    float  _releaseTime;
    float  _transposition;
    float  _volume;
}

@property (nonatomic) float attackTime;
@property (getter=_isAudio, nonatomic, readonly) bool audio;
@property (nonatomic) float decayTime;
@property (getter=_effectiveVolume, nonatomic, readonly) float effectiveVolume;
@property (nonatomic) _UIFeedback *feedback;
@property (nonatomic) _UIFeedbackParameters *parentParameters;
@property (nonatomic) float rate;
@property (nonatomic) float releaseTime;
@property (nonatomic) float transposition;
@property (nonatomic) float volume;

+ (id)parameters;

- (void).cxx_destruct;
- (float)_effectiveValueForParameterWithKey:(id)arg1;
- (float)_effectiveVolume;
- (bool)_isAudio;
- (void)_updateParameterWithKey:(id)arg1;
- (float)attackTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)decayTime;
- (id)dictionaryRepresentation;
- (id)feedback;
- (id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2;
- (id)initWithFeedback:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parentParameters;
- (float)rate;
- (float)releaseTime;
- (void)setAttackTime:(float)arg1;
- (void)setDecayTime:(float)arg1;
- (void)setFeedback:(id)arg1;
- (void)setParentParameters:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setReleaseTime:(float)arg1;
- (void)setTransposition:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)transposition;
- (float)volume;

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