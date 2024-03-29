<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CLPLteCellTowerLocation.h</title>
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

/PrivateFrameworks/CoreLocationProtobuf.framework/CLPLteCellTowerLocation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPLteCellTowerLocation : PBCodable <NSCopying> {
    NSString * _appBundleId;
    int  _bandInfo;
    int  _bandwidth;
    double  _cellLatitude;
    double  _cellLongitude;
    int  _ci;
    int  _ecn0;
    struct { 
        unsigned int cellLatitude : 1; 
        unsigned int cellLongitude : 1; 
        unsigned int bandInfo : 1; 
        unsigned int bandwidth : 1; 
        unsigned int ecn0 : 1; 
        unsigned int pid : 1; 
        unsigned int rscp : 1; 
        unsigned int rssi : 1; 
        unsigned int serverHash : 1; 
        unsigned int uarfcn : 1; 
    }  _has;
    CLPLocation * _location;
    int  _mcc;
    int  _mnc;
    CLPCellNeighborsGroup * _neighborGroup;
    NSMutableArray * _neighbors;
    NSString * _operatorName;
    int  _pid;
    int  _rscp;
    int  _rssi;
    int  _serverHash;
    int  _tac;
    int  _uarfcn;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic) int bandInfo;
@property (nonatomic) int bandwidth;
@property (nonatomic) double cellLatitude;
@property (nonatomic) double cellLongitude;
@property (nonatomic) int ci;
@property (nonatomic) int ecn0;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasBandInfo;
@property (nonatomic) bool hasBandwidth;
@property (nonatomic) bool hasCellLatitude;
@property (nonatomic) bool hasCellLongitude;
@property (nonatomic) bool hasEcn0;
@property (nonatomic, readonly) bool hasNeighborGroup;
@property (nonatomic, readonly) bool hasOperatorName;
@property (nonatomic) bool hasPid;
@property (nonatomic) bool hasRscp;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasServerHash;
@property (nonatomic) bool hasUarfcn;
@property (nonatomic, retain) CLPLocation *location;
@property (nonatomic) int mcc;
@property (nonatomic) int mnc;
@property (nonatomic, retain) CLPCellNeighborsGroup *neighborGroup;
@property (nonatomic, retain) NSMutableArray *neighbors;
@property (nonatomic, retain) NSString *operatorName;
@property (nonatomic) int pid;
@property (nonatomic) int rscp;
@property (nonatomic) int rssi;
@property (nonatomic) int serverHash;
@property (nonatomic) int tac;
@property (nonatomic) int uarfcn;

+ (Class)neighborType;

- (void).cxx_destruct;
- (void)addNeighbor:(id)arg1;
- (id)appBundleId;
- (int)bandInfo;
- (int)bandwidth;
- (double)cellLatitude;
- (double)cellLongitude;
- (int)ci;
- (void)clearNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)ecn0;
- (bool)hasAppBundleId;
- (bool)hasBandInfo;
- (bool)hasBandwidth;
- (bool)hasCellLatitude;
- (bool)hasCellLongitude;
- (bool)hasEcn0;
- (bool)hasNeighborGroup;
- (bool)hasOperatorName;
- (bool)hasPid;
- (bool)hasRscp;
- (bool)hasRssi;
- (bool)hasServerHash;
- (bool)hasUarfcn;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (int)mcc;
- (void)mergeFrom:(id)arg1;
- (int)mnc;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (id)neighborGroup;
- (id)neighbors;
- (unsigned long long)neighborsCount;
- (id)operatorName;
- (int)pid;
- (bool)readFrom:(id)arg1;
- (int)rscp;
- (int)rssi;
- (int)serverHash;
- (void)setAppBundleId:(id)arg1;
- (void)setBandInfo:(int)arg1;
- (void)setBandwidth:(int)arg1;
- (void)setCellLatitude:(double)arg1;
- (void)setCellLongitude:(double)arg1;
- (void)setCi:(int)arg1;
- (void)setEcn0:(int)arg1;
- (void)setHasBandInfo:(bool)arg1;
- (void)setHasBandwidth:(bool)arg1;
- (void)setHasCellLatitude:(bool)arg1;
- (void)setHasCellLongitude:(bool)arg1;
- (void)setHasEcn0:(bool)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasRscp:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasServerHash:(bool)arg1;
- (void)setHasUarfcn:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMcc:(int)arg1;
- (void)setMnc:(int)arg1;
- (void)setNeighborGroup:(id)arg1;
- (void)setNeighbors:(id)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRscp:(int)arg1;
- (void)setRssi:(int)arg1;
- (void)setServerHash:(int)arg1;
- (void)setTac:(int)arg1;
- (void)setUarfcn:(int)arg1;
- (int)tac;
- (int)uarfcn;
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
