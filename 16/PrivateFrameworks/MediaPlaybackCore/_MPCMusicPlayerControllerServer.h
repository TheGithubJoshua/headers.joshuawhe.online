//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, MPMusicPlayerControllerSystemCache, MPMusicPlayerQueueDescriptor, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface _MPCMusicPlayerControllerServer : NSObject
{
    MPMusicPlayerQueueDescriptor *_queueDescriptor;	// 8 = 0x8
    MPMusicPlayerQueueDescriptor *_preparingDescriptor;	// 16 = 0x10
    CDUnknownBlockType _prepareCompletionHandler;	// 24 = 0x18
    _Bool _skipWaitingForLikelyToKeepUp;	// 32 = 0x20
    _Bool _resumed;	// 33 = 0x21
    MPCPlaybackEngine *_playbackEngine;	// 40 = 0x28
    MPMusicPlayerControllerSystemCache *_systemCache;	// 48 = 0x30
    NSXPCListener *_listener;	// 56 = 0x38
    NSMutableArray *_activeConnections;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006aa5a
@property(readonly, nonatomic) NSMutableArray *activeConnections; // @synthesize activeConnections=_activeConnections;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) MPMusicPlayerControllerSystemCache *systemCache; // @synthesize systemCache=_systemCache;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_applyServerStateUpdateRecord:(id)arg1;	// IMP=0x000000000006a893
- (void)_addContentItemIDsToUpdateRecord:(id)arg1;	// IMP=0x000000000006a777
- (void)_registerForCommandHandlersRegisteredNotification;	// IMP=0x000000000006a6a0
- (void)_handleCommandHandlersRegistered:(id)arg1;	// IMP=0x000000000006a659
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000006a021
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x0000000000069ee0
- (void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;	// IMP=0x0000000000069e35
- (void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;	// IMP=0x0000000000069ddd
- (void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;	// IMP=0x0000000000069d85
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x0000000000069cf1
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x0000000000069bc7
- (void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;	// IMP=0x0000000000069a0f
- (void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;	// IMP=0x000000000006996d
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x000000000006964c
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x00000000000694de
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x000000000006943a
- (void)setDisableAutomaticCanBeNowPlaying:(_Bool)arg1;	// IMP=0x00000000000693a4
- (void)setRelativeVolume:(float)arg1;	// IMP=0x00000000000692f3
- (void)beginPlaybackAtHostTime:(id)arg1;	// IMP=0x000000000006928b
- (void)prerollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000691fc
- (void)performQueueModifications:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006908d
- (void)setUserQueueModificationsDisabled:(_Bool)arg1;	// IMP=0x0000000000068f20
- (void)getUserQueueModificationsDisabledWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068d8a
- (void)setPlaybackRate:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068c42
- (void)setElapsedTime:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068afa
- (void)getShuffleModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068964
- (void)setShuffleMode:(long long)arg1;	// IMP=0x00000000000687f7
- (void)getRepeatModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068661
- (void)setRepeatMode:(long long)arg1;	// IMP=0x00000000000684f4
- (void)endSeek;	// IMP=0x0000000000068392
- (void)beginSeekWithDirection:(long long)arg1;	// IMP=0x0000000000068225
- (void)reshuffle;	// IMP=0x00000000000680c3
- (void)skipWithBehavior:(long long)arg1;	// IMP=0x0000000000067f56
- (void)stop;	// IMP=0x0000000000067f42
- (void)pauseWithFadeDuration:(long long)arg1;	// IMP=0x0000000000067dd5
- (void)play;	// IMP=0x0000000000067c73
- (void)_appendPlaybackContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067909
- (void)appendDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067844
- (void)_prependPlaybackContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000674f1
- (void)prependDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006742c
- (void)getDescriptorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000006738d
- (void)setDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006715a
- (void)getTimeSnapshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000066fc4
- (id)_timeSnapshotWithElapsedTime:(double)arg1 rate:(float)arg2;	// IMP=0x0000000000066d6c
- (void)getImageForArtworkIdentifier:(id)arg1 itemIdentifier:(id)arg2 atSize:(struct CGSize)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000066c59
- (void)setNowPlayingItem:(id)arg1 itemIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066a60
- (void)getNowPlayingAtIndex:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000668b7
- (id)_nowPlayingWithItem:(id)arg1;	// IMP=0x00000000000663ad
- (void)getNowPlayingsForContentItemIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000661e4
- (void)getNowPlayingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000006604e
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (void)stopServer;	// IMP=0x0000000000065fb0
- (void)resumeIfNeeded;	// IMP=0x0000000000065ded
- (void)startServer;	// IMP=0x0000000000065cd5
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000065c3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
