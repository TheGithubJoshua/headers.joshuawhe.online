//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MFQueuePlayerItem;

@protocol MFAssetLoading
- (void)cancelLoading;
- (void)loadAssetFor:(id <MFQueuePlayerItem>)arg1 token:(long long)arg2 completion:(void (^)(id <MFQueuePlayerItem>, long long, NSError *))arg3;
@end
