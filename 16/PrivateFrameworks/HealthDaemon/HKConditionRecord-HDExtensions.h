//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKConditionRecord.h>

@class NSString;

@interface HKConditionRecord (HDExtensions)
+ (Class)hd_dataEntityClass;	// IMP=0x00100000000cd81a
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000040839b
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0010000000408947
- (id)codableRepresentationForSync;	// IMP=0x001000000040848a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
