//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSArray, NSString;

@interface NSData (HMFCalendarCreation)
+ (id)shortDescription;	// IMP=0x0010000000008165
- (id)decodeCalendar;	// IMP=0x0010000000002ff9
- (id)decodeArrayOfDateComponents;	// IMP=0x0010000000002f55
- (id)decodeDateComponents;	// IMP=0x0010000000002f37
- (id)hmf_zeroingCopy;	// IMP=0x0010000000006f97
@property(readonly) NSString *hmf_hexadecimalRepresentation;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;	// IMP=0x001000000000872c
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000084d5
@property(readonly, getter=hmf_isZeroed) _Bool hmf_zeroed;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)decodeTimeZone;	// IMP=0x001000000002ae21

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;
@end
