//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MTVisualStylingProviderAdditions)
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x002000000000721c
- (void)_mt_applyVisualStyling:(id)arg1;	// IMP=0x002000000000cdcf
- (void)mt_removeAllVisualStyling;	// IMP=0x002000000000cd92
- (void)mt_applyVisualStyling:(id)arg1;	// IMP=0x002000000000cc98
- (void)mt_replaceVisualStyling:(id)arg1;	// IMP=0x002000000000cc46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
