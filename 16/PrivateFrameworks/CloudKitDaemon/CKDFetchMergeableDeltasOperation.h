//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CKFetchMergeableDeltasOperationCallbacks;

@interface CKDFetchMergeableDeltasOperation
{
    CDUnknownBlockType _deltasFetchedBlock;	// 8 = 0x8
    NSArray *_mergeableValueIDs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001286e6
@property(retain, nonatomic) NSArray *mergeableValueIDs; // @synthesize mergeableValueIDs=_mergeableValueIDs;
@property(copy, nonatomic) CDUnknownBlockType deltasFetchedBlock; // @synthesize deltasFetchedBlock=_deltasFetchedBlock;
- (void)handleMergeableDeltasFetchedForValueID:(id)arg1 fetchedDeltas:(id)arg2 result:(id)arg3;	// IMP=0x0000000000127a25
- (void)fetchMergeableDeltasRecursivelyForValueIDs:(id)arg1 continuationTokens:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012719a
- (void)fetchMergeableDeltas;	// IMP=0x0000000000126ddb
- (void)main;	// IMP=0x0000000000126d7a
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x0000000000126d2a
- (_Bool)makeStateTransition;	// IMP=0x0000000000126c85
- (id)activityCreate;	// IMP=0x0000000000126c5c
- (int)operationType;	// IMP=0x0000000000126c51
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000126bc2

// Remaining properties
@property(retain, nonatomic) id <CKFetchMergeableDeltasOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
