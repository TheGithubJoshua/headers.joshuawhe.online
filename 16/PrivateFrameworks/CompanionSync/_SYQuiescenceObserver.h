//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSPointerArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _SYQuiescenceObserver : NSObject
{
    NSPointerArray *_quiescenceQueues;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_allocationGroup;	// 16 = 0x10
    NSMutableSet *_allocations;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0060000000097967
+ (void)setQuiescenceEnabled:(_Bool)arg1;	// IMP=0x0060000000097961
+ (_Bool)isQuiescenceEnabled;	// IMP=0x0060000000097959
- (void).cxx_destruct;	// IMP=0x0000000000098335
- (void)notifyOnDeallocationComplete:(CDUnknownBlockType)arg1;	// IMP=0x00000000000981f9
- (_Bool)waitForDeallocationCompleteWithTimeout:(double)arg1;	// IMP=0x0000000000098144
- (void)decrementAllocationCount:(id)arg1;	// IMP=0x0000000000098040
- (void)incrementAllocationCount:(id)arg1;	// IMP=0x0000000000097f7a
- (void)notifyOnQuiescence:(CDUnknownBlockType)arg1;	// IMP=0x0000000000097f04
- (_Bool)waitForQuiescenceWithTimeout:(double)arg1;	// IMP=0x00000000000979fb
- (void)registerQueue:(id)arg1;	// IMP=0x000000000009797d
- (id)init;	// IMP=0x000000000009796f

@end
