<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDPowerBBNonDataMetrics.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDPowerBBNonDataMetrics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBNonDataMetrics : PBCodable <NSCopying> {
    unsigned int  _aPWakeCacheFlushCnt;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int aPWakeCacheFlushCnt : 1; 
        unsigned int idlePowerMicroWatt : 1; 
        unsigned int oOSPowerMicroWatt : 1; 
        unsigned int registrationPowerMicroWatt : 1; 
        unsigned int scanPowerMicroWatt : 1; 
        unsigned int voicePowerMicroWatt : 1; 
    }  _has;
    unsigned int  _idlePowerMicroWatt;
    unsigned int  _oOSPowerMicroWatt;
    unsigned int  _registrationPowerMicroWatt;
    unsigned int  _scanPowerMicroWatt;
    unsigned long long  _timestamp;
    unsigned int  _voicePowerMicroWatt;
}

@property (nonatomic) unsigned int aPWakeCacheFlushCnt;
@property (nonatomic) bool hasAPWakeCacheFlushCnt;
@property (nonatomic) bool hasIdlePowerMicroWatt;
@property (nonatomic) bool hasOOSPowerMicroWatt;
@property (nonatomic) bool hasRegistrationPowerMicroWatt;
@property (nonatomic) bool hasScanPowerMicroWatt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVoicePowerMicroWatt;
@property (nonatomic) unsigned int idlePowerMicroWatt;
@property (nonatomic) unsigned int oOSPowerMicroWatt;
@property (nonatomic) unsigned int registrationPowerMicroWatt;
@property (nonatomic) unsigned int scanPowerMicroWatt;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int voicePowerMicroWatt;

- (unsigned int)aPWakeCacheFlushCnt;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAPWakeCacheFlushCnt;
- (bool)hasIdlePowerMicroWatt;
- (bool)hasOOSPowerMicroWatt;
- (bool)hasRegistrationPowerMicroWatt;
- (bool)hasScanPowerMicroWatt;
- (bool)hasTimestamp;
- (bool)hasVoicePowerMicroWatt;
- (unsigned long long)hash;
- (unsigned int)idlePowerMicroWatt;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oOSPowerMicroWatt;
- (bool)readFrom:(id)arg1;
- (unsigned int)registrationPowerMicroWatt;
- (unsigned int)scanPowerMicroWatt;
- (void)setAPWakeCacheFlushCnt:(unsigned int)arg1;
- (void)setHasAPWakeCacheFlushCnt:(bool)arg1;
- (void)setHasIdlePowerMicroWatt:(bool)arg1;
- (void)setHasOOSPowerMicroWatt:(bool)arg1;
- (void)setHasRegistrationPowerMicroWatt:(bool)arg1;
- (void)setHasScanPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVoicePowerMicroWatt:(bool)arg1;
- (void)setIdlePowerMicroWatt:(unsigned int)arg1;
- (void)setOOSPowerMicroWatt:(unsigned int)arg1;
- (void)setRegistrationPowerMicroWatt:(unsigned int)arg1;
- (void)setScanPowerMicroWatt:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVoicePowerMicroWatt:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)voicePowerMicroWatt;
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
