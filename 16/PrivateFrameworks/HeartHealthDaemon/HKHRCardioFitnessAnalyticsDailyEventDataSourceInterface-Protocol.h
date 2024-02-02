//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString;

@protocol HKHRCardioFitnessAnalyticsDailyEventDataSourceInterface
- (NSString *)latestClassificationWithIsOnboarded:(_Bool)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)determineIsNotificationsEnabled;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(NSDate *)arg1 error:(id *)arg2;
- (NSNumber *)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (NSNumber *)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (NSNumber *)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1 error:(id *)arg2;
- (NSNumber *)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (NSNumber *)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (NSNumber *)determineDaysSinceLastLowNotificationWithCurrentDate:(NSDate *)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
@end
