//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, HKMedicationsNumberToStringMap, NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface HKMedicationsResolver : NSObject
{
    HDSQLiteDatabase *_db;	// 8 = 0x8
    NSURL *_assetUrl;	// 16 = 0x10
    _Bool _dbReady;	// 24 = 0x18
    long long _numberOfNewNgrams;	// 32 = 0x20
    long long _numberOfUsedNgrams;	// 40 = 0x28
    _Bool _looksGeneric;	// 48 = 0x30
    HKMedicationsNumberToStringMap *_ingredients;	// 56 = 0x38
    HKMedicationsNumberToStringMap *_tradenames;	// 64 = 0x40
    NSDictionary *_abbreviations;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000993e
- (_Bool)hkt_setUpDatabase;	// IMP=0x000000000000984b
- (_Bool)hkt_looksLikeGenericInText:(id)arg1;	// IMP=0x0000000000009841
- (id)hkt_ngramsWithError:(inout id *)arg1;	// IMP=0x00000000000096ec
- (long long)hkt_ngramIdCountWithError:(inout id *)arg1;	// IMP=0x0000000000009609
- (id)hkt_createNgramMapsWithError:(inout id *)arg1;	// IMP=0x00000000000095ff
- (_Bool)hkt_prepareNgramAssetWithError:(inout id *)arg1;	// IMP=0x00000000000095c4
- (id)hkt_ngramsFrom:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3;	// IMP=0x00000000000095ba
- (long long)consecutiveLCSUsingTranscript:(id)arg1 prediction:(id)arg2;	// IMP=0x00000000000093fc
- (id)filter:(id)arg1 transcripts:(id)arg2 criterion:(float)arg3 limit:(long long)arg4 error:(inout id *)arg5;	// IMP=0x00000000000079d5
- (id)resolveText:(id)arg1 error:(inout id *)arg2;	// IMP=0x0000000000006ea9
- (void)processNgramLine:(id)arg1 n:(long long)arg2;	// IMP=0x0000000000005eb7
- (_Bool)resetInMemoryDBWithError:(inout id *)arg1;	// IMP=0x000000000000518d
- (_Bool)resetResolverWithError:(inout id *)arg1;	// IMP=0x0000000000005174
- (void)dealloc;	// IMP=0x0000000000004f29
- (id)initWithAssetUrl:(id)arg1;	// IMP=0x0000000000004e4f

@end
