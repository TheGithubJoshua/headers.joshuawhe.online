//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSynchronousTaskGroup, NSArray;

@protocol HDSynchronousTaskGroupDelegate <NSObject>
- (void)synchronousTaskGroup:(HDSynchronousTaskGroup *)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(NSArray *)arg3;
@end
