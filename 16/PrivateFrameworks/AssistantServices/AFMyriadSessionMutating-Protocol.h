//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSUUID;

@protocol AFMyriadSessionMutating <NSObject>
- (void)setElectionAdvertisementDataByIds:(NSDictionary *)arg1;
- (void)setCurrentElectionAdvertisementData:(NSData *)arg1;
- (void)setCurrentElectionAdvertisementId:(NSUUID *)arg1;
- (void)setSessionId:(NSUUID *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
@end
