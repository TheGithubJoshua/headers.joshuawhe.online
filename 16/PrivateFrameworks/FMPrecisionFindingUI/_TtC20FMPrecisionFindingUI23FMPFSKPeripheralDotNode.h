//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface _TtC20FMPrecisionFindingUI23FMPFSKPeripheralDotNode
{
    MISSING_TYPE *experienceType;	// 8 = 0x8
    MISSING_TYPE *style;	// 16 = 0x10
    MISSING_TYPE *dotDiameter;	// 104 = 0x68
    MISSING_TYPE *pixelsPerInch;	// 112 = 0x70
    MISSING_TYPE *subScale;	// 120 = 0x78
    MISSING_TYPE *gimbalNode;	// 128 = 0x80
    MISSING_TYPE *diskNode;	// 136 = 0x88
    MISSING_TYPE *dotNode;	// 144 = 0x90
    MISSING_TYPE *dotCGPathNode;	// 152 = 0x98
    MISSING_TYPE *btRangingNode;	// 160 = 0xa0
    MISSING_TYPE *interativeRadiusBeaconNode;	// 168 = 0xa8
    MISSING_TYPE *isPlayingInitialPulse;	// 176 = 0xb0
    MISSING_TYPE *hasPlayedInitialPulse;	// 177 = 0xb1
    MISSING_TYPE *perimeterRotateOnceAction;	// 184 = 0xb8
    MISSING_TYPE *diskRadiusSpring;	// 192 = 0xc0
    MISSING_TYPE *dotScaleSpring;	// 200 = 0xc8
    MISSING_TYPE *angleSpring;	// 208 = 0xd0
    MISSING_TYPE *opacitySpring;	// 216 = 0xd8
    MISSING_TYPE *brightnessSpring;	// 224 = 0xe0
    MISSING_TYPE *xOffsetSpring;	// 232 = 0xe8
    MISSING_TYPE *yOffsetSpring;	// 240 = 0xf0
    MISSING_TYPE *headingSpring;	// 248 = 0xf8
    MISSING_TYPE *radiusFactorSpring;	// 256 = 0x100
    MISSING_TYPE *renderingColor;	// 264 = 0x108
    MISSING_TYPE *shouldApplyDiskRadius;	// 272 = 0x110
    MISSING_TYPE *diskRadius;	// 280 = 0x118
    MISSING_TYPE *presentedDiskRadius;	// 296 = 0x128
    MISSING_TYPE *shouldApplyDotScale;	// 305 = 0x131
    MISSING_TYPE *dotScale;	// 312 = 0x138
    MISSING_TYPE *presentedDotScale;	// 328 = 0x148
    MISSING_TYPE *shouldApplyAngle;	// 337 = 0x151
    MISSING_TYPE *angle;	// 344 = 0x158
    MISSING_TYPE *presentedAngle;	// 360 = 0x168
    MISSING_TYPE *shouldApplyOpacity;	// 369 = 0x171
    MISSING_TYPE *opacity;	// 376 = 0x178
    MISSING_TYPE *presentedOpacity;	// 392 = 0x188
    MISSING_TYPE *shouldApplyBrightness;	// 401 = 0x191
    MISSING_TYPE *brightness;	// 408 = 0x198
    MISSING_TYPE *presentedBrightness;	// 424 = 0x1a8
    MISSING_TYPE *shouldApplyOffset;	// 433 = 0x1b1
    MISSING_TYPE *offset;	// 440 = 0x1b8
    MISSING_TYPE *presentedOffset;	// 464 = 0x1d0
    MISSING_TYPE *presentedAbsoluteHeading;	// 488 = 0x1e8
    MISSING_TYPE *interactiveAngleFactor;	// 496 = 0x1f0
    MISSING_TYPE *shouldApplyRadiusFactor;	// 505 = 0x1f9
    MISSING_TYPE *radiusFactor;	// 512 = 0x200
    MISSING_TYPE *presentedRadiusFactor;	// 528 = 0x210
}

- (void).cxx_destruct;	// IMP=0x0000000000026e80
- (id)init;	// IMP=0x0000000000026d00
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025040

@end
