//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSUUID;

@protocol HMDSettingsMessageController
@property(readonly, copy) NSUUID *userUUID;
- (void)updateWithEncodedValue:(NSData *)arg1 onSettingKeyPath:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
