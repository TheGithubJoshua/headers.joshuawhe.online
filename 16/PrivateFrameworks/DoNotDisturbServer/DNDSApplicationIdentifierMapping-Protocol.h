//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDApplicationIdentifier;

@protocol DNDSApplicationIdentifierMapping <NSObject>
- (DNDApplicationIdentifier *)applicationIdentifierForSyncWithSourceApplicationIdentifier:(DNDApplicationIdentifier *)arg1;
- (DNDApplicationIdentifier *)applicationIdentifierForFileWithSourceApplicationIdentifier:(DNDApplicationIdentifier *)arg1;
@end
