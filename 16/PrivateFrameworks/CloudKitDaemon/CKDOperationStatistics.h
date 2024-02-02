//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDOperationMetrics, NSMutableDictionary, NSString;

@interface CKDOperationStatistics : NSObject
{
    NSString *_operationClassName;	// 8 = 0x8
    NSMutableDictionary *_recentErrorsByDate;	// 16 = 0x10
    unsigned long long _operationCount;	// 24 = 0x18
    CKDOperationMetrics *_aggregateCKMetrics;	// 32 = 0x20
    CKDOperationMetrics *_aggregateMMCSMetrics;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e2cc7
@property(readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics; // @synthesize aggregateMMCSMetrics=_aggregateMMCSMetrics;
@property(readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics; // @synthesize aggregateCKMetrics=_aggregateCKMetrics;
@property(readonly) unsigned long long operationCount; // @synthesize operationCount=_operationCount;
@property(readonly, nonatomic) NSMutableDictionary *recentErrorsByDate; // @synthesize recentErrorsByDate=_recentErrorsByDate;
@property(readonly, nonatomic) NSString *operationClassName; // @synthesize operationClassName=_operationClassName;
- (id)CKStatusReportArray;	// IMP=0x00000000000e24ab
- (void)merge:(id)arg1;	// IMP=0x00000000000e1f75
- (void)addOperation:(id)arg1;	// IMP=0x00000000000e1a3c
- (id)_trimmedError:(id)arg1;	// IMP=0x00000000000e14f3
- (void)_addMetrics:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00000000000e1326
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e11d4
- (id)initWithOperationClassName:(id)arg1;	// IMP=0x00000000000e1134

@end
