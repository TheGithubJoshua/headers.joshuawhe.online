//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteMonitorServerModeAssertionProtocol <NSObject>
- (void)registerForAssertionUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
@end
