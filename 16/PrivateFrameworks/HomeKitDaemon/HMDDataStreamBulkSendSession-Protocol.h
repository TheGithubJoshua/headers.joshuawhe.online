//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDDataStreamBulkSendSession <NSObject>
@property(readonly, getter=isActive) _Bool active;
- (void)read:(void (^)(NSDictionary *, NSError *))arg1;
- (void)cancelWithReason:(unsigned short)arg1;
@end
