//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64Value32Pair : PBCodable
{
    unsigned long long _key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    CDStruct_a4cc0a70 _flags;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x00000000003fac63
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fabb0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fab31
- (void)writeTo:(id)arg1;	// IMP=0x00000000003faabf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003faab2
- (id)jsonRepresentation;	// IMP=0x00000000003fa79e
- (id)dictionaryRepresentation;	// IMP=0x00000000003fa692
- (id)description;	// IMP=0x00000000003fa5e3

@end
