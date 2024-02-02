//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPModelFileAsset, MPModelGenericObject, NSString;

@protocol MPCModelPlaybackAssetCacheProviding <NSObject>
- (void)setPlaybackAssetCacheFileAsset:(MPModelFileAsset *)arg1 forGenericObject:(MPModelGenericObject *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)getPlaybackAssetDestinationURL:(id *)arg1 sharedCacheURL:(id *)arg2 purgeable:(_Bool)arg3 purchaseBundleDestinationURL:(id *)arg4 assetQualityType:(long long)arg5 fileName:(NSString *)arg6 pathExtension:(NSString *)arg7;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(MPModelGenericObject *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
@end
