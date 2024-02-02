<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPlaceSearchResponse.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPlaceSearchResponse.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int turnaroundTime : 1; 
        unsigned int statusCodeInfo : 1; 
        unsigned int isChainResultSet : 1; 
    }  _has;
    bool  _isChainResultSet;
    GEOMapRegion * _mapRegion;
    NSMutableArray * _namedFeatures;
    NSString * _nearbySectionHeader;
    NSMutableArray * _placeResults;
    int  _status;
    int  _statusCodeInfo;
    NSMutableArray * _suggestionEntryLists;
    NSData * _suggestionMetadata;
    double  _turnaroundTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic, readonly) bool hasNearbySectionHeader;
@property (nonatomic) bool hasStatusCodeInfo;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool hasTurnaroundTime;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic, retain) NSMutableArray *namedFeatures;
@property (nonatomic, retain) NSString *nearbySectionHeader;
@property (nonatomic, retain) NSMutableArray *placeResults;
@property (nonatomic) int status;
@property (nonatomic) int statusCodeInfo;
@property (nonatomic, retain) NSMutableArray *suggestionEntryLists;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) double turnaroundTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)namedFeaturesType;
+ (Class)placeResultType;
+ (Class)suggestionEntryListsType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsStatusCodeInfo:(id)arg1;
- (void)addNamedFeatures:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearNamedFeatures;
- (void)clearPlaceResults;
- (void)clearSuggestionEntryLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsChainResultSet;
- (bool)hasMapRegion;
- (bool)hasNearbySectionHeader;
- (bool)hasStatusCodeInfo;
- (bool)hasSuggestionMetadata;
- (bool)hasTurnaroundTime;
- (unsigned long long)hash;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatures;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (id)nearbySectionHeader;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (id)placeResults;
- (unsigned long long)placeResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setHasStatusCodeInfo:(bool)arg1;
- (void)setHasTurnaroundTime:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setNearbySectionHeader:(id)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusCodeInfo:(int)arg1;
- (void)setSuggestionEntryLists:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setTurnaroundTime:(double)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (int)statusCodeInfo;
- (id)statusCodeInfoAsString:(int)arg1;
- (id)suggestionEntryLists;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (id)suggestionMetadata;
- (double)turnaroundTime;
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