//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTrigger.h>

@class NSSet, NSString, NSUUID;

@interface HMTrigger (HFDebugging)
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;	// IMP=0x00100000001f8887
+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;	// IMP=0x00100000001f8454
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a510b
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;	// IMP=0x00100000000d4e91
- (id)hf_naturalLangugeDetailsWithOptions:(id)arg1;	// IMP=0x00100000000d4d54
- (_Bool)hf_affectsProfiles:(id)arg1;	// IMP=0x00100000001f8e8c
- (_Bool)hf_affectsCharacteristics:(id)arg1;	// IMP=0x00100000001f8d71
- (_Bool)hf_affectsHomeKitObject:(id)arg1;	// IMP=0x00100000001f89a4
- (id)hf_forceDisableReasons;	// IMP=0x00100000001f828e
- (_Bool)hf_shouldDisplayTrigger;	// IMP=0x00100000001f8045
@property(readonly, nonatomic) NSSet *hf_anonymousActions;
@property(readonly, nonatomic) _Bool hf_isShortcutOwned;
@property(readonly, nonatomic) _Bool hf_requiresConfirmationToRun;
- (unsigned long long)hf_triggerType;	// IMP=0x00100000001f7e34
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x00100000001f7e22
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00100000001f7d92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
