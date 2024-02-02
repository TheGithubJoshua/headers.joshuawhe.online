//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BROperation.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface BREvictItemOperation : BROperation
{
    unsigned long long _section;	// 56 = 0x38
    NSURL *_url;	// 64 = 0x40
    CDUnknownBlockType _evictionCompletionBlock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006a249
@property(copy) CDUnknownBlockType evictionCompletionBlock; // @synthesize evictionCompletionBlock=_evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000006a0ef
- (void)main;	// IMP=0x0000000000069f8b
- (id)description;	// IMP=0x0000000000069ec7
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000069e59

@end
