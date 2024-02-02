//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSServiceInterface, BSServiceQuality, NSObject, NSString;
@protocol NSCopying, OS_dispatch_queue;

@protocol BSServiceConnectionConfiguring
- (void)setUserInfo:(id <NSCopying>)arg1;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setInvalidationHandler:(void (^)(BSServiceConnection<BSServiceConnectionContext> *))arg1;
- (void)setInterruptionHandler:(void (^)(BSServiceConnection<BSServiceConnectionContext> *))arg1;
- (void)setActivationHandler:(void (^)(BSServiceConnection<BSServiceConnectionContext> *))arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setInterface:(BSServiceInterface *)arg1;
- (void)setServiceQuality:(BSServiceQuality *)arg1;
- (void)setName:(NSString *)arg1;
@end
