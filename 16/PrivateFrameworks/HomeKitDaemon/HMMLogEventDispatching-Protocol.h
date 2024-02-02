//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMMLogEventSubmitting-Protocol.h>

@class NSArray, NSObject, Protocol;
@protocol HMMLogEventDispatchingDataSource, HMMLogEventObserver, OS_dispatch_queue;

@protocol HMMLogEventDispatching <HMMLogEventSubmitting>
@property __weak id <HMMLogEventDispatchingDataSource> dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
- (void)removeObserver:(id <HMMLogEventObserver>)arg1;
- (void)addObserver:(id <HMMLogEventObserver>)arg1 forProtocol:(Protocol *)arg2;
- (void)addObserver:(id <HMMLogEventObserver>)arg1 forEventClasses:(NSArray *)arg2;
- (void)addObserver:(id <HMMLogEventObserver>)arg1 forEventClass:(Class)arg2;
@end
