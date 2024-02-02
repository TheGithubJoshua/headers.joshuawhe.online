//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView
{
    LPImage *_image;	// 8 = 0x8
    LPImage *_filteredImage;	// 16 = 0x10
    LPImagePresentationProperties *_properties;	// 24 = 0x18
    LPImageViewStyle *_style;	// 32 = 0x20
    LPImageViewStyle *_originalStyle;	// 40 = 0x28
    long long _currentScalingMode;	// 48 = 0x30
    long long _platterReason;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006eb18
- (void)_setImageViewScalingMode:(long long)arg1;	// IMP=0x000000000006ea3e
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x000000000006e5a8
- (void)_updateScalingMode;	// IMP=0x000000000006e53b
- (id)_createOverlayViewWithOpacity:(double)arg1;	// IMP=0x000000000006e443
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006e0d0
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006defc
- (long long)scalingModeForSize:(struct CGSize)arg1;	// IMP=0x000000000006dafe
- (void)installDarkeningViewIfNeeded;	// IMP=0x000000000006da1b
- (_Bool)shouldApplyBackground;	// IMP=0x000000000006d9a0
- (void)layoutComponentView;	// IMP=0x000000000006d563
- (void)updateBorder;	// IMP=0x000000000006d21a
- (void)updateShadowPath;	// IMP=0x000000000006cc2b
- (void)updateCornerRadius;	// IMP=0x000000000006c754
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000006c5a0
- (void)ensureImageView;	// IMP=0x000000000006b8e3
- (long long)_filter;	// IMP=0x000000000006b862
- (id)initWithHost:(id)arg1 image:(id)arg2 properties:(id)arg3 style:(id)arg4;	// IMP=0x000000000006b6a3
- (id)initWithHost:(id)arg1;	// IMP=0x000000000006b695

@end
