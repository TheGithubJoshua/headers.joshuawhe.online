//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PLRegionsClusteringItem <NSObject>
@property(readonly, nonatomic) NSString *pl_uuid;
@property(readonly, nonatomic) NSDate *pl_date;
@property(readonly, nonatomic) double pl_gpsHorizontalAccuracy;
@property(readonly, nonatomic) struct CLLocationCoordinate2D pl_coordinate;
@end
