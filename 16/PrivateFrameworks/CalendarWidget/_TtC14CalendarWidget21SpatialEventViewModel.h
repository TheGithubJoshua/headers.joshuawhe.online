//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC14CalendarWidget21SpatialEventViewModel : NSObject
{
    MISSING_TYPE *event;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 790072 = 0xc0e38
    MISSING_TYPE *lineHeight;	// 760 = 0x2f8
    MISSING_TYPE *viewStartDate;	// 790072 = 0xc0e38
    MISSING_TYPE *viewEndDate;	// 0 = 0x0
    MISSING_TYPE *frame;	// 0 = 0x0
    MISSING_TYPE *visibleHeight;	// 0 = 0x0
    MISSING_TYPE *travelTimeHeight;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *unPinnedViewFrame;	// 0 = 0x0
    MISSING_TYPE *hideTravelTime;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *visibleHeightLocked;	// 0 = 0x0
}

+ (double)barToBarHorizontalDistanceIncludingBarWidth;	// IMP=0x00100000000784a0
- (void).cxx_destruct;	// IMP=0x00000000000787f0
- (id)init;	// IMP=0x0000000000078770
@property(nonatomic, readonly) NSString *description;
- (void)setTravelTimeHeight:(double)arg1;	// IMP=0x0000000000078480
- (void)setVisibleHeight:(double)arg1;	// IMP=0x0000000000078460
@property(nonatomic) _Bool visibleHeightLocked; // @synthesize visibleHeightLocked;
- (struct CGRect)stagedFrame;	// IMP=0x0000000000078420
- (void)setStagedFrame:(struct CGRect)arg1;	// IMP=0x0000000000078400
@property(nonatomic, readonly) double viewMaxNaturalTextHeight;
@property(nonatomic, readonly) double enoughHeightForOneLine;
@property(nonatomic) _Bool hideTravelTime; // @synthesize hideTravelTime;
@property(nonatomic, readonly) NSDate *end;
@property(nonatomic, readonly) NSDate *start;
@property(nonatomic, readonly) NSDate *startWithTravelTime;
@property(nonatomic, readonly) NSString *eventIdentifier;
@property(nonatomic) struct CGRect unPinnedViewFrame; // @synthesize unPinnedViewFrame;

@end
