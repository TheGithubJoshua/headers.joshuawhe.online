//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementRangeDiscrete : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_elements;	// 16 = 0x10
    unsigned int _selectedMaxElementIndex;	// 24 = 0x18
    unsigned int _selectedMinElementIndex;	// 28 = 0x1c
    struct {
        unsigned int has_selectedMaxElementIndex:1;
        unsigned int has_selectedMinElementIndex:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000e5ce88
- (unsigned long long)hash;	// IMP=0x0000000000e5ce1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e5cd33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e5cb3a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e5c995
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e5c986
- (id)jsonRepresentation;	// IMP=0x0000000000e5c874
- (id)dictionaryRepresentation;	// IMP=0x0000000000e5c407
- (id)description;	// IMP=0x0000000000e5c358

@end
