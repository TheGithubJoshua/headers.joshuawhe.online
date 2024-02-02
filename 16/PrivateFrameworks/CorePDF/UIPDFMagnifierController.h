//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, CAShapeLayer, UIPDFPageView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPDFMagnifierController : NSObject
{
    UIWindow *_textEffectsWindow;	// 8 = 0x8
    UIView *_textEffectsSubView;	// 16 = 0x10
    CALayer *_loLayer;	// 24 = 0x18
    CALayer *_hiLayer;	// 32 = 0x20
    CALayer *_imageContainer;	// 40 = 0x28
    CALayer *_imageLayer;	// 48 = 0x30
    CAShapeLayer *_selectionLayer;	// 56 = 0x38
    CALayer *_maskLayer;	// 64 = 0x40
    double _power;	// 72 = 0x48
    struct CGSize _magnifierSize;	// 80 = 0x50
    _Bool _loupe;	// 96 = 0x60
    struct CGPoint _touchPoint;	// 104 = 0x68
    struct CGPoint _pointToMagnify;	// 120 = 0x78
    double _enlargementScale;	// 136 = 0x88
    CALayer *_leftBar;	// 144 = 0x90
    CALayer *_leftGrabber;	// 152 = 0x98
    CALayer *_rightBar;	// 160 = 0xa0
    CALayer *_rightGrabber;	// 168 = 0xa8
    struct CGSize _controlPointSize;	// 176 = 0xb0
    struct CGColor *_grabberColor;	// 192 = 0xc0
    unsigned long long _pageRotation;	// 200 = 0xc8
    _Bool _visible;	// 208 = 0xd0
    UIPDFPageView *pageView;	// 216 = 0xd8
}

@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView;
- (_Bool)visible;	// IMP=0x000000000008ca3e
- (void)hide;	// IMP=0x000000000008c9f2
- (void)move;	// IMP=0x000000000008c992
- (void)showMagnifier;	// IMP=0x000000000008c97c
- (void)showLoupe;	// IMP=0x000000000008c966
- (void)_show;	// IMP=0x000000000008c8ad
- (void)setPosition:(struct CGPoint)arg1 viewPoint:(struct CGPoint)arg2;	// IMP=0x000000000008c890
- (void)dealloc;	// IMP=0x000000000008c823
- (id)init;	// IMP=0x000000000008c755
- (void)setImageContainerMask;	// IMP=0x000000000008eafc
- (id)imageReceived:(id)arg1 data:(id)arg2;	// IMP=0x000000000008ea73
- (void)placeImage;	// IMP=0x000000000008e594
- (void)setSelectionPath;	// IMP=0x000000000008e391
- (void)setSelectionPath:(struct CGPath *)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x000000000008e0de
- (void)addBling;	// IMP=0x000000000008dfaa
- (void)setLayerPositions;	// IMP=0x000000000008de26
- (void)setImageContainerPositionLoupe;	// IMP=0x000000000008dc74
- (void)setImageContainerPositionMagnifier;	// IMP=0x000000000008dad1
- (struct CGPoint)pointToMagnifyInPDFSpace;	// IMP=0x000000000008d895
- (struct CGPoint)viewPointInTextEffectsSpace;	// IMP=0x000000000008d84d
- (struct CGPoint)convertPointToEnlargedSpace:(struct CGPoint)arg1;	// IMP=0x000000000008d683
- (struct CGRect)convertRectToEnlargedSpace:(struct CGRect)arg1;	// IMP=0x000000000008d471
- (struct CGRect)convertRectToRotatedPage:(struct CGRect)arg1;	// IMP=0x000000000008d285
- (struct CGPoint)convertPointToRotatedPage:(struct CGPoint)arg1;	// IMP=0x000000000008d164
- (struct CGPoint)convertViewPointToEnlargedSpace:(struct CGPoint)arg1;	// IMP=0x000000000008d0a3
- (_Bool)isSelectionUniformlyRotated:(double *)arg1;	// IMP=0x000000000008cdf1
- (void)setPower;	// IMP=0x000000000008cc17
- (void)tearDownLayers;	// IMP=0x000000000008ca64
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000008f8d3
- (void)addTextRangeHandles;	// IMP=0x000000000008f6fb
- (void)setTextRangeHandlePositions;	// IMP=0x000000000008eda3

@end
