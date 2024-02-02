//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSCalendar, NSData, NSDate, NSString;
@protocol CalIconProvider;

@protocol CalIconProvider <NSObject>
+ (id <CalIconProvider>)sharedInstance;
- (NSString *)identifierForIconWithDate:(NSDate *)arg1 inCalendar:(NSCalendar *)arg2;
- (NSData *)pngDataForIconWithIdentifier:(NSString *)arg1;
@end
