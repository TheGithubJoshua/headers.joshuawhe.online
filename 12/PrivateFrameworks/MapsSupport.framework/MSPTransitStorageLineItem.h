<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSPTransitStorageLineItem.h</title>
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

/PrivateFrameworks/MapsSupport.framework/MSPTransitStorageLineItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport (1)
 */

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {
    NSMutableArray * _incidents;
    MSPTransitStorageLine * _line;
    GEOMapRegion * _storedMapRegion;
    MSPTransitStorageAttribution * _transitAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *alternateArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) <GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) bool hasEncyclopedicInfo;
@property (nonatomic, readonly) bool hasIncidentComponent;
@property (nonatomic, readonly) bool hasLine;
@property (nonatomic, readonly) bool hasLineColorString;
@property (nonatomic, readonly) bool hasStoredMapRegion;
@property (nonatomic, readonly) bool hasTransitAttribution;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, retain) NSMutableArray *incidents;
@property (nonatomic, readonly) bool isIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, retain) MSPTransitStorageLine *line;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (nonatomic, retain) GEOMapRegion *storedMapRegion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;
@property (nonatomic, retain) MSPTransitStorageAttribution *transitAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)incidentsType;

- (void).cxx_destruct;
- (void)addIncidents:(id)arg1;
- (id)alternateArtwork;
- (id)artwork;
- (id)attribution;
- (void)clearIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encyclopedicInfo;
- (bool)hasEncyclopedicInfo;
- (bool)hasIncidentComponent;
- (bool)hasLine;
- (bool)hasLineColorString;
- (bool)hasStoredMapRegion;
- (bool)hasTransitAttribution;
- (unsigned long long)hash;
- (id)identifier;
- (id)incidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (id)initWithLineItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIncidentsTTLExpired;
- (id)labelItems;
- (id)line;
- (id)lineColorString;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)readFrom:(id)arg1;
- (void)setIncidents:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setStoredMapRegion:(id)arg1;
- (void)setTransitAttribution:(id)arg1;
- (bool)showVehicleNumber;
- (id)storedMapRegion;
- (id)system;
- (id)transitAttribution;
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