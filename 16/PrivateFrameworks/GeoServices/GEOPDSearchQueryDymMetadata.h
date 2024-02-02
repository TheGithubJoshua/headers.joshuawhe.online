//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchQuerySynonymMetadata, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryDymMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_originalQuery;	// 16 = 0x10
    GEOPDSearchQuerySynonymMetadata *_synonymMetadata;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    struct {
        unsigned int has_type:1;
        unsigned int read_originalQuery:1;
        unsigned int read_synonymMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000aef6d4
- (unsigned long long)hash;	// IMP=0x0000000000aef649
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aef536
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aef361
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aef15b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aef14c
- (id)jsonRepresentation;	// IMP=0x0000000000aee710
- (id)dictionaryRepresentation;	// IMP=0x0000000000aee407
- (id)description;	// IMP=0x0000000000aee358
- (id)initWithData:(id)arg1;	// IMP=0x0000000000aedd87
- (id)init;	// IMP=0x0000000000aedd2b

@end
