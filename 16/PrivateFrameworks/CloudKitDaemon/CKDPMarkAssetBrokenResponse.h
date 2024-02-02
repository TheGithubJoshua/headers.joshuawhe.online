//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier;

@interface CKDPMarkAssetBrokenResponse : PBCodable
{
    CKDPRecordIdentifier *_missingAssetStatusRecord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bddee
@property(retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecord; // @synthesize missingAssetStatusRecord=_missingAssetStatusRecord;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002bdd6c
- (unsigned long long)hash;	// IMP=0x00000000002bdd4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002bdcb5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002bdc3d
- (void)copyTo:(id)arg1;	// IMP=0x00000000002bdc13
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bdbef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bdbe2
- (id)dictionaryRepresentation;	// IMP=0x00000000002bd999
- (id)description;	// IMP=0x00000000002bd8ea
@property(readonly, nonatomic) _Bool hasMissingAssetStatusRecord;

@end
