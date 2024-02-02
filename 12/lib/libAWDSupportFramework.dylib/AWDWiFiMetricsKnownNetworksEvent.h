<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWiFiMetricsKnownNetworksEvent.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWiFiMetricsKnownNetworksEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsKnownNetworksEvent : PBCodable <NSCopying> {
    NSString * _bundleID;
    unsigned int  _colocatedState;
    unsigned int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int colocatedState : 1; 
        unsigned int eventType : 1; 
        unsigned int networkScore : 1; 
        unsigned int networkSecurity : 1; 
        unsigned int networkTypeBitMap : 1; 
        unsigned int switchToCount : 1; 
        unsigned int switchedAwayFromCount : 1; 
    }  _has;
    int  _networkScore;
    unsigned int  _networkSecurity;
    unsigned int  _networkTypeBitMap;
    NSData * _oui;
    unsigned int  _switchToCount;
    unsigned int  _switchedAwayFromCount;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int colocatedState;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasColocatedState;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasNetworkScore;
@property (nonatomic) bool hasNetworkSecurity;
@property (nonatomic) bool hasNetworkTypeBitMap;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasSwitchToCount;
@property (nonatomic) bool hasSwitchedAwayFromCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int networkScore;
@property (nonatomic) unsigned int networkSecurity;
@property (nonatomic) unsigned int networkTypeBitMap;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) unsigned long long timestamp;

- (id)bundleID;
- (unsigned int)colocatedState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasBundleID;
- (bool)hasColocatedState;
- (bool)hasEventType;
- (bool)hasNetworkScore;
- (bool)hasNetworkSecurity;
- (bool)hasNetworkTypeBitMap;
- (bool)hasOui;
- (bool)hasSwitchToCount;
- (bool)hasSwitchedAwayFromCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkScore;
- (unsigned int)networkSecurity;
- (unsigned int)networkTypeBitMap;
- (id)oui;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setColocatedState:(unsigned int)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasColocatedState:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasNetworkScore:(bool)arg1;
- (void)setHasNetworkSecurity:(bool)arg1;
- (void)setHasNetworkTypeBitMap:(bool)arg1;
- (void)setHasSwitchToCount:(bool)arg1;
- (void)setHasSwitchedAwayFromCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNetworkScore:(int)arg1;
- (void)setNetworkSecurity:(unsigned int)arg1;
- (void)setNetworkTypeBitMap:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setSwitchToCount:(unsigned int)arg1;
- (void)setSwitchedAwayFromCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)switchToCount;
- (unsigned int)switchedAwayFromCount;
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