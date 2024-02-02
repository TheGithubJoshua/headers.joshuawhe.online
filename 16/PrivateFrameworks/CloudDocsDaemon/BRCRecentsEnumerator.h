//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, NSString, br_pacer, brc_task_tracker;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumerator : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    br_pacer *_pacer;	// 24 = 0x18
    _Bool _readyForIndexing;	// 32 = 0x20
    unsigned long long _flushedNotifRank;	// 40 = 0x28
    brc_task_tracker *_tracker;	// 48 = 0x30
}

+ (void)dropRecentsForSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000187d36
+ (void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001879fa
- (void).cxx_destruct;	// IMP=0x000000000018a803
- (void)dealloc;	// IMP=0x000000000018a7d4
@property(readonly, nonatomic) _Bool isCancelled;
- (void)cancel;	// IMP=0x000000000018a765
- (void)close;	// IMP=0x000000000018a6f9
- (void)resume;	// IMP=0x000000000018a6d1
- (id)initWithAccountSession:(id)arg1;	// IMP=0x000000000018a44f
- (void)_signalActiveSetDidChange;	// IMP=0x000000000018a441
- (void)_activeSetDidChange;	// IMP=0x000000000018a2b3
- (void)enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018a124
- (void)_enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000188ee1
- (void)maxNotifRankWasFlushed;	// IMP=0x0000000000188e12
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x0000000000188d9d
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001886f2
- (id)changeTokenForNotifRank:(unsigned long long)arg1;	// IMP=0x000000000018866b
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;	// IMP=0x00000000001885b1
- (void)garbageCollectRanksPreceding:(unsigned long long)arg1;	// IMP=0x0000000000188558
- (void)_deleteAllRanks;	// IMP=0x000000000018850e
- (void)dropItemWithFileObjectID:(id)arg1 notifRank:(unsigned long long)arg2 itemIsLive:(_Bool)arg3;	// IMP=0x00000000001882e4
- (BOOL)computeTombstoneEntryType:(id)arg1;	// IMP=0x00000000001882c9
- (void)dropIndexForClientZone:(id)arg1;	// IMP=0x00000000001878de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
