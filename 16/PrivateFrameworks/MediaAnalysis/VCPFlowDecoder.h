//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPFlowDecoder
{
    NSArray *_inputBlobNames;	// 48 = 0x30
    NSString *_outpuBlobName;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000010de8f
- (int)estimateFlow:(struct __CVBuffer *)arg1 correlation:(struct __CVBuffer *)arg2 flow:(struct __CVBuffer *)arg3 outputFlow:(struct __CVBuffer *)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000010dc59
- (int)bindWithBuffers:(struct __CVBuffer *)arg1 correlation:(struct __CVBuffer *)arg2 flow:(struct __CVBuffer *)arg3 outputFlow:(struct __CVBuffer *)arg4;	// IMP=0x000000000010d912
- (id)initModule:(int)arg1 config:(id)arg2;	// IMP=0x000000000010d818

@end
