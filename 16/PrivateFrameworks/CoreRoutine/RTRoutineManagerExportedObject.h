//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerExportedObject : NSObject
{
    RTRoutineManager *_routineManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000073e0
@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;	// IMP=0x0000000000007333
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000072ad
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000007227
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000071a1
- (void)onVisit:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000711b
- (id)initWithRoutineManager:(id)arg1;	// IMP=0x00000000000070b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
