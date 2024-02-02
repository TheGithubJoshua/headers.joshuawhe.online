//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (XRCapabilityRequirements)
+ (id)dvtiu_errorWithCode:(unsigned long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;	// IMP=0x0080000000020564
+ (id)dvtiuErrorWithFormat:(id)arg1;	// IMP=0x00800000000203fb
+ (id)dvtiuErrorWithCode:(unsigned long long)arg1;	// IMP=0x00800000000203d5
- (void)enumerateFailedCapabilityRequirements:(CDUnknownBlockType)arg1;	// IMP=0x00100000000197ca
- (_Bool)isCapabilityRequirementFailure;	// IMP=0x001000000001975b
- (_Bool)dvtiu_isNoSuchFileOrDirectoryError;	// IMP=0x0010000000020910
- (_Bool)dvtiu_isURLAlreadyExistsError;	// IMP=0x0010000000020818
- (_Bool)getRecommendedRecoveryAction:(id *)arg1 parameter:(id *)arg2;	// IMP=0x00100000000206fb
@end
