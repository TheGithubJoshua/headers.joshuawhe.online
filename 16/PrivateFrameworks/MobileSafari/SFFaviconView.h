//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageSymbolConfiguration, UIImageView;

__attribute__((visibility("hidden")))
@interface SFFaviconView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImage *_icon;	// 16 = 0x10
    UIColor *_themeColor;	// 24 = 0x18
    double _trailingInset;	// 32 = 0x20
    CDUnknownBlockType _trailingInsetChangeHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009b390
@property(copy, nonatomic) CDUnknownBlockType trailingInsetChangeHandler; // @synthesize trailingInsetChangeHandler=_trailingInsetChangeHandler;
@property(readonly, nonatomic) double trailingInset; // @synthesize trailingInset=_trailingInset;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (id)_determineIconBackingColorAndInsets:(struct UIEdgeInsets *)arg1;	// IMP=0x000000000009b10e
- (void)_updateIconBackingColorAndInset;	// IMP=0x000000000009af14
- (void)setTrailingInset:(double)arg1;	// IMP=0x000000000009aee1
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property(nonatomic) long long iconContentMode;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000009ad2b
- (void)layoutSubviews;	// IMP=0x000000000009ac8d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000009abdc

@end
