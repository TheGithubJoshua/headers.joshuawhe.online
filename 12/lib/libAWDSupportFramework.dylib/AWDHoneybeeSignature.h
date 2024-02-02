<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDHoneybeeSignature.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDHoneybeeSignature.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHoneybeeSignature : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int instances : 1; 
    }  _has;
    int  _instances;
    NSMutableArray * _keywords;
    NSString * _radarAttachmentFilename;
    NSMutableArray * _radarAttachmentTypes;
    NSString * _radarAttachmentUUID;
    NSString * _radarComponent;
    NSString * _radarDescription;
    NSString * _radarSignature;
    NSString * _radarTitle;
    NSString * _radarVersion;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInstances;
@property (nonatomic, readonly) bool hasRadarAttachmentFilename;
@property (nonatomic, readonly) bool hasRadarAttachmentUUID;
@property (nonatomic, readonly) bool hasRadarComponent;
@property (nonatomic, readonly) bool hasRadarDescription;
@property (nonatomic, readonly) bool hasRadarSignature;
@property (nonatomic, readonly) bool hasRadarTitle;
@property (nonatomic, readonly) bool hasRadarVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int instances;
@property (nonatomic, retain) NSMutableArray *keywords;
@property (nonatomic, retain) NSString *radarAttachmentFilename;
@property (nonatomic, retain) NSMutableArray *radarAttachmentTypes;
@property (nonatomic, retain) NSString *radarAttachmentUUID;
@property (nonatomic, retain) NSString *radarComponent;
@property (nonatomic, retain) NSString *radarDescription;
@property (nonatomic, retain) NSString *radarSignature;
@property (nonatomic, retain) NSString *radarTitle;
@property (nonatomic, retain) NSString *radarVersion;
@property (nonatomic) unsigned long long timestamp;

+ (Class)keywordsType;
+ (Class)radarAttachmentTypesType;

- (void)addKeywords:(id)arg1;
- (void)addRadarAttachmentTypes:(id)arg1;
- (void)clearKeywords;
- (void)clearRadarAttachmentTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstances;
- (bool)hasRadarAttachmentFilename;
- (bool)hasRadarAttachmentUUID;
- (bool)hasRadarComponent;
- (bool)hasRadarDescription;
- (bool)hasRadarSignature;
- (bool)hasRadarTitle;
- (bool)hasRadarVersion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)instances;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)keywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keywordsCount;
- (void)mergeFrom:(id)arg1;
- (id)radarAttachmentFilename;
- (id)radarAttachmentTypes;
- (id)radarAttachmentTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)radarAttachmentTypesCount;
- (id)radarAttachmentUUID;
- (id)radarComponent;
- (id)radarDescription;
- (id)radarSignature;
- (id)radarTitle;
- (id)radarVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasInstances:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInstances:(int)arg1;
- (void)setKeywords:(id)arg1;
- (void)setRadarAttachmentFilename:(id)arg1;
- (void)setRadarAttachmentTypes:(id)arg1;
- (void)setRadarAttachmentUUID:(id)arg1;
- (void)setRadarComponent:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarSignature:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setRadarVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
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