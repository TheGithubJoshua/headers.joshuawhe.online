//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MUPlaceHoursFormatter : NSObject
{
    _Bool _formatAMPM;	// 8 = 0x8
    NSString *_hoursString;	// 16 = 0x10
    NSArray *_AMPMSymbols;	// 24 = 0x18
}

+ (id)_hoursMonospacedFont;	// IMP=0x00600000000aef17
+ (id)hoursFormatterFromHoursStringComponents:(id)arg1 AMPMSymbols:(id)arg2;	// IMP=0x00600000000aee87
- (void).cxx_destruct;	// IMP=0x00000000000af1a3
@property(readonly, nonatomic) NSArray *AMPMSymbols; // @synthesize AMPMSymbols=_AMPMSymbols;
@property(readonly, nonatomic) NSString *hoursString; // @synthesize hoursString=_hoursString;
- (id)buildDefaultPlacecardHoursString;	// IMP=0x00000000000af06e
- (id)buildAttributedHourStringWithHourFont:(id)arg1 AMPMFont:(id)arg2 hourColor:(id)arg3 AMPMColor:(id)arg4;	// IMP=0x00000000000ae9fb
- (id)initWithHoursString:(id)arg1 AMPMSymbols:(id)arg2;	// IMP=0x00000000000ae890

@end
