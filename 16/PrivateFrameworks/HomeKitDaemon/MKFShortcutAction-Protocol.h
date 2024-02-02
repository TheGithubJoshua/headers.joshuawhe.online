//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAction-Protocol.h>
#import <HomeKitDaemon/MKFShortcutActionPublicExtensions-Protocol.h>

@class MKFShortcutActionDatabaseID, NSData;
@protocol MKFHome;

@protocol MKFShortcutAction <MKFAction, MKFShortcutActionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFShortcutActionDatabaseID *databaseID;
@property(retain, nonatomic) NSData *data;
@end
