//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000026f7
- (void)_invalidateFetchedAccountsCacheWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002616
- (void)_fetchAccountsWithCompletion:(CDUnknownBlockType)arg1 options:(id)arg2;	// IMP=0x000000000000251b
- (void)_deleteAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002501
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000020f7
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000020dd
- (void)_updateAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000020c3
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001f15
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001efb
- (void)_removeAllAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001ee1
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000001c64
- (id)init;	// IMP=0x0000000000001c0e

@end
