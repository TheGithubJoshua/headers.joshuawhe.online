//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKInspectableValueCollection.h>

@interface HKInspectableValueCollection (Display)
+ (void)parseUncodedValueCollection:(id)arg1 referenceRanges:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00800000000246a7
+ (void)parseValueCollection:(id)arg1 referenceRanges:(id)arg2 healthRecordsStore:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x008000000002421f
- (id)_joinValueStrings:(id)arg1;	// IMP=0x0010000000024203
- (id)_stringsForValues:(id)arg1;	// IMP=0x0010000000024059
- (id)displayString;	// IMP=0x0010000000023e60
@end
