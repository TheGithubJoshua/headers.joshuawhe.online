<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWifiMostUsedNetworks.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWifiMostUsedNetworks.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {
    unsigned int  _apOUI;
    NSData * _apOui;
    NSString * _bundleID;
    struct { 
        unsigned int timeUsed : 1; 
        unsigned int apOUI : 1; 
        unsigned int networkScore : 1; 
        unsigned int networkScoreBitMap : 1; 
        unsigned int securityType : 1; 
        unsigned int switchToCount : 1; 
        unsigned int switchedAwayFromCount : 1; 
        unsigned int timeUsedMinutes : 1; 
    }  _has;
    int  _networkScore;
    unsigned int  _networkScoreBitMap;
    unsigned int  _securityType;
    unsigned int  _switchToCount;
    unsigned int  _switchedAwayFromCount;
    double  _timeUsed;
    unsigned int  _timeUsedMinutes;
}

@property (nonatomic) unsigned int apOUI;
@property (nonatomic, retain) NSData *apOui;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool hasApOUI;
@property (nonatomic, readonly) bool hasApOui;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasNetworkScore;
@property (nonatomic) bool hasNetworkScoreBitMap;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasSwitchToCount;
@property (nonatomic) bool hasSwitchedAwayFromCount;
@property (nonatomic) bool hasTimeUsed;
@property (nonatomic) bool hasTimeUsedMinutes;
@property (nonatomic) int networkScore;
@property (nonatomic) unsigned int networkScoreBitMap;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned int switchToCount;
@property (nonatomic) unsigned int switchedAwayFromCount;
@property (nonatomic) double timeUsed;
@property (nonatomic) unsigned int timeUsedMinutes;

- (unsigned int)apOUI;
- (id)apOui;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApOUI;
- (bool)hasApOui;
- (bool)hasBundleID;
- (bool)hasNetworkScore;
- (bool)hasNetworkScoreBitMap;
- (bool)hasSecurityType;
- (bool)hasSwitchToCount;
- (bool)hasSwitchedAwayFromCount;
- (bool)hasTimeUsed;
- (bool)hasTimeUsedMinutes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkScore;
- (unsigned int)networkScoreBitMap;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setApOUI:(unsigned int)arg1;
- (void)setApOui:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHasApOUI:(bool)arg1;
- (void)setHasNetworkScore:(bool)arg1;
- (void)setHasNetworkScoreBitMap:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSwitchToCount:(bool)arg1;
- (void)setHasSwitchedAwayFromCount:(bool)arg1;
- (void)setHasTimeUsed:(bool)arg1;
- (void)setHasTimeUsedMinutes:(bool)arg1;
- (void)setNetworkScore:(int)arg1;
- (void)setNetworkScoreBitMap:(unsigned int)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSwitchToCount:(unsigned int)arg1;
- (void)setSwitchedAwayFromCount:(unsigned int)arg1;
- (void)setTimeUsed:(double)arg1;
- (void)setTimeUsedMinutes:(unsigned int)arg1;
- (unsigned int)switchToCount;
- (unsigned int)switchedAwayFromCount;
- (double)timeUsed;
- (unsigned int)timeUsedMinutes;
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