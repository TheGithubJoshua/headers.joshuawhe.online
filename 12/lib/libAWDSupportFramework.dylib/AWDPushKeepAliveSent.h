<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDPushKeepAliveSent.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDPushKeepAliveSent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushKeepAliveSent : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _currentGrowthStage;
    unsigned int  _dualChannelState;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentGrowthStage : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int keepAliveACKDuration : 1; 
        unsigned int keepAliveVersion : 1; 
        unsigned int lastKeepAliveInterval : 1; 
        unsigned int linkQuality : 1; 
        unsigned int nextKeepAliveInterval : 1; 
        unsigned int timeSinceConnected : 1; 
        unsigned int timeSinceLastKeepAlive : 1; 
        unsigned int timeSinceLastSuccessfulKeepAlive : 1; 
    }  _has;
    unsigned int  _keepAliveACKDuration;
    unsigned int  _keepAliveVersion;
    unsigned int  _lastKeepAliveInterval;
    int  _linkQuality;
    unsigned int  _nextKeepAliveInterval;
    unsigned int  _timeSinceConnected;
    unsigned int  _timeSinceLastKeepAlive;
    unsigned int  _timeSinceLastSuccessfulKeepAlive;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentGrowthStage;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentGrowthStage;
@property (nonatomic) bool hasDualChannelState;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasKeepAliveACKDuration;
@property (nonatomic) bool hasKeepAliveVersion;
@property (nonatomic) bool hasLastKeepAliveInterval;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasNextKeepAliveInterval;
@property (nonatomic) bool hasTimeSinceConnected;
@property (nonatomic) bool hasTimeSinceLastKeepAlive;
@property (nonatomic) bool hasTimeSinceLastSuccessfulKeepAlive;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int keepAliveACKDuration;
@property (nonatomic) unsigned int keepAliveVersion;
@property (nonatomic) unsigned int lastKeepAliveInterval;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int nextKeepAliveInterval;
@property (nonatomic) unsigned int timeSinceConnected;
@property (nonatomic) unsigned int timeSinceLastKeepAlive;
@property (nonatomic) unsigned int timeSinceLastSuccessfulKeepAlive;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentGrowthStage;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasCurrentGrowthStage;
- (bool)hasDualChannelState;
- (bool)hasGuid;
- (bool)hasKeepAliveACKDuration;
- (bool)hasKeepAliveVersion;
- (bool)hasLastKeepAliveInterval;
- (bool)hasLinkQuality;
- (bool)hasNextKeepAliveInterval;
- (bool)hasTimeSinceConnected;
- (bool)hasTimeSinceLastKeepAlive;
- (bool)hasTimeSinceLastSuccessfulKeepAlive;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)keepAliveACKDuration;
- (unsigned int)keepAliveVersion;
- (unsigned int)lastKeepAliveInterval;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nextKeepAliveInterval;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentGrowthStage:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentGrowthStage:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasKeepAliveACKDuration:(bool)arg1;
- (void)setHasKeepAliveVersion:(bool)arg1;
- (void)setHasLastKeepAliveInterval:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasNextKeepAliveInterval:(bool)arg1;
- (void)setHasTimeSinceConnected:(bool)arg1;
- (void)setHasTimeSinceLastKeepAlive:(bool)arg1;
- (void)setHasTimeSinceLastSuccessfulKeepAlive:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKeepAliveACKDuration:(unsigned int)arg1;
- (void)setKeepAliveVersion:(unsigned int)arg1;
- (void)setLastKeepAliveInterval:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setNextKeepAliveInterval:(unsigned int)arg1;
- (void)setTimeSinceConnected:(unsigned int)arg1;
- (void)setTimeSinceLastKeepAlive:(unsigned int)arg1;
- (void)setTimeSinceLastSuccessfulKeepAlive:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)timeSinceConnected;
- (unsigned int)timeSinceLastKeepAlive;
- (unsigned int)timeSinceLastSuccessfulKeepAlive;
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
