//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPRecordRetrieveChangesResponse : PBCodable
{
    NSMutableArray *_changedDeltas;	// 8 = 0x8
    NSMutableArray *_changedRecords;	// 16 = 0x10
    NSMutableArray *_changedShares;	// 24 = 0x18
    NSData *_clientChangeToken;	// 32 = 0x20
    int _status;	// 40 = 0x28
    NSData *_syncContinuationToken;	// 48 = 0x30
    NSMutableArray *_syncObligations;	// 56 = 0x38
    _Bool _pendingArchivedRecords;	// 64 = 0x40
    struct {
        unsigned int status:1;
        unsigned int pendingArchivedRecords:1;
    } _has;	// 68 = 0x44
}

+ (Class)syncObligationsType;	// IMP=0x0010000000225665
+ (Class)changedDeltasType;	// IMP=0x0010000000225593
+ (Class)changedShareType;	// IMP=0x0010000000225478
+ (Class)changedRecordType;	// IMP=0x001000000022522d
- (void).cxx_destruct;	// IMP=0x0000000000227a47
@property(retain, nonatomic) NSMutableArray *syncObligations; // @synthesize syncObligations=_syncObligations;
@property(retain, nonatomic) NSMutableArray *changedDeltas; // @synthesize changedDeltas=_changedDeltas;
@property(nonatomic) _Bool pendingArchivedRecords; // @synthesize pendingArchivedRecords=_pendingArchivedRecords;
@property(retain, nonatomic) NSMutableArray *changedShares; // @synthesize changedShares=_changedShares;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedRecords; // @synthesize changedRecords=_changedRecords;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002274b3
- (unsigned long long)hash;	// IMP=0x00000000002273a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002271a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000226ba7
- (void)copyTo:(id)arg1;	// IMP=0x000000000022689d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000226455
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000226448
- (id)dictionaryRepresentation;	// IMP=0x0000000000225725
- (id)description;	// IMP=0x0000000000225676
- (id)syncObligationsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000225648
- (unsigned long long)syncObligationsCount;	// IMP=0x000000000022562b
- (void)addSyncObligations:(id)arg1;	// IMP=0x00000000002255c1
- (void)clearSyncObligations;	// IMP=0x00000000002255a4
- (id)changedDeltasAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000225576
- (unsigned long long)changedDeltasCount;	// IMP=0x0000000000225559
- (void)addChangedDeltas:(id)arg1;	// IMP=0x00000000002254ef
- (void)clearChangedDeltas;	// IMP=0x00000000002254d2
@property(nonatomic) _Bool hasPendingArchivedRecords;
- (id)changedShareAtIndex:(unsigned long long)arg1;	// IMP=0x000000000022545b
- (unsigned long long)changedSharesCount;	// IMP=0x000000000022543e
- (void)addChangedShare:(id)arg1;	// IMP=0x00000000002253d4
- (void)clearChangedShares;	// IMP=0x00000000002253b7
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000022531a
- (id)statusAsString:(int)arg1;	// IMP=0x00000000002252cf
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasClientChangeToken;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;
- (id)changedRecordAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000225210
- (unsigned long long)changedRecordsCount;	// IMP=0x00000000002251f3
- (void)addChangedRecord:(id)arg1;	// IMP=0x0000000000225189
- (void)clearChangedRecords;	// IMP=0x000000000022516c

@end
