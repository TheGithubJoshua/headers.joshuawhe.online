//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/NSObject-Protocol.h>

@protocol HKNumberFormatter;

@protocol HKDecimalPrecisionRule <NSObject>
- (id <HKNumberFormatter>)numberFormatter;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)minimumDecimalPrecision;
- (long long)maximumDecimalPrecision;
@end
