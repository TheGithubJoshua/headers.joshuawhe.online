//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSMutableIndexSet, NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingBatchSyncSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_sessionTimer;	// 16 = 0x10
    unsigned long long _batchIndex;	// 24 = 0x18
    NSMutableIndexSet *_ackedBatchIndices;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 40 = 0x28
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 48 = 0x30
    NSObject<OS_os_activity> *_changeWaitActivity;	// 56 = 0x38
    NSObject<OS_os_activity> *_sessionActivity;	// 64 = 0x40
    unsigned int _state;	// 72 = 0x48
    _Bool _errorIsLocal;	// 76 = 0x4c
    _Bool _hasSentEnd;	// 77 = 0x4d
    _SYMessageTimerTable *_timers;	// 80 = 0x50
    double _sessionStartTime;	// 88 = 0x58
    _Bool _canRestart;	// 96 = 0x60
    _Bool _canRollback;	// 97 = 0x61
    _Bool _cancelled;	// 98 = 0x62
}

- (void).cxx_destruct;	// IMP=0x000000000001b085
- (_Bool)wasCancelled;	// IMP=0x000000000001b073
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x000000000001b063
- (_Bool)canRollback;	// IMP=0x000000000001b051
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000001b041
- (_Bool)canRestart;	// IMP=0x000000000001b02f
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001b012
- (_Bool)_handleBatchSyncEndResponse:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001acbc
- (_Bool)_handleBatchAck:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001aa28
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000001a91a
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a1f3
- (void)_installStateListener;	// IMP=0x000000000001a0b6
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;	// IMP=0x000000000001a00c
- (void)_installTimers;	// IMP=0x0000000000019d0c
- (void)_processNextState;	// IMP=0x0000000000019ab6
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x00000000000199d1
- (void)_sessionComplete;	// IMP=0x00000000000198d0
- (void)_notifySessionComplete;	// IMP=0x00000000000196c1
- (void)_sendSyncStart;	// IMP=0x0000000000019431
- (void)_sendSyncRestart;	// IMP=0x00000000000192ac
- (void)_sendSyncCancelled;	// IMP=0x0000000000018ee0
- (void)_sendSyncCompleteAndRunBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018925
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x000000000001853f
- (void)_fetchNextBatch;	// IMP=0x0000000000017dcd
- (void)_waitForMessageWindow;	// IMP=0x0000000000017b96
- (void)_setupChangeConcurrency;	// IMP=0x0000000000017aa5
- (double)remainingSessionTime;	// IMP=0x0000000000017a34
- (unsigned long long)protocolVersion;	// IMP=0x0000000000017a29
- (_Bool)isSending;	// IMP=0x0000000000017a21
- (_Bool)isResetSync;	// IMP=0x0000000000017a19
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x00000000000178e4
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000001779a
- (unsigned int)state;	// IMP=0x000000000001775e
- (id)initWithService:(id)arg1;	// IMP=0x00000000000173e8

@end
