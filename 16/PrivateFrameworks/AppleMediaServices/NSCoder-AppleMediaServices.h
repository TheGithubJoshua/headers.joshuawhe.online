//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (AppleMediaServices)
- (void)ams_encodePropertyListDictionary:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00700000002c57fb
- (void)ams_encodePropertyListArray:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00700000002c5634
- (void)ams_encodeJSONDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000002c546b
- (void)ams_encodeJSONArray:(id)arg1 forKey:(id)arg2;	// IMP=0x00700000002c52a2
- (id)ams_decodePropertyListDictionaryForKey:(id)arg1;	// IMP=0x00700000002c5084
- (id)ams_decodePropertyListArrayForKey:(id)arg1;	// IMP=0x00700000002c4e66
- (id)ams_decodeJSONDictionaryForKey:(id)arg1;	// IMP=0x00700000002c4c48
- (id)ams_decodeJSONArrayForKey:(id)arg1;	// IMP=0x00700000002c4a2a
- (_Bool)_ams_encodePropertyListObject:(id)arg1 forKey:(id)arg2 format:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00700000002c4992
- (_Bool)_ams_encodeJSONObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00700000002c4748
- (id)_ams_decodeJSONObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00700000002c46a8
- (id)_ams_decodePropertyListObjectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00700000002c4605
@end
