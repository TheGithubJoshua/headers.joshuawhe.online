//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDConfigurationLogEvent, HMDHomeConfigurationLogEvent, NSArray, NSString, NSUUID;

@protocol HMDCoreAnalyticsLogObserverDataSource
@property(readonly, nonatomic) NSString *PRKitDateString;
@property(readonly, nonatomic) NSString *PRKitUUIDString;
@property(readonly, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
- (NSArray *)homes;
- (HMDHomeConfigurationLogEvent *)cachedHomeConfigurationForHomeUUID:(NSUUID *)arg1;
@end
