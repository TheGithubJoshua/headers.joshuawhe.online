//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPShape;

__attribute__((visibility("hidden")))
@interface CPZoneBorderNeighbor : NSObject
{
    CPShape *neighborShape;	// 8 = 0x8
    int shapeSide;	// 16 = 0x10
}

- (int)shapeSide;	// IMP=0x0000000000060f8f
- (void)setShapeSide:(int)arg1;	// IMP=0x0000000000060f86
- (id)neighborShape;	// IMP=0x0000000000060f7c
- (void)setNeighborShape:(id)arg1;	// IMP=0x0000000000060f4e
- (void)dealloc;	// IMP=0x0000000000060f13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060eef
- (id)initSuper;	// IMP=0x0000000000060ec0
- (id)init;	// IMP=0x0000000000060e7d

@end
