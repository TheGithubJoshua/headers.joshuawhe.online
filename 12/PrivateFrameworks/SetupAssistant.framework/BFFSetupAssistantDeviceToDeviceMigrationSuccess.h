<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BFFSetupAssistantDeviceToDeviceMigrationSuccess.h</title>
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

/PrivateFrameworks/SetupAssistant.framework/BFFSetupAssistantDeviceToDeviceMigrationSuccess.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant (1)
 */

@interface BFFSetupAssistantDeviceToDeviceMigrationSuccess : PBCodable <NSCopying> {
    int  _connectionType;
    struct { 
        unsigned int restoreDuration : 1; 
        unsigned int size : 1; 
        unsigned int timestamp : 1; 
        unsigned int transferDuration : 1; 
        unsigned int connectionType : 1; 
    }  _has;
    unsigned long long  _restoreDuration;
    unsigned long long  _size;
    NSString * _sourceDeviceModel;
    NSString * _sourceDeviceProductVersion;
    NSString * _targetDeviceModel;
    NSString * _targetDeviceProductVersion;
    unsigned long long  _timestamp;
    unsigned long long  _transferDuration;
}

@property (nonatomic) int connectionType;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasRestoreDuration;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasSourceDeviceModel;
@property (nonatomic, readonly) bool hasSourceDeviceProductVersion;
@property (nonatomic, readonly) bool hasTargetDeviceModel;
@property (nonatomic, readonly) bool hasTargetDeviceProductVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransferDuration;
@property (nonatomic) unsigned long long restoreDuration;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) NSString *sourceDeviceModel;
@property (nonatomic, retain) NSString *sourceDeviceProductVersion;
@property (nonatomic, retain) NSString *targetDeviceModel;
@property (nonatomic, retain) NSString *targetDeviceProductVersion;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long transferDuration;

- (void).cxx_destruct;
- (int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionType;
- (bool)hasRestoreDuration;
- (bool)hasSize;
- (bool)hasSourceDeviceModel;
- (bool)hasSourceDeviceProductVersion;
- (bool)hasTargetDeviceModel;
- (bool)hasTargetDeviceProductVersion;
- (bool)hasTimestamp;
- (bool)hasTransferDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)restoreDuration;
- (void)setConnectionType:(int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasRestoreDuration:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransferDuration:(bool)arg1;
- (void)setRestoreDuration:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSourceDeviceModel:(id)arg1;
- (void)setSourceDeviceProductVersion:(id)arg1;
- (void)setTargetDeviceModel:(id)arg1;
- (void)setTargetDeviceProductVersion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransferDuration:(unsigned long long)arg1;
- (unsigned long long)size;
- (id)sourceDeviceModel;
- (id)sourceDeviceProductVersion;
- (id)targetDeviceModel;
- (id)targetDeviceProductVersion;
- (unsigned long long)timestamp;
- (unsigned long long)transferDuration;
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
