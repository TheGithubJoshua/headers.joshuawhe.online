//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, _EXDiscoveryController, _EXQuery;

__attribute__((visibility("hidden")))
@interface _EXActiveQuery : NSObject
{
    _EXQuery *_query;	// 8 = 0x8
    NSMutableSet *_internalObservers;	// 16 = 0x10
    NSMutableSet *_internalNewObservers;	// 24 = 0x18
    _EXDiscoveryController *_discoveryController;	// 32 = 0x20
    NSSet *_currentUUIDs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003f5bc
@property(retain) NSSet *currentUUIDs; // @synthesize currentUUIDs=_currentUUIDs;
@property(readonly) __weak _EXDiscoveryController *discoveryController; // @synthesize discoveryController=_discoveryController;
@property(readonly) NSMutableSet *internalNewObservers; // @synthesize internalNewObservers=_internalNewObservers;
@property(readonly) NSMutableSet *internalObservers; // @synthesize internalObservers=_internalObservers;
@property(readonly) _EXQuery *query; // @synthesize query=_query;
- (id)description;	// IMP=0x000000000003f4b4
- (void)update;	// IMP=0x000000000003e7a4
- (void)removeObserver:(id)arg1;	// IMP=0x000000000003e704
- (void)addObserver:(id)arg1;	// IMP=0x000000000003e664
@property(readonly) NSSet *observers;
- (unsigned long long)hash;	// IMP=0x000000000003e602
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e59f
- (_Bool)isEqualToActiveQuery:(id)arg1;	// IMP=0x000000000003e585
- (id)initWithQuery:(id)arg1 discoveryController:(id)arg2;	// IMP=0x000000000003e48d

@end
