//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest
{
    CDUnknownBlockType _quotaFetchedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f912e
@property(copy, nonatomic) CDUnknownBlockType quotaFetchedBlock; // @synthesize quotaFetchedBlock=_quotaFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000001f905b
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001f8f54
- (id)generateRequestOperations;	// IMP=0x00000000001f8e86
- (id)requestOperationClasses;	// IMP=0x00000000001f8e1a

@end
