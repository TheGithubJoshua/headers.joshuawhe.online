//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUQuickControlViewInteractionDelegate-Protocol.h>

@class HFColorPalette, NSIndexPath, UIView;
@protocol HUQuickControlAuxiliaryView, HUQuickControlInteractiveView;

@protocol HUQuickControlColorViewInteractionDelegate <HUQuickControlViewInteractionDelegate>
- (void)hideAuxiliaryViewForControlView:(id <HUQuickControlInteractiveView>)arg1;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 showAuxiliaryView:(UIView<HUQuickControlAuxiliaryView> *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 colorPaletteDidChange:(HFColorPalette *)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 didSelectColorAtIndexPath:(NSIndexPath *)arg2;
- (void)presentFullColorViewForControlView:(id <HUQuickControlInteractiveView>)arg1 selectedColorIndexPath:(NSIndexPath *)arg2;
@end
