<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDIDSSessionEnded.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDIDSSessionEnded.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSSessionEnded : PBCodable <NSCopying> {
    unsigned int  _callDuration;
    unsigned int  _conferenceMiscError;
    unsigned int  _connectDuration;
    unsigned int  _connectionType;
    unsigned int  _currentNatType;
    unsigned int  _dataRate;
    unsigned int  _endedReason;
    unsigned int  _gameKitError;
    int  _genericError;
    int  _gksError;
    int  _gksReturnCode;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callDuration : 1; 
        unsigned int conferenceMiscError : 1; 
        unsigned int connectDuration : 1; 
        unsigned int connectionType : 1; 
        unsigned int currentNatType : 1; 
        unsigned int dataRate : 1; 
        unsigned int endedReason : 1; 
        unsigned int gameKitError : 1; 
        unsigned int genericError : 1; 
        unsigned int gksError : 1; 
        unsigned int gksReturnCode : 1; 
        unsigned int isInitiator : 1; 
        unsigned int isNetworkActive : 1; 
        unsigned int isNetworkEnabled : 1; 
        unsigned int isNetworkReachable : 1; 
        unsigned int linkQuality : 1; 
        unsigned int localNetworkConnection : 1; 
        unsigned int networkCheckResult : 1; 
        unsigned int relayConnectDuration : 1; 
        unsigned int remoteNatType : 1; 
        unsigned int remoteNetworkConnection : 1; 
        unsigned int usesRelay : 1; 
    }  _has;
    unsigned int  _isInitiator;
    unsigned int  _isNetworkActive;
    unsigned int  _isNetworkEnabled;
    unsigned int  _isNetworkReachable;
    int  _linkQuality;
    unsigned int  _localNetworkConnection;
    unsigned int  _networkCheckResult;
    unsigned int  _relayConnectDuration;
    unsigned int  _remoteNatType;
    unsigned int  _remoteNetworkConnection;
    unsigned long long  _timestamp;
    unsigned int  _usesRelay;
}

@property (nonatomic) unsigned int callDuration;
@property (nonatomic) unsigned int conferenceMiscError;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) unsigned int dataRate;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) unsigned int gameKitError;
@property (nonatomic) int genericError;
@property (nonatomic) int gksError;
@property (nonatomic) int gksReturnCode;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasConferenceMiscError;
@property (nonatomic) bool hasConnectDuration;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasCurrentNatType;
@property (nonatomic) bool hasDataRate;
@property (nonatomic) bool hasEndedReason;
@property (nonatomic) bool hasGameKitError;
@property (nonatomic) bool hasGenericError;
@property (nonatomic) bool hasGksError;
@property (nonatomic) bool hasGksReturnCode;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsInitiator;
@property (nonatomic) bool hasIsNetworkActive;
@property (nonatomic) bool hasIsNetworkEnabled;
@property (nonatomic) bool hasIsNetworkReachable;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasLocalNetworkConnection;
@property (nonatomic) bool hasNetworkCheckResult;
@property (nonatomic) bool hasRelayConnectDuration;
@property (nonatomic) bool hasRemoteNatType;
@property (nonatomic) bool hasRemoteNetworkConnection;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUsesRelay;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) unsigned int networkCheckResult;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int usesRelay;

- (unsigned int)callDuration;
- (unsigned int)conferenceMiscError;
- (unsigned int)connectDuration;
- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentNatType;
- (unsigned int)dataRate;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endedReason;
- (unsigned int)gameKitError;
- (int)genericError;
- (int)gksError;
- (int)gksReturnCode;
- (id)guid;
- (bool)hasCallDuration;
- (bool)hasConferenceMiscError;
- (bool)hasConnectDuration;
- (bool)hasConnectionType;
- (bool)hasCurrentNatType;
- (bool)hasDataRate;
- (bool)hasEndedReason;
- (bool)hasGameKitError;
- (bool)hasGenericError;
- (bool)hasGksError;
- (bool)hasGksReturnCode;
- (bool)hasGuid;
- (bool)hasIsInitiator;
- (bool)hasIsNetworkActive;
- (bool)hasIsNetworkEnabled;
- (bool)hasIsNetworkReachable;
- (bool)hasLinkQuality;
- (bool)hasLocalNetworkConnection;
- (bool)hasNetworkCheckResult;
- (bool)hasRelayConnectDuration;
- (bool)hasRemoteNatType;
- (bool)hasRemoteNetworkConnection;
- (bool)hasTimestamp;
- (bool)hasUsesRelay;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isInitiator;
- (unsigned int)isNetworkActive;
- (unsigned int)isNetworkEnabled;
- (unsigned int)isNetworkReachable;
- (int)linkQuality;
- (unsigned int)localNetworkConnection;
- (void)mergeFrom:(id)arg1;
- (unsigned int)networkCheckResult;
- (bool)readFrom:(id)arg1;
- (unsigned int)relayConnectDuration;
- (unsigned int)remoteNatType;
- (unsigned int)remoteNetworkConnection;
- (void)setCallDuration:(unsigned int)arg1;
- (void)setConferenceMiscError:(unsigned int)arg1;
- (void)setConnectDuration:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setCurrentNatType:(unsigned int)arg1;
- (void)setDataRate:(unsigned int)arg1;
- (void)setEndedReason:(unsigned int)arg1;
- (void)setGameKitError:(unsigned int)arg1;
- (void)setGenericError:(int)arg1;
- (void)setGksError:(int)arg1;
- (void)setGksReturnCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasConferenceMiscError:(bool)arg1;
- (void)setHasConnectDuration:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasCurrentNatType:(bool)arg1;
- (void)setHasDataRate:(bool)arg1;
- (void)setHasEndedReason:(bool)arg1;
- (void)setHasGameKitError:(bool)arg1;
- (void)setHasGenericError:(bool)arg1;
- (void)setHasGksError:(bool)arg1;
- (void)setHasGksReturnCode:(bool)arg1;
- (void)setHasIsInitiator:(bool)arg1;
- (void)setHasIsNetworkActive:(bool)arg1;
- (void)setHasIsNetworkEnabled:(bool)arg1;
- (void)setHasIsNetworkReachable:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasLocalNetworkConnection:(bool)arg1;
- (void)setHasNetworkCheckResult:(bool)arg1;
- (void)setHasRelayConnectDuration:(bool)arg1;
- (void)setHasRemoteNatType:(bool)arg1;
- (void)setHasRemoteNetworkConnection:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUsesRelay:(bool)arg1;
- (void)setIsInitiator:(unsigned int)arg1;
- (void)setIsNetworkActive:(unsigned int)arg1;
- (void)setIsNetworkEnabled:(unsigned int)arg1;
- (void)setIsNetworkReachable:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setLocalNetworkConnection:(unsigned int)arg1;
- (void)setNetworkCheckResult:(unsigned int)arg1;
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