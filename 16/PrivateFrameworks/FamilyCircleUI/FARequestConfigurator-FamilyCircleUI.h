//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircle/FARequestConfigurator.h>

@protocol FAURLProvider;

@interface FARequestConfigurator (FamilyCircleUI)
+ (void)addMessageEligibilityToPayload:(id)arg1;	// IMP=0x0020000000013789
- (id)_urlEndpointForEventType:(id)arg1;	// IMP=0x001000000001358f
- (void)_urlForEventType:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001342c
- (void)requestForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000130c7
@property(readonly, nonatomic) id <FAURLProvider> urlProvider;
@end
