//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDExtensionManager, FPProviderMonitor, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDPushConnection : NSObject
{
    FPDExtensionManager *_manager;	// 8 = 0x8
    NSXPCListener *_xpcListener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_pushQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_payloadDeliveryQueue;	// 32 = 0x20
    NSMutableDictionary *_pushConnectionsByEnvironment;	// 40 = 0x28
    NSMutableDictionary *_messageDelegates;	// 48 = 0x30
    NSMutableDictionary *_bundleIdentifierForTopic;	// 56 = 0x38
    NSMutableDictionary *_topicsForBundleIdentifier;	// 64 = 0x40
    NSMutableDictionary *_clientConnections;	// 72 = 0x48
    FPProviderMonitor *_providerMonitor;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000009db80
- (void)updateTopicsForProvider:(id)arg1;	// IMP=0x000000000009d7c3
- (void)providerDidEnterForeground:(id)arg1;	// IMP=0x000000000009d7b1
- (void)providerDidEnterBackground:(id)arg1;	// IMP=0x000000000009d79f
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000000009ce7d
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x000000000009cc29
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000000009cc23
- (void)updateTopicsForApplicationBundleIdentifier:(id)arg1 providerIdentifier:(id)arg2 requestToken:(_Bool)arg3 environment:(id)arg4;	// IMP=0x000000000009c671
- (void)setMessageDelegate:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x000000000009c595
- (void)updateTopicsForBundleIdentifier:(id)arg1;	// IMP=0x000000000009c23a
- (id)_debugTopicsForApplicationIdentifier:(id)arg1;	// IMP=0x000000000009be48
- (id)topicsForApplicationBundleIdentifier:(id)arg1;	// IMP=0x000000000009bde9
- (void)fileProviderUnregister;	// IMP=0x000000000009b8d1
- (void)fileProviderRegister;	// IMP=0x000000000009b602
- (id)clientConnectionsForApplicationBundleIdentifier:(id)arg1;	// IMP=0x000000000009b586
- (void)removeClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x000000000009b4c8
- (void)addClientConnection:(id)arg1 forApplicationBundleIdentifier:(id)arg2;	// IMP=0x000000000009b412
- (void)performWithConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ab7d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000009aa0f
- (void)start;	// IMP=0x000000000009a8cc
- (id)_pushConnectionWithEnvironmentName:(id)arg1;	// IMP=0x000000000009a7f0
- (id)initWithExtensionManager:(id)arg1;	// IMP=0x000000000009a681
- (id)init;	// IMP=0x000000000009a5c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
