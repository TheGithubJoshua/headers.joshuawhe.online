//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMCameraStreamPreferences, HMDAccessory, HMDCameraLocalStreamControlManager, HMDCameraNetworkConfig, HMDCameraRemoteStreamControlManager, HMDCameraResidentMessageHandler, HMDCameraStreamManagerSession, HMDCameraStreamSessionID, HMDCameraStreamSnapshotHandler, HMDCameraSupportedConfigurationCache, HMDDevice, HMDDynamicActivityAttributionPublisher, HMDService, HMDXPCClientConnection, NSDictionary, NSObject, NSString, NSUUID;
@protocol HMDCameraStreamControlManagerDelegate, HMDCameraStreamControlManagerProtocol, OS_dispatch_queue;

@protocol HMDCameraStreamControlMessageHandlerDataSource <NSObject>
@property(readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property(readonly, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) _Bool supportsBidirectionalAudioForCameraStreaming;
@property(readonly) _Bool supportsChangingVolume;
@property(readonly) _Bool supportsReceivingRemoteCameraStream;
- (HMDDynamicActivityAttributionPublisher *)createDynamicActivityAttributionPublisher;
- (HMDCameraStreamManagerSession *)createStreamManagerSessionWithSessionID:(HMDCameraStreamSessionID *)arg1 destinationID:(NSString *)arg2 streamClientConnection:(HMDXPCClientConnection *)arg3 streamControlManager:(id <HMDCameraStreamControlManagerProtocol>)arg4 setupWaitPeriod:(double)arg5;
- (HMDCameraRemoteStreamControlManager *)createRemoteStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 delegateQueue:(NSObject<OS_dispatch_queue> *)arg7 accessory:(HMDAccessory *)arg8 streamManagementService:(HMDService *)arg9 remoteCapabilities:(NSDictionary *)arg10 profileUniqueIdentifier:(NSUUID *)arg11 residentMessageHandler:(HMDCameraResidentMessageHandler *)arg12 remoteAccessDevice:(HMDDevice *)arg13 streamPreference:(HMCameraStreamPreferences *)arg14;
- (HMDCameraLocalStreamControlManager *)createLocalStreamControlManagerWithSessionID:(HMDCameraStreamSessionID *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2 streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg3 reachabilityPath:(unsigned long long)arg4 device:(HMDDevice *)arg5 delegate:(id <HMDCameraStreamControlManagerDelegate>)arg6 delegateQueue:(NSObject<OS_dispatch_queue> *)arg7 accessory:(HMDAccessory *)arg8 streamManagementService:(HMDService *)arg9 localNetworkConfig:(HMDCameraNetworkConfig *)arg10 remoteCapabilities:(NSDictionary *)arg11 supportedConfigCache:(HMDCameraSupportedConfigurationCache *)arg12 streamPreference:(HMCameraStreamPreferences *)arg13;
@end
