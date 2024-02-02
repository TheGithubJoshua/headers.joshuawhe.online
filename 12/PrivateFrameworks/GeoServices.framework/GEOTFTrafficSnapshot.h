<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTFTrafficSnapshot.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTFTrafficSnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying> {
    NSMutableArray * _compactSpeeds;
    NSString * _feedId;
    unsigned long long  _feedPublishTime;
    long long  _feedUpdateTime;
    struct { 
        unsigned int feedPublishTime : 1; 
        unsigned int feedUpdateTime : 1; 
        unsigned int trafficVersion : 1; 
    }  _has;
    NSMutableArray * _incidents;
    NSMutableArray * _regions;
    NSString * _snapshotId;
    NSMutableArray * _speeds;
    unsigned int  _trafficVersion;
}

@property (nonatomic, retain) NSMutableArray *compactSpeeds;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) unsigned long long feedPublishTime;
@property (nonatomic) long long feedUpdateTime;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedPublishTime;
@property (nonatomic) bool hasFeedUpdateTime;
@property (nonatomic, readonly) bool hasSnapshotId;
@property (nonatomic) bool hasTrafficVersion;
@property (nonatomic, retain) NSMutableArray *incidents;
@property (nonatomic, retain) NSMutableArray *regions;
@property (nonatomic, retain) NSString *snapshotId;
@property (nonatomic, retain) NSMutableArray *speeds;
@property (nonatomic) unsigned int trafficVersion;

+ (Class)compactSpeedsType;
+ (Class)incidentsType;
+ (Class)regionType;
+ (Class)speedsType;

- (void).cxx_destruct;
- (void)addCompactSpeeds:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearCompactSpeeds;
- (void)clearIncidents;
- (void)clearRegions;
- (void)clearSpeeds;
- (id)compactSpeeds;
- (id)compactSpeedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)compactSpeedsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (unsigned long long)feedPublishTime;
- (long long)feedUpdateTime;
- (bool)hasFeedId;
- (bool)hasFeedPublishTime;
- (bool)hasFeedUpdateTime;
- (bool)hasSnapshotId;
- (bool)hasTrafficVersion;
- (unsigned long long)hash;
- (id)incidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (id)regions;
- (unsigned long long)regionsCount;
- (void)setCompactSpeeds:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedPublishTime:(unsigned long long)arg1;
- (void)setFeedUpdateTime:(long long)arg1;
- (void)setHasFeedPublishTime:(bool)arg1;
- (void)setHasFeedUpdateTime:(bool)arg1;
- (void)setHasTrafficVersion:(bool)arg1;
- (void)setIncidents:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setSnapshotId:(id)arg1;
- (void)setSpeeds:(id)arg1;
- (void)setTrafficVersion:(unsigned int)arg1;
- (id)snapshotId;
- (id)speeds;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (unsigned int)trafficVersion;
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