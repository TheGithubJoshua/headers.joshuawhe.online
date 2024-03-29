<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCTransportSessionLegacy.h</title>
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

/PrivateFrameworks/AVConference.framework/VCTransportSessionLegacy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCTransportSessionLegacy : VCTransportSession <InterfaceListenerDelegate, LoopbackSocketTunnelDelegate, VCConnectionManagerDelegate> {
    int  _NATType;
    unsigned int  _callID;
    NSCondition * _connectionDataTimeoutCondVar;
    unsigned int  _connectionSetupRTTEstimate;
    id  _delegate;
    bool  _didReceivePiggybackBlob;
    struct __SecIdentity { } * _identity;
    GKInterfaceListener * _interfaceListener;
    bool  _isCaller;
    bool  _isRemoteOSPreLion;
    bool  _isStarted;
    NSData * _localConnectionData;
    NSString * _localParticipantID;
    NSData * _localRelayConnectionData;
    NSMutableDictionary * _localRelayRequestResponse;
    NSDictionary * _localRelayUpdate;
    unsigned char  _localU8Version;
    <VCConnectionProtocol> * _loopbackConnection;
    int  _operatingMode;
    unsigned int  _remoteCallID;
    NSData * _remoteConnectionData;
    NSString * _remoteParticipantID;
    NSData * _remoteRelayConnectionData;
    NSMutableDictionary * _remoteRelayRequestResponse;
    NSDictionary * _remoteRelayUpdate;
    NSString * _sessionID;
    TCPTunnelClient * _tcpTunnelClient;
    LoopbackSocketTunnel * _tunnel;
    bool  _useLoopback;
    bool  allowsRelay;
    float  callerPreEmptiveTimeoutInSecs;
    bool  initialSecondaryRelaySetupDone;
    int  pendingRelayCount;
    NSObject<OS_dispatch_source> * relaySetupTimer;
    long long  relayState;
    bool  requestedTimeoutRelay;
    NSObject<VideoConferenceRealTimeChannel> * rtChannel;
    VCTransport * transport;
}

@property int NATType;
@property bool allowsRelay;
@property (readonly, copy) NSString *debugDescription;
@property <VCTransportSessionLegacyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialSecondaryRelaySetupDone;
@property bool isCaller;
@property (retain) NSData *localConnectionData;
@property (copy) NSString *localParticipantID;
@property (retain) NSData *localRelayConnectionData;
@property (retain) NSMutableDictionary *localRelayRequestResponse;
@property (nonatomic, retain) NSDictionary *localRelayUpdate;
@property int operatingMode;
@property (nonatomic) int pendingRelayCount;
@property unsigned int remoteCallID;
@property (retain) NSData *remoteConnectionData;
@property (copy) NSString *remoteParticipantID;
@property (nonatomic, retain) NSData *remoteRelayConnectionData;
@property (nonatomic, retain) NSMutableDictionary *remoteRelayRequestResponse;
@property (nonatomic, retain) NSDictionary *remoteRelayUpdate;
@property (copy) NSString *sessionID;
@property (readonly) Class superclass;

- (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; })IPPortForPrimaryConnectionOnLocalInterface:(bool)arg1;
- (int)NATType;
- (bool)allowsRelay;
- (void)connectionCallback:(id)arg1 isInitialConnection:(bool)arg2;
- (id)connectionDataUsingRelay:(bool)arg1 isInitialRelay:(bool)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id*)arg4;
- (void)connectionResultCallback:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1 didReceiveICEPacket:(bool)arg2 didUseRelay:(bool)arg3 secretKey:(id)arg4 skeResult:(int)arg5;
- (unsigned int)connectionSetupRTTEstimate;
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg1;
- (id)createInitiateRelayDictionary;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)arg1 primaryConnection:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; }*)arg2;
- (id)createRelayUpdateDictionary:(id)arg1;
- (void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned int)arg2 callerRequired:(bool)arg3;
- (bool)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(bool)arg3 relayType:(unsigned char)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)delegate;
- (void)deleteTCPTunnel;
- (void)deregisterBasebandNotifications;
- (void)destroySecondaryRelayDispatchTimer;
- (int)detailedErrorCode;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id)arg2;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (int)generateConnectionData:(char **)arg1 forCallID:(unsigned int)arg2 connectionDataSize:(int*)arg3 nonCellularCandidateTimeout:(double)arg4;
- (void)getConnectionDataUsingRelay:(bool)arg1 isInitialRelay:(bool)arg2 nonCellularCandidateTimeout:(double)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (int)getSignalStrength:(int*)arg1 signalRaw:(int*)arg2 signalGrade:(int*)arg3;
- (void)handleConnectionSetupDataChangeMessageDelivered;
- (bool)handleExchangedKey:(id)arg1 result:(int)arg2;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)handleNewCandidates:(id)arg1 version:(unsigned short)arg2;
- (double)iceTimeoutInSeconds:(bool)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (bool)initialSecondaryRelaySetupDone;
- (void)initiateRelayRequest;
- (bool)isCaller;
- (bool)isConnectedAndAllowAdditionalConnection;
- (bool)isHandoverSupported;
- (bool)isRemoteOSPreLion;
- (id)localConnectionData;
- (id)localParticipantID;
- (id)localRelayConnectionData;
- (id)localRelayRequestResponse;
- (id)localRelayUpdate;
- (void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg3;
- (void)networkStateDidChange;
- (void)notifyDelegateToCancelRelay;
- (int)operatingMode;
- (int)pendingRelayCount;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)processRelayRequestResponse:(id)arg1 didOriginateRequest:(bool)arg2;
- (void)processRelayUpdate:(id)arg1 didOriginateRequest:(bool)arg2;
- (void)processRemoteIPChange:(id)arg1;
- (void)processRemoteIPChange:(char *)arg1 dataLength:(int)arg2 remoteCandidateVersion:(unsigned short)arg3;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (unsigned int)remoteCallID;
- (id)remoteConnectionData;
- (id)remoteParticipantID;
- (id)remoteRelayConnectionData;
- (id)remoteRelayRequestResponse;
- (id)remoteRelayUpdate;
- (void)reportNetworkConditionsDegraded;
- (void)resetICETimeoutToLongTimeout;
- (void)resetLoopback;
- (id)sessionID;
- (void)setAllowsRelay:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceRelay;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setInitialSecondaryRelaySetupDone:(bool)arg1;
- (void)setIsCaller:(bool)arg1;
- (void)setLocalConnectionData:(id)arg1;
- (void)setLocalParticipantID:(id)arg1;
- (void)setLocalRelayConnectionData:(id)arg1;
- (void)setLocalRelayRequestResponse:(id)arg1;
- (void)setLocalRelayUpdate:(id)arg1;
- (void)setNATType:(int)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setPendingRelayCount:(int)arg1;
- (void)setRemoteCallID:(unsigned int)arg1;
- (void)setRemoteConnectionData:(id)arg1;
- (void)setRemoteParticipantID:(id)arg1;
- (void)setRemoteRelayConnectionData:(id)arg1;
- (void)setRemoteRelayRequestResponse:(id)arg1;
- (void)setRemoteRelayUpdate:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(bool)arg1 callID:(unsigned int)arg2 connectionId:(int)arg3;
- (void)setupLoopbackWithConnectionType:(unsigned int)arg1;
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)arg1;
- (void)setupSecondaryRelayForCall:(unsigned int)arg1 callerRequired:(bool)arg2;
- (void)setupTransport;
- (void)start;
- (bool)startConnectionWithBlob:(id)arg1 useRelay:(bool)arg2 isInitialRelay:(bool)arg3 error:(id*)arg4;
- (void)stop;
- (void)stopLoopback;
- (void)stopLoopbackProc:(id)arg1;
- (unsigned char)transportCallType;
- (void)triggerInterfaceChange;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;

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
