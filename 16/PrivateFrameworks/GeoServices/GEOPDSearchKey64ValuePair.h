//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValuePair : PBCodable
{
    unsigned long long _key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
    struct {
        unsigned int has_key:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003feced
- (unsigned long long)hash;	// IMP=0x00000000003feca3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003febde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003feb4d
- (void)writeTo:(id)arg1;	// IMP=0x00000000003feae8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003feadb
- (id)jsonRepresentation;	// IMP=0x00000000003fe841
- (id)dictionaryRepresentation;	// IMP=0x00000000003fe76a
- (id)description;	// IMP=0x00000000003fe6bb

@end
