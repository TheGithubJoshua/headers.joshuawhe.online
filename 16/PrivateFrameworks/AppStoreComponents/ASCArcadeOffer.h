//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString;
@protocol ASCOffer;

__attribute__((visibility("hidden")))
@interface ASCArcadeOffer : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    id <ASCOffer> _notSubscribedOffer;	// 56 = 0x38
    id <ASCOffer> _subscribedOffer;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000013d77
- (void).cxx_destruct;	// IMP=0x0000000000014d10
@property(readonly, nonatomic) id <ASCOffer> subscribedOffer; // @synthesize subscribedOffer=_subscribedOffer;
@property(readonly, nonatomic) id <ASCOffer> notSubscribedOffer; // @synthesize notSubscribedOffer=_notSubscribedOffer;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014591
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000014274
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014269
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014091
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013d7f
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 notSubscribedOffer:(id)arg7 subscribedOffer:(id)arg8;	// IMP=0x0000000000013bd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
