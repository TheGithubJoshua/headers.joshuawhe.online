//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class DDFlightAction;

__attribute__((visibility("hidden")))
@interface DDAutoCloseNavigationController : UINavigationController
{
    DDFlightAction *_target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001470f
@property __weak DDFlightAction *target; // @synthesize target=_target;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000014625
- (void)closePressed;	// IMP=0x000000000001460c

@end
