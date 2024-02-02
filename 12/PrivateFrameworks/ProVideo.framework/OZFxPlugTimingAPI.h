<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OZFxPlugTimingAPI.h</title>
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

/PrivateFrameworks/ProVideo.framework/OZFxPlugTimingAPI.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, PROAPIObject> {
    struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; bool x21; bool x22; bool x23; bool x24; bool x25; bool x26; int x27; bool x28; bool x29; bool x30; bool x31; bool x32; struct OZChannelBase {} *x33; bool x34; id x35; id x36; bool x37; struct PCMutex { int (**x_38_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_38_1_2; } x38; unsigned int x39; } * _plugin;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 toFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg2;
- (double)durationForEffect:(id)arg1;
- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (id)initWithPlugin:(struct OZFxPlugSharedBase { int (**x1)(); void *x2; id x3; id x4; void *x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; id x18; id x19; struct PCString { struct __CFString {} *x_20_1_1; } x20; bool x21; bool x22; bool x23; bool x24; bool x25; bool x26; int x27; bool x28; bool x29; bool x30; bool x31; bool x32; struct OZChannelBase {} *x33; bool x34; id x35; id x36; bool x37; struct PCMutex { int (**x_38_1_1)(); struct _opaque_pthread_mutex_t { long long x_2_2_1; BOOL x_2_2_2[56]; } x_38_1_2; } x38; unsigned int x39; }*)arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (union { double x1; struct { /* ? */ } *x2; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (struct OZScene { int (**x1)(); int (**x2)(); struct PCHash128 { unsigned int x_3_1_1[4]; } x3; int x4; struct OZSceneSettings { int (**x_5_1_1)(); int x_5_1_2; int x_5_1_3; unsigned int x_5_1_4; bool x_5_1_5; unsigned int x_5_1_6; double x_5_1_7; bool x_5_1_8; double x_5_1_9; int x_5_1_10; int x_5_1_11; struct PCColor { struct ColorComponents { int x_1_3_1; double x_1_3_2[5]; } x_12_2_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_3_1; } x_12_2_2; } x_5_1_12; int x_5_1_13; bool x_5_1_14; unsigned int x_5_1_15; unsigned int x_5_1_16; double x_5_1_17; bool x_5_1_18; bool x_5_1_19; double x_5_1_20; int x_5_1_21; struct PCString { struct __CFString {} *x_22_2_1; } x_5_1_22; unsigned int x_5_1_23; unsigned int x_5_1_24; double x_5_1_25; unsigned int x_5_1_26; unsigned int x_5_1_27; unsigned int x_5_1_28; bool x_5_1_29; float x_5_1_30; int x_5_1_31; bool x_5_1_32; int x_5_1_33; bool x_5_1_34; int x_5_1_35; int x_5_1_36; bool x_5_1_37; int x_5_1_38; struct FigTime { struct { long long x_1_3_1; int x_1_3_2; unsigned int x_1_3_3; long long x_1_3_4; } x_39_2_1; } x_5_1_39; bool x_5_1_40; } x5; }*)scene;
- (const struct OZSceneSettings { int (**x1)(); int x2; int x3; unsigned int x4; bool x5; unsigned int x6; double x7; bool x8; double x9; int x10; int x11; struct PCColor { struct ColorComponents { int x_1_2_1; double x_1_2_2[5]; } x_12_1_1; struct PCColorSpaceHandle { struct CGColorSpace {} *x_2_2_1; } x_12_1_2; } x12; int x13; bool x14; unsigned int x15; unsigned int x16; double x17; bool x18; bool x19; double x20; int x21; struct PCString { struct __CFString {} *x_22_1_1; } x22; unsigned int x23; unsigned int x24; double x25; unsigned int x26; unsigned int x27; unsigned int x28; bool x29; float x30; int x31; bool x32; int x33; bool x34; int x35; int x36; bool x37; int x38; struct FigTime { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_39_1_1; } x39; bool x40; }*)sceneSettings;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (double)timelineDurationForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (union { double x1; struct { /* ? */ } *x2; })zeroTime;

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