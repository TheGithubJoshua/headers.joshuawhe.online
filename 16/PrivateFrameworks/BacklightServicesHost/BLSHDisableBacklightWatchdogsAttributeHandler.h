//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHWatchdogProvider;

__attribute__((visibility("hidden")))
@interface BLSHDisableBacklightWatchdogsAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    BLSHWatchdogProvider *_provider;	// 8 = 0x8
}

+ (Class)attributeBaseClass;	// IMP=0x006000000002fffe
+ (id)attributeClasses;	// IMP=0x006000000002ff92
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x006000000002fe94
- (void).cxx_destruct;	// IMP=0x0000000000030050
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000003002e
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000003000f
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000002ff1a

@end
