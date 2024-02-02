//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDP/NSObject-Protocol.h>

@class NSString;

@protocol CDPRecoveryKeyValidator <NSObject>
- (_Bool)confirmRecoveryKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)generateRecoveryKeyWithError:(id *)arg1;
- (void)generateRecoveryKey:(void (^)(NSString *, NSError *))arg1;
- (void)confirmRecoveryKey:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
