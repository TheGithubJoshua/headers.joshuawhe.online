//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLCounterSampleBuffer, MTLDevice;

__attribute__((visibility("hidden")))
@interface CaptureMTLCounterSampleBuffer : NSObject
{
    id <MTLCounterSampleBuffer> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000033ac7
- (id)resolveCounterRange:(struct _NSRange)arg1;	// IMP=0x000000000003394d
@property(readonly) unsigned long long sampleCount;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000338fd
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000338ec
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000003382b
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000337cb
- (id)originalObject;	// IMP=0x00000000000337bd
- (void)dealloc;	// IMP=0x00000000000336c1
@property(readonly) id <MTLCounterSampleBuffer> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000335d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
