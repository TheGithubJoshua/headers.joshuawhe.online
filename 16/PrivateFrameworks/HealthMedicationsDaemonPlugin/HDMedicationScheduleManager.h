//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDMedicationNotificationManager, HDProfile, HDXPCGatedActivity, HKObserverSet, NSNumber;
@protocol HDMedicationScheduleObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleManager : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HKObserverSet<HDMedicationScheduleObserver> *_observers;	// 24 = 0x18
    HDMedicationNotificationManager *_notificationManager;	// 32 = 0x20
    HDXPCGatedActivity *_gatedRescheduleActivity;	// 40 = 0x28
    long long _gatedRescheduleRetryCount;	// 48 = 0x30
    _Bool _gatedRescheduleRetryAbort;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 60 = 0x3c
    CDUnknownBlockType _unitTesting_willTriggerGatedActivity;	// 64 = 0x40
    NSNumber *__unitTesting_activity_result;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000cd17
@property(retain, nonatomic) NSNumber *_unitTesting_activity_result; // @synthesize _unitTesting_activity_result=__unitTesting_activity_result;
@property(copy, nonatomic) CDUnknownBlockType unitTesting_willTriggerGatedActivity; // @synthesize unitTesting_willTriggerGatedActivity=_unitTesting_willTriggerGatedActivity;
@property(readonly, nonatomic) long long _unitTesting_gatedRescheduleRetryCount;
- (_Bool)pruneAllScheduleItemsBeforeDate:(id)arg1 createDoseEvents:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000ca35
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000000c87d
- (void)registerObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000c867
@property(readonly, nonatomic) HDMedicationNotificationManager *notificationManager;
- (_Bool)deleteMedicationSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c7fe
- (_Bool)updateNotificationSent:(_Bool)arg1 scheduleItemIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c760
- (void)rescheduleMedicationsWithSyncProvenance:(long long)arg1;	// IMP=0x000000000000c4fc
- (void)triggerGatedRescheduleWithMaximumDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bf13
- (_Bool)scheduleMedicationsFromDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000befd
- (_Bool)rescheduleMedicationsWithError:(id *)arg1;	// IMP=0x000000000000bd79
- (_Bool)insertMedicationSchedules:(id)arg1 syncProvenance:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000000bcdb
- (_Bool)insertMedicationSchedules:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bcc4
- (_Bool)insertMedicationSchedule:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bc0d
- (id)deletedSchedulesWithError:(id *)arg1;	// IMP=0x000000000000b9d0
- (id)medicationSchedulesWithPredicate:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b72d
- (id)medicationSchedulesWithError:(id *)arg1;	// IMP=0x000000000000b51a
- (_Bool)medicationSchedule:(id *)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b4bb
- (_Bool)medicationSchedule:(id *)arg1 medicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b34d
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x000000000000b01d
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000000aeba

@end
