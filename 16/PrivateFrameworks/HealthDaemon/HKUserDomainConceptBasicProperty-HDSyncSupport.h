//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKUserDomainConceptBasicProperty.h>

@class NSString;

@interface HKUserDomainConceptBasicProperty (HDSyncSupport)
+ (id)createWithCodable:(id)arg1;	// IMP=0x00100000004aaa0c
- (id)codableRepresentationForSync;	// IMP=0x00100000004aa7be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
