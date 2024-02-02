//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSArray, NSUUID;

@protocol HMDHomeConfigurationLogEventDataSource <NSObject>
@property(readonly, getter=isResidentFirstAccessoryCommunicationEnabled) _Bool residentFirstAccessoryCommunicationEnabled;
@property(readonly, copy, nonatomic) NSArray *enabledResidents;
@property(readonly, copy) NSArray *triggers;
@property(readonly, nonatomic) NSArray *triggerOwnedActionSets;
@property(readonly, nonatomic) NSArray *actionSets;
@property(readonly, copy) NSArray *accessories;
@property(readonly, copy) NSArray *users;
@property(readonly, getter=isAdminUser) _Bool adminUser;
@property(readonly, getter=isOwnerUser) _Bool ownerUser;
@property(readonly, nonatomic) NSUUID *uuid;
@end
