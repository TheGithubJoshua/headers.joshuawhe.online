//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupHandleIntent.h>

@interface SAIntentGroupHandleIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x006000000000c8f8
- (long long)ins_analyticsEndEventType;	// IMP=0x006000000000c8ed
- (long long)ins_analyticsBeginEventType;	// IMP=0x006000000000c8e2
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x006000000000c67e
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x006000000000c66c
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x006000000000c65a
- (id)ins_protobufEncodedIntent;	// IMP=0x006000000000c648
- (id)ins_jsonEncodedIntent;	// IMP=0x006000000000c636
@end
