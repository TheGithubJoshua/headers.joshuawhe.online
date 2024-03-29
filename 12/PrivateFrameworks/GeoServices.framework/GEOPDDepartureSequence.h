<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPDDepartureSequence.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPDDepartureSequence.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {
    NSMutableArray * _departureFrequencys;
    NSMutableArray * _departures;
    NSString * _directionNameString;
    struct { 
        unsigned int lineId : 1; 
        unsigned int stopId : 1; 
    }  _has;
    NSString * _headsignString;
    unsigned long long  _lineId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _nextStopIds;
    struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _operatingHours;
    unsigned long long  _operatingHoursCount;
    unsigned long long  _operatingHoursSpace;
    unsigned long long  _stopId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *departureFrequencys;
@property (nonatomic, retain) NSMutableArray *departures;
@property (nonatomic, retain) NSString *directionNameString;
@property (nonatomic, readonly) bool hasDirectionNameString;
@property (nonatomic, readonly) bool hasHeadsignString;
@property (nonatomic) bool hasLineId;
@property (nonatomic) bool hasStopId;
@property (nonatomic, retain) NSString *headsignString;
@property (nonatomic) unsigned long long lineId;
@property (nonatomic, readonly) unsigned long long*nextStopIds;
@property (nonatomic, readonly) unsigned long long nextStopIdsCount;
@property (nonatomic, readonly) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*operatingHours;
@property (nonatomic, readonly) unsigned long long operatingHoursCount;
@property (nonatomic) unsigned long long stopId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)departureFrequencyType;
+ (Class)departureType;

- (void).cxx_destruct;
- (void)addDeparture:(id)arg1;
- (void)addDepartureFrequency:(id)arg1;
- (void)addNextStopId:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearDepartureFrequencys;
- (void)clearDepartures;
- (void)clearNextStopIds;
- (void)clearOperatingHours;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)departureAtIndex:(unsigned long long)arg1;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (id)departureFrequencys;
- (unsigned long long)departureFrequencysCount;
- (id)departures;
- (unsigned long long)departuresCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionNameString;
- (bool)hasDirectionNameString;
- (bool)hasHeadsignString;
- (bool)hasLineId;
- (bool)hasStopId;
- (unsigned long long)hash;
- (id)headsignString;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)nextStopIds;
- (unsigned long long)nextStopIdsCount;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)operatingHours;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })operatingHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)operatingHoursCount;
- (bool)readFrom:(id)arg1;
- (void)setDepartureFrequencys:(id)arg1;
- (void)setDepartures:(id)arg1;
- (void)setDirectionNameString:(id)arg1;
- (void)setHasLineId:(bool)arg1;
- (void)setHasStopId:(bool)arg1;
- (void)setHeadsignString:(id)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)setNextStopIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setOperatingHours:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setStopId:(unsigned long long)arg1;
- (unsigned long long)stopId;
- (id)unknownFields;
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
