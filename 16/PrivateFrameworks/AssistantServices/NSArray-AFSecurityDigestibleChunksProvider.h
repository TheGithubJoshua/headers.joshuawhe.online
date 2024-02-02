//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (AFSecurityDigestibleChunksProvider)
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000004c020
- (id)af_objectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000a1815
- (id)af_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000a17c3
- (id)af_lenientMappedDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00200000000a1605
- (id)_af_lenient:(_Bool)arg1 map:(CDUnknownBlockType)arg2;	// IMP=0x00200000000a1428
- (id)af_lenientMappedArray:(CDUnknownBlockType)arg1;	// IMP=0x00200000000a140e
- (id)af_mappedArray:(CDUnknownBlockType)arg1;	// IMP=0x00200000000a13f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
