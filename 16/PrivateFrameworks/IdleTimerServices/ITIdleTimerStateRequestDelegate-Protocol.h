//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class NSString;

@protocol ITIdleTimerStateRequestDelegate <NSObject>
- (void)resendIdleTimerAssertions;
- (_Bool)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(NSString *)arg2;
@end
