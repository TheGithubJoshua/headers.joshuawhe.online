//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedEventDecomposedMessage
{
    NSDictionary *_backingDict;	// 8 = 0x8
    NSArray *_segments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000047f07
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)argumentAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047e53
- (id)placeholderAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047db7
- (id)literalPrefixAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047d1b
- (unsigned long long)state;	// IMP=0x0000000000047bf4
- (unsigned long long)placeholderCount;	// IMP=0x0000000000047acd
- (id)initWithDict:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000047683

@end
