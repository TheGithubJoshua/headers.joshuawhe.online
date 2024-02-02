//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface AXElementVision__generated__Input : NSObject
{
    struct __CVBuffer *_image;	// 8 = 0x8
    double _iouThreshold;	// 16 = 0x10
    double _confidenceThreshold;	// 24 = 0x18
}

@property(nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property(nonatomic) double iouThreshold; // @synthesize iouThreshold=_iouThreshold;
@property(nonatomic) struct __CVBuffer *image; // @synthesize image=_image;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000026afc
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithImage:(struct __CVBuffer *)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3;	// IMP=0x0000000000026ac0

@end
