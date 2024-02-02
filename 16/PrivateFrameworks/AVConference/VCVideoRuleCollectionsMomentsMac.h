//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VCHardwareSettingsMacProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMomentsMac
{
    id <VCHardwareSettingsMacProtocol> _hardwareSettings;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x006000000028516c
- (id)getMomentsImageTypes;	// IMP=0x00000000002851a3
- (id)getMomentsVideoCodecs;	// IMP=0x000000000028517f
- (unsigned char)getMomentsCapabilities;	// IMP=0x0000000000285174
- (id)initWithHardwareSettings:(id)arg1;	// IMP=0x0000000000285105

@end
