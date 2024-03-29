<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPBTransitAccessPoint.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPBTransitAccessPoint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {
    unsigned int  _accessPointIndex;
    NSString * _entranceNameDisplayString;
    NSMutableArray * _entranceZoomNames;
    NSString * _exitNameDisplayString;
    NSMutableArray * _exitZoomNames;
    struct { 
        unsigned int muid : 1; 
        unsigned int accessPointIndex : 1; 
        unsigned int stationIndex : 1; 
    }  _has;
    GEOLatLng * _location;
    unsigned long long  _muid;
    unsigned int  _stationIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int accessPointIndex;
@property (nonatomic, retain) NSString *entranceNameDisplayString;
@property (nonatomic, retain) NSMutableArray *entranceZoomNames;
@property (nonatomic, retain) NSString *exitNameDisplayString;
@property (nonatomic, retain) NSMutableArray *exitZoomNames;
@property (nonatomic) bool hasAccessPointIndex;
@property (nonatomic, readonly) bool hasEntranceNameDisplayString;
@property (nonatomic, readonly) bool hasExitNameDisplayString;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMuid;
@property (nonatomic) bool hasStationIndex;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entranceZoomNameType;
+ (Class)exitZoomNameType;

- (void).cxx_destruct;
- (unsigned int)accessPointIndex;
- (void)addEntranceZoomName:(id)arg1;
- (void)addExitZoomName:(id)arg1;
- (id)bestEntranceName;
- (id)bestEntranceNameWithLocale:(out id*)arg1;
- (id)bestExitName;
- (id)bestExitNameWithLocale:(out id*)arg1;
- (void)clearEntranceZoomNames;
- (void)clearExitZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entranceNameDisplayString;
- (id)entranceZoomNameAtIndex:(unsigned long long)arg1;
- (id)entranceZoomNames;
- (unsigned long long)entranceZoomNamesCount;
- (id)exitNameDisplayString;
- (id)exitZoomNameAtIndex:(unsigned long long)arg1;
- (id)exitZoomNames;
- (unsigned long long)exitZoomNamesCount;
- (bool)hasAccessPointIndex;
- (bool)hasEntranceNameDisplayString;
- (bool)hasExitNameDisplayString;
- (bool)hasLocation;
- (bool)hasMuid;
- (bool)hasStationIndex;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setAccessPointIndex:(unsigned int)arg1;
- (void)setEntranceNameDisplayString:(id)arg1;
- (void)setEntranceZoomNames:(id)arg1;
- (void)setExitNameDisplayString:(id)arg1;
- (void)setExitZoomNames:(id)arg1;
- (void)setHasAccessPointIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStationIndex:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (unsigned int)stationIndex;
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
