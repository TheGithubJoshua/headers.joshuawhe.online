<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWiFiMetricsManagerP2pLegacyUsageReport.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWiFiMetricsManagerP2pLegacyUsageReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerP2pLegacyUsageReport : PBCodable <NSCopying> {
    unsigned int  _activationsSinceLastReport;
    struct { 
        unsigned int longestActiveDurationSinceLastReport : 1; 
        unsigned int shortestActiveDurationSinceLastReport : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalActiveDurationSinceLastReport : 1; 
        unsigned int activationsSinceLastReport : 1; 
    }  _has;
    unsigned long long  _longestActiveDurationSinceLastReport;
    unsigned long long  _shortestActiveDurationSinceLastReport;
    unsigned long long  _timestamp;
    unsigned long long  _totalActiveDurationSinceLastReport;
}

@property (nonatomic) unsigned int activationsSinceLastReport;
@property (nonatomic) bool hasActivationsSinceLastReport;
@property (nonatomic) bool hasLongestActiveDurationSinceLastReport;
@property (nonatomic) bool hasShortestActiveDurationSinceLastReport;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long longestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long shortestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalActiveDurationSinceLastReport;

- (unsigned int)activationsSinceLastReport;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationsSinceLastReport;
- (bool)hasLongestActiveDurationSinceLastReport;
- (bool)hasShortestActiveDurationSinceLastReport;
- (bool)hasTimestamp;
- (bool)hasTotalActiveDurationSinceLastReport;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)longestActiveDurationSinceLastReport;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationsSinceLastReport:(unsigned int)arg1;
- (void)setHasActivationsSinceLastReport:(bool)arg1;
- (void)setHasLongestActiveDurationSinceLastReport:(bool)arg1;
- (void)setHasShortestActiveDurationSinceLastReport:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalActiveDurationSinceLastReport:(bool)arg1;
- (void)setLongestActiveDurationSinceLastReport:(unsigned long long)arg1;
- (void)setShortestActiveDurationSinceLastReport:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalActiveDurationSinceLastReport:(unsigned long long)arg1;
- (unsigned long long)shortestActiveDurationSinceLastReport;
- (unsigned long long)timestamp;
- (unsigned long long)totalActiveDurationSinceLastReport;
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