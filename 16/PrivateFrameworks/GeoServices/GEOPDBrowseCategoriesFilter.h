//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategoriesFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _includeAllCategoriesForVenue;	// 16 = 0x10
    struct {
        unsigned int has_includeAllCategoriesForVenue:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000e2c0cc
- (unsigned long long)hash;	// IMP=0x0000000000e2c09e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2bffc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e2bf7c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e2bf19
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e2bf0a
- (id)jsonRepresentation;	// IMP=0x0000000000e2b8c8
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2b6f4
- (id)description;	// IMP=0x0000000000e2b645

@end
