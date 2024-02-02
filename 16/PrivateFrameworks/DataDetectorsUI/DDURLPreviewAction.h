//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDPreviewAction.h"

__attribute__((visibility("hidden")))
@interface DDURLPreviewAction : DDPreviewAction
{
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x0080000000009fef
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x0080000000009e95
- (id)commitURL;	// IMP=0x000000000000a166
- (void)setPreviewMode:(_Bool)arg1;	// IMP=0x000000000000a11a
- (_Bool)requiresEmbeddingNavigationController;	// IMP=0x000000000000a112
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x000000000000a10c
- (id)createViewController;	// IMP=0x000000000000a059
- (id)menuActions;	// IMP=0x0000000000009a51
- (_Bool)showMenuTitle;	// IMP=0x0000000000009a49

@end
