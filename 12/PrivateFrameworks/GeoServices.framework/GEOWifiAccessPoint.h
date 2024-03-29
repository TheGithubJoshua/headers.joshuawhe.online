<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOWifiAccessPoint.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOWifiAccessPoint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOWifiAccessPoint : PBCodable <NSCopying> {
    unsigned int  _age;
    int  _channel;
    struct { 
        unsigned int scanTimestamp : 1; 
        unsigned int age : 1; 
        unsigned int channel : 1; 
        unsigned int rssi : 1; 
    }  _has;
    NSString * _macId;
    int  _rssi;
    unsigned long long  _scanTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int age;
@property (nonatomic) int channel;
@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasChannel;
@property (nonatomic, readonly) bool hasMacId;
@property (nonatomic) bool hasRssi;
@property (nonatomic) bool hasScanTimestamp;
@property (nonatomic, retain) NSString *macId;
@property (nonatomic) int rssi;
@property (nonatomic) unsigned long long scanTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)age;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAge;
- (bool)hasChannel;
- (bool)hasMacId;
- (bool)hasRssi;
- (bool)hasScanTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)macId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (unsigned long long)scanTimestamp;
- (void)setAge:(unsigned int)arg1;
- (void)setChannel:(int)arg1;
- (void)setHasAge:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasScanTimestamp:(bool)arg1;
- (void)setMacId:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setScanTimestamp:(unsigned long long)arg1;
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
