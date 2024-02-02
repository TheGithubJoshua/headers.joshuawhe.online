//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/HDSyncEntity-Protocol.h>

@class HDProfile;

@protocol HDNanoSyncEntity <HDSyncEntity>

@optional
+ (int)nanoSyncObjectType;
+ (_Bool)companionDidChangeForProfile:(HDProfile *)arg1 error:(id *)arg2;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
@end
