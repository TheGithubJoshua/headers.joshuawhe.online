//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NBPhoneNumberDesc : NSObject
{
    NSString *_nationalNumberPattern;	// 8 = 0x8
    NSString *_possibleNumberPattern;	// 16 = 0x10
    NSArray *_possibleLength;	// 24 = 0x18
    NSArray *_possibleLengthLocalOnly;	// 32 = 0x20
    NSString *_exampleNumber;	// 40 = 0x28
    NSData *_nationalNumberMatcherData;	// 48 = 0x30
    NSData *_possibleNumberMatcherData;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002e23c
@property(readonly, nonatomic) NSData *possibleNumberMatcherData; // @synthesize possibleNumberMatcherData=_possibleNumberMatcherData;
@property(readonly, nonatomic) NSData *nationalNumberMatcherData; // @synthesize nationalNumberMatcherData=_nationalNumberMatcherData;
@property(readonly, nonatomic) NSString *exampleNumber; // @synthesize exampleNumber=_exampleNumber;
@property(readonly, nonatomic) NSArray *possibleLengthLocalOnly; // @synthesize possibleLengthLocalOnly=_possibleLengthLocalOnly;
@property(readonly, nonatomic) NSArray *possibleLength; // @synthesize possibleLength=_possibleLength;
@property(readonly, nonatomic) NSString *possibleNumberPattern; // @synthesize possibleNumberPattern=_possibleNumberPattern;
@property(readonly, nonatomic) NSString *nationalNumberPattern; // @synthesize nationalNumberPattern=_nationalNumberPattern;
- (id)description;	// IMP=0x000000000002e0df
- (id)initWithEntry:(id)arg1;	// IMP=0x000000000002df63

@end
