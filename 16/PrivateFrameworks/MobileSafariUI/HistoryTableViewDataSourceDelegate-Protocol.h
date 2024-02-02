//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class HistoryTableViewDataSource, NSIndexPath;

@protocol HistoryTableViewDataSourceDelegate <NSObject>
- (void)historyTableViewDataSource:(HistoryTableViewDataSource *)arg1 didChangeRowAtIndexPath:(NSIndexPath *)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSource:(HistoryTableViewDataSource *)arg1 didChangeSectionAtIndex:(long long)arg2 forChangeType:(long long)arg3;
- (void)historyTableViewDataSourceDidChangeContent:(HistoryTableViewDataSource *)arg1;
- (void)historyTableViewDataSourceWillChangeContent:(HistoryTableViewDataSource *)arg1;
- (void)historyTableViewDataSourceDidLoadContent:(HistoryTableViewDataSource *)arg1;
@end
