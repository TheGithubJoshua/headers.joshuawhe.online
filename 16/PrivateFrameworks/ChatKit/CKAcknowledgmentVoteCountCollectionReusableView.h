//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView
{
    UILabel *_countLabel;	// 8 = 0x8
}

+ (id)supplementaryViewKind;	// IMP=0x00600000003c2ce0
+ (id)reuseIdentifier;	// IMP=0x00600000003c2cd3
- (void).cxx_destruct;	// IMP=0x00000000003c308c
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void)configureWithAcknowledgmentTally:(id)arg1;	// IMP=0x00000000003c2f79
- (void)layoutSubviews;	// IMP=0x00000000003c2ecb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003c2ced

@end
