<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTFRoadSpeed.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTFRoadSpeed.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {
    int  _color;
    float  _confidence;
    unsigned int  _decayTimeWindowInMinutes;
    float  _endOffset;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    long long  _geoid;
    struct { 
        unsigned int color : 1; 
        unsigned int confidence : 1; 
        unsigned int decayTimeWindowInMinutes : 1; 
        unsigned int endOffset : 1; 
        unsigned int speedKph : 1; 
        unsigned int startOffset : 1; 
        unsigned int hidden : 1; 
    }  _has;
    bool  _hidden;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _latitudeCoordinates;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _longitudeCoordinates;
    NSData * _openlr;
    NSMutableArray * _predictedSpeeds;
    unsigned int  _speedKph;
    float  _startOffset;
    NSData * _zilch;
}

@property (nonatomic) int color;
@property (nonatomic) float confidence;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) float endOffset;
@property (nonatomic, readonly) long long*geoIds;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic) long long geoid;
@property (nonatomic) bool hasColor;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasDecayTimeWindowInMinutes;
@property (nonatomic) bool hasEndOffset;
@property (nonatomic) bool hasHidden;
@property (nonatomic, readonly) bool hasOpenlr;
@property (nonatomic) bool hasSpeedKph;
@property (nonatomic) bool hasStartOffset;
@property (nonatomic, readonly) bool hasZilch;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) float*latitudeCoordinates;
@property (nonatomic, readonly) unsigned long long latitudeCoordinatesCount;
@property (nonatomic, readonly) float*longitudeCoordinates;
@property (nonatomic, readonly) unsigned long long longitudeCoordinatesCount;
@property (nonatomic, retain) NSData *openlr;
@property (nonatomic, retain) NSMutableArray *predictedSpeeds;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic) float startOffset;
@property (nonatomic, retain) NSData *zilch;

+ (Class)predictedSpeedType;

- (void).cxx_destruct;
- (int)StringAsColor:(id)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearGeoIds;
- (void)clearLatitudeCoordinates;
- (void)clearLongitudeCoordinates;
- (void)clearPredictedSpeeds;
- (int)color;
- (id)colorAsString:(int)arg1;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)decayTimeWindowInMinutes;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endOffset;
- (long long*)geoIds;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)geoIdsCount;
- (long long)geoid;
- (bool)hasColor;
- (bool)hasConfidence;
- (bool)hasDecayTimeWindowInMinutes;
- (bool)hasEndOffset;
- (bool)hasHidden;
- (bool)hasOpenlr;
- (bool)hasSpeedKph;
- (bool)hasStartOffset;
- (bool)hasZilch;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (float*)latitudeCoordinates;
- (float)latitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)latitudeCoordinatesCount;
- (float*)longitudeCoordinates;
- (float)longitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)longitudeCoordinatesCount;
- (void)mergeFrom:(id)arg1;
- (id)openlr;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (id)predictedSpeeds;
- (unsigned long long)predictedSpeedsCount;
- (bool)readFrom:(id)arg1;
- (void)setColor:(int)arg1;
- (void)setConfidence:(float)arg1;
- (void)setDecayTimeWindowInMinutes:(unsigned int)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setGeoid:(long long)arg1;
- (void)setHasColor:(bool)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasDecayTimeWindowInMinutes:(bool)arg1;
- (void)setHasEndOffset:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasSpeedKph:(bool)arg1;
- (void)setHasStartOffset:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLatitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2;
- (void)setLongitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2;
- (void)setOpenlr:(id)arg1;
- (void)setPredictedSpeeds:(id)arg1;
- (void)setSpeedKph:(unsigned int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setZilch:(id)arg1;
- (unsigned int)speedKph;
- (float)startOffset;
- (void)writeTo:(id)arg1;
- (id)zilch;

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