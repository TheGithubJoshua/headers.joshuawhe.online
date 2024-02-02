//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity, HKQuantityType, NSDateInterval, NSString;

@interface HKQuantitySample (HKDistincableObject)
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;	// IMP=0x00100000000ecf59
+ (id)migrateCodableObject:(id)arg1;	// IMP=0x0010000000255671
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000002a792
+ (Class)hd_dataEntityClass;	// IMP=0x001000000001c6b0
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ed047
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x001000000001f097
- (id)codableRepresentationForSync;	// IMP=0x001000000001f10d
@property(readonly, nonatomic) HKQuantitySample *hdw_sample;
@property(readonly, nonatomic) double hdw_endTimestamp;
@property(readonly, nonatomic) double hdw_startTimestamp;
@property(readonly, nonatomic) NSDateInterval *hdw_dateInterval;
@property(readonly, nonatomic) HKQuantityType *hdw_type;
@property(readonly, nonatomic) HKQuantity *hdw_quantity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
