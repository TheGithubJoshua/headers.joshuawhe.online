//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDRemoteEventRouterPrimaryResidentClient, HMDRemoteEventRouterResidentClient, HMFMessageDispatcher, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDRemoteEventRouterClientDataSource, HMELastEventStoreReadHandle, HMELastEventStoreWriteHandle, OS_dispatch_queue;

@protocol HMDHomeRemoteEventRouterClientFactory <NSObject>
- (HMDRemoteEventRouterResidentClient *)residentClientWithMessageTargetUUID:(NSUUID *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 dataSource:(id <HMDRemoteEventRouterClientDataSource>)arg3 messageDispatcher:(HMFMessageDispatcher *)arg4 notificationCenter:(NSNotificationCenter *)arg5 requestMessageName:(NSString *)arg6 updateMessageName:(NSString *)arg7 storeReadHandle:(id <HMELastEventStoreReadHandle>)arg8 storeWriteHandle:(id <HMELastEventStoreWriteHandle>)arg9;
- (HMDRemoteEventRouterPrimaryResidentClient *)primaryResidentClientWithMessageTargetUUID:(NSUUID *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 dataSource:(id <HMDRemoteEventRouterClientDataSource>)arg3 messageDispatcher:(HMFMessageDispatcher *)arg4 notificationCenter:(NSNotificationCenter *)arg5 requestMessageName:(NSString *)arg6 updateMessageName:(NSString *)arg7 storeReadHandle:(id <HMELastEventStoreReadHandle>)arg8 storeWriteHandle:(id <HMELastEventStoreWriteHandle>)arg9;
@end
