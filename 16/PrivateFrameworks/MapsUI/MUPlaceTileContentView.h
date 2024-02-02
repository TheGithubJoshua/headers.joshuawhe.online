//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUImageView, MUPlaceTileCellConfiguration, MUStackLayout, NSString, UIImageView, UILayoutGuide;
@protocol MULabelViewProtocol, MUPlaceTileViewModel;

__attribute__((visibility("hidden")))
@interface MUPlaceTileContentView : UIView
{
    UIView<MULabelViewProtocol> *_titleLabel;	// 8 = 0x8
    UIView<MULabelViewProtocol> *_subtitleLabel;	// 16 = 0x10
    UIView<MULabelViewProtocol> *_footerLabel;	// 24 = 0x18
    MUImageView *_contentImageView;	// 32 = 0x20
    UIImageView *_badgeImageView;	// 40 = 0x28
    UILayoutGuide *_titleLayoutGuide;	// 48 = 0x30
    UILayoutGuide *_textLayoutGuide;	// 56 = 0x38
    MUStackLayout *_titleStackLayout;	// 64 = 0x40
    MUStackLayout *_textStackLayout;	// 72 = 0x48
    MUPlaceTileCellConfiguration *_configuration;	// 80 = 0x50
    id <MUPlaceTileViewModel> _viewModel;	// 88 = 0x58
}

+ (struct CGSize)_preferredSizeForViewModel:(id)arg1 cellConfiguration:(id)arg2 maximumMeasurements:(id)arg3;	// IMP=0x001000000009f56c
+ (struct CGSize)preferredSizeForViewModels:(id)arg1 cellConfiguration:(id)arg2;	// IMP=0x001000000009f34e
+ (double)preferredWidth;	// IMP=0x001000000009f340
- (void).cxx_destruct;	// IMP=0x000000000009fac1
@property(retain, nonatomic) id <MUPlaceTileViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000009f31b
@property(readonly, nonatomic) UIImageView *tileImageView;
- (void)_updateFonts;	// IMP=0x000000000009f11d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000009f032
- (void)_updateAppearance;	// IMP=0x000000000009ebb7
- (void)_setupConstraints;	// IMP=0x000000000009e6da
- (void)_setupSubviews;	// IMP=0x000000000009e34b
- (id)initWithCellConfiguration:(id)arg1;	// IMP=0x000000000009e291

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
