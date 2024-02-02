//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCItemGlobalID, BRCNotificationPipe, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCDataOrDocsScopeGatherer : NSObject
{
    BRCNotificationPipe *_pipe;	// 8 = 0x8
    CDUnknownBlockType _gatherReply;	// 16 = 0x10
    NSMutableArray *_gatheringAppLibraries;	// 24 = 0x18
    unsigned long long _gatheringRankMin;	// 32 = 0x20
    unsigned long long _gatheringRankMax;	// 40 = 0x28
    unsigned long long _lastSentRank;	// 48 = 0x30
    NSString *_gatheringNamePrefix;	// 56 = 0x38
    BRCAccountSession *_session;	// 64 = 0x40
    _Bool _includesDeadItems;	// 72 = 0x48
    BRCItemGlobalID *_gatheredChildrenItemGlobalID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006cdce
@property(retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID; // @synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID;
- (void)invalidate;	// IMP=0x000000000006cc2f
- (void)done;	// IMP=0x000000000006ca69
- (CDUnknownBlockType)_popGatherReply;	// IMP=0x000000000006c9fc
- (void)gatherWithBatchSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b7c2
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(_Bool)arg5 gatherReply:(CDUnknownBlockType)arg6;	// IMP=0x000000000006b4b6

@end
