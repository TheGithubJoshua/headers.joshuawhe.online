//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest
{
    CKDPDate *_lastMissingManateeIdentityErrorDate;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
    _Bool _userPurge;	// 24 = 0x18
    struct {
        unsigned int userPurge:1;
    } _has;	// 28 = 0x1c
}

+ (id)options;	// IMP=0x00100000000d1132
- (void).cxx_destruct;	// IMP=0x00000000000d1af3
@property(retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate; // @synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool userPurge; // @synthesize userPurge=_userPurge;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d19e2
- (unsigned long long)hash;	// IMP=0x00000000000d196e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d186e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d17ad
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d172a
- (Class)responseClass;	// IMP=0x00000000000d1719
- (unsigned int)requestTypeCode;	// IMP=0x00000000000d170e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d168c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d167f
- (id)dictionaryRepresentation;	// IMP=0x00000000000d12a0
- (id)description;	// IMP=0x00000000000d11f1
@property(readonly, nonatomic) _Bool hasLastMissingManateeIdentityErrorDate;
@property(nonatomic) _Bool hasUserPurge;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
