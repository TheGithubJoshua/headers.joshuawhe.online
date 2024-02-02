//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKTextInlineNotificationView
{
    UIView *_contentView;	// 8 = 0x8
    UIButton *_textButton;	// 16 = 0x10
    UIView *_greyOutView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000212448
@property(retain, nonatomic) UIView *greyOutView; // @synthesize greyOutView=_greyOutView;
@property(retain, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000212362
- (id)contentView;	// IMP=0x000000000021234d
- (void)_handleContentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002122b7
- (void)_handleTouchUpOutside:(id)arg1;	// IMP=0x00000000002122a3
- (void)_handleTouchUpInside:(id)arg1;	// IMP=0x0000000000212203
- (void)_handleTouchDown:(id)arg1;	// IMP=0x00000000002121ec
@property(nonatomic) _Bool greyedOut; // @dynamic greyedOut;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;	// IMP=0x0000000000211da3
- (void)dealloc;	// IMP=0x0000000000211d2e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000211995

@end
