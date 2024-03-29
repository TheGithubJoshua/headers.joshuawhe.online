<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDCoreRoutinePersistenceMirroringOperations.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDCoreRoutinePersistenceMirroringOperations.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying> {
    int  _deviceClass;
    int  _errorCount;
    struct { 
        unsigned int timeIntervalSinceLastOperation : 1; 
        unsigned int timestamp : 1; 
        unsigned int deviceClass : 1; 
        unsigned int errorCount : 1; 
        unsigned int operationType : 1; 
        unsigned int qualityOfService : 1; 
        unsigned int recordsChanged : 1; 
    }  _has;
    int  _operationType;
    int  _qualityOfService;
    int  _recordsChanged;
    long long  _timeIntervalSinceLastOperation;
    unsigned long long  _timestamp;
}

@property (nonatomic) int deviceClass;
@property (nonatomic) int errorCount;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasErrorCount;
@property (nonatomic) bool hasOperationType;
@property (nonatomic) bool hasQualityOfService;
@property (nonatomic) bool hasRecordsChanged;
@property (nonatomic) bool hasTimeIntervalSinceLastOperation;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int operationType;
@property (nonatomic) int qualityOfService;
@property (nonatomic) int recordsChanged;
@property (nonatomic) long long timeIntervalSinceLastOperation;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (int)errorCount;
- (bool)hasDeviceClass;
- (bool)hasErrorCount;
- (bool)hasOperationType;
- (bool)hasQualityOfService;
- (bool)hasRecordsChanged;
- (bool)hasTimeIntervalSinceLastOperation;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operationType;
- (int)qualityOfService;
- (bool)readFrom:(id)arg1;
- (int)recordsChanged;
- (void)setDeviceClass:(int)arg1;
- (void)setErrorCount:(int)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasErrorCount:(bool)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setHasQualityOfService:(bool)arg1;
- (void)setHasRecordsChanged:(bool)arg1;
- (void)setHasTimeIntervalSinceLastOperation:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOperationType:(int)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRecordsChanged:(int)arg1;
- (void)setTimeIntervalSinceLastOperation:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeIntervalSinceLastOperation;
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
