//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class DBNavigationStateProvider, NSArray, NSString;

@protocol DBNavigationStateObserving <NSObject>
- (void)navigationStateProvider:(DBNavigationStateProvider *)arg1 frontmostIdentifierDidChange:(NSString *)arg2;
- (void)navigationStateProvider:(DBNavigationStateProvider *)arg1 navigatingIdentifiersDidChange:(NSArray *)arg2;
@end
