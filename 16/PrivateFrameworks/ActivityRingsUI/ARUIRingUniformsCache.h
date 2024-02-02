//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface ARUIRingUniformsCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)cacheWithLimit:(unsigned long long)arg1;	// IMP=0x0060000000014f34
+ (id)defaultCache;	// IMP=0x0060000000014f06
- (void).cxx_destruct;	// IMP=0x00000000000150d4
- (void)clearCache;	// IMP=0x00000000000150be
- (id)uniformsForRing:(id)arg1 renderedInContext:(id)arg2;	// IMP=0x0000000000014fdb
- (id)initWithLimit:(unsigned long long)arg1;	// IMP=0x0000000000014f6a

@end
