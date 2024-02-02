//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

__attribute__((visibility("hidden")))
@interface CaptureMTLArgumentEncoder : NSObject
{
    id <MTLArgumentEncoder> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000541cd
- (void)setVisibleFunctionTables:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000053f4f
- (void)setVisibleFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000053d84
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000053b06
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000005393b
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000536bd
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000534f2
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000053274
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000530a9
- (void)setIntersectionFunctionTables:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000052e2b
- (void)setIntersectionFunctionTable:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000052c60
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000529e2
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000052817
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000052750
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000526fb
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x000000000005244b
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000005226f
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000052096
- (void)dealloc;	// IMP=0x0000000000051f9a
- (void *)constantDataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000051f84
@property(copy) NSString *label;
@property(readonly) unsigned long long encodedLength;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long alignment;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000051d98
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000051d87
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000051cc6
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000051c66
- (id)originalObject;	// IMP=0x0000000000051c58
- (void)setAccelerationStructure:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000051a39
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;	// IMP=0x000000000005183a
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000051648
@property(readonly) id <MTLArgumentEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000005155c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
