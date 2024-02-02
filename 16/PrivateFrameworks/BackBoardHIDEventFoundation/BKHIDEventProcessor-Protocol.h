//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardHIDEventFoundation/NSObject-Protocol.h>

@class BKHIDEventProcessorCreationContext;
@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo;

@protocol BKHIDEventProcessor <NSObject>
- (long long)processEvent:(inout struct __IOHIDEvent **)arg1 sender:(id <BKHIDEventSenderInfo>)arg2 dispatcher:(id <BKHIDEventDispatcher>)arg3;

@optional
- (void)didInitializeRegistryWithContext:(BKHIDEventProcessorCreationContext *)arg1;
- (id)initWithContext:(BKHIDEventProcessorCreationContext *)arg1;
@end
