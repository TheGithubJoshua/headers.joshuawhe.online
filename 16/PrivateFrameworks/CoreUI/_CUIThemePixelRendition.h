//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CUIThemeRendition.h"

@class CUIRenditionMetrics, CUIRenditionSliceInformation, NSMutableArray, _CSIRenditionBlockData;

__attribute__((visibility("hidden")))
@interface _CUIThemePixelRendition : CUIThemeRendition
{
    unsigned int _nimages;	// 216 = 0xd8
    struct CGImage *_image[16];	// 224 = 0xe0
    struct CGImage *_unslicedImage;	// 352 = 0x160
    CUIRenditionMetrics *_renditionMetrics;	// 360 = 0x168
    CUIRenditionSliceInformation *_sliceInformation;	// 368 = 0x170
    _CSIRenditionBlockData *_cachedBlockDataBGRX;	// 376 = 0x178
    _CSIRenditionBlockData *_cachedBlockDataRGBX;	// 384 = 0x180
    _CSIRenditionBlockData *_cachedBlockDataGray;	// 392 = 0x188
    unsigned long long _sourceRowbytes;	// 400 = 0x190
    NSMutableArray *_layers;	// 408 = 0x198
    struct CGSize _unslicedSize;	// 416 = 0x1a0
}

- (_Bool)edgesOnly;	// IMP=0x00000000000739f9
- (_Bool)isScaled;	// IMP=0x0000000000073988
- (_Bool)isTiled;	// IMP=0x00000000000738cd
- (id)sliceInformation;	// IMP=0x00000000000738bc
- (id)metrics;	// IMP=0x000000000007389e
- (id)layerReferences;	// IMP=0x000000000007388d
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x0000000000073766
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x0000000000073717
- (struct CGImage *)unslicedImage;	// IMP=0x00000000000736e2
- (void)dealloc;	// IMP=0x00000000000735e4
- (unsigned long long)sourceRowbytes;	// IMP=0x00000000000735d3
- (void)setSharedBlockData:(id)arg1;	// IMP=0x00000000000732e4
- (id)copySharedBlockDataWithPixelFormat:(int)arg1;	// IMP=0x00000000000732bb
- (struct CGSize)unslicedSize;	// IMP=0x0000000000073278
- (int)pixelFormat;	// IMP=0x000000000007324c
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x0000000000071a18
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x0000000000071241

@end
