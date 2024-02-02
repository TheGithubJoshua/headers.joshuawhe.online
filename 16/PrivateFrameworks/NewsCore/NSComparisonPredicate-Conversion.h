//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSComparisonPredicate.h>

@interface NSComparisonPredicate (Conversion)
- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id *)arg2;	// IMP=0x006000000016d2b2
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016cd3b
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016c541
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016c37c
- (unsigned long long)_comparisonOptionForString:(id)arg1;	// IMP=0x006000000016c25e
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016bdb8
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016badd
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016b899
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016b514
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016afd8
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000016ab7a
@end
