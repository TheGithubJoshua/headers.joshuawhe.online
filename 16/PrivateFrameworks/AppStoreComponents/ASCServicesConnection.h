//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASCServicesConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSXPCConnection *_connectionIfValid;	// 16 = 0x10
}

+ (id)sharedConnection;	// IMP=0x001000000004a686
+ (id)log;	// IMP=0x001000000004a62a
- (void).cxx_destruct;	// IMP=0x000000000004b217
@property(retain, nonatomic) NSXPCConnection *connectionIfValid; // @synthesize connectionIfValid=_connectionIfValid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)offerStateServiceWithDelegate:(id)arg1;	// IMP=0x000000000004b0d9
- (id)metricsService;	// IMP=0x000000000004b04e
- (id)lockupFetcherService;	// IMP=0x000000000004afc3
- (id)testConnection;	// IMP=0x000000000004adb2
- (id)serviceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004aba6
- (void)connectionWasInvalidated;	// IMP=0x000000000004aaad
- (void)connectionWasInterrupted;	// IMP=0x000000000004a9c3
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)init;	// IMP=0x000000000004a6db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
