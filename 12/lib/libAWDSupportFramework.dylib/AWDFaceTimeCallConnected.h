<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDFaceTimeCallConnected.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDFaceTimeCallConnected.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    unsigned int  _connectDuration;
    unsigned int  _connectionType;
    unsigned int  _currentNatType;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int isVideo : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    }  _has;
    unsigned int  _isVideo;
    unsigned int  _localNetworkConnection;
    unsigned int  _onLockScreen;
    unsigned int  _relayConnectDuration;
    unsigned int  _remoteNatType;
    unsigned int  _remoteNetworkConnection;
    unsigned long long  _timestamp;
    unsigned int  _usesRelay;
}

@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentNatType;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasLocalNetworkConnection;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasRelayConnectDuration;
@property (nonatomic) bool hasRemoteNatType;
@property (nonatomic) bool hasRemoteNetworkConnection;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsesRelay;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usesRelay;

- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasConnectDuration;
- (bool)hasConnectionType;
- (bool)hasCurrentNatType;
- (bool)hasGuid;
- (bool)hasIsVideo;
- (bool)hasLocalNetworkConnection;
- (bool)hasOnLockScreen;
- (bool)hasRelayConnectDuration;
- (bool)hasRemoteNatType;
- (bool)hasRemoteNetworkConnection;
- (bool)hasTimestamp;
- (bool)hasUsesRelay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentNatType:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasLocalNetworkConnection:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasRelayConnectDuration:(bool)arg1;
- (void)setHasRemoteNatType:(bool)arg1;
- (void)setHasRemoteNetworkConnection:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsesRelay:(bool)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setRelayConnectDuration:(unsigned int)arg1;
- (void)setRemoteNatType:(unsigned int)arg1;
- (void)setRemoteNetworkConnection:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsesRelay:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)usesRelay;
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