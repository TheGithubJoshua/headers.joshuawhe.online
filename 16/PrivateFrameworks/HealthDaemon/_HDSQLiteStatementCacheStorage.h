//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _HDSQLiteStatementCacheStorage : NSObject
{
    _HDSQLiteStatementCacheStorage *_parentStorage;	// 8 = 0x8
    struct __CFDictionary *_statementsBySQL;	// 16 = 0x10
    struct __CFDictionary *_statementsByKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000844356
- (void)dealloc;	// IMP=0x00000000008442b5
- (id)init;	// IMP=0x00000000008442a9

@end
