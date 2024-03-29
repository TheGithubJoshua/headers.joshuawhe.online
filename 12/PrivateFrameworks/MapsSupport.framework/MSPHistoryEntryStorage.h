<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSPHistoryEntryStorage.h</title>
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

/PrivateFrameworks/MapsSupport.framework/MSPHistoryEntryStorage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport (1)
 */

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {
    MSPDirectionsSearch * _directionsSearch;
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int searchType : 1; 
        unsigned int tracksRAPRecordingOnly : 1; 
    }  _has;
    NSString * _identifier;
    MSPPlaceDisplay * _placeDisplay;
    double  _position;
    MSPQuerySearch * _querySearch;
    MSPRidesharingTrip * _ridesharingTrip;
    int  _searchType;
    double  _timestamp;
    bool  _tracksRAPRecordingOnly;
    MSPTransitStorageLineItem * _transitLineItem;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) MSPDirectionsSearch *directionsSearch;
@property (nonatomic, readonly) bool hasDirectionsSearch;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPlaceDisplay;
@property (nonatomic) bool hasPosition;
@property (nonatomic, readonly) bool hasQuerySearch;
@property (nonatomic, readonly) bool hasRidesharingTrip;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTracksRAPRecordingOnly;
@property (nonatomic, readonly) bool hasTransitLineItem;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) MSPPlaceDisplay *placeDisplay;
@property (nonatomic) double position;
@property (nonatomic, retain) MSPQuerySearch *querySearch;
@property (nonatomic, retain) MSPRidesharingTrip *ridesharingTrip;
@property (nonatomic) int searchType;
@property (nonatomic) double timestamp;
@property (nonatomic) bool tracksRAPRecordingOnly;
@property (nonatomic, retain) MSPTransitStorageLineItem *transitLineItem;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsSearch;
- (bool)hasDirectionsSearch;
- (bool)hasIdentifier;
- (bool)hasPlaceDisplay;
- (bool)hasPosition;
- (bool)hasQuerySearch;
- (bool)hasRidesharingTrip;
- (bool)hasSearchType;
- (bool)hasTimestamp;
- (bool)hasTracksRAPRecordingOnly;
- (bool)hasTransitLineItem;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDisplay;
- (double)position;
- (id)querySearch;
- (bool)readFrom:(id)arg1;
- (id)ridesharingTrip;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setDirectionsSearch:(id)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTracksRAPRecordingOnly:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlaceDisplay:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setQuerySearch:(id)arg1;
- (void)setRidesharingTrip:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTracksRAPRecordingOnly:(bool)arg1;
- (void)setTransitLineItem:(id)arg1;
- (double)timestamp;
- (bool)tracksRAPRecordingOnly;
- (id)transitLineItem;
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
