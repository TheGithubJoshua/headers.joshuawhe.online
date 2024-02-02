//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFDurationEventPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFEvent-Protocol.h>

@class MKFDurationEventDatabaseID, NSNumber;
@protocol MKFHome;

@protocol MKFDurationEvent <MKFEvent, MKFDurationEventPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFDurationEventDatabaseID *databaseID;
@property(copy, nonatomic) NSNumber *duration;
@end
