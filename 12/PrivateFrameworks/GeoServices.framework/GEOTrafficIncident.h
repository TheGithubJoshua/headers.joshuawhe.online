<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTrafficIncident.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTrafficIncident.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTrafficIncident : PBCodable <NSCopying> {
    double  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int lastUpdated : 1; 
        unsigned int startTime : 1; 
        unsigned int uID : 1; 
        unsigned int type : 1; 
        unsigned int vertexCount : 1; 
        unsigned int vertexOffset : 1; 
    }  _has;
    NSString * _info;
    double  _lastUpdated;
    NSString * _location;
    double  _startTime;
    NSString * _title;
    int  _type;
    long long  _uID;
    int  _vertexCount;
    int  _vertexOffset;
}

@property (nonatomic) double endTime;
@property (nonatomic) bool hasEndTime;
@property (nonatomic, readonly) bool hasInfo;
@property (nonatomic) bool hasLastUpdated;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUID;
@property (nonatomic) bool hasVertexCount;
@property (nonatomic) bool hasVertexOffset;
@property (nonatomic, retain) NSString *info;
@property (nonatomic) double lastUpdated;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;
@property (nonatomic) long long uID;
@property (nonatomic) int vertexCount;
@property (nonatomic) int vertexOffset;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (bool)hasEndTime;
- (bool)hasInfo;
- (bool)hasLastUpdated;
- (bool)hasLocation;
- (bool)hasStartTime;
- (bool)hasTitle;
- (bool)hasType;
- (bool)hasUID;
- (bool)hasVertexCount;
- (bool)hasVertexOffset;
- (unsigned long long)hash;
- (id)info;
- (bool)isEqual:(id)arg1;
- (double)lastUpdated;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasEndTime:(bool)arg1;
- (void)setHasLastUpdated:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setHasVertexCount:(bool)arg1;
- (void)setHasVertexOffset:(bool)arg1;
- (void)setInfo:(id)arg1;
- (void)setLastUpdated:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(long long)arg1;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (double)startTime;
- (id)title;
- (int)type;
- (id)typeAsString:(int)arg1;
- (long long)uID;
- (int)vertexCount;
- (int)vertexOffset;
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