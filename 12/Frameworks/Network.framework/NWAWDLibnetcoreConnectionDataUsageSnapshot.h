<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWAWDLibnetcoreConnectionDataUsageSnapshot.h</title>
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

/Frameworks/Network.framework/NWAWDLibnetcoreConnectionDataUsageSnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Network.framework/Network (1)
 */

@interface NWAWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int multipathBytesInCell : 1; 
        unsigned int multipathBytesInInitial : 1; 
        unsigned int multipathBytesInWiFi : 1; 
        unsigned int multipathBytesOutCell : 1; 
        unsigned int multipathBytesOutInitial : 1; 
        unsigned int multipathBytesOutWiFi : 1; 
    }  _has;
    unsigned long long  _multipathBytesInCell;
    unsigned long long  _multipathBytesInInitial;
    unsigned long long  _multipathBytesInWiFi;
    unsigned long long  _multipathBytesOutCell;
    unsigned long long  _multipathBytesOutInitial;
    unsigned long long  _multipathBytesOutWiFi;
}

@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) bool hasBytesIn;
@property (nonatomic) bool hasBytesOut;
@property (nonatomic) bool hasMultipathBytesInCell;
@property (nonatomic) bool hasMultipathBytesInInitial;
@property (nonatomic) bool hasMultipathBytesInWiFi;
@property (nonatomic) bool hasMultipathBytesOutCell;
@property (nonatomic) bool hasMultipathBytesOutInitial;
@property (nonatomic) bool hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;

- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesIn;
- (bool)hasBytesOut;
- (bool)hasMultipathBytesInCell;
- (bool)hasMultipathBytesInInitial;
- (bool)hasMultipathBytesInWiFi;
- (bool)hasMultipathBytesOutCell;
- (bool)hasMultipathBytesOutInitial;
- (bool)hasMultipathBytesOutWiFi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)multipathBytesInCell;
- (unsigned long long)multipathBytesInInitial;
- (unsigned long long)multipathBytesInWiFi;
- (unsigned long long)multipathBytesOutCell;
- (unsigned long long)multipathBytesOutInitial;
- (unsigned long long)multipathBytesOutWiFi;
- (bool)readFrom:(id)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setHasBytesIn:(bool)arg1;
- (void)setHasBytesOut:(bool)arg1;
- (void)setHasMultipathBytesInCell:(bool)arg1;
- (void)setHasMultipathBytesInInitial:(bool)arg1;
- (void)setHasMultipathBytesInWiFi:(bool)arg1;
- (void)setHasMultipathBytesOutCell:(bool)arg1;
- (void)setHasMultipathBytesOutInitial:(bool)arg1;
- (void)setHasMultipathBytesOutWiFi:(bool)arg1;
- (void)setMultipathBytesInCell:(unsigned long long)arg1;
- (void)setMultipathBytesInInitial:(unsigned long long)arg1;
- (void)setMultipathBytesInWiFi:(unsigned long long)arg1;
- (void)setMultipathBytesOutCell:(unsigned long long)arg1;
- (void)setMultipathBytesOutInitial:(unsigned long long)arg1;
- (void)setMultipathBytesOutWiFi:(unsigned long long)arg1;
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