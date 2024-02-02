//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLIndirectComputeCommand;

__attribute__((visibility("hidden")))
@interface CaptureMTLIndirectComputeCommand : NSObject
{
    id <MTLIndirectComputeCommand> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009fe8c
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000009fd81
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;	// IMP=0x000000000009fc58
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000009fad6
- (void)setComputePipelineState:(id)arg1;	// IMP=0x000000000009f975
- (void)setBarrier;	// IMP=0x000000000009f95f
- (void)reset;	// IMP=0x000000000009f87d
- (void)dealloc;	// IMP=0x000000000009f781
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000009f76b
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;	// IMP=0x000000000009f630
- (void)clearBarrier;	// IMP=0x000000000009f61a
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000009f604
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000009f5f3
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000009f532
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000009f4d2
- (id)originalObject;	// IMP=0x000000000009f4c4
@property(readonly) id <MTLIndirectComputeCommand> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x000000000009f412

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
