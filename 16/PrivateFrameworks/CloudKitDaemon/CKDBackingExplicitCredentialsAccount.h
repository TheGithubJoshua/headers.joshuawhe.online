//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDBackingAccount.h"

@class ACAccount;

@interface CKDBackingExplicitCredentialsAccount : CKDBackingAccount
{
    ACAccount *_fakeCKAccount;	// 8 = 0x8
}

+ (id)explicitCredentialsAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;	// IMP=0x0060000000216f9f
+ (void)_setUpExplicitCredentialsAccountShenanigans;	// IMP=0x00600000002161c2
- (void).cxx_destruct;	// IMP=0x000000000021763f
@property(retain, nonatomic) ACAccount *fakeCKAccount; // @synthesize fakeCKAccount=_fakeCKAccount;
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002175d8
- (id)password;	// IMP=0x000000000021755e
- (id)iCloudAuthTokenWithError:(id *)arg1;	// IMP=0x00000000002174e4
- (id)cloudKitAuthTokenWithError:(id *)arg1;	// IMP=0x000000000021746a
- (id)ckAccount;	// IMP=0x0000000000217458
- (void)_setOverridesOnVettingContext:(id)arg1;	// IMP=0x00000000002173c8
- (void)updateAccountPropertiesAndSaveAccount:(CDUnknownBlockType)arg1;	// IMP=0x0000000000217345
- (void)renewAuthTokenWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000217330
- (id)identifier;	// IMP=0x0000000000217214
- (_Bool)isDataclassEnabled:(id)arg1;	// IMP=0x000000000021720c
- (id)_initExplicitCredentialsAccountWithEmail:(id)arg1 password:(id)arg2;	// IMP=0x0000000000216f87
- (id)_initExplicitCredentialsAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;	// IMP=0x0000000000216364
- (void)_checkAndLogIfAccountError;	// IMP=0x00000000002161c8
- (long long)accountType;	// IMP=0x00000000002161b7

@end
