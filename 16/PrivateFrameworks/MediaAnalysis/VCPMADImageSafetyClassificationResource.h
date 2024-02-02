//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class CVNLPCommSafetyHandler, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADImageSafetyClassificationResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CVNLPCommSafetyHandler *_handler;	// 16 = 0x10
}

+ (id)sharedResource;	// IMP=0x0060000000051bdf
- (void).cxx_destruct;	// IMP=0x0000000000052106
- (void)purge;	// IMP=0x0000000000052084
- (id)handler;	// IMP=0x0000000000051caa
- (id)init;	// IMP=0x0000000000051b80

@end
