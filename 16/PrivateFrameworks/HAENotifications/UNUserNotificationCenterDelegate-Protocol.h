//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HAENotifications/NSObject-Protocol.h>

@class UNNotification, UNNotificationResponse, UNUserNotificationCenter;

@protocol UNUserNotificationCenterDelegate <NSObject>

@optional
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 openSettingsForNotification:(UNNotification *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didReceiveNotificationResponse:(UNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 willPresentNotification:(UNNotification *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
@end
