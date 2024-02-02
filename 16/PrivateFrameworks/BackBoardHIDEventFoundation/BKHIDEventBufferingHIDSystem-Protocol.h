//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardHIDEventFoundation/NSObject-Protocol.h>

@class BKHIDEventBuffer, BKHIDEventDeliverySequence, BKHIDEventReevaluateBufferingContext, BKSHIDEventDeferringResolution, NSDictionary;
@protocol BKHIDEventSenderInfo;

@protocol BKHIDEventBufferingHIDSystem <NSObject>
- (void)bufferingDidAddNewBuffers:(NSDictionary *)arg1;
- (void)bufferDidFinishDraining:(BKHIDEventBuffer *)arg1;
- (void)buffer:(BKHIDEventBuffer *)arg1 drainEvent:(struct __IOHIDEvent *)arg2 withContext:(id)arg3 sender:(id <BKHIDEventSenderInfo>)arg4 sequence:(BKHIDEventDeliverySequence *)arg5 toResolution:(BKSHIDEventDeferringResolution *)arg6;
- (void)bufferWillBeginDraining:(BKHIDEventBuffer *)arg1;
- (void)requestBufferReevaluationWithContext:(BKHIDEventReevaluateBufferingContext *)arg1;
@end
