//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLRasterizationRateMap, MTLRasterizationRateMapSPI;

__attribute__((visibility("hidden")))
@interface CaptureMTLRasterizationRateMap : NSObject
{
    id <MTLRasterizationRateMapSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b339
- (void)resetUsingDescriptor:(id)arg1;	// IMP=0x000000000002b210
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000002b1fa
- (unsigned long long)mutability;	// IMP=0x000000000002b1e4
- (float)minFactor;	// IMP=0x000000000002b1ce
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000002b1b8
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000002b1a7
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002b0e6
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000002b086
- (id)originalObject;	// IMP=0x000000000002b078
- (CDStruct_14f26992)physicalSizeForLayer:(unsigned long long)arg1;	// IMP=0x000000000002af4d
- (CDStruct_b2fbf00d)mapScreenToPhysicalCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;	// IMP=0x000000000002ae3b
- (CDStruct_b2fbf00d)mapPhysicalToScreenCoordinates:(CDStruct_b2fbf00d)arg1 forLayer:(unsigned long long)arg2;	// IMP=0x000000000002ae25
- (void)dealloc;	// IMP=0x000000000002ad29
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000002ab95
@property(readonly) CDStruct_14f26992 screenSize;
@property(readonly) CDStruct_14f26992 physicalGranularity;
@property(readonly) CDStruct_4bcfbbae parameterBufferSizeAndAlign;
@property(readonly) unsigned long long layerCount;
@property(readonly) NSString *label;
@property(readonly) id <MTLDevice> device;
@property(readonly) id <MTLRasterizationRateMap> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000002a9e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
