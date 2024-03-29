<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTFaceTracker.h</title>
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

/PrivateFrameworks/AvatarKit.framework/AVTFaceTracker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTFaceTracker : NSObject <ARRecordingTechniqueDelegate> {
    ARSession * _arSession;
    ARFrame * _currentARFrame;
    NSMutableArray * _delegates;
    bool  _directRetargetingMode;
    bool  _faceIsTracked;
    ARConfiguration * _faceTracking;
    bool  _faceTrackingPaused;
    NSURL * _faceTrackingRecordingURL;
    long long  _frame_id;
    bool  _isActive;
    bool  _isSensorCovered;
    double  _lastARFrameTime;
    unsigned long long  _lastTrackingCaptureTimestamp;
    double  _lastTrackingDate;
    bool  _lowLight;
    long long  _orientation;
    struct { 
        double refTimestamp; 
        double arDelegateTimestamp; 
    }  _perfPacket;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _rawTransform;
    NSObject<OS_dispatch_semaphore> * _recordingSemaphore;
    ARRecordingTechnique * _recordingTechnique;
    bool  _shouldConstraintHeadPose;
    bool  _skipUpdates;
    double  _timeBetweenARFrame;
    struct { 
        double timestamp; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*translation; 
    }  _trackingData;
    NSLock * _trackingDataLock;
    AVTFaceTrackingInfo * _trackingInfo;
    bool  _trackingIsPaused;
    bool  limitRoll;
}

@property (nonatomic, readonly) double arDelegateTimestamp;
@property (nonatomic, readonly) double arFrameDeltaTime;
@property (nonatomic, readonly) double arFrameTimestamp;
@property (readonly) ARSession *arSession;
@property (readonly) ARFrame *currentARFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool directRetargetingMode;
@property (readonly) bool faceIsTracked;
@property (readonly) long long faceTrackingFrameID;
@property (readonly) AVTFaceTrackingInfo *faceTrackingInfo;
@property (getter=faceTrackingIsPaused, nonatomic) bool faceTrackingPaused;
@property (copy) NSURL *faceTrackingRecordingURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (readonly) unsigned long long lastTrackingCaptureTimestamp;
@property (readonly) double lastTrackingDate;
@property (nonatomic) bool limitRoll;
@property (readonly) bool lowLight;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } rawTransform;
@property (getter=isSensorCovered, readonly) bool sensorCovered;
@property (nonatomic) bool shouldConstraintHeadPose;
@property (nonatomic) bool skipUpdates;
@property (readonly) Class superclass;

+ (void)setUsesInternalTrackingPipeline:(bool)arg1;
+ (bool)usesInternalTrackingPipeline;

- (void).cxx_destruct;
- (void)_setupARKitWithRecordTechnique:(bool)arg1;
- (void)addDelegate:(id)arg1;
- (double)arDelegateTimestamp;
- (double)arFrameDeltaTime;
- (double)arFrameTimestamp;
- (id)arSession;
- (void)beginQuery;
- (void)copyTrackingData:(struct { double x1; bool x2; float x3[64]; float x4[64]; float x5[1]; float x6[1]; }*)arg1;
- (id)currentARFrame;
- (void)decreaseFrameRate;
- (bool)directRetargetingMode;
- (void)endQuery;
- (void)enumerateDelegates:(id /* block */)arg1;
- (bool)faceIsTracked;
- (long long)faceTrackingFrameID;
- (id)faceTrackingInfo;
- (bool)faceTrackingIsPaused;
- (bool)faceTrackingPaused;
- (id)faceTrackingRecordingURL;
- (void)increaseFrameRateToMaximum;
- (id)init;
- (long long)interfaceOrientation;
- (bool)isActive;
- (bool)isSensorCovered;
- (unsigned long long)lastTrackingCaptureTimestamp;
- (double)lastTrackingDate;
- (bool)limitRoll;
- (bool)lowLight;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rawTransform;
- (void)removeDelegate:(id)arg1;
- (void)run;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)setDirectRetargetingMode:(bool)arg1;
- (void)setFaceIsTracked:(bool)arg1;
- (void)setFaceTrackingPaused:(bool)arg1;
- (void)setFaceTrackingRecordingURL:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLimitRoll:(bool)arg1;
- (void)setLowLight:(bool)arg1;
- (void)setSensorCovered:(bool)arg1;
- (void)setShouldConstraintHeadPose:(bool)arg1;
- (void)setSkipUpdates:(bool)arg1;
- (void)setupARKit;
- (void)setupARKitWithRecordTechnique;
- (bool)shouldConstraintHeadPose;
- (bool)skipUpdates;
- (void)startRecording;
- (void)stop;
- (void)stopRecording;
- (void)technique:(id)arg1 didFinishWithResult:(id)arg2;

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
