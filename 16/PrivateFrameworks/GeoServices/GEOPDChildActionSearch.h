//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDRelatedSearchSuggestion, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionSearch : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDRelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ba68e2
- (unsigned long long)hash;	// IMP=0x0000000000ba68c5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ba682b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ba67a0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ba6745
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ba6736
- (id)jsonRepresentation;	// IMP=0x0000000000ba6624
- (id)dictionaryRepresentation;	// IMP=0x0000000000ba6424
- (id)description;	// IMP=0x0000000000ba6375

@end
