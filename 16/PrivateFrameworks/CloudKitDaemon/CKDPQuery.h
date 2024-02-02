//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable
{
    NSMutableArray *_filters;	// 8 = 0x8
    int _queryOperator;	// 16 = 0x10
    NSMutableArray *_sorts;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _distinct;	// 40 = 0x28
    struct {
        unsigned int queryOperator:1;
        unsigned int distinct:1;
    } _has;	// 44 = 0x2c
}

+ (Class)sortsType;	// IMP=0x001000000016376d
+ (Class)filtersType;	// IMP=0x001000000016369b
+ (Class)typesType;	// IMP=0x00100000001635c9
- (void).cxx_destruct;	// IMP=0x0000000000165425
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
@property(retain, nonatomic) NSMutableArray *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000165021
- (unsigned long long)hash;	// IMP=0x0000000000164f65
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000164e0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000164976
- (void)copyTo:(id)arg1;	// IMP=0x0000000000164748
- (void)writeTo:(id)arg1;	// IMP=0x0000000000164405
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001643f8
- (id)dictionaryRepresentation;	// IMP=0x000000000016399a
- (id)description;	// IMP=0x00000000001638eb
- (int)StringAsQueryOperator:(id)arg1;	// IMP=0x0000000000163884
- (id)queryOperatorAsString:(int)arg1;	// IMP=0x000000000016382e
@property(nonatomic) _Bool hasQueryOperator;
@property(nonatomic) int queryOperator; // @synthesize queryOperator=_queryOperator;
@property(nonatomic) _Bool hasDistinct;
- (id)sortsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000163750
- (unsigned long long)sortsCount;	// IMP=0x0000000000163733
- (void)addSorts:(id)arg1;	// IMP=0x00000000001636c9
- (void)clearSorts;	// IMP=0x00000000001636ac
- (id)filtersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016367e
- (unsigned long long)filtersCount;	// IMP=0x0000000000163661
- (void)addFilters:(id)arg1;	// IMP=0x00000000001635f7
- (void)clearFilters;	// IMP=0x00000000001635da
- (id)typesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001635ac
- (unsigned long long)typesCount;	// IMP=0x000000000016358f
- (void)addTypes:(id)arg1;	// IMP=0x0000000000163525
- (void)clearTypes;	// IMP=0x0000000000163508

@end
