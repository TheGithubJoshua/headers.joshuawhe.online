//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VCMoments, VCRedundancyControllerVideo, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCVideoStreamSendGroup
{
    int _captureSource;	// 424 = 0x1a8
    _Atomic unsigned char _videoPriority;	// 428 = 0x1ac
    unsigned char _lastVideoPriority;	// 429 = 0x1ad
    _Bool _videoPriorityEnabled;	// 430 = 0x1ae
    long long _maxSupportedMultiwayVideoResolution;	// 432 = 0x1b0
    struct CGSize _maxScreenCaptureSize;	// 440 = 0x1b8
    int _captureFrameRate;	// 456 = 0x1c8
    int _maxSupportedCaptureFrameRate;	// 460 = 0x1cc
    NSMutableSet *_videoPayloadTypes;	// 464 = 0x1d0
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;	// 472 = 0x1d8
    struct tagVCMemoryPool *_videoRedundancyPool;	// 480 = 0x1e0
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;	// 488 = 0x1e8
    VCRedundancyControllerVideo *_redundancyController;	// 496 = 0x1f0
    VCMoments *_moments;	// 504 = 0x1f8
    double _fecRatio;	// 512 = 0x200
    VCVideoRule *_captureVideoRule;	// 520 = 0x208
    NSMutableDictionary *_pendingActiveUplinkStreams;	// 528 = 0x210
    NSMutableArray *_temporalStreamsIDs;	// 536 = 0x218
    id _clientCaptureController;	// 544 = 0x220
    unsigned int _activeTemporalTierBitmap;	// 552 = 0x228
    id _videoSinkDelegate;	// 560 = 0x230
    _Bool _isStreamInputCaptureSource;	// 568 = 0x238
    _Bool _hasPeerSubscribedStreams;	// 569 = 0x239
    _Bool _allowSuspendProvisionedStreams;	// 570 = 0x23a
    unsigned int _totalNumFramesReceived;	// 572 = 0x23c
    unsigned int _totalNumFramesProcessed;	// 576 = 0x240
    _Bool _initTime;	// 580 = 0x244
}

@property(nonatomic) int captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000003920a4
- (unsigned long long)maxStreamFrameRate;	// IMP=0x0000000000391c9f
- (void)computeMaxScreenCaptureSize;	// IMP=0x0000000000391789
- (void)updateSendSampleRTPTimestamp:(unsigned int)arg1 sampleRate:(double)arg2 systemTime:(double)arg3;	// IMP=0x000000000039177d
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;	// IMP=0x00000000003915f8
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;	// IMP=0x0000000000391473
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000003912ee
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x00000000003912e8
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000003912e2
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000390f04
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;	// IMP=0x0000000000390de1
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000390c57
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x00000000003908be
- (id)clientCaptureRule;	// IMP=0x00000000003908ad
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x00000000003906de
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x00000000003900e9
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x000000000038fe2e
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;	// IMP=0x000000000038f79e
- (void)deregisterClientForScreenShare;	// IMP=0x000000000038f798
- (void)registerClientForScreenShare;	// IMP=0x000000000038f792
- (void)registerConfigForScreenShare;	// IMP=0x000000000038f78c
- (id)captureConfigForScreenShare;	// IMP=0x000000000038f583
- (id)stopCapture;	// IMP=0x000000000038f2e9
- (id)startCapture;	// IMP=0x000000000038eb18
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x000000000038e281
- (_Bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;	// IMP=0x000000000038e1d2
- (_Bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;	// IMP=0x000000000038de30
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;	// IMP=0x000000000038dc77
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2;	// IMP=0x000000000038dba4
- (void)setUplinkBitrateCapWifi:(unsigned int)arg1;	// IMP=0x000000000038daf4
- (void)setUplinkBitrateCapCell:(unsigned int)arg1;	// IMP=0x000000000038da44
- (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;	// IMP=0x000000000038d2d8
- (id)activeStreamKeys;	// IMP=0x000000000038d08f
- (void)updateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3;	// IMP=0x000000000038c808
- (void)updateSuspendedState;	// IMP=0x000000000038c802
- (void)deregisterForScreenCapture;	// IMP=0x000000000038c7fc
- (id)registerForScreenCapture;	// IMP=0x000000000038c7f4
- (unsigned int)getPixelFormat;	// IMP=0x000000000038c7a5
- (void)deregisterForVideoCapture;	// IMP=0x000000000038c79f
- (void)registerForVideoCapture:(int)arg1;	// IMP=0x000000000038c799
- (struct CGSize)getCaptureEncodingSize;	// IMP=0x000000000038c772
- (void)flushVideoRedundancyEventQueue;	// IMP=0x000000000038c72c
- (void)processVideoEventQueue;	// IMP=0x000000000038c564
- (void)processVideoPriority;	// IMP=0x000000000038c476
- (void)setupVideoPriority;	// IMP=0x000000000038c221
- (void)didStart;	// IMP=0x000000000038c1cf
- (void)updateBandwidthAllocatorStreamTokenState;	// IMP=0x000000000038bef7
- (id)willStart;	// IMP=0x000000000038beab
- (void)updateVideoStreamAndProcessFrame:(id)arg1 sampleBuffer:(struct opaqueCMSampleBuffer *)arg2 lastSentAudioHostTime:(double)arg3 lastSentAudioSampleTime:(unsigned int)arg4 frameTime:(CDStruct_1b6d18a9)arg5 attribute:(CDStruct_51555cf6)arg6;	// IMP=0x000000000038bdd2
- (_Bool)generateKeyFrameWithStreamID:(id)arg1;	// IMP=0x000000000038bbae
- (_Bool)setupUplinkVideoStreamController;	// IMP=0x000000000038b882
- (int)maxCaptureCameraFrameRate;	// IMP=0x000000000038b877
- (int)maxCaptureFrameRate;	// IMP=0x000000000038b846
- (long long)maxCaptureResolution;	// IMP=0x000000000038b83b
- (void)cleanupRedundancySettings;	// IMP=0x000000000038b7f7
- (void)setupPayloadTypes;	// IMP=0x000000000038b56f
- (id)setupRedundancyController;	// IMP=0x000000000038b19a
- (_Bool)setupRedundancySettings;	// IMP=0x000000000038af8a
- (void)dealloc;	// IMP=0x000000000038aeb9
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000038a7c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
