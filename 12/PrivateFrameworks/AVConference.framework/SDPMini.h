<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SDPMini.h</title>
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

/PrivateFrameworks/AVConference.framework/SDPMini.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface SDPMini : NSObject {
    NSMutableDictionary * _audioParameters;
    NSMutableDictionary * _mediaLines;
    NSString * _sdpUsername;
    NSNumber * aacBlockSize;
    bool  allowAudioRecording;
    bool  allowRTCPFB;
    bool  allowsContentsChangeWithAspectPreservation;
    bool  allowsDynamicMaxBitrate;
    NSNumber * answerBandwidth;
    NSMutableArray * audioPayloads;
    NSNumber * audioRTCPPort;
    NSNumber * audioRTPID;
    NSNumber * audioRTPPort;
    NSNumber * audioUnitModel;
    NSNumber * basebandCodecSampleRate;
    NSString * basebandCodecType;
    NSDictionary * featuresListDict;
    NSNumber * maxBandwidth;
    NSString * origin;
    NSMutableArray * secondaryAudioPayloads;
    NSString * sessionIP;
    NSNumber * videoRTPID;
}

@property (nonatomic, retain) NSNumber *aacBlockSize;
@property (nonatomic) bool allowAudioRecording;
@property (nonatomic) bool allowRTCPFB;
@property (nonatomic) bool allowsContentsChangeWithAspectPreservation;
@property (nonatomic) bool allowsDynamicMaxBitrate;
@property (nonatomic, retain) NSNumber *answerBandwidth;
@property (nonatomic, readonly) NSMutableArray *audioPayloads;
@property (nonatomic, retain) NSNumber *audioRTCPPort;
@property (nonatomic, retain) NSNumber *audioRTPID;
@property (nonatomic, retain) NSNumber *audioRTPPort;
@property (nonatomic, retain) NSNumber *audioUnitModel;
@property (nonatomic, retain) NSDictionary *featuresListDict;
@property (nonatomic, retain) NSNumber *maxBandwidth;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, readonly) NSMutableArray *secondaryAudioPayloads;
@property (nonatomic, retain) NSString *sessionIP;

+ (bool)setPayload:(int)arg1 mediaLine:(id)arg2;

- (id)SDPUsername;
- (id)aacBlockSize;
- (void)addMediaLine:(id)arg1 mediaType:(int)arg2;
- (bool)allowAudioRecording;
- (bool)allowRTCPFB;
- (bool)allowsContentsChangeWithAspectPreservation;
- (bool)allowsDynamicMaxBitrate;
- (id)answerBandwidth;
- (id)audioPayloads;
- (id)audioRTCPPort;
- (id)audioRTPID;
- (id)audioRTPPort;
- (id)audioUnitModel;
- (id)composeAudioFMTPForPayload:(id)arg1;
- (id)composeAudioString;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeSessionString;
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg3 count:(int)arg4;
- (void)dealloc;
- (id)featuresListDict;
- (bool)getBasebandCodecType:(id*)arg1 sampleRate:(id*)arg2;
- (id)getMediaLineForType:(int)arg1;
- (void)getNegotiatedResolutionForPayload:(int)arg1 forInterface:(int)arg2 withRule:(id)arg3 direction:(int)arg4 result:(struct imageTag { int x1; int x2; int x3; int x4; int x5; int x6; int x7; float x8; int x9; }*)arg5 remoteSupportsHD:(bool)arg6 screenSharing:(bool)arg7;
- (bool)getUseSbr:(bool*)arg1 blockSize:(int*)arg2 forAACFormat:(int)arg3;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)maxBandwidth;
- (id)mediaTypeToString:(int)arg1;
- (id)origin;
- (void)parseAudioFormatAttribute:(id)arg1;
- (void)parseAudioMediaAttributes:(id)arg1;
- (void)parseBandwidth:(id)arg1;
- (id)parseIP:(id)arg1;
- (void)parseMediaLine:(id)arg1;
- (id)parseRTCPPort:(id)arg1;
- (id)parseRTPID:(id)arg1;
- (void)parseSDPFromString:(id)arg1;
- (void)parseSessionAttributes:(id)arg1;
- (int)rulesFramerate:(int)arg1;
- (void)rulesImageSizeForExternalPayload:(int)arg1 pWidth:(int*)arg2 pHeight:(int*)arg3;
- (id)secondaryAudioPayloads;
- (id)sessionIP;
- (void)setAacBlockSize:(id)arg1;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAllowRTCPFB:(bool)arg1;
- (void)setAllowsContentsChangeWithAspectPreservation:(bool)arg1;
- (void)setAllowsDynamicMaxBitrate:(bool)arg1;
- (void)setAnswerBandwidth:(id)arg1;
- (void)setAudioRTCPPort:(id)arg1;
- (void)setAudioRTPID:(id)arg1;
- (void)setAudioRTPPort:(id)arg1;
- (void)setAudioUnitModel:(id)arg1;
- (void)setBasebandCodecType:(id)arg1 sampleRate:(id)arg2;
- (void)setFeaturesListDict:(id)arg1;
- (void)setMaxBandwidth:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setSessionIP:(id)arg1;
- (void)setUseSbr:(bool)arg1 blockSize:(int)arg2 forAACFormat:(int)arg3;
- (bool)setVideoPayloads:(int*)arg1 count:(int)arg2;
- (void)setVideoRTCPFB:(bool)arg1 useNACK:(bool)arg2;
- (id)toStringWithVideoEnabled:(bool)arg1;

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
