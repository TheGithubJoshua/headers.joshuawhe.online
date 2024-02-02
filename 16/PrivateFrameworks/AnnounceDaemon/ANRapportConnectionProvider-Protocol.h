//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnounceDaemon/ANConnectionProvider-Protocol.h>

@class NSArray, NSDictionary, NSError, NSObject, RPCompanionLinkDevice;
@protocol ANRapportConnectionDeviceDelegate, OS_dispatch_queue;

@protocol ANRapportConnectionProvider <ANConnectionProvider>
@property(readonly, nonatomic) RPCompanionLinkDevice *localDevice;
@property(readonly, nonatomic) NSArray *devices;
- (void)addDeviceDelegate:(id <ANRapportConnectionDeviceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)deactivateLinkWithOptions:(unsigned long long)arg1;
- (void)activateLinkWithOptions:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (NSError *)activateLinkWithOptions:(unsigned long long)arg1;
- (void)sendHomeLocationStatusRequestToDevice:(RPCompanionLinkDevice *)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)registerDailyRequest:(NSDictionary * (^)(void))arg1;
- (void)sendDailyRequest:(RPCompanionLinkDevice *)arg1 handler:(void (^)(NSDictionary *))arg2;
- (NSError *)sendMessage:(NSDictionary *)arg1 device:(RPCompanionLinkDevice *)arg2 responseHandler:(void (^)(RPCompanionLinkClient *, NSError *))arg3;
@end
