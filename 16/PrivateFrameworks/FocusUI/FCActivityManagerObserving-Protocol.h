//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FocusUI/NSObject-Protocol.h>

@class FCActivityManager;
@protocol FCActivityDescribing;

@protocol FCActivityManagerObserving <NSObject>

@optional
- (void)activeModeDidChangeForManager:(FCActivityManager *)arg1;
- (void)activityManager:(FCActivityManager *)arg1 suggestedActivityDidChangeForLocation:(long long)arg2;
- (void)activeActivityLifetimeDidChangeForManager:(FCActivityManager *)arg1;
- (void)activeActivityDidChangeForManager:(FCActivityManager *)arg1;
- (void)activityManager:(FCActivityManager *)arg1 lifetimeDescriptionsDidChangeForActivity:(id <FCActivityDescribing>)arg2;
- (void)availableActivitiesDidChangeForManager:(FCActivityManager *)arg1;
@end
