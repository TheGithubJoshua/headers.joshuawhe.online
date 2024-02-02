//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreen
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000003406fd
- (_Bool)setupMacDecodingOnlyRules;	// IMP=0x000000000034158c
- (_Bool)setupH264Rules;	// IMP=0x0000000000340cbe
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;	// IMP=0x00000000003409b1
- (void)initSupportedPayloads;	// IMP=0x000000000034095d
- (id)initForMacDecodingOnly;	// IMP=0x0000000000340891
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x000000000034072b

@end
