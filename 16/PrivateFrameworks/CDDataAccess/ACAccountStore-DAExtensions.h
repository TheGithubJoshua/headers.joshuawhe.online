//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (DAExtensions)
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;	// IMP=0x006000000001851b
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;	// IMP=0x0060000000018242
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;	// IMP=0x00600000000180ce
- (id)da_accountsEnabledForDADataclasses:(long long)arg1;	// IMP=0x0060000000017f70
- (id)da_accounts;	// IMP=0x0060000000017e13
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0060000000017df8
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000017dde
- (void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000017d36
- (void)da_loadDAAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000017c97
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000016b02
@end
