//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXCoreUtilities/NSObject-Protocol.h>

@class AXBookendMetric, NSError, NSString;

@protocol AXMetricContainer <NSObject>
@property(readonly, nonatomic) _Bool measurementsEnabled;
- (AXBookendMetric *)startMeasure:(NSString *)arg1;
- (NSError *)measure:(NSString *)arg1 tryExecute:(NSError * (^)(AXMetric *))arg2;
- (void)measure:(NSString *)arg1 execute:(void (^)(AXMetric *))arg2;
@end
