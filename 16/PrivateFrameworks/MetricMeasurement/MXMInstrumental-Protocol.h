//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricMeasurement/NSCopying-Protocol.h>

@class NSDate, NSDictionary;

@protocol MXMInstrumental <NSCopying>
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;

@optional
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(NSDate *)arg3;
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(NSDate *)arg3;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(NSDate *)arg2;
- (void)willStop;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(NSDate *)arg2;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (_Bool)prepareWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
@end
