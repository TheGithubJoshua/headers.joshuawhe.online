//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPAVRoute, MPAVRoutingViewController, MPAVRoutingViewItem;

@protocol MPAVRoutingViewControllerDelegate <NSObject>

@optional
- (void)routingViewController:(MPAVRoutingViewController *)arg1 didSelectRoutingViewItem:(MPAVRoutingViewItem *)arg2;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(MPAVRoutingViewController *)arg1;
- (void)routingViewControllerDidUpdateContents:(MPAVRoutingViewController *)arg1;
- (void)routingViewController:(MPAVRoutingViewController *)arg1 didPickRoute:(MPAVRoute *)arg2;
@end
