<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWiFiMetricCustomNetworkSetting.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWiFiMetricCustomNetworkSetting.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable <NSCopying> {
    unsigned int  _autoProxySetCount;
    unsigned int  _bootpSetCount;
    unsigned int  _customNetworkCount;
    unsigned int  _dhcpSetCount;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int autoProxySetCount : 1; 
        unsigned int bootpSetCount : 1; 
        unsigned int customNetworkCount : 1; 
        unsigned int dhcpSetCount : 1; 
        unsigned int manualProxySetCount : 1; 
        unsigned int staticSetCount : 1; 
        unsigned int totalNetworkCount : 1; 
    }  _has;
    unsigned int  _manualProxySetCount;
    unsigned int  _staticSetCount;
    unsigned long long  _timestamp;
    unsigned int  _totalNetworkCount;
}

@property (nonatomic) unsigned int autoProxySetCount;
@property (nonatomic) unsigned int bootpSetCount;
@property (nonatomic) unsigned int customNetworkCount;
@property (nonatomic) unsigned int dhcpSetCount;
@property (nonatomic) bool hasAutoProxySetCount;
@property (nonatomic) bool hasBootpSetCount;
@property (nonatomic) bool hasCustomNetworkCount;
@property (nonatomic) bool hasDhcpSetCount;
@property (nonatomic) bool hasManualProxySetCount;
@property (nonatomic) bool hasStaticSetCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalNetworkCount;
@property (nonatomic) unsigned int manualProxySetCount;
@property (nonatomic) unsigned int staticSetCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int totalNetworkCount;

- (unsigned int)autoProxySetCount;
- (unsigned int)bootpSetCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)customNetworkCount;
- (id)description;
- (unsigned int)dhcpSetCount;
- (id)dictionaryRepresentation;
- (bool)hasAutoProxySetCount;
- (bool)hasBootpSetCount;
- (bool)hasCustomNetworkCount;
- (bool)hasDhcpSetCount;
- (bool)hasManualProxySetCount;
- (bool)hasStaticSetCount;
- (bool)hasTimestamp;
- (bool)hasTotalNetworkCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)manualProxySetCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutoProxySetCount:(unsigned int)arg1;
- (void)setBootpSetCount:(unsigned int)arg1;
- (void)setCustomNetworkCount:(unsigned int)arg1;
- (void)setDhcpSetCount:(unsigned int)arg1;
- (void)setHasAutoProxySetCount:(bool)arg1;
- (void)setHasBootpSetCount:(bool)arg1;
- (void)setHasCustomNetworkCount:(bool)arg1;
- (void)setHasDhcpSetCount:(bool)arg1;
- (void)setHasManualProxySetCount:(bool)arg1;
- (void)setHasStaticSetCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalNetworkCount:(bool)arg1;
- (void)setManualProxySetCount:(unsigned int)arg1;
- (void)setStaticSetCount:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalNetworkCount:(unsigned int)arg1;
- (unsigned int)staticSetCount;
- (unsigned long long)timestamp;
- (unsigned int)totalNetworkCount;
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