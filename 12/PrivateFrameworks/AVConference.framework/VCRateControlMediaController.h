<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCRateControlMediaController.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/AVConference.framework/VCRateControlMediaController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCRateControlMediaController : NSObject {
    unsigned int  _afrcRemoteEstimatedBandwidth;
    int  _audioFractionTier;
    unsigned int  _audioSendingBitrate;
    unsigned int  _audioStallBitrate;
    unsigned int  _basebandAverageBitrate;
    double  _basebandExpectedQueuingDelay;
    int  _basebandFlushCount;
    unsigned int  _basebandFlushableQueueDepth;
    int  _basebandFlushedAudioCount;
    int  _basebandFlushedVideoCount;
    double  _basebandNBDCD;
    unsigned int  _basebandTotalQueueDepth;
    struct tagHANDLE { int x1; } * _hMediaQueue;
    bool  _isAudioOnly;
    bool  _isAudioStall;
    bool  _isBasebandFlushing;
    bool  _isBasebandQueuingDelayHigh;
    bool  _isInThrottlingMode;
    bool  _isRTPFlushBasebandFromVCRateControl;
    bool  _isRateLimitedMaxTimeExceeded;
    bool  _isSenderProbingEnabled;
    bool  _isVideoPausedByUser;
    bool  _isVideoStoppedByBaseband;
    bool  _isVideoStoppedByVCRateControl;
    double  _lastAudioEnoughRateTime;
    double  _lastAudioFractionChangeTime;
    double  _lastAudioStallFlushTime;
    double  _lastBasebandFlushAudioTime;
    double  _lastBasebandFlushCountChangeTime;
    double  _lastBasebandFlushVideoTime;
    double  _lastBasebandHighNBDCDTime;
    double  _lastVideoKeyFrameTime;
    void * _logBasebandDump;
    id  _mediaControllerDelegate;
    unsigned int  _minTargetBitrate;
    unsigned int  _probingLargeFrameSize;
    unsigned int  _probingLargeFrameSizeCap;
    unsigned int  _probingSequencePacketCount;
    unsigned int  _probingSequencePacketSize;
    SenderLargeFrameInfo * _senderLargeFrameInfo;
    bool  _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    AVCStatisticsCollector * _statisticsCollector;
    unsigned int  _targetBitrate;
    unsigned short  _videoFlushTransactionID;
    unsigned char  _videoPayloadType;
    unsigned int  _videoRefreshFramePacketCount;
    unsigned int  _videoRefreshFrameTimestamp;
    unsigned int  _videoSendingBitrate;
    unsigned short  _videoTransactionID;
}

@property (nonatomic) unsigned int afrcRemoteEstimatedBandwidth;
@property (nonatomic) int audioFractionTier;
@property (nonatomic) unsigned int audioSendingBitrate;
@property (nonatomic) int basebandFlushCount;
@property (nonatomic, readonly) int basebandFlushedAudioCount;
@property (nonatomic, readonly) int basebandFlushedVideoCount;
@property (nonatomic) bool isAudioOnly;
@property (nonatomic, readonly) bool isInThrottlingMode;
@property (nonatomic) bool isRTPFlushBasebandFromVCRateControl;
@property (nonatomic) bool isRateLimitedMaxTimeExceeded;
@property (nonatomic) bool isSenderProbingEnabled;
@property (nonatomic, readonly) bool isVideoStopped;
@property (nonatomic, readonly) bool isVideoStoppedByVCRateControl;
@property (nonatomic) double lastBasebandFlushCountChangeTime;
@property (nonatomic, readonly) double lastVideoKeyFrameTime;
@property (nonatomic) unsigned int minTargetBitrate;
@property (nonatomic, readonly) unsigned int probingLargeFrameSize;
@property (nonatomic, readonly) unsigned int probingSequencePacketCount;
@property (nonatomic, readonly) unsigned int probingSequencePacketSize;
@property (nonatomic) bool shouldDisableLargeFrameRequestsWhenInitialRampUp;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int videoSendingBitrate;

- (unsigned int)afrcRemoteEstimatedBandwidth;
- (int)audioFractionTier;
- (unsigned int)audioSendingBitrate;
- (int)basebandFlushCount;
- (int)basebandFlushedAudioCount;
- (int)basebandFlushedVideoCount;
- (void)computePacketLossWithTimestamp:(unsigned short)arg1 totalRemoteReceivedPackets:(unsigned int)arg2 packetBurstLoss:(unsigned int)arg3 packetLossRate:(double*)arg4 mostBurstLoss:(unsigned int*)arg5;
- (void)dealloc;
- (void)decreaseFlushCount:(int)arg1;
- (bool)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short*)arg4;
- (void)enableBasebandLogDump:(void*)arg1;
- (void)getMediaQueueInVideoBitrate:(double*)arg1 outVideoBitrate:(double*)arg2 inAudioBitrate:(double*)arg3 outAudioBitrate:(double*)arg4;
- (void)getMediaQueueRateChangeCounter:(unsigned int*)arg1 rateChangeTime:(double*)arg2;
- (void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
- (bool)increaseFlushCountForAudioStall:(int)arg1 audioStallBitrate:(unsigned int)arg2;
- (bool)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (id)initWithMediaQueue:(struct tagHANDLE { int x1; }*)arg1 delegate:(id)arg2;
- (bool)isAudioOnly;
- (bool)isInThrottlingMode;
- (bool)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (bool)isRTPFlushBasebandFromVCRateControl;
- (bool)isRateLimitedMaxTimeExceeded;
- (bool)isSenderProbingEnabled;
- (bool)isVideoStopped;
- (bool)isVideoStoppedByVCRateControl;
- (double)lastBasebandFlushCountChangeTime;
- (double)lastVideoKeyFrameTime;
- (unsigned int)minTargetBitrate;
- (void)pauseVideoByUser:(bool)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timeSinceLastProbingSequence:(double)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 isFrameRequested:(bool)arg5;
- (unsigned int)probingLargeFrameSize;
- (unsigned int)probingSequencePacketCount;
- (unsigned int)probingSequencePacketSize;
- (bool)rampDownAudioFraction;
- (bool)rampUpAudioFraction;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(bool)arg4;
- (void)resumeVideoByVCRateControl;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 isProbingSequenceScheduled:(bool*)arg3;
- (void)setAfrcRemoteEstimatedBandwidth:(unsigned int)arg1;
- (void)setAudioFractionTier:(int)arg1;
- (void)setAudioSendingBitrate:(unsigned int)arg1;
- (void)setBasebandFlushCount:(int)arg1;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setIsRTPFlushBasebandFromVCRateControl:(bool)arg1;
- (void)setIsRateLimitedMaxTimeExceeded:(bool)arg1;
- (void)setIsSenderProbingEnabled:(bool)arg1;
- (void)setLastBasebandFlushCountChangeTime:(double)arg1;
- (void)setMinTargetBitrate:(unsigned int)arg1;
- (void)setShouldDisableLargeFrameRequestsWhenInitialRampUp:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)setVideoSendingBitrate:(unsigned int)arg1;
- (bool)shouldDisableLargeFrameRequestsWhenInitialRampUp;
- (id)statisticsCollector;
- (void)stopVideoByVCRateControl;
- (unsigned int)targetBitrate;
- (void)updateBasebandSuggestionWithStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; unsigned int x_3_2_6; unsigned long long x_3_2_7; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;
- (unsigned int)videoSendingBitrate;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>