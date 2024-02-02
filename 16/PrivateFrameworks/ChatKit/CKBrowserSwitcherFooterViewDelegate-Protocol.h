//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserSwitcherFooterView, NSIndexPath;

@protocol CKBrowserSwitcherFooterViewDelegate <NSObject>
- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didMagnify:(_Bool)arg2;
- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;

@optional
- (NSIndexPath *)indexPathOfCurrentlySelectedPluginInSwitcherView:(CKBrowserSwitcherFooterView *)arg1;
@end
