//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable
{
    CKDPLocationBound *_bounds;	// 8 = 0x8
    CKDPLocationCoordinate *_coordinate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000120df6
@property(retain, nonatomic) CKDPLocationBound *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000120d15
- (unsigned long long)hash;	// IMP=0x0000000000120cc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000120c00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000120b62
- (void)copyTo:(id)arg1;	// IMP=0x0000000000120aff
- (void)writeTo:(id)arg1;	// IMP=0x0000000000120aa2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012087b
- (id)dictionaryRepresentation;	// IMP=0x00000000001207a6
- (id)description;	// IMP=0x00000000001206f7
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasCoordinate;

@end
