//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    VCPacketBundler *_audioBundler;	// 8 = 0x8
    VCAudioRedBuilder *_redBuilder;	// 16 = 0x10
    VCRedundancyControllerAudio *_redundancyController;	// 24 = 0x18
    struct opaqueVCAudioBufferList *_encodeBuffer;	// 32 = 0x20
    _Bool _lastIsTalking;	// 40 = 0x28
    double _lastTierSwitch;	// 48 = 0x30
    double _audioInterval;	// 56 = 0x38
    int _audioTierChangeRequestCount;	// 64 = 0x40
    int _audioTxBitrate;	// 68 = 0x44
    int _actualAudioSendingBitrate;	// 72 = 0x48
    unsigned int _lastSentAudioSampleTime;	// 76 = 0x4c
    unsigned char _inputMeter;	// 80 = 0x50
    long long _blockSize;	// 88 = 0x58
    float _blockSeconds;	// 96 = 0x60
    double _lastUpdateQualityIndicator;	// 104 = 0x68
    int _qualityIndicator;	// 112 = 0x70
    VCAudioTierPicker *_audioTierPicker;	// 120 = 0x78
    VCAudioTier *_currentAudioTier;	// 128 = 0x80
    VCAudioTier *_requestedAudioTier;	// 136 = 0x88
    char *_lastInputSampleBuffer;	// 144 = 0x90
    unsigned int _lastInputSampleBufferSize;	// 152 = 0x98
    int _audioHeaderSize;	// 156 = 0x9c
    _Bool _audioTierHysteresis;	// 160 = 0xa0
    void *_packetThread;	// 168 = 0xa8
    unsigned int _targetBitrate;	// 176 = 0xb0
    unsigned int _rateChangeCounter;	// 180 = 0xb4
    unsigned int _currentTargetBitrate;	// 184 = 0xb8
    unsigned int _currentDuplication;	// 188 = 0xbc
    unsigned int _redundancyPercentage;	// 192 = 0xc0
    double _redundancyInterval;	// 200 = 0xc8
    unsigned int _redundancyControllerNumPayloads;	// 208 = 0xd0
    unsigned int _redundancyControllerMaxDelay20ms;	// 212 = 0xd4
    AVCStatisticsCollector *_statisticsCollector;	// 216 = 0xd8
    _Bool _isAudioStalled;	// 224 = 0xe0
    unsigned int _sentAudioBytes;	// 228 = 0xe4
    unsigned int _encodedBytes;	// 232 = 0xe8
    unsigned int _totalTxAudioBytes;	// 236 = 0xec
    unsigned int _estimateTxAudioBytes;	// 240 = 0xf0
    unsigned int _audioFrameCounter;	// 244 = 0xf4
    unsigned int _silenceFrameCounter;	// 248 = 0xf8
    unsigned int _vadSegmentCounter;	// 252 = 0xfc
    struct tagHANDLE *_rtpHandle;	// 256 = 0x100
    struct tagHANDLE *_afrc;	// 264 = 0x108
    struct tagHANDLE *_mediaQueue;	// 272 = 0x110
    struct tagHANDLE *_rtpVideo;	// 280 = 0x118
    void *_controlInfoGenerator;	// 288 = 0x120
    _Bool _useRateControl;	// 296 = 0x128
    _Bool _isUseCaseWatchContinuity;	// 297 = 0x129
    _Bool _allowAudioSwitching;	// 298 = 0x12a
    _Bool _supportsAdaptation;	// 299 = 0x12b
    _Bool _needsPacketThread;	// 300 = 0x12c
    _Bool _isLocalCellular_LowestConnectionQuality;	// 301 = 0x12d
    _Bool _isRemoteCellular_LowestConnectionQuality;	// 302 = 0x12e
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;	// 303 = 0x12f
    _Bool _isRedEnabled;	// 304 = 0x130
    _Bool _includeRedSequenceOffset;	// 305 = 0x131
    unsigned int _redNumPayloads;	// 308 = 0x134
    unsigned int _redMaxDelay20ms;	// 312 = 0x138
    _Bool _transmitROC;	// 316 = 0x13c
    NSMutableArray *_audioPayloads;	// 320 = 0x140
    VCAudioPayload *_currentDTXPayload;	// 328 = 0x148
    VCAudioPayload *_currentAudioPayload;	// 336 = 0x150
    int _currentRedPayloadType;	// 344 = 0x158
    unsigned int _currentAudioCap;	// 348 = 0x15c
    struct tagVCAudioFrameFormat _inputFormat;	// 352 = 0x160
    struct opaqueRTCReporting *_reportingAgent;	// 400 = 0x190
    int _reportingModuleID;	// 408 = 0x198
    int _operatingMode;	// 412 = 0x19c
    VCTransportSession *_transportSession;	// 416 = 0x1a0
    id _delegate;	// 424 = 0x1a8
    _Bool _ignoreSilence;	// 432 = 0x1b0
    unsigned int _tierNetworkBitrate;	// 436 = 0x1b4
    _Bool _sendActiveVoiceOnly;	// 440 = 0x1b8
    unsigned int _qualityIndex;	// 444 = 0x1bc
    double _lastReportingCallbackTime;	// 448 = 0x1c0
    double _lastReportingCallbackTimeShort;	// 456 = 0x1c8
    CDStruct_b671a7c4 _currentChannelMetrics;	// 464 = 0x1d0
    _Bool _periodicReportingEnabled;	// 552 = 0x228
    struct tagVCIDSChannelDataFormat _idsChannelDataFormat;	// 560 = 0x230
    unsigned int _maxIDSStreamIdCount;	// 640 = 0x280
    NSArray *_supportedNumRedundantPayload;	// 648 = 0x288
    _Bool _currentDTXEnable;	// 656 = 0x290
    unsigned char _mediaControlInfoVersion;	// 657 = 0x291
    _Bool _alwaysOnAudioRedundancyEnabled;	// 658 = 0x292
    _Bool _cellularAllowRedLowBitratesEnabled;	// 659 = 0x293
    _Bool _wifiAllowRedLowBitratesEnabled;	// 660 = 0x294
    struct tagVCMemoryPool *_audioBundlePool;	// 664 = 0x298
    unsigned long long _remoteIDSParticipantID;	// 672 = 0x2a0
    _Bool _useChannelDataFormat;	// 680 = 0x2a8
    _Bool _useWiFiTiers;	// 681 = 0x2a9
    _Bool _supportsCodecBandwidthUpdate;	// 682 = 0x2aa
    struct ifnet_interface_advisory _lastNWConnectionNotification;	// 688 = 0x2b0
    struct tagVCCryptor *_sframeCryptor;	// 784 = 0x310
    struct tagVCAudioIssueDetector *_audioIssueDetector;	// 792 = 0x318
    unsigned int _rtpTimestampBase;	// 800 = 0x320
    _Bool _shouldApplyRedAsBoolean;	// 804 = 0x324
    unsigned int _sentAudioBytesShort;	// 808 = 0x328
    unsigned int _packetExpirationTimeInMillisecond;	// 812 = 0x32c
}

@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property _Bool periodicReportingEnabled; // @synthesize periodicReportingEnabled=_periodicReportingEnabled;
@property(retain, nonatomic) VCAudioTierPicker *audioTierPicker; // @synthesize audioTierPicker=_audioTierPicker;
@property(nonatomic) _Bool useWiFiTiers; // @synthesize useWiFiTiers=_useWiFiTiers;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) _Bool sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(nonatomic) CDStruct_b671a7c4 currentChannelMetrics; // @synthesize currentChannelMetrics=_currentChannelMetrics;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) _Bool isAudioStalled; // @synthesize isAudioStalled=_isAudioStalled;
@property(nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) _Bool isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int actualAudioSendingBitrate; // @synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000003b9171
- (void)reportAWDMetrics;	// IMP=0x00000000003b90c3
- (void)audioIssueDetectorStopAndFinalize;	// IMP=0x00000000003b8eb7
- (void)audioIssueDetectorProcessFrame:(struct opaqueVCAudioBufferList *)arg1 payloadType:(int)arg2 length:(unsigned short)arg3 bitRate:(unsigned short)arg4;	// IMP=0x00000000003b8e20
- (void)audioIssueDetectorCreateAndConfigure;	// IMP=0x00000000003b8bbd
- (void)reportRTCPPacket;	// IMP=0x00000000003b8ba5
- (void)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000003b89a0
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000003b8661
- (void)setStreamIDs:(id)arg1;	// IMP=0x00000000003b853d
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2;	// IMP=0x00000000003b842e
- (void)logTierInfo:(int)arg1;	// IMP=0x00000000003b82e2
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int encodedBytes;
- (unsigned int)sentAudioBytesShort;	// IMP=0x00000000003b8294
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (int)sendAudioPacket:(char *)arg1 payloadLength:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5 marker:(int)arg6 nextInterval:(float)arg7 padding:(char *)arg8 paddingLength:(unsigned char)arg9 sendReport:(int)arg10;	// IMP=0x00000000003b7fea
- (int)sendAudioPacket:(struct tagAudioPacketData)arg1;	// IMP=0x00000000003b7f5d
- (int)sendSframeEncryptedAudioPacket:(struct tagAudioPacketData)arg1;	// IMP=0x00000000003b7c53
- (void *)generateControlInfo;	// IMP=0x00000000003b7a3d
- (_Bool)sendAudioPacketImpl:(struct tagAudioPacketData *)arg1 bytesSent:(int *)arg2;	// IMP=0x00000000003b7923
- (void)stop;	// IMP=0x00000000003b76e4
- (void)start;	// IMP=0x00000000003b737d
- (void)useAudioTier:(id)arg1;	// IMP=0x00000000003b72df
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;	// IMP=0x00000000003b7118
- (void)updateAudioTxBitrate;	// IMP=0x00000000003b6c75
- (_Bool)setupAudioTierPicker;	// IMP=0x00000000003b6874
- (id)packetsPerBundle;	// IMP=0x00000000003b66b1
- (void)setupAudioHeaderSize;	// IMP=0x00000000003b661c
- (int)bundleAndSendSamples:(char *)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned int)arg4 bufferedSamples:(int)arg5 hasNewSamples:(_Bool)arg6 voiceActivity:(_Bool)arg7 priority:(unsigned char)arg8;	// IMP=0x00000000003b6129
- (int)sendAudioBundle:(_Bool)arg1 atTimeStamp:(unsigned int)arg2 nextInterval:(float)arg3;	// IMP=0x00000000003b5fa0
- (_Bool)chooseAudioNetworkBitrate;	// IMP=0x00000000003b5340
- (int)encodeAudio:(struct opaqueVCAudioBufferList *)arg1 numInputSamples:(int)arg2 outputBytes:(void *)arg3 numOutputBytes:(int)arg4 withPayload:(int *)arg5 isTalking:(_Bool)arg6;	// IMP=0x00000000003b4eda
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000003b4acd
- (void)encodeBundleAndSendAudio:(struct opaqueVCAudioBufferList *)arg1 sampleCount:(unsigned int)arg2;	// IMP=0x00000000003b4922
- (unsigned int)maximumSamplesPerFrame;	// IMP=0x00000000003b47ad
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;	// IMP=0x00000000003b46c6
- (_Bool)setupAudioEncoders;	// IMP=0x00000000003b4457
- (void)removeUnusedAudioPayloads;	// IMP=0x00000000003b4244
- (id)usedAudioPayloadForType:(int)arg1;	// IMP=0x00000000003b40f9
- (_Bool)shouldUseDtx;	// IMP=0x00000000003b40d2
- (float)nextAudioInterval:(int)arg1;	// IMP=0x00000000003b404e
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)reportRedundancyConfigChange;	// IMP=0x00000000003b3d88
- (void)registerReportingTask;	// IMP=0x00000000003b3d1f
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000003b3b16
- (void)updateAudioTxRate;	// IMP=0x00000000003b3a5c
- (_Bool)setupAudio:(id *)arg1;	// IMP=0x00000000003b384a
- (_Bool)setupEncoderBuffer;	// IMP=0x00000000003b369d
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;	// IMP=0x00000000003b363e
- (_Bool)sendCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003b3471
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool *)arg2 didUpdateBitrate:(_Bool *)arg3;	// IMP=0x00000000003b313d
- (_Bool)isCodecModeChangeRequestValid:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003b308e
- (_Bool)shouldUpdateCodecBandwidth:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003b2de6
- (_Bool)shouldUpdateCodecBitrate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000003b2a7c
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;	// IMP=0x00000000003b28c7
- (void)initAudioValues;	// IMP=0x00000000003b287d
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2;	// IMP=0x00000000003b2855
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000003b1fdd
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x00000000003b1f88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
