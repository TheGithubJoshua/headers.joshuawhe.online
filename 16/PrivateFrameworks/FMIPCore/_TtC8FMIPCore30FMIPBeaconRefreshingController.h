//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC8FMIPCore30FMIPBeaconRefreshingController : _TtCs12_SwiftObject
{
    MISSING_TYPE *identifier;	// 0 = 0x0
    MISSING_TYPE *refreshQueue;	// 0 = 0x0
    MISSING_TYPE *filterQueue;	// 0 = 0x0
    MISSING_TYPE *beacons;	// 0 = 0x0
    MISSING_TYPE *unknownBeacons;	// 0 = 0x0
    MISSING_TYPE *itemGroups;	// 0 = 0x0
    MISSING_TYPE *ownerSession;	// 0 = 0x0
    MISSING_TYPE *currentlyRefreshing;	// 0 = 0x0
    MISSING_TYPE *nextRefreshQueued;	// 0 = 0x0
    MISSING_TYPE *lastRefreshTime;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 1853185887 = 0x6e755f5f
    MISSING_TYPE *lastActiveTimestamp;	// 1718511967 = 0x666e695f
    MISSING_TYPE *callbackInterval;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *defaultCallbackInterval;	// 0 = 0x0
    MISSING_TYPE *initialCallbackInterval;	// 1860764 = 0x1c649c
    MISSING_TYPE *refreshTimer;	// 20684 = 0x50cc
    MISSING_TYPE *utAlertState;	// 1860764 = 0x1c649c
    MISSING_TYPE *separationMonitoringState;	// 0 = 0x0
    MISSING_TYPE *clientConfiguration;	// 0 = 0x0
    MISSING_TYPE *refreshingPolicy;	// 0 = 0x0
    MISSING_TYPE *isThrottled;	// 1751474015 = 0x68655f5f
    MISSING_TYPE *isRefreshing;	// 25965 = 0x656d
}

- (void)handleUnknownBeaconsChanged;	// IMP=0x000000000016a180
- (void)handleBeaconsChanged;	// IMP=0x0000000000169db0
- (void)refreshTimerFired;	// IMP=0x00000000001679c0

@end
