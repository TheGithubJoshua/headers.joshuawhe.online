//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOMapItemAttribution, NSString;
@protocol GEOPictureItemContainer, GEOTextItemContainer;

@protocol GEOAnnotatedItemList
@property(readonly, nonatomic) GEOMapItemAttribution *attribution;
@property(readonly, nonatomic) int annotatedItemStyle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer;
@property(readonly, nonatomic) id <GEOPictureItemContainer> pictureItemContainer;
@end
