//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKTranscriptLabelCell.h"

@class NSAttributedString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell
{
    _Bool _showReportSMSSpam;	// 8 = 0x8
    UIButton *_reportSpamButton;	// 16 = 0x10
    UILabel *_internalPhishingWarningLabel;	// 24 = 0x18
}

+ (id)reportSpamButton;	// IMP=0x0040000000422f90
+ (id)internalPhishingWarning;	// IMP=0x0040000000422e0c
+ (id)internalPhishingWarningLabel;	// IMP=0x0040000000422d5a
- (void).cxx_destruct;	// IMP=0x00000000004230f2
@property(readonly, nonatomic) UILabel *internalPhishingWarningLabel; // @synthesize internalPhishingWarningLabel=_internalPhishingWarningLabel;
@property(nonatomic) _Bool showReportSMSSpam; // @synthesize showReportSMSSpam=_showReportSMSSpam;
@property(retain, nonatomic) UIButton *reportSpamButton; // @synthesize reportSpamButton=_reportSpamButton;
- (void)prepareForReuse;	// IMP=0x0000000000422e9e
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
- (void)clearFilters;	// IMP=0x0000000000422bcf
- (void)addFilter:(id)arg1;	// IMP=0x0000000000422b0c
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x0000000000422677
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000042246e
- (void)configureForChatItem:(id)arg1 context:(id)arg2;	// IMP=0x000000000034c8b7

@end
