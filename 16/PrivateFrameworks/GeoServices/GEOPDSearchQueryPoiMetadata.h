//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryPoiMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b17a9f
- (unsigned long long)hash;	// IMP=0x0000000000b17a82
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b179e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b1784b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b1771b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b1770c
- (id)jsonRepresentation;	// IMP=0x0000000000b176fd
- (id)dictionaryRepresentation;	// IMP=0x0000000000b1747c
- (id)description;	// IMP=0x0000000000b173cd

@end
