//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMFMessage;

@protocol HMXPCMessageHandling <NSObject>
- (void)handleMessage:(HMFMessage *)arg1 responseHandler:(void (^)(NSError *, NSDictionary *))arg2;
- (void)handleMessage:(HMFMessage *)arg1;
@end
