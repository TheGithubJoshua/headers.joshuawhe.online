//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPUI/NSObject-Protocol.h>

@class UIViewController;

@protocol CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate <NSObject>

@optional
- (void)localSecretValidationCanCancelWithViewController:(UIViewController *)arg1 completion:(void (^)(_Bool))arg2;
@end
