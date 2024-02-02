//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@protocol CiconiaProtocol
- (void)finishCleanupForPersonaID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)cleanupCiconiaForPersonaID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)queryCiconiaVersion:(void (^)(unsigned long long))arg1;
- (void)queueSilentMigrationActivityForPersonaID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)initiateSilentMigrationOf:(NSURL *)arg1 forPersonaID:(NSString *)arg2 withHook:(NSString *)arg3 andReply:(void (^)(BRCMigrationStats *, NSError *))arg4;
@end
