//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDRequestDetails;

@protocol DNDRemoteServiceServerMeDeviceStateProtocol <NSObject>
- (void)queryMeDeviceStateWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDMeDeviceState *, NSError *))arg2;
@end
