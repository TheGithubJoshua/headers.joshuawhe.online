//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKSegmentedSectionDataSource, GKSegmentedSectionHeaderView;

@protocol GKSegmentedSectionDataSourceEventHandler
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;

@optional
- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 segmentedHeaderDidLoad:(GKSegmentedSectionHeaderView *)arg2;
@end
