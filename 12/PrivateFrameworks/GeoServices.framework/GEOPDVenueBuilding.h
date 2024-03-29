<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPDVenueBuilding.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPDVenueBuilding.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _directoryGroupingIds;
    struct { 
        unsigned int buildingId : 1; 
        unsigned int muid : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _levelIds;
    unsigned long long  _muid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long*directoryGroupingIds;
@property (nonatomic, readonly) unsigned long long directoryGroupingIdsCount;
@property (nonatomic) bool hasBuildingId;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasMuid;
@property (nonatomic, retain) GEOPDVenueLabel *label;
@property (nonatomic, readonly) unsigned long long*levelIds;
@property (nonatomic, readonly) unsigned long long levelIdsCount;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addDirectoryGroupingId:(unsigned long long)arg1;
- (void)addLevelId:(unsigned long long)arg1;
- (unsigned long long)buildingId;
- (void)clearDirectoryGroupingIds;
- (void)clearLevelIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)directoryGroupingIds;
- (unsigned long long)directoryGroupingIdsCount;
- (bool)hasBuildingId;
- (bool)hasLabel;
- (bool)hasMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)levelIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)levelIds;
- (unsigned long long)levelIdsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setDirectoryGroupingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasBuildingId:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLevelIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setMuid:(unsigned long long)arg1;
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
