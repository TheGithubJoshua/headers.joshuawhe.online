//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKActivitySummary.h>

@interface HKActivitySummary (ActivitySharing)
- (_Bool)_isEmptyExerciseSummary;	// IMP=0x006000000000de82
- (_Bool)_isEmptyMoveSummaryForSnapshot:(id)arg1;	// IMP=0x006000000000dd70
- (double)as_moveCompletionPercentage;	// IMP=0x006000000000dd5e
- (id)as_pushesStringWithContext:(id)arg1;	// IMP=0x006000000000db6d
- (id)as_distanceStringWithContext:(id)arg1 formattingManager:(id)arg2;	// IMP=0x006000000000d7d5
- (id)as_stepsStringWithContext:(id)arg1;	// IMP=0x006000000000d4b3
- (id)as_exerciseProgressStringWithContext:(id)arg1;	// IMP=0x006000000000d2c8
- (id)as_exerciseDurationStringWithContext:(id)arg1;	// IMP=0x006000000000ce12
- (id)as_movePercentStringWithContext:(id)arg1 snapshot:(id)arg2;	// IMP=0x006000000000cbea
- (id)as_moveProgressStringWithContext:(id)arg1 formattingManager:(id)arg2 snapshot:(id)arg3;	// IMP=0x006000000000cad7
- (id)as_moveStringWithContext:(id)arg1 formattingManager:(id)arg2 snapshot:(id)arg3;	// IMP=0x006000000000c9c4
- (id)_moveStringWithFont:(id)arg1 smallCapsFont:(id)arg2 color:(id)arg3 formattingManager:(id)arg4 snapshot:(id)arg5;	// IMP=0x006000000000c44c
@end
