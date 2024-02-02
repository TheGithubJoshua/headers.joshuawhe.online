<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCMediaStreamTransport.h</title>
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

/PrivateFrameworks/AVConference.framework/VCMediaStreamTransport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCMediaStreamTransport : NSObject {
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    id  _delegate;
    bool  _isSRTPInitialized;
    unsigned int  _localSSRC;
    struct tagHANDLE { int x1; } * _rtpHandle;
    VCMediaStreamConfig * _streamConfig;
}

@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (getter=isDecryptionTimeoutEnabled, nonatomic) bool decryptionTimeoutEnabled;
@property (nonatomic) double decryptionTimeoutInterval;
@property (nonatomic, readonly) <VCMediaStreamTransportDelegate> *delegate;
@property (nonatomic, readonly) unsigned short idsStreamId;
@property (nonatomic, readonly) double lastReceivedRTCPPacketTime;
@property (getter=isRTCPEnabled, nonatomic) bool rtcpEnabled;
@property (getter=isRTCPSendEnabled, nonatomic, readonly) bool rtcpSendEnabled;
@property (nonatomic) double rtcpSendInterval;
@property (getter=isRTCPTimeoutEnabled, nonatomic) bool rtcpTimeoutEnabled;
@property (nonatomic) double rtcpTimeoutInterval;
@property (nonatomic, readonly) struct tagHANDLE { int x1; }*rtpHandle;
@property (getter=isRTPTimeoutEnabled, nonatomic) bool rtpTimeoutEnabled;
@property (nonatomic) double rtpTimeoutInterval;
@property (nonatomic, readonly) VCMediaStreamConfig *streamConfig;
@property (nonatomic) long long streamDirection;

+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;
+ (int)getSRTPMasterKeyLength:(long long)arg1;
+ (bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;

- (id)basebandCongestionDetector;
- (void)configureForMultiway;
- (bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg2 customRTCPPackets:(bool)arg3 error:(id*)arg4;
- (void)dealloc;
- (double)decryptionTimeoutInterval;
- (id)delegate;
- (bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (int)getCryptoSet:(struct tagSRTPExchangeInfo { BOOL x1[65]; BOOL x2[29]; void *x3; }*)arg1 withMasterKey:(id)arg2;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;
- (int)getKeyDerivationCryptoSet:(struct { BOOL x1[65]; int x2; BOOL x3[65]; int x4; void *x5; }*)arg1 withKeyMaterial:(id)arg2;
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;
- (void)handleEncryptionInfoChange:(id)arg1;
- (unsigned short)idsStreamId;
- (id)initWithDelegate:(id)arg1 handle:(struct tagHANDLE { int x1; }*)arg2 localSSRC:(unsigned int)arg3;
- (bool)isDecryptionTimeoutEnabled;
- (bool)isRTCPEnabled;
- (bool)isRTCPSendEnabled;
- (bool)isRTCPTimeoutEnabled;
- (bool)isRTPTimeoutEnabled;
- (bool)isSameSRTPConfig:(id)arg1;
- (double)lastReceivedRTCPPacketTime;
- (void)onRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)onStart;
- (void)onStop;
- (void)registerRTCPCallback;
- (void)registerRTPPayloadMappings;
- (void)reportRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)reset;
- (void)resetPayloadMapping;
- (double)rtcpSendInterval;
- (double)rtcpTimeoutInterval;
- (struct tagHANDLE { int x1; }*)rtpHandle;
- (double)rtpTimeoutInterval;
- (id)rxNetworkPayloads;
- (void)sendControlPacket:(struct _RTCP_SEND_CONTROL_PARAMETERS { unsigned int x1; int x2; char *x3; unsigned long long x4; unsigned char x5; unsigned short *x6; int x7; unsigned short x8; unsigned short x9; unsigned int x10; struct _RTCP_RECEPTION_REPORT {} *x11; unsigned char x12; }*)arg1;
- (bool)sendIntervalDidElapse:(int*)arg1 remainingTime:(double*)arg2;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDecryptionTimeoutEnabled:(bool)arg1;
- (void)setDecryptionTimeoutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeoutEnabled:(bool)arg1;
- (void)setRtcpTimeoutInterval:(double)arg1;
- (void)setRtpTimeoutEnabled:(bool)arg1;
- (void)setRtpTimeoutInterval:(double)arg1;
- (void)setStreamDirection:(long long)arg1;
- (bool)setThrottlingInterval:(double)arg1;
- (bool)setupRTPForIDS:(id*)arg1;
- (bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo { unsigned char x1; union { struct { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; } x2; unsigned int x3; unsigned int x4; bool x5; }*)arg1 error:(id*)arg2;
- (int)setupSRTP;
- (id)streamConfig;
- (long long)streamDirection;
- (void)unregisterRTCPCallback;

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