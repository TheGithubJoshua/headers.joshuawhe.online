<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ETMessage.h</title>
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

/PrivateFrameworks/DigitalTouchShared.framework/ETMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared (1)
 */

@interface ETMessage : NSObject {
    NSMutableSet * _childrenDelayingWisp;
    UIColor * _color;
    bool  _delayWisp;
    <ETMessageDelegate> * _delegate;
    NSString * _identifier;
    unsigned long long  _messageVersion;
    bool  _missedDuringPlayback;
    bool  _mute;
    ETMessage * _parentMessage;
    bool  _renderingOffscreen;
    bool  _renderingOffscreenOpaque;
    double  _sendTime;
    double  _startDelay;
    bool  _supportsPlaybackTimeOffset;
    double  _timeCreated;
    <ETMessageTimeSource> * _timeSource;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool delayWisp;
@property (nonatomic) <ETMessageDelegate> *delegate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) double messageDuration;
@property (nonatomic, readonly) unsigned short messageType;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic) bool missedDuringPlayback;
@property (nonatomic) bool mute;
@property (nonatomic) ETMessage *parentMessage;
@property (getter=isRenderingOffscreen, nonatomic) bool renderingOffscreen;
@property (getter=isRenderingOffscreenOpaque, nonatomic) bool renderingOffscreenOpaque;
@property (nonatomic) double sendTime;
@property (nonatomic, readonly) bool shouldLoopDuringPlayback;
@property (nonatomic) double startDelay;
@property (nonatomic) bool supportsPlaybackTimeOffset;
@property (nonatomic) double timeCreated;
@property (nonatomic) <ETMessageTimeSource> *timeSource;

+ (unsigned short)messageType;
+ (id)unarchive:(id)arg1;

- (void).cxx_destruct;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (id)archive;
- (id)archiveData;
- (void)childMessageDidCompleteWisp:(id)arg1;
- (void)childMessageDidDelayWisp:(id)arg1;
- (id)color;
- (bool)delayWisp;
- (id)delegate;
- (id)description;
- (void)displayInScene:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasWispingChildren;
- (id)identifier;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAnimated;
- (bool)isRenderingOffscreen;
- (bool)isRenderingOffscreenOpaque;
- (double)messageDuration;
- (unsigned short)messageType;
- (id)messageTypeAsString;
- (unsigned long long)messageVersion;
- (bool)missedDuringPlayback;
- (bool)mute;
- (id)parentMessage;
- (void)preVisualizeInScene:(id)arg1;
- (bool)reachedSizeLimit;
- (struct CGPoint { double x1; double x2; })scenePointFromNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 inScene:(id)arg2;
- (double)sendTime;
- (bool)sendTimeIsValid;
- (void)setColor:(id)arg1;
- (void)setDelayWisp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMissedDuringPlayback:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setParentMessage:(id)arg1;
- (void)setRenderingOffscreen:(bool)arg1;
- (void)setRenderingOffscreenOpaque:(bool)arg1;
- (void)setSendTime:(double)arg1;
- (void)setStartDelay:(double)arg1;
- (void)setSupportsPlaybackTimeOffset:(bool)arg1;
- (void)setTimeCreated:(double)arg1;
- (void)setTimeSource:(id)arg1;
- (bool)shouldLoopDuringPlayback;
- (double)startDelay;
- (void)stopPlaying;
- (bool)supportsPlaybackTimeOffset;
- (double)timeCreated;
- (id)timeSource;
- (void)wispChildren;

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
