//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioPayload : NSObject
{
    struct SoundDec_t *_encoder;	// 8 = 0x8
    VCAudioPayloadConfig *_config;	// 16 = 0x10
    unsigned int _bitrate;	// 24 = 0x18
    int _bandwidth;	// 28 = 0x1c
    _Bool _shouldReset;	// 32 = 0x20
}

@property(readonly, nonatomic) int bandwidth; // @synthesize bandwidth=_bandwidth;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) VCAudioPayloadConfig *config; // @synthesize config=_config;
- (id)description;	// IMP=0x000000000034d352
- (_Bool)getMagicCookie:(char *)arg1 withLength:(unsigned int *)arg2;	// IMP=0x000000000034d338
- (void)setCurrentDTXEnable:(_Bool)arg1;	// IMP=0x000000000034d306
- (_Bool)setCodecModeRequest:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000034d14e
- (_Bool)setBandwidth:(int)arg1;	// IMP=0x000000000034d0ac
- (_Bool)setBitrate:(unsigned int)arg1;	// IMP=0x000000000034d00b
- (void)resetEncoderWithSampleBuffer:(char *)arg1 numBytes:(int)arg2;	// IMP=0x000000000034cf99
- (void)resetEncoder;	// IMP=0x000000000034cf8f
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4;	// IMP=0x000000000034cc75
- (_Bool)createEncoderWithInputFormat:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x000000000034c9c9
- (void)dealloc;	// IMP=0x000000000034c962
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000034c861
- (_Bool)isDTXEmptyPacket:(unsigned int)arg1;	// IMP=0x000000000034c7f8

@end
