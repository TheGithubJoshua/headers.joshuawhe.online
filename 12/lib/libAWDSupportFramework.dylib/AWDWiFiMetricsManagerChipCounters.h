<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWiFiMetricsManagerChipCounters.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWiFiMetricsManagerChipCounters.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerChipCounters : PBCodable <NSCopying> {
    NSMutableArray * _frameCounterPerInterfaces;
    AWDWiFiMetricsManagerFrameCounterStats * _frameCounters;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDWPA2Counters * _mcastWPA2Counters;
    AWDChipCountersRx * _rxGeneralStats;
    AWDMacCountersRx * _rxMACCounterStats;
    AWDMacCountersRxErrors * _rxMACErrorStats;
    AWDRxPhyErrors * _rxPhyErrors;
    unsigned long long  _timestamp;
    AWDChipErrorCountersTx * _txErrorStats;
    AWDChipCountersTx * _txGeneralStats;
    AWDWPA2Counters * _ucastWPA2Counters;
}

@property (nonatomic, retain) NSMutableArray *frameCounterPerInterfaces;
@property (nonatomic, retain) AWDWiFiMetricsManagerFrameCounterStats *frameCounters;
@property (nonatomic, readonly) bool hasFrameCounters;
@property (nonatomic, readonly) bool hasMcastWPA2Counters;
@property (nonatomic, readonly) bool hasRxGeneralStats;
@property (nonatomic, readonly) bool hasRxMACCounterStats;
@property (nonatomic, readonly) bool hasRxMACErrorStats;
@property (nonatomic, readonly) bool hasRxPhyErrors;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTxErrorStats;
@property (nonatomic, readonly) bool hasTxGeneralStats;
@property (nonatomic, readonly) bool hasUcastWPA2Counters;
@property (nonatomic, retain) AWDWPA2Counters *mcastWPA2Counters;
@property (nonatomic, retain) AWDChipCountersRx *rxGeneralStats;
@property (nonatomic, retain) AWDMacCountersRx *rxMACCounterStats;
@property (nonatomic, retain) AWDMacCountersRxErrors *rxMACErrorStats;
@property (nonatomic, retain) AWDRxPhyErrors *rxPhyErrors;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDChipErrorCountersTx *txErrorStats;
@property (nonatomic, retain) AWDChipCountersTx *txGeneralStats;
@property (nonatomic, retain) AWDWPA2Counters *ucastWPA2Counters;

+ (Class)frameCounterPerInterfaceType;

- (void)addFrameCounterPerInterface:(id)arg1;
- (void)clearFrameCounterPerInterfaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)frameCounterPerInterfaceAtIndex:(unsigned long long)arg1;
- (id)frameCounterPerInterfaces;
- (unsigned long long)frameCounterPerInterfacesCount;
- (id)frameCounters;
- (bool)hasFrameCounters;
- (bool)hasMcastWPA2Counters;
- (bool)hasRxGeneralStats;
- (bool)hasRxMACCounterStats;
- (bool)hasRxMACErrorStats;
- (bool)hasRxPhyErrors;
- (bool)hasTimestamp;
- (bool)hasTxErrorStats;
- (bool)hasTxGeneralStats;
- (bool)hasUcastWPA2Counters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mcastWPA2Counters;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rxGeneralStats;
- (id)rxMACCounterStats;
- (id)rxMACErrorStats;
- (id)rxPhyErrors;
- (void)setFrameCounterPerInterfaces:(id)arg1;
- (void)setFrameCounters:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMcastWPA2Counters:(id)arg1;
- (void)setRxGeneralStats:(id)arg1;
- (void)setRxMACCounterStats:(id)arg1;
- (void)setRxMACErrorStats:(id)arg1;
- (void)setRxPhyErrors:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxErrorStats:(id)arg1;
- (void)setTxGeneralStats:(id)arg1;
- (void)setUcastWPA2Counters:(id)arg1;
- (unsigned long long)timestamp;
- (id)txErrorStats;
- (id)txGeneralStats;
- (id)ucastWPA2Counters;
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
