<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>APSAWDAirPlayVideoSessionStartedOnClient.h</title>
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

/PrivateFrameworks/AirPlaySupport.framework/APSAWDAirPlayVideoSessionStartedOnClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport (387.2)
 */

@interface APSAWDAirPlayVideoSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int  _audioOnly;
    unsigned int  _authMs;
    int  _awdlCCA;
    int  _awdlRSSI;
    unsigned int  _bitrate;
    unsigned int  _bonjourMs;
    unsigned int  _connectMs;
    bool  _didFallbackToInfraToAvoidP2POverDFS;
    unsigned int  _duration;
    unsigned long long  _fileBytes;
    struct { 
        unsigned int fileBytes : 1; 
        unsigned int timestamp : 1; 
        unsigned int audioOnly : 1; 
        unsigned int authMs : 1; 
        unsigned int awdlCCA : 1; 
        unsigned int awdlRSSI : 1; 
        unsigned int bitrate : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int duration : 1; 
        unsigned int infoMs : 1; 
        unsigned int infraCCA : 1; 
        unsigned int infraRSSI : 1; 
        unsigned int infraSNR : 1; 
        unsigned int postAuthMs : 1; 
        unsigned int secureConnectionMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int type : 1; 
        unsigned int didFallbackToInfraToAvoidP2POverDFS : 1; 
    }  _has;
    unsigned int  _infoMs;
    int  _infraCCA;
    int  _infraRSSI;
    int  _infraSNR;
    unsigned int  _postAuthMs;
    unsigned int  _secureConnectionMs;
    NSString * _serverModel;
    NSString * _serverVersion;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
    unsigned int  _type;
}

@property (nonatomic) unsigned int audioOnly;
@property (nonatomic) unsigned int authMs;
@property (nonatomic) int awdlCCA;
@property (nonatomic) int awdlRSSI;
@property (nonatomic) unsigned int bitrate;
@property (nonatomic) unsigned int bonjourMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) bool didFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned long long fileBytes;
@property (nonatomic) bool hasAudioOnly;
@property (nonatomic) bool hasAuthMs;
@property (nonatomic) bool hasAwdlCCA;
@property (nonatomic) bool hasAwdlRSSI;
@property (nonatomic) bool hasBitrate;
@property (nonatomic) bool hasBonjourMs;
@property (nonatomic) bool hasConnectMs;
@property (nonatomic) bool hasDidFallbackToInfraToAvoidP2POverDFS;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFileBytes;
@property (nonatomic) bool hasInfoMs;
@property (nonatomic) bool hasInfraCCA;
@property (nonatomic) bool hasInfraRSSI;
@property (nonatomic) bool hasInfraSNR;
@property (nonatomic) bool hasPostAuthMs;
@property (nonatomic) bool hasSecureConnectionMs;
@property (nonatomic, readonly) bool hasServerModel;
@property (nonatomic, readonly) bool hasServerVersion;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int infoMs;
@property (nonatomic) int infraCCA;
@property (nonatomic) int infraRSSI;
@property (nonatomic) int infraSNR;
@property (nonatomic) unsigned int postAuthMs;
@property (nonatomic) unsigned int secureConnectionMs;
@property (nonatomic, retain) NSString *serverModel;
@property (nonatomic, retain) NSString *serverVersion;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned int type;

- (unsigned int)audioOnly;
- (unsigned int)authMs;
- (int)awdlCCA;
- (int)awdlRSSI;
- (unsigned int)bitrate;
- (unsigned int)bonjourMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didFallbackToInfraToAvoidP2POverDFS;
- (unsigned int)duration;
- (unsigned long long)fileBytes;
- (bool)hasAudioOnly;
- (bool)hasAuthMs;
- (bool)hasAwdlCCA;
- (bool)hasAwdlRSSI;
- (bool)hasBitrate;
- (bool)hasBonjourMs;
- (bool)hasConnectMs;
- (bool)hasDidFallbackToInfraToAvoidP2POverDFS;
- (bool)hasDuration;
- (bool)hasFileBytes;
- (bool)hasInfoMs;
- (bool)hasInfraCCA;
- (bool)hasInfraRSSI;
- (bool)hasInfraSNR;
- (bool)hasPostAuthMs;
- (bool)hasSecureConnectionMs;
- (bool)hasServerModel;
- (bool)hasServerVersion;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)infoMs;
- (int)infraCCA;
- (int)infraRSSI;
- (int)infraSNR;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)postAuthMs;
- (bool)readFrom:(id)arg1;
- (unsigned int)secureConnectionMs;
- (id)serverModel;
- (id)serverVersion;
- (id)sessionUUID;
- (void)setAudioOnly:(unsigned int)arg1;
- (void)setAuthMs:(unsigned int)arg1;
- (void)setAwdlCCA:(int)arg1;
- (void)setAwdlRSSI:(int)arg1;
- (void)setBitrate:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setDidFallbackToInfraToAvoidP2POverDFS:(bool)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setFileBytes:(unsigned long long)arg1;
- (void)setHasAudioOnly:(bool)arg1;
- (void)setHasAuthMs:(bool)arg1;
- (void)setHasAwdlCCA:(bool)arg1;
- (void)setHasAwdlRSSI:(bool)arg1;
- (void)setHasBitrate:(bool)arg1;
- (void)setHasBonjourMs:(bool)arg1;
- (void)setHasConnectMs:(bool)arg1;
- (void)setHasDidFallbackToInfraToAvoidP2POverDFS:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFileBytes:(bool)arg1;
- (void)setHasInfoMs:(bool)arg1;
- (void)setHasInfraCCA:(bool)arg1;
- (void)setHasInfraRSSI:(bool)arg1;
- (void)setHasInfraSNR:(bool)arg1;
- (void)setHasPostAuthMs:(bool)arg1;
- (void)setHasSecureConnectionMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInfoMs:(unsigned int)arg1;
- (void)setInfraCCA:(int)arg1;
- (void)setInfraRSSI:(int)arg1;
- (void)setInfraSNR:(int)arg1;
- (void)setPostAuthMs:(unsigned int)arg1;
- (void)setSecureConnectionMs:(unsigned int)arg1;
- (void)setServerModel:(id)arg1;
- (void)setServerVersion:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (void)setType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (unsigned int)type;
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
