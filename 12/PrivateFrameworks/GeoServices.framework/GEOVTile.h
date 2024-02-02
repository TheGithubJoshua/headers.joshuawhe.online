<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOVTile.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOVTile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOVTile : PBCodable <NSCopying> {
    NSMutableArray * _coastlines;
    GEOVConnectivity * _connectivity;
    struct { 
        unsigned int minZ : 1; 
        unsigned int sectionDeltaLengthBits : 1; 
        unsigned int vertexBits : 1; 
        unsigned int zBits : 1; 
    }  _has;
    NSMutableArray * _labelLanguages;
    NSData * _labels;
    NSMutableArray * _lines;
    int  _minZ;
    NSMutableArray * _points;
    NSMutableArray * _polygons;
    unsigned int  _sectionDeltaLengthBits;
    unsigned int  _vertexBits;
    NSData * _vertices;
    int  _zBits;
}

@property (nonatomic, retain) NSMutableArray *coastlines;
@property (nonatomic, retain) GEOVConnectivity *connectivity;
@property (nonatomic, readonly) bool hasConnectivity;
@property (nonatomic, readonly) bool hasLabels;
@property (nonatomic) bool hasMinZ;
@property (nonatomic) bool hasSectionDeltaLengthBits;
@property (nonatomic) bool hasVertexBits;
@property (nonatomic, readonly) bool hasVertices;
@property (nonatomic) bool hasZBits;
@property (nonatomic, retain) NSMutableArray *labelLanguages;
@property (nonatomic, retain) NSData *labels;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic) int minZ;
@property (nonatomic, retain) NSMutableArray *points;
@property (nonatomic, retain) NSMutableArray *polygons;
@property (nonatomic) unsigned int sectionDeltaLengthBits;
@property (nonatomic) unsigned int vertexBits;
@property (nonatomic, retain) NSData *vertices;
@property (nonatomic) int zBits;

- (void).cxx_destruct;
- (void)addCoastlines:(id)arg1;
- (void)addLabelLanguage:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addPoint:(id)arg1;
- (void)addPolygon:(id)arg1;
- (void)clearCoastlines;
- (void)clearLabelLanguages;
- (void)clearLines;
- (void)clearPoints;
- (void)clearPolygons;
- (id)coastlines;
- (id)coastlinesAtIndex:(unsigned long long)arg1;
- (unsigned long long)coastlinesCount;
- (id)connectivity;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectivity;
- (bool)hasLabels;
- (bool)hasMinZ;
- (bool)hasSectionDeltaLengthBits;
- (bool)hasVertexBits;
- (bool)hasVertices;
- (bool)hasZBits;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labelLanguageAtIndex:(unsigned long long)arg1;
- (id)labelLanguages;
- (unsigned long long)labelLanguagesCount;
- (id)labels;
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (int)minZ;
- (id)pointAtIndex:(unsigned long long)arg1;
- (id)points;
- (unsigned long long)pointsCount;
- (id)polygonAtIndex:(unsigned long long)arg1;
- (id)polygons;
- (unsigned long long)polygonsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)sectionDeltaLengthBits;
- (void)setCoastlines:(id)arg1;
- (void)setConnectivity:(id)arg1;
- (void)setHasMinZ:(bool)arg1;
- (void)setHasSectionDeltaLengthBits:(bool)arg1;
- (void)setHasVertexBits:(bool)arg1;
- (void)setHasZBits:(bool)arg1;
- (void)setLabelLanguages:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setMinZ:(int)arg1;
- (void)setPoints:(id)arg1;
- (void)setPolygons:(id)arg1;
- (void)setSectionDeltaLengthBits:(unsigned int)arg1;
- (void)setVertexBits:(unsigned int)arg1;
- (void)setVertices:(id)arg1;
- (void)setZBits:(int)arg1;
- (unsigned int)vertexBits;
- (id)vertices;
- (void)writeTo:(id)arg1;
- (int)zBits;

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