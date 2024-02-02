//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _categoryFilters;	// 24 = 0x18
    GEOLatLng *_center;	// 48 = 0x30
    struct GEOPDTimeRange _timeRange;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 68 = 0x44
    unsigned int _readerMarkLength;	// 72 = 0x48
    struct os_unfair_lock_s _readerLock;	// 76 = 0x4c
    int _count;	// 80 = 0x50
    int _radius;	// 84 = 0x54
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_count:1;
        unsigned int has_radius:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categoryFilters:1;
        unsigned int read_center:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000cfbd79
- (unsigned long long)hash;	// IMP=0x0000000000cfbc3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfbad1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfb8b6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfb623
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfb614
- (id)jsonRepresentation;	// IMP=0x0000000000cfa81d
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfa405
- (id)description;	// IMP=0x0000000000cfa356
- (void)dealloc;	// IMP=0x0000000000cf9682
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cf9626
- (id)init;	// IMP=0x0000000000cf95ca

@end
