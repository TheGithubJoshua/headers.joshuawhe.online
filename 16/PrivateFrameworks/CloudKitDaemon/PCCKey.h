//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PCCKey : NSObject
{
    struct pcc_invocation_key *_secret;	// 8 = 0x8
}

@property struct pcc_invocation_key *secret; // @synthesize secret=_secret;
- (void)dealloc;	// IMP=0x000000000034b8f9
- (void)clear;	// IMP=0x000000000034b8e6
- (id)decrypt:(id)arg1;	// IMP=0x000000000034b805
- (id)encrypt:(id)arg1;	// IMP=0x000000000034b731
- (id)init;	// IMP=0x000000000034b6ec

@end
