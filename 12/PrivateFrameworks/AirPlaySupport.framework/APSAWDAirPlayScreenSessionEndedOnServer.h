<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>APSAWDAirPlayScreenSessionEndedOnServer.h</title>
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

/PrivateFrameworks/AirPlaySupport.framework/APSAWDAirPlayScreenSessionEndedOnServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport (387.2)
 */

@interface APSAWDAirPlayScreenSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned int  _audioLate;
    unsigned int  _audioLost;
    unsigned int  _audioUnrecovered;
    int  _avgAhead;
    unsigned int  _avgRTT;
    int  _avgReceiveMs;
    unsigned int  _caDrops;
    unsigned int  _caFrames;
    unsigned int  _clearScreens;
    unsigned int  _configChanges;
    unsigned int  _duration;
    unsigned int  _forcedRefreshes;
    unsigned int  _framesReceived;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioLate : 1; 
        unsigned int audioLost : 1; 
        unsigned int audioUnrecovered : 1; 
        unsigned int avgAhead : 1; 
        unsigned int avgRTT : 1; 
        unsigned int avgReceiveMs : 1; 
        unsigned int caDrops : 1; 
        unsigned int caFrames : 1; 
        unsigned int clearScreens : 1; 
        unsigned int configChanges : 1; 
        unsigned int duration : 1; 
        unsigned int forcedRefreshes : 1; 
        unsigned int framesReceived : 1; 
        unsigned int negativeAheadFrames : 1; 
        unsigned int reason : 1; 
        unsigned int resumes : 1; 
        unsigned int suspends : 1; 
        unsigned int unclearScreens : 1; 
    }  _has;
    unsigned int  _negativeAheadFrames;
    int  _reason;
    unsigned int  _resumes;
    NSString * _sessionUUID;
    unsigned int  _suspends;
    unsigned long long  _timestamp;
    unsigned int  _unclearScreens;
}

@property (nonatomic) unsigned int audioLate;
@property (nonatomic) unsigned int audioLost;
@property (nonatomic) unsigned int audioUnrecovered;
@property (nonatomic) int avgAhead;
@property (nonatomic) unsigned int avgRTT;
@property (nonatomic) int avgReceiveMs;
@property (nonatomic) unsigned int caDrops;
@property (nonatomic) unsigned int caFrames;
@property (nonatomic) unsigned int clearScreens;
@property (nonatomic) unsigned int configChanges;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int forcedRefreshes;
@property (nonatomic) unsigned int framesReceived;
@property (nonatomic) bool hasAudioLate;
@property (nonatomic) bool hasAudioLost;
@property (nonatomic) bool hasAudioUnrecovered;
@property (nonatomic) bool hasAvgAhead;
@property (nonatomic) bool hasAvgRTT;
@property (nonatomic) bool hasAvgReceiveMs;
@property (nonatomic) bool hasCaDrops;
@property (nonatomic) bool hasCaFrames;
@property (nonatomic) bool hasClearScreens;
@property (nonatomic) bool hasConfigChanges;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasForcedRefreshes;
@property (nonatomic) bool hasFramesReceived;
@property (nonatomic) bool hasNegativeAheadFrames;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasResumes;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSuspends;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnclearScreens;
@property (nonatomic) unsigned int negativeAheadFrames;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int resumes;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int suspends;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int unclearScreens;

- (unsigned int)audioLate;
- (unsigned int)audioLost;
- (unsigned int)audioUnrecovered;
- (int)avgAhead;
- (unsigned int)avgRTT;
- (int)avgReceiveMs;
- (unsigned int)caDrops;
- (unsigned int)caFrames;
- (unsigned int)clearScreens;
- (unsigned int)configChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)forcedRefreshes;
- (unsigned int)framesReceived;
- (bool)hasAudioLate;
- (bool)hasAudioLost;
- (bool)hasAudioUnrecovered;
- (bool)hasAvgAhead;
- (bool)hasAvgRTT;
- (bool)hasAvgReceiveMs;
- (bool)hasCaDrops;
- (bool)hasCaFrames;
- (bool)hasClearScreens;
- (bool)hasConfigChanges;
- (bool)hasDuration;
- (bool)hasForcedRefreshes;
- (bool)hasFramesReceived;
- (bool)hasNegativeAheadFrames;
- (bool)hasReason;
- (bool)hasResumes;
- (bool)hasSessionUUID;
- (bool)hasSuspends;
- (bool)hasTimestamp;
- (bool)hasUnclearScreens;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)negativeAheadFrames;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)resumes;
- (id)sessionUUID;
- (void)setAudioLate:(unsigned int)arg1;
- (void)setAudioLost:(unsigned int)arg1;
- (void)setAudioUnrecovered:(unsigned int)arg1;
- (void)setAvgAhead:(int)arg1;
- (void)setAvgRTT:(unsigned int)arg1;
- (void)setAvgReceiveMs:(int)arg1;
- (void)setCaDrops:(unsigned int)arg1;
- (void)setCaFrames:(unsigned int)arg1;
- (void)setClearScreens:(unsigned int)arg1;
- (void)setConfigChanges:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setForcedRefreshes:(unsigned int)arg1;
- (void)setFramesReceived:(unsigned int)arg1;
- (void)setHasAudioLate:(bool)arg1;
- (void)setHasAudioLost:(bool)arg1;
- (void)setHasAudioUnrecovered:(bool)arg1;
- (void)setHasAvgAhead:(bool)arg1;
- (void)setHasAvgRTT:(bool)arg1;
- (void)setHasAvgReceiveMs:(bool)arg1;
- (void)setHasCaDrops:(bool)arg1;
- (void)setHasCaFrames:(bool)arg1;
- (void)setHasClearScreens:(bool)arg1;
- (void)setHasConfigChanges:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasForcedRefreshes:(bool)arg1;
- (void)setHasFramesReceived:(bool)arg1;
- (void)setHasNegativeAheadFrames:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasResumes:(bool)arg1;
- (void)setHasSuspends:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnclearScreens:(bool)arg1;
- (void)setNegativeAheadFrames:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setResumes:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSuspends:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnclearScreens:(unsigned int)arg1;
- (unsigned int)suspends;
- (unsigned long long)timestamp;
- (unsigned int)unclearScreens;
- (void)writeTo:(id)arg1;

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