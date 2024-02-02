//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTCServiceMonitor : NSObject
{
    long long _availability;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    int _token;	// 24 = 0x18
}

@property(readonly, nonatomic) long long serviceType;
- (long long)serviceAvailability;	// IMP=0x000000000000222a
- (void)updateAvailability;	// IMP=0x00000000000021c5
- (void)_updateAvailability;	// IMP=0x0000000000001fb4
- (void)_postAvailability:(long long)arg1;	// IMP=0x0000000000001f0a
- (void)dealloc;	// IMP=0x0000000000001ed1
- (id)initWithServiceType:(long long)arg1;	// IMP=0x0000000000001d9e

@end
