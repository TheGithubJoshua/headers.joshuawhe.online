//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSString;
@protocol CRKCancelable;

@protocol CRKDistributedNotificationPublisher <NSObject>
- (id <CRKCancelable>)subscribeToNotificationWithName:(NSString *)arg1 handler:(void (^)(NSDictionary *))arg2;
@end
