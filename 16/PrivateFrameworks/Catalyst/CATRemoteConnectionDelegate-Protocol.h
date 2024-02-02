//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATRemoteConnection, CATRemoteConnectionTrustDecision, NSData, NSError, NSInputStream, NSURL;

@protocol CATRemoteConnectionDelegate <NSObject>

@optional
- (void)connectionDidClose:(CATRemoteConnection *)arg1;
- (void)connectionDidOpen:(CATRemoteConnection *)arg1;
- (void)connection:(CATRemoteConnection *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveStreamData:(NSData *)arg2 moreComing:(_Bool)arg3;
- (void)connection:(CATRemoteConnection *)arg1 didFailToSendDataWithStream:(NSInputStream *)arg2 userInfo:(id)arg3 error:(NSError *)arg4;
- (void)connection:(CATRemoteConnection *)arg1 didSendDataWithStream:(NSInputStream *)arg2 userInfo:(id)arg3;
- (void)connection:(CATRemoteConnection *)arg1 didWriteDataFromStream:(NSInputStream *)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4 userInfo:(id)arg5;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveDataRequestWithURL:(NSURL *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didReceiveData:(NSData *)arg2;
- (void)connection:(CATRemoteConnection *)arg1 didFailToSendData:(NSData *)arg2 userInfo:(id)arg3 error:(NSError *)arg4;
- (void)connection:(CATRemoteConnection *)arg1 didSendData:(NSData *)arg2 userInfo:(id)arg3;
- (void)connectionDidSecure:(CATRemoteConnection *)arg1;
- (void)connection:(CATRemoteConnection *)arg1 encounteredTrustDecisionWhileTryingToSecure:(CATRemoteConnectionTrustDecision *)arg2;
- (void)connectionWillSecure:(CATRemoteConnection *)arg1;
@end
