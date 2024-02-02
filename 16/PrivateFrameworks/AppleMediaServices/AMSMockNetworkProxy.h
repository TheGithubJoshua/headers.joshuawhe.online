//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

__attribute__((visibility("hidden")))
@interface AMSMockNetworkProxy : NSURLProtocol
{
    AMSMockURLOverride *_currentOverride;	// 16 = 0x10
}

+ (void)_sync:(CDUnknownBlockType)arg1;	// IMP=0x0040000000207918
+ (void)_removeOverride:(id)arg1;	// IMP=0x0040000000207833
+ (void)_removeAllOverrides;	// IMP=0x00400000002077f6
+ (id)_executedOverrides;	// IMP=0x00400000002077a1
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0040000000206d1b
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0040000000206adc
+ (void)removeOverride:(id)arg1;	// IMP=0x0040000000206a30
+ (void)clearOverrides;	// IMP=0x00400000002069a3
+ (void)addOverride:(id)arg1;	// IMP=0x00400000002068c0
+ (id)executedOverrides;	// IMP=0x0040000000206770
+ (id)registeredOverrides;	// IMP=0x004000000020660f
+ (id)_overrides;	// IMP=0x00400000002065ba
- (void).cxx_destruct;	// IMP=0x00000000002079f3
@property(retain, nonatomic) AMSMockURLOverride *currentOverride; // @synthesize currentOverride=_currentOverride;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000020772c
- (void)finishWithData:(id)arg1;	// IMP=0x0000000000207689
- (void)performRedirectFromResponse:(id)arg1;	// IMP=0x000000000020744a
- (void)sendResponse:(id)arg1;	// IMP=0x000000000020731a
- (void)stopLoading;	// IMP=0x00000000002072b0
- (void)startLoading;	// IMP=0x0000000000206d31

@end
