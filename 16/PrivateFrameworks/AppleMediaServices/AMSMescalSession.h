//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSData *_certificateData;	// 8 = 0x8
    AMSURLSession *_urlSession;	// 16 = 0x10
    AMSMescalFairPlay *_fairPlayContext;	// 24 = 0x18
    long long _mescalType;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x00600000001ddc29
+ (id)primeSession;	// IMP=0x00600000001ddbbf
+ (id)defaultSession;	// IMP=0x00600000001ddb55
- (void).cxx_destruct;	// IMP=0x00000000001e13fe
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_verifyEntitlements;	// IMP=0x00000000001e1388
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;	// IMP=0x00000000001e12f9
- (void)_resetSession;	// IMP=0x00000000001e12cf
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001e0d38
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e07e2
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e0240
- (id)_cachedCertPath;	// IMP=0x00000000001e0102
- (id)_cachedCertData;	// IMP=0x00000000001dfbf7
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x00000000001df568
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001df1db
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001deaad
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001de3fb
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ddc71
- (id)initWithType:(long long)arg1;	// IMP=0x00000000001ddac3

@end
