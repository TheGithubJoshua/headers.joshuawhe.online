//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDUnifiedActionModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_buttonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d388be
- (unsigned long long)hash;	// IMP=0x0000000000d388a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d38807
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d38647
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d384e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d384d9
- (id)jsonRepresentation;	// IMP=0x0000000000d383c7
- (id)dictionaryRepresentation;	// IMP=0x0000000000d38024
- (id)description;	// IMP=0x0000000000d37f75

@end
