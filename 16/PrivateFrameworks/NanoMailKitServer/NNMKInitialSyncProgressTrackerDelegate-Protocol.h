//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoMailKitServer/NNMKDeviceRegistryHolder-Protocol.h>

@class NNMKInitialSyncProgressTracker;

@protocol NNMKInitialSyncProgressTrackerDelegate <NNMKDeviceRegistryHolder>
- (void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(NNMKInitialSyncProgressTracker *)arg1;
@end
