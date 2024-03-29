<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WK_RTCSingleVideoEncoderH264.h</title>
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

/lib/libwebrtc.dylib/WK_RTCSingleVideoEncoderH264.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib (8607.3.18)
 */

@interface WK_RTCSingleVideoEncoderH264 : NSObject <WK_RTCVideoEncoder> {
    struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster> > { 
        struct __compressed_pair<webrtc::BitrateAdjuster *, std::__1::default_delete<webrtc::BitrateAdjuster> > { 
            struct BitrateAdjuster {} *__value_; 
        } __ptr_; 
    }  _bitrateAdjuster;
    id /* block */  _callback;
    WK_RTCVideoCodecInfo * _codecInfo;
    struct _VCPCompressionSession { } * _compressionSession;
    bool  _disableEncoding;
    unsigned int  _encoderBitrateBps;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__value_; 
        } __end_cap_; 
    }  _frameScaleBuffer;
    struct H264BitstreamParser { 
        int (**_vptr$H264BitstreamParser)(); 
        struct optional<webrtc::SpsParser::SpsState> { 
            bool engaged_; 
            union { 
                struct dummy_type { 
                    struct empty_struct { } data[44]; 
                } dummy_; 
                struct SpsState { 
                    unsigned int width; 
                    unsigned int height; 
                    unsigned int delta_pic_order_always_zero_flag; 
                    unsigned int separate_colour_plane_flag; 
                    unsigned int frame_mbs_only_flag; 
                    unsigned int log2_max_frame_num; 
                    unsigned int log2_max_pic_order_cnt_lsb; 
                    unsigned int pic_order_cnt_type; 
                    unsigned int max_num_ref_frames; 
                    unsigned int vui_params_present; 
                    unsigned int id; 
                } data_; 
            } ; 
        } sps_; 
        struct optional<webrtc::PpsParser::PpsState> { 
            bool engaged_; 
            union { 
                struct dummy_type { 
                    struct empty_struct { } data[24]; 
                } dummy_; 
                struct PpsState { 
                    bool bottom_field_pic_order_in_frame_present_flag; 
                    bool weighted_pred_flag; 
                    bool entropy_coding_mode_flag; 
                    unsigned int weighted_bipred_idc; 
                    unsigned int redundant_pic_cnt_present_flag; 
                    int pic_init_qp_minus26; 
                    unsigned int id; 
                    unsigned int sps_id; 
                } data_; 
            } ; 
        } pps_; 
        struct optional<int> { 
            bool engaged_; 
            union { 
                struct dummy_type { 
                    struct empty_struct { } data[4]; 
                } dummy_; 
                int data_; 
            } ; 
        } last_slice_qp_delta_; 
    }  _h264BitstreamParser;
    int  _height;
    unsigned long long  _mode;
    struct VideoCodec { 
        int codecType; 
        unsigned char plType; 
        unsigned short width; 
        unsigned short height; 
        unsigned int startBitrate; 
        unsigned int maxBitrate; 
        unsigned int minBitrate; 
        unsigned int targetBitrate; 
        unsigned int maxFramerate; 
        bool active; 
        unsigned int qpMax; 
        unsigned char numberOfSimulcastStreams; 
        struct SpatialLayer { 
            unsigned short width; 
            unsigned short height; 
            float maxFramerate; 
            unsigned char numberOfTemporalLayers; 
            unsigned int maxBitrate; 
            unsigned int targetBitrate; 
            unsigned int minBitrate; 
            unsigned int qpMax; 
            bool active; 
        } simulcastStream[4]; 
        struct SpatialLayer { 
            unsigned short width; 
            unsigned short height; 
            float maxFramerate; 
            unsigned char numberOfTemporalLayers; 
            unsigned int maxBitrate; 
            unsigned int targetBitrate; 
            unsigned int minBitrate; 
            unsigned int qpMax; 
            bool active; 
        } spatialLayers[5]; 
        int mode; 
        bool expect_encode_from_texture; 
        struct TimingFrameTriggerThresholds { 
            long long delay_ms; 
            unsigned short outlier_ratio_percent; 
        } timing_frame_thresholds; 
        union VideoCodecUnion { 
            struct VideoCodecVP8 { 
                int complexity; 
                unsigned char numberOfTemporalLayers; 
                bool denoisingOn; 
                bool automaticResizeOn; 
                bool frameDroppingOn; 
                int keyFrameInterval; 
            } VP8; 
            struct VideoCodecVP9 { 
                int complexity; 
                unsigned char numberOfTemporalLayers; 
                bool denoisingOn; 
                bool frameDroppingOn; 
                int keyFrameInterval; 
                bool adaptiveQpMode; 
                bool automaticResizeOn; 
                unsigned char numberOfSpatialLayers; 
                bool flexibleMode; 
                int interLayerPred; 
            } VP9; 
            struct VideoCodecH264 { 
                bool frameDroppingOn; 
                int keyFrameInterval; 
                char *spsData; 
                unsigned long long spsLen; 
                char *ppsData; 
                unsigned long long ppsLen; 
                int profile; 
            } H264; 
        } codec_specific_; 
    }  _nativeVideoCodec;
    unsigned long long  _packetizationMode;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    struct __CFString { } * _profile;
    int  _simulcastIndex;
    unsigned int  _targetBitrateBps;
    int  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureCompressionSession;
- (void)dealloc;
- (void)destroyCompressionSession;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1 simulcastIndex:(int)arg2;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (long long)releaseEncoder;
- (bool)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setEncoderBitrateBps:(unsigned int)arg1;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

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
