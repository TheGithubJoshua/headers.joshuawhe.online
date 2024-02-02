//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSUIWebJSRequest, NSDictionary;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSResponse : NSObject
{
    NSDictionary *_body;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    AMSUIWebJSRequest *_originalRequest;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000922f7
- (void).cxx_destruct;	// IMP=0x00000000000925bd
@property(readonly, nonatomic) AMSUIWebJSRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000923ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000922ff
- (id)initWithRequest:(id)arg1 duration:(double)arg2;	// IMP=0x000000000009227d

@end
