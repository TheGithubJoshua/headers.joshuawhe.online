//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class CKShareMetadata, NSData, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;

@interface CKDInitiateParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _participantVettingProgressBlock;	// 8 = 0x8
    CKShareMetadata *_shareMetadata;	// 16 = 0x10
    NSData *_encryptedKey;	// 24 = 0x18
    NSString *_participantID;	// 32 = 0x20
    NSString *_address;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014b8a6
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(copy, nonatomic) CDUnknownBlockType participantVettingProgressBlock; // @synthesize participantVettingProgressBlock=_participantVettingProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000014b78a
- (void)_sendRequest:(_Bool)arg1;	// IMP=0x000000000014acc6
- (int)operationType;	// IMP=0x000000000014acbb
- (void)main;	// IMP=0x000000000014a97a
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000149ec7
- (id)_encryptedKeyDataWithShareMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000149c5b
- (void)_handleVettingInitiationProgress:(id)arg1;	// IMP=0x0000000000149b1a
- (id)activityCreate;	// IMP=0x0000000000149af1
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000149a04

// Remaining properties
@property(retain, nonatomic) id <CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end
