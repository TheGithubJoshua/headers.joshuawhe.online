//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPZone, NSString;

@interface CKDPZoneSaveRequest : PBRequest
{
    CKDPZone *_recordZone;	// 8 = 0x8
    NSString *_zoneProtectionInfoTag;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00100000000c12f2
- (void).cxx_destruct;	// IMP=0x00000000000c1a20
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPZone *recordZone; // @synthesize recordZone=_recordZone;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c1959
- (unsigned long long)hash;	// IMP=0x00000000000c190c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c1844
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c17a6
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c1743
- (Class)responseClass;	// IMP=0x00000000000c1732
- (unsigned int)requestTypeCode;	// IMP=0x00000000000c1727
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c16ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c16bd
- (id)dictionaryRepresentation;	// IMP=0x00000000000c141b
- (id)description;	// IMP=0x00000000000c136c
@property(readonly, nonatomic) _Bool hasZoneProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasRecordZone;

@end
