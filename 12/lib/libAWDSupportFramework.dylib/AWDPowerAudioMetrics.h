<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDPowerAudioMetrics.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDPowerAudioMetrics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {
    unsigned int  _audioHeadsetDuration;
    unsigned int  _audioHeadsetPowerMicroWatt;
    unsigned int  _audioSpeakerDuration;
    unsigned int  _audioSpeakerPowerMicroWatt;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _audioVolumeLevelDurationSpeakers;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _audioVolumeLevelDurations;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioHeadsetDuration : 1; 
        unsigned int audioHeadsetPowerMicroWatt : 1; 
        unsigned int audioSpeakerDuration : 1; 
        unsigned int audioSpeakerPowerMicroWatt : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int audioHeadsetDuration;
@property (nonatomic) unsigned int audioHeadsetPowerMicroWatt;
@property (nonatomic) unsigned int audioSpeakerDuration;
@property (nonatomic) unsigned int audioSpeakerPowerMicroWatt;
@property (nonatomic, readonly) unsigned int*audioVolumeLevelDurationSpeakers;
@property (nonatomic, readonly) unsigned long long audioVolumeLevelDurationSpeakersCount;
@property (nonatomic, readonly) unsigned int*audioVolumeLevelDurations;
@property (nonatomic, readonly) unsigned long long audioVolumeLevelDurationsCount;
@property (nonatomic) bool hasAudioHeadsetDuration;
@property (nonatomic) bool hasAudioHeadsetPowerMicroWatt;
@property (nonatomic) bool hasAudioSpeakerDuration;
@property (nonatomic) bool hasAudioSpeakerPowerMicroWatt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)addAudioVolumeLevelDuration:(unsigned int)arg1;
- (void)addAudioVolumeLevelDurationSpeaker:(unsigned int)arg1;
- (unsigned int)audioHeadsetDuration;
- (unsigned int)audioHeadsetPowerMicroWatt;
- (unsigned int)audioSpeakerDuration;
- (unsigned int)audioSpeakerPowerMicroWatt;
- (unsigned int)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1;
- (unsigned int*)audioVolumeLevelDurationSpeakers;
- (unsigned long long)audioVolumeLevelDurationSpeakersCount;
- (unsigned int*)audioVolumeLevelDurations;
- (unsigned long long)audioVolumeLevelDurationsCount;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (void)clearAudioVolumeLevelDurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioHeadsetDuration;
- (bool)hasAudioHeadsetPowerMicroWatt;
- (bool)hasAudioSpeakerDuration;
- (bool)hasAudioSpeakerPowerMicroWatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioHeadsetDuration:(unsigned int)arg1;
- (void)setAudioHeadsetPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioSpeakerDuration:(unsigned int)arg1;
- (void)setAudioSpeakerPowerMicroWatt:(unsigned int)arg1;
- (void)setAudioVolumeLevelDurationSpeakers:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioVolumeLevelDurations:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAudioHeadsetDuration:(bool)arg1;
- (void)setHasAudioHeadsetPowerMicroWatt:(bool)arg1;
- (void)setHasAudioSpeakerDuration:(bool)arg1;
- (void)setHasAudioSpeakerPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
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
