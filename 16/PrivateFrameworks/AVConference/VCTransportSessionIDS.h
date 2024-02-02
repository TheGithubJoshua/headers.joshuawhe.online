//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS
{
    VCDatagramChannelIDS *_datagramChannel;	// 168 = 0xa8
    int _socket;	// 176 = 0xb0
    NSString *_destination;	// 184 = 0xb8
    _Bool _requireEncryptionInfo;	// 192 = 0xc0
    int _dataPath;	// 196 = 0xc4
    _Bool _useIDSLinkSuggestionFeatureFlag;	// 200 = 0xc8
    unsigned int _linkPreferSuggestionFromDefaults;	// 204 = 0xcc
}

@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
- (void)handleReportingBlob:(id)arg1;	// IMP=0x000000000014686e
- (void)handleLinkPreferSuggestion:(id)arg1;	// IMP=0x000000000014684e
- (void)setQuickRelayServerProvider:(int)arg1;	// IMP=0x0000000000146848
- (void)handleChannelInfoReport:(id)arg1;	// IMP=0x0000000000146698
- (void)setConnectionSetupTime;	// IMP=0x0000000000146567
- (void)handleLinkConstrainsChanged:(id)arg1;	// IMP=0x000000000014654d
- (void)handleCellularSoMaskChanged:(id)arg1;	// IMP=0x0000000000146547
- (void)handleProbingResponse:(id)arg1;	// IMP=0x00000000001464e6
- (void)handleSessionInfoResponse:(id)arg1;	// IMP=0x00000000001464e0
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;	// IMP=0x00000000001463d9
- (void)handleIDSEncryptionInfoEvent:(id)arg1;	// IMP=0x00000000001462d2
- (void)handleCellularMTUChanged:(id)arg1;	// IMP=0x00000000001462b8
- (void)handleRATChanged:(id)arg1;	// IMP=0x000000000014612d
- (void)handlePreConnectionDataReceived:(id)arg1;	// IMP=0x0000000000146113
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;	// IMP=0x0000000000146015
- (void)handleLinkDisconnectedWithInfo:(id)arg1;	// IMP=0x0000000000145fb4
- (void)handleLinkConnectedWithInfo:(id)arg1;	// IMP=0x0000000000145f53
- (void)onStop;	// IMP=0x0000000000145f4d
- (int)onStart;	// IMP=0x0000000000145f45
- (id)connectionSetupPiggybackBlob;	// IMP=0x0000000000145e0d
- (void)setPiggybackBlobPreference;	// IMP=0x0000000000145c9f
- (void)setConnectionSetupPiggybackBlob:(id)arg1;	// IMP=0x0000000000145ad8
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;	// IMP=0x00000000001459e9
- (void)cleanupDatagramChannel;	// IMP=0x000000000014598f
- (void)stop;	// IMP=0x00000000001458c4
- (void)start;	// IMP=0x00000000001452c8
- (unsigned int)remoteDeviceVersionIDS;	// IMP=0x000000000014512c
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;	// IMP=0x00000000001449a3
- (void)processDatagramChannelEventInfo:(id)arg1;	// IMP=0x0000000000144907
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001448df
- (id)datagramChannel;	// IMP=0x00000000001448c1
- (void)dealloc;	// IMP=0x0000000000144848
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 dataPath:(int)arg5;	// IMP=0x00000000001446d4
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(_Bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4;	// IMP=0x00000000001446b2
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;	// IMP=0x0000000000144698

@end
