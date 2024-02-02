//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount;
@protocol OS_dispatch_queue;

@interface IMCoreAccountsMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ACAccount *_cachedPrimaryAppleAccount;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000122057
- (void).cxx_destruct;	// IMP=0x00000000001224ea
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000000012238a
- (id)_cachedPrimaryAppleAccount;	// IMP=0x00000000001220df
@property(readonly, nonatomic) _Bool isSignedIntoiCloud;
- (id)init;	// IMP=0x0000000000121f7f

@end
