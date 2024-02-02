<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCaptureDataOutputSynchronizer.h</title>
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

/Frameworks/AVFoundation.framework/AVCaptureDataOutputSynchronizer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureVisionDataOutputDelegate> {
    AVCaptureDataOutputSynchronizerInternal * _internal;
}

@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVCaptureDataOutputSynchronizerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_adjustSynchronizedDataTimestamps;
- (bool)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_dispatchRipenedSynchronizedData;
- (void)_dispatchSynchronizedDataWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_earliestSlaveSynchronizedDataQueueTimestamp;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)dataOutputs;
- (void)dealloc;
- (id)delegate;
- (id)delegateCallbackQueue;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (id)initWithDataOutputs:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 connection:(id)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer { }*)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;

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