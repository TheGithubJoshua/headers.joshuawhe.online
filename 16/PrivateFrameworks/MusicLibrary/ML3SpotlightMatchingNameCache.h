//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary, NSString;

__attribute__((visibility("hidden")))
@interface ML3SpotlightMatchingNameCache : NSObject
{
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> _matchingSet;	// 8 = 0x8
    NSString *_matchString;	// 48 = 0x30
    _Bool _idle;	// 56 = 0x38
    ML3MusicLibrary *_library;	// 64 = 0x40
}

+ (void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x006000000012baab
+ (void)initialize;	// IMP=0x006000000012ba67
- (id).cxx_construct;	// IMP=0x000000000012b61d
- (void).cxx_destruct;	// IMP=0x000000000012b60f
- (void)dealloc;	// IMP=0x000000000012b5d4
- (id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012b4eb

@end
