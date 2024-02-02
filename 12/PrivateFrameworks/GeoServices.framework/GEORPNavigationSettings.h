<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEORPNavigationSettings.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEORPNavigationSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEORPNavigationSettings : PBCodable <NSCopying> {
    bool  _beepBeforeInstruction;
    unsigned long long  _distanceUnits;
    struct { 
        unsigned int distanceUnits : 1; 
        unsigned int maxAlternateRouteCount : 1; 
        unsigned int voiceVolume : 1; 
        unsigned int userPreferredTransportType : 1; 
        unsigned int beepBeforeInstruction : 1; 
        unsigned int muteSpeechOverride : 1; 
        unsigned int pauseSpokenAudio : 1; 
        unsigned int shouldUseGuidanceEventManager : 1; 
        unsigned int speechEnabled : 1; 
    }  _has;
    unsigned long long  _maxAlternateRouteCount;
    bool  _muteSpeechOverride;
    bool  _pauseSpokenAudio;
    bool  _shouldUseGuidanceEventManager;
    bool  _speechEnabled;
    int  _userPreferredTransportType;
    NSString * _voiceLanguage;
    unsigned long long  _voiceVolume;
}

@property (nonatomic) bool beepBeforeInstruction;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) bool hasBeepBeforeInstruction;
@property (nonatomic) bool hasDistanceUnits;
@property (nonatomic) bool hasMaxAlternateRouteCount;
@property (nonatomic) bool hasMuteSpeechOverride;
@property (nonatomic) bool hasPauseSpokenAudio;
@property (nonatomic) bool hasShouldUseGuidanceEventManager;
@property (nonatomic) bool hasSpeechEnabled;
@property (nonatomic) bool hasUserPreferredTransportType;
@property (nonatomic, readonly) bool hasVoiceLanguage;
@property (nonatomic) bool hasVoiceVolume;
@property (nonatomic) unsigned long long maxAlternateRouteCount;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) bool pauseSpokenAudio;
@property (nonatomic) bool shouldUseGuidanceEventManager;
@property (nonatomic) bool speechEnabled;
@property (nonatomic) int userPreferredTransportType;
@property (nonatomic, retain) NSString *voiceLanguage;
@property (nonatomic) unsigned long long voiceVolume;

- (void).cxx_destruct;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (bool)beepBeforeInstruction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)distanceUnits;
- (bool)hasBeepBeforeInstruction;
- (bool)hasDistanceUnits;
- (bool)hasMaxAlternateRouteCount;
- (bool)hasMuteSpeechOverride;
- (bool)hasPauseSpokenAudio;
- (bool)hasShouldUseGuidanceEventManager;
- (bool)hasSpeechEnabled;
- (bool)hasUserPreferredTransportType;
- (bool)hasVoiceLanguage;
- (bool)hasVoiceVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxAlternateRouteCount;
- (void)mergeFrom:(id)arg1;
- (bool)muteSpeechOverride;
- (bool)pauseSpokenAudio;
- (bool)readFrom:(id)arg1;
- (void)setBeepBeforeInstruction:(bool)arg1;
- (void)setDistanceUnits:(unsigned long long)arg1;
- (void)setHasBeepBeforeInstruction:(bool)arg1;
- (void)setHasDistanceUnits:(bool)arg1;
- (void)setHasMaxAlternateRouteCount:(bool)arg1;
- (void)setHasMuteSpeechOverride:(bool)arg1;
- (void)setHasPauseSpokenAudio:(bool)arg1;
- (void)setHasShouldUseGuidanceEventManager:(bool)arg1;
- (void)setHasSpeechEnabled:(bool)arg1;
- (void)setHasUserPreferredTransportType:(bool)arg1;
- (void)setHasVoiceVolume:(bool)arg1;
- (void)setMaxAlternateRouteCount:(unsigned long long)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setPauseSpokenAudio:(bool)arg1;
- (void)setShouldUseGuidanceEventManager:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setUserPreferredTransportType:(int)arg1;
- (void)setVoiceLanguage:(id)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;
- (bool)shouldUseGuidanceEventManager;
- (bool)speechEnabled;
- (int)userPreferredTransportType;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (id)voiceLanguage;
- (unsigned long long)voiceVolume;
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