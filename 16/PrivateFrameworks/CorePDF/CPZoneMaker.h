//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPCharSequence;

__attribute__((visibility("hidden")))
@interface CPZoneMaker : NSObject
{
    CPCharSequence *charactersOnPage;	// 8 = 0x8
}

- (id)newZoneForStraddlersFrom:(id)arg1;	// IMP=0x00000000000656bd
- (void)addObjectsToStraddler:(id)arg1 from:(id)arg2;	// IMP=0x00000000000655ee
- (void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2;	// IMP=0x00000000000651e4
- (void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2;	// IMP=0x0000000000064e15
- (void)makeZonesWithBoundaryIn:(id)arg1;	// IMP=0x0000000000062674
- (void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2;	// IMP=0x000000000006258d
- (void)mergeQualifyingRectanglesIn:(id)arg1;	// IMP=0x0000000000062073
- (unsigned int)categorizeGraphicsIn:(id)arg1;	// IMP=0x0000000000061ec7
- (void)makeZonesIn:(id)arg1;	// IMP=0x0000000000061a28
- (_Bool)overlap:(id)arg1 with:(id)arg2;	// IMP=0x00000000000619a3
- (void)dealloc;	// IMP=0x0000000000061968

@end
