//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue64PairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000403798
- (unsigned long long)hash;	// IMP=0x000000000040377b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004036e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000403544
- (void)writeTo:(id)arg1;	// IMP=0x0000000000403414
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000403205
- (id)jsonRepresentation;	// IMP=0x00000000004031f6
- (id)dictionaryRepresentation;	// IMP=0x0000000000402f87
- (id)description;	// IMP=0x0000000000402ed8

@end
