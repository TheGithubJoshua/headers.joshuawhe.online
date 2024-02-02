//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAnonymousZoneInfo, CKDPRecordZoneIdentifier, CKDPZoneCapabilities;

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable
{
    CKDPAnonymousZoneInfo *_anonymousZoneInfo;	// 8 = 0x8
    CKDPZoneCapabilities *_capabilities;	// 16 = 0x10
    int _changeType;	// 24 = 0x18
    int _deleteType;	// 28 = 0x1c
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 32 = 0x20
    _Bool _isAnonymous;	// 40 = 0x28
    struct {
        unsigned int changeType:1;
        unsigned int deleteType:1;
        unsigned int isAnonymous:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000002187c6
@property(retain, nonatomic) CKDPAnonymousZoneInfo *anonymousZoneInfo; // @synthesize anonymousZoneInfo=_anonymousZoneInfo;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(retain, nonatomic) CKDPZoneCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000218616
- (unsigned long long)hash;	// IMP=0x0000000000218536
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002183b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000218293
- (void)copyTo:(id)arg1;	// IMP=0x00000000002181b0
- (void)writeTo:(id)arg1;	// IMP=0x00000000002180c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002180bc
- (id)dictionaryRepresentation;	// IMP=0x0000000000217a04
- (id)description;	// IMP=0x0000000000217955
@property(readonly, nonatomic) _Bool hasAnonymousZoneInfo;
@property(nonatomic) _Bool hasIsAnonymous;
@property(readonly, nonatomic) _Bool hasCapabilities;
- (int)StringAsDeleteType:(id)arg1;	// IMP=0x0000000000217843
- (id)deleteTypeAsString:(int)arg1;	// IMP=0x00000000002177f8
@property(nonatomic) _Bool hasDeleteType;
@property(nonatomic) int deleteType; // @synthesize deleteType=_deleteType;
- (int)StringAsChangeType:(id)arg1;	// IMP=0x0000000000217726
- (id)changeTypeAsString:(int)arg1;	// IMP=0x00000000002176d0
@property(nonatomic) _Bool hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
