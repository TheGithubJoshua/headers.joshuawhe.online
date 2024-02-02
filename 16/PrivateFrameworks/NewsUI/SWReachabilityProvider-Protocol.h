//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol SWReachabilityObserver;

@protocol SWReachabilityProvider <NSObject>
- (void)removeReachabilityObserver:(id <SWReachabilityObserver>)arg1;
- (void)addReachabilityObserver:(id <SWReachabilityObserver>)arg1;
- (_Bool)isNetworkReachable;
@end
