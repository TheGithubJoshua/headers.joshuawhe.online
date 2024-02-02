//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface JEAtomicCounter : NSObject
{
    _Atomic long long _value;	// 8 = 0x8
}

- (id)description;	// IMP=0x000000000002c3ef
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c353
- (unsigned long long)hash;	// IMP=0x000000000002c341
- (long long)decrement;	// IMP=0x000000000002c32e
- (long long)increment;	// IMP=0x000000000002c31d
@property(readonly) long long currentValue;
- (id)init;	// IMP=0x000000000002c2ff
- (id)initWithInitialValue:(long long)arg1;	// IMP=0x000000000002c2c2

@end
