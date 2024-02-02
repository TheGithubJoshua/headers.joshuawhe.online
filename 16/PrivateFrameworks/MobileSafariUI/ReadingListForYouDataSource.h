//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@class NSObject, ReadingListLeadImageCache;
@protocol OS_dispatch_queue, WBBookmarkProvider;

__attribute__((visibility("hidden")))
@interface ReadingListForYouDataSource : WBSForYouRecommendationMediatorDataSource
{
    id <WBBookmarkProvider> _bookmarkProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_bookmarkProviderAccessQueue;	// 16 = 0x10
    ReadingListLeadImageCache *_leadImageCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a1668
- (void)_readingListContentsDidChange:(id)arg1;	// IMP=0x00000000000a1651
- (void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a0e07
- (void)dealloc;	// IMP=0x00000000000a0d92
- (id)initWithBookmarkProvider:(id)arg1 accessQueue:(id)arg2 imageCache:(id)arg3;	// IMP=0x00000000000a0c0c

@end
