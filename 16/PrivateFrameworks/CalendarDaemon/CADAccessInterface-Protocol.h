//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADDatabaseInitializationOptions;

@protocol CADAccessInterface
- (void)CADDatabaseResetWithReply:(void (^)(int))arg1;
- (void)CADDatabaseGetAccess:(void (^)(int, _Bool, _Bool))arg1;
- (void)CADDatabaseSetInitializationOptions:(CADDatabaseInitializationOptions *)arg1 reply:(void (^)(int, int))arg2;
@end
