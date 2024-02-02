//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUTextPairVerticalCardView, NSArray, NSString, UIView, UIViewController;
@protocol GEOAnnotatedItemList, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceListItemSectionController : MUPlaceSectionController
{
    MUTextPairVerticalCardView *_textVerticalCardView;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    id <GEOAnnotatedItemList> _annotatedList;	// 24 = 0x18
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f135f
- (_Bool)isImpressionable;	// IMP=0x00000000000f1357
- (int)analyticsModuleType;	// IMP=0x00000000000f134c
- (void)_captureUserAction:(int)arg1;	// IMP=0x00000000000f1335
- (void)_performPunchout;	// IMP=0x00000000000f11f4
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)_setupSubviews;	// IMP=0x00000000000f0cf7
- (id)initWithMapItem:(id)arg1 annotatedList:(id)arg2;	// IMP=0x00000000000f0ba9

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
