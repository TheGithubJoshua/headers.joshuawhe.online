//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (HomeKitClient)
+ (_Bool)hm_setAssistantIdentifierSalt:(id)arg1;	// IMP=0x008000000060b169
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;	// IMP=0x008000000060b14e
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x008000000060b092
+ (void)hm_setIdentifierSalt:(id)arg1;	// IMP=0x008000000060b03a
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;	// IMP=0x008000000060b01f
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;	// IMP=0x008000000060af65
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;	// IMP=0x008000000060af49
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x008000000060af30
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;	// IMP=0x008000000060ac3c
- (id)hm_convertToData;	// IMP=0x001000000060971e
@end
