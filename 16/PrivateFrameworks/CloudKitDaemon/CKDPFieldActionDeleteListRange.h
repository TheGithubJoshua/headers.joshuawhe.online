//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d5736
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d56b4
- (unsigned long long)hash;	// IMP=0x00000000001d5697
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d55fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d5585
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d555b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d5537
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d552a
- (id)dictionaryRepresentation;	// IMP=0x00000000001d52e1
- (id)description;	// IMP=0x00000000001d5232
@property(readonly, nonatomic) _Bool hasRange;

@end
