//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (AppAnalytics)
- (void)transaction:(CDUnknownBlockType)arg1;	// IMP=0x0020000000087760
- (void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(_Bool)arg3;	// IMP=0x0020000000087670
- (void)pushSessionData:(id)arg1 submitEventQueues:(_Bool)arg2;	// IMP=0x00200000000875c0
- (void)pushSessionData:(id)arg1 traits:(id)arg2;	// IMP=0x0020000000087550
- (void)pushSessionData:(id)arg1;	// IMP=0x00200000000872a0
- (void)endSessionWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000088b80
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0020000000088a00
- (void)endSync;	// IMP=0x0020000000088890
- (void)endSession;	// IMP=0x0020000000088730
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 startDate:(id)arg4 timestampJitter:(id)arg5;	// IMP=0x00200000000884b0
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3 startDate:(id)arg4;	// IMP=0x0020000000087f00
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 startDate:(id)arg3;	// IMP=0x0020000000087d60
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2 identifier:(id)arg3;	// IMP=0x0020000000087b00
- (void)startSessionForKind:(long long)arg1 withName:(id)arg2;	// IMP=0x00200000000879b0
- (void)flushWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000088e10
@end
