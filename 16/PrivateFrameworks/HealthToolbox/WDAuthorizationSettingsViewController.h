//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKAuthorizationSettingsViewController.h>

@class WDProfile;

__attribute__((visibility("hidden")))
@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController
{
    WDProfile *_profile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000072c5c
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000072a13
- (id)specialCellWithIdentifier:(id)arg1 textLabelText:(id)arg2;	// IMP=0x0000000000072923
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007275a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000726db
- (id)sectionsForAuthController:(id)arg1;	// IMP=0x00000000000725d9
- (void)_applicationWillEnterForeground;	// IMP=0x00000000000725c7
- (id)initWithProfile:(id)arg1 style:(long long)arg2;	// IMP=0x00000000000724dd

@end
