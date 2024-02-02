//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class MFIMAPConnection, MFIMAPResponse, _MFIMAPCommandParameters;

@protocol MFIMAPConnectionDelegate <NSObject>

@optional
- (_Bool)shouldStartIdleForConnection:(MFIMAPConnection *)arg1;
- (void)setHighestModSequence:(unsigned long long)arg1;
- (void)setServerMessageCount:(unsigned long long)arg1;
- (void)willRemoveDelegation:(MFIMAPConnection *)arg1;
- (void)connectionDidDisconnect:(MFIMAPConnection *)arg1;
- (void)connection:(MFIMAPConnection *)arg1 didReceiveResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
- (_Bool)connection:(MFIMAPConnection *)arg1 shouldHandleUntaggedResponse:(MFIMAPResponse *)arg2 forCommand:(_MFIMAPCommandParameters *)arg3;
@end
