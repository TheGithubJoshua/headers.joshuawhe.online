//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsToday/NSObject-Protocol.h>

@class FCNetworkReachability;

@protocol FCNetworkReachabilityObserving <NSObject>

@optional
- (void)wifiReachabilityDidChange:(FCNetworkReachability *)arg1;
- (void)networkReachabilityDidChange:(FCNetworkReachability *)arg1;
@end
