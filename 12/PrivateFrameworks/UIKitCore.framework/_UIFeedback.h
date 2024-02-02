<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFeedback.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFeedback.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding> {
    long long  _audioOutputMode;
    _UIFeedbackParameters * _audioParameters;
    NSString * _category;
    <UICoordinateSpace> * _coordinateSpace;
    NSDictionary * _debugDictionary;
    double  _delay;
    unsigned long long  _eventToken;
    long long  _hapticOutputMode;
    _UIFeedbackParameters * _hapticParameters;
    NSString * _name;
    _UIFeedbackPattern * _parentPattern;
    <_UIFeedbackPlayer> * _player;
    NSMutableArray * _playerDequeueBlocks;
    bool  _playing;
    float  _position;
}

@property (getter=_allEventTypes, nonatomic, readonly) NSIndexSet *allEventTypes;
@property (getter=_allFeedbacks, nonatomic, readonly) NSArray *allFeedbacks;
@property (getter=_allSystemSoundIDs, nonatomic, readonly) NSIndexSet *allSystemSoundIDs;
@property (nonatomic) long long audioOutputMode;
@property (nonatomic, readonly) _UIFeedbackParameters *audioParameters;
@property (getter=_category, setter=_setCategory:, nonatomic, retain) NSString *category;
@property (getter=_coordinateSpace, setter=_setCoordinateSpace:, nonatomic) <UICoordinateSpace> *coordinateSpace;
@property (getter=_debugDictionary, nonatomic, readonly) NSDictionary *debugDictionary;
@property (getter=_delay, setter=_setDelay:, nonatomic) double delay;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=_effectiveDelay, nonatomic, readonly) double effectiveDelay;
@property (getter=_effectiveEnabledFeedbackTypes, nonatomic, readonly) unsigned long long effectiveEnabledFeedbackTypes;
@property (getter=_effectiveEventType, nonatomic, readonly) unsigned long long effectiveEventType;
@property (getter=_effectiveFeedbackTypes, nonatomic, readonly) unsigned long long effectiveFeedbackTypes;
@property (getter=_effectivePlayableFeedbackTypes, nonatomic, readonly) unsigned long long effectivePlayableFeedbackTypes;
@property (getter=_effectiveSystemSoundID, nonatomic, readonly) unsigned int effectiveSystemSoundID;
@property (getter=_eventToken, setter=_setEventToken:, nonatomic) unsigned long long eventToken;
@property (nonatomic) long long hapticOutputMode;
@property (nonatomic, readonly) _UIFeedbackParameters *hapticParameters;
@property (getter=_name, setter=_setName:, nonatomic, copy) NSString *name;
@property (getter=_parentPattern, setter=_setParentPattern:, nonatomic) _UIFeedbackPattern *parentPattern;
@property (getter=_playableProtocol, nonatomic, readonly) Protocol *playableProtocol;
@property (getter=_player, setter=_setPlayer:, nonatomic, retain) <_UIFeedbackPlayer> *player;
@property (getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:, nonatomic, retain) NSMutableArray *playerDequeueBlocks;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic) float position;
@property (readonly) NSMutableArray *systemSoundSources;
@property (readonly) NSMutableArray *visualizerSources;

+ (Class)_parametersClass;
+ (Class)classForType:(id)arg1;
+ (id)feedbackWithDictionaryRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)type;

- (void).cxx_destruct;
- (id)_allEventTypes;
- (id)_allFeedbacks;
- (id)_allSystemSoundIDs;
- (id)_category;
- (id)_coordinateSpace;
- (id)_debugDictionary;
- (double)_delay;
- (double)_effectiveDelay;
- (unsigned long long)_effectiveEnabledFeedbackTypes;
- (unsigned long long)_effectiveEventType;
- (unsigned long long)_effectiveFeedbackTypes;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (unsigned int)_effectiveSystemSoundID;
- (unsigned long long)_eventToken;
- (id)_name;
- (id)_parentPattern;
- (void)_playAtTime:(double)arg1 engine:(id)arg2;
- (id)_playableProtocol;
- (id)_player;
- (id)_playerDequeueBlocks;
- (void)_setCategory:(id)arg1;
- (void)_setCoordinateSpace:(id)arg1;
- (void)_setDelay:(double)arg1;
- (void)_setEventToken:(unsigned long long)arg1;
- (void)_setName:(id)arg1;
- (void)_setParentPattern:(id)arg1;
- (void)_setPlayer:(id)arg1;
- (void)_setPlayerDequeueBlocks:(id)arg1;
- (long long)audioOutputMode;
- (id)audioParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)hapticOutputMode;
- (id)hapticParameters;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPlaying;
- (void)play;
- (float)position;
- (void)setAudioOutputMode:(long long)arg1;
- (void)setHapticOutputMode:(long long)arg1;
- (void)setPosition:(float)arg1;
- (void)stop;
- (id)systemSoundSources;
- (id)visualizerSources;

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