//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@class HKConceptStore, HKHealthRecordsStore, NSArray, NSDate, NSString;

@protocol HRWDDisplayable <NSObject>
@property(readonly, nonatomic) _Bool isRemovedFromRemote;
@property(readonly, nonatomic) NSArray *conceptNameItems;
@property(readonly, nonatomic) NSString *titleDisplayStringForDetailViewController;
@property(readonly, nonatomic) _Bool canDefineConceptRoom;
@property(readonly, nonatomic) _Bool isDateLess;
@property(readonly, nonatomic) _Bool isDisplayable;
@property(readonly, nonatomic) NSDate *meaningfulDate;
@property(readonly, nonatomic) NSString *meaningfulDateString;
@property(readonly, nonatomic) NSString *meaningfulDateTitle;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)fetchAttachmentItemsWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 conceptStore:(HKConceptStore *)arg2 completion:(void (^)(NSArray *, NSString *))arg3;
- (void)fetchObservationDetailItemsWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 style:(long long)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchChartValueWithRangeWithHealthStore:(HKHealthRecordsStore *)arg1 completion:(void (^)(HKInspectableValueInRange *))arg2;
- (void)fetchStructuredFieldItemsWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 conceptStore:(HKConceptStore *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchDisplayNameItemWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)fetchConceptRoomItemsWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 conceptStore:(HKConceptStore *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(HKHealthRecordsStore *)arg1 conceptStore:(HKConceptStore *)arg2 completion:(void (^)(NSArray *))arg3;
@end
