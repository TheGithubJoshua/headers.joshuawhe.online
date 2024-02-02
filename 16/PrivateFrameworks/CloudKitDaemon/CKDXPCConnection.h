//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKCoalescer, CKDProcessScopedClientProxy, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSPointerArray, NSString, NSXPCConnection;

@interface CKDXPCConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CKDProcessScopedClientProxy *_processScopedClientProxy;	// 16 = 0x10
    NSHashTable *_sharedContainers;	// 24 = 0x18
    unsigned long long _keepAlive;	// 32 = 0x20
    CKCoalescer *_activityCoalescer;	// 40 = 0x28
    NSMutableDictionary *_logicalDeviceScopedClientProxiesByDeviceReference;	// 48 = 0x30
    NSMutableSet *_allDeviceContexts;	// 56 = 0x38
    NSPointerArray *_allContainerPointers;	// 64 = 0x40
    NSOperationQueue *_systemAvailableQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001fc957
@property(retain, nonatomic) NSOperationQueue *systemAvailableQueue; // @synthesize systemAvailableQueue=_systemAvailableQueue;
@property(retain, nonatomic) NSPointerArray *allContainerPointers; // @synthesize allContainerPointers=_allContainerPointers;
@property(retain, nonatomic) NSMutableSet *allDeviceContexts; // @synthesize allDeviceContexts=_allDeviceContexts;
@property(retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference; // @synthesize logicalDeviceScopedClientProxiesByDeviceReference=_logicalDeviceScopedClientProxiesByDeviceReference;
@property(readonly, nonatomic) CKCoalescer *activityCoalescer; // @synthesize activityCoalescer=_activityCoalescer;
@property(nonatomic) unsigned long long keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) NSHashTable *sharedContainers; // @synthesize sharedContainers=_sharedContainers;
@property(retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy; // @synthesize processScopedClientProxy=_processScopedClientProxy;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fc72d
- (void)getProcessScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fc4a5
- (void)tearDown;	// IMP=0x00000000001fc281
@property(readonly, nonatomic) NSArray *allContainers;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)arg1;	// IMP=0x00000000001fbee8
- (void)getTestAdminDaemonProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fbdae
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fbcb2
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fbacc
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb8a1
- (void)noteClientProcessScopedMetadata:(id)arg1;	// IMP=0x00000000001fb650
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x00000000001fb3ef
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;	// IMP=0x00000000001fb16a
- (id)containerFromSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000001f9d33
- (void)allowToClose;	// IMP=0x00000000001f9b32
- (void)keepOpen;	// IMP=0x00000000001f99c1
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000001f996f
- (id)redactedDescription;	// IMP=0x00000000001f995d
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x00000000001f98ba
- (void)dealloc;	// IMP=0x00000000001f9876
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000001f9141

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
