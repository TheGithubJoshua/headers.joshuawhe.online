//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteSessionData : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000674240
- (unsigned long long)hash;	// IMP=0x0000000000674236
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006741f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000674196
- (void)writeTo:(id)arg1;	// IMP=0x0000000000674179
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000067416a
- (id)jsonRepresentation;	// IMP=0x0000000000673c9e
- (id)dictionaryRepresentation;	// IMP=0x0000000000673b33
- (id)description;	// IMP=0x0000000000673a84

@end
