//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDKeyValueDomain, HDMCAnalysisManager, HDPrimaryProfile, HDRestorableAlarm, HKMCAnalysis, HKMCSettingsManager, NSDate, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMCNotificationManager : NSObject
{
    HDPrimaryProfile *_profile;	// 8 = 0x8
    HDMCAnalysisManager *_analysisManager;	// 16 = 0x10
    HKMCSettingsManager *_settingsManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    HDKeyValueDomain *_keyValueDomain;	// 40 = 0x28
    HKMCAnalysis *_lastAnalysis;	// 48 = 0x30
    NSDate *_currentDateOverride;	// 56 = 0x38
    HDRestorableAlarm *_scheduler;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000f1a3
@property(readonly, nonatomic) HDRestorableAlarm *scheduler; // @synthesize scheduler=_scheduler;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;	// IMP=0x000000000000eefc
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;	// IMP=0x000000000000e102
- (id)_periodEventFromNotificationCategory:(id)arg1 notificationFireDayIndex:(long long)arg2;	// IMP=0x000000000000e071
- (id)_notificationCategoriesWithBasicAnalytics;	// IMP=0x000000000000e005
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;	// IMP=0x000000000000c983
- (id)_requestFromAlarmEvent:(id)arg1;	// IMP=0x000000000000c818
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;	// IMP=0x000000000000c4dd
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;	// IMP=0x000000000000c293
- (id)_currentDate;	// IMP=0x000000000000c259
- (void)_setCurrentDate:(id)arg1;	// IMP=0x000000000000c248
- (id)scheduledNotificationsWithError:(id *)arg1;	// IMP=0x000000000000c142
- (void)invalidate;	// IMP=0x000000000000c0f3
- (void)start;	// IMP=0x000000000000bf38
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3;	// IMP=0x000000000000bdaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
