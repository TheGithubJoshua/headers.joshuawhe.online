//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSURLDataParser : NSObject
{
}

+ (id)_canonicalizeMessageURL:(id)arg1;	// IMP=0x0010000000025d4a
+ (long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)arg1;	// IMP=0x0010000000025c94
+ (id)parseURL:(id)arg1 originalString:(id)arg2;	// IMP=0x00100000000258d7
+ (id)parseURL:(id)arg1;	// IMP=0x00100000000258c3
+ (id)parseString:(id)arg1;	// IMP=0x0010000000025718

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
