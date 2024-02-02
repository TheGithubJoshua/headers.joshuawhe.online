//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement;
@protocol BCSItemIdentifying, BCSShardItemIdentifying;

@protocol BCSMeasurementFactoryProtocol <NSObject>
- (BCSTimingMeasurement *)itemIsRegisteredTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)businessLinkFetchByHashTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)businessLinkChoppedFetchTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)itemFetchTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)itemResolutionTimingMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSTimingMeasurement *)shardResolutionTimingMeasurementForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;
- (BCSTimingMeasurement *)configResolutionTimingMeasurementForConfigType:(long long)arg1;
- (BCSTimingMeasurement *)megashardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)itemCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)shardCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)configCloudKitFetchAndDecodeTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)megashardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)itemCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)shardCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSTimingMeasurement *)configCloudKitFetchTimingMeasurementForType:(long long)arg1 identifier:(unsigned long long)arg2;
- (BCSFlagMeasurement *)itemCacheHitMeasurementForItemIdentifier:(id <BCSItemIdentifying>)arg1;
- (BCSFlagMeasurement *)shardCacheHitMeasurementForShardIdentifier:(id <BCSShardItemIdentifying>)arg1;
- (BCSFlagMeasurement *)configCacheHitMeasurementForConfigType:(long long)arg1;
@end
