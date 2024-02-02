//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FUAirline;

__attribute__((visibility("hidden")))
@interface FUFlightCodeShare : NSObject
{
    FUAirline *_airline;	// 8 = 0x8
    unsigned long long _flightNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000006515
- (void).cxx_destruct;	// IMP=0x00000000000066dc
@property unsigned long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) FUAirline *airline; // @synthesize airline=_airline;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000065e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000651d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000063dc

@end
