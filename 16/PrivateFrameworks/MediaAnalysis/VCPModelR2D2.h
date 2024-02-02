//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, VCPBackwarp, VCPCorrelation, VCPFlowDecoder, VCPFlowFeatureExtractor;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface VCPModelR2D2
{
    NSString *_resConfig;	// 48 = 0x30
    int _numLevels;	// 56 = 0x38
    int _startLevel;	// 60 = 0x3c
    struct __CVBuffer *_firstBuffer;	// 64 = 0x40
    struct __CVBuffer *_secondBuffer;	// 72 = 0x48
    struct __CVBuffer *_outputFlow;	// 80 = 0x50
    VCPFlowFeatureExtractor *_featureExtractor;	// 88 = 0x58
    VCPFlowDecoder *_flowDecoder[7];	// 96 = 0x60
    VCPCorrelation *_correlation;	// 152 = 0x98
    VCPBackwarp *_backwarp;	// 160 = 0xa0
    CDStruct_80570e6e _imageFeature[2];	// 168 = 0xa8
    struct {
        struct __CVBuffer *correlations[7];
        struct __CVBuffer *flows[7];
        struct __CVBuffer *upscaledFlows[7];
        struct __CVBuffer *warpedBuffers[7];
    } _storage;	// 456 = 0x1c8
    NSObject<OS_dispatch_semaphore> *_flowDecoderSemaphore;	// 680 = 0x2a8
}

- (void).cxx_destruct;	// IMP=0x00000000000a35db
- (void)dealloc;	// IMP=0x00000000000a355a
- (void)releaseMemory;	// IMP=0x00000000000a351f
- (int)updateModelForAspectRatio:(id)arg1 computationAccuracy:(unsigned int)arg2;	// IMP=0x00000000000a347a
- (int)flowScalingTo:(struct __CVBuffer *)arg1 flowBufferY:(struct __CVBuffer *)arg2 scalerX:(float)arg3 scalerY:(float)arg4;	// IMP=0x00000000000a2d87
- (int)flowScalingTo:(struct __CVBuffer *)arg1 scalerX:(float)arg2 scalerY:(float)arg3;	// IMP=0x00000000000a28c4
- (int)getFlowToBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000000a28a4
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a27d8
- (int)createInput:(struct __CVBuffer *)arg1 withImage:(struct __CVBuffer *)arg2 modelInputHeight:(int)arg3 modelInputWidth:(int)arg4;	// IMP=0x00000000000a268f
- (int)copyImage:(struct __CVBuffer *)arg1 toBuffer:(struct __CVBuffer *)arg2 withChannels:(int)arg3;	// IMP=0x00000000000a2185
- (int)estimateFlowForLevel:(int)arg1 upperFlow:(struct __CVBuffer *)arg2 outputFlow:(struct __CVBuffer *)arg3;	// IMP=0x00000000000a1c90
- (int)estimateMotionFlow:(struct __CVBuffer *)arg1;	// IMP=0x00000000000a1b72
- (int)extractFeatureFromImage:(struct __CVBuffer *)arg1 toFeature:(CDStruct_80570e6e *)arg2;	// IMP=0x00000000000a1a7f
- (int)extractFeaturesFromFirst:(struct __CVBuffer *)arg1 andSecond:(struct __CVBuffer *)arg2;	// IMP=0x00000000000a1a23
- (void)releaseFeatureBuffers;	// IMP=0x00000000000a19a3
- (int)allocateFeatures;	// IMP=0x00000000000a1869
- (int)allocateCorreleationBuffer:(struct __CVBuffer **)arg1 forLevel:(unsigned int)arg2;	// IMP=0x00000000000a1821
- (void)releaseStorages;	// IMP=0x00000000000a178f
- (int)allocateStorages;	// IMP=0x00000000000a1609
- (int)updateModulesWithConfig:(id)arg1;	// IMP=0x00000000000a1454
- (int)createModules;	// IMP=0x00000000000a12a8
- (int)configForAspectRatio:(id)arg1;	// IMP=0x00000000000a1154
- (int)releaseInputAndOutputBuffers;	// IMP=0x00000000000a1103
- (int)allocateInputAndOutputBuffers;	// IMP=0x00000000000a0ff7
- (int)prepareWithLightweightOption:(_Bool)arg1 aspectRatio:(id)arg2 numLevels:(int)arg3 startLevel:(int)arg4;	// IMP=0x00000000000a0eb0

@end
