//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATMessage, CATRemoteTransport;

__attribute__((visibility("hidden")))
@interface _CATRemoteTransportSendMessageOperation : CATOperation
{
    CATRemoteTransport *_transport;	// 8 = 0x8
    CATMessage *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f82f
@property(retain, nonatomic) CATMessage *message; // @synthesize message=_message;
@property(nonatomic) __weak CATRemoteTransport *transport; // @synthesize transport=_transport;
- (void)didFailWithError:(id)arg1;	// IMP=0x000000000001f7cb
- (void)didSendData;	// IMP=0x000000000001f7b7
- (void)didEncodeData:(id)arg1;	// IMP=0x000000000001f6e1
- (void)main;	// IMP=0x000000000001f417
- (_Bool)isAsynchronous;	// IMP=0x000000000001f40f

@end
