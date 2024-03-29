<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FigCoreMotionDelegate.h</title>
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

/PrivateFrameworks/Celestial.framework/FigCoreMotionDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial (2290.13.1.3)
 */

@interface FigCoreMotionDelegate : NSObject {
    int  accelRingIndex;
    double  accelRingTime;
    float  accelRingX;
    float  accelRingY;
    float  accelRingZ;
    bool  computingPosition;
    bool  copyingAllData;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  currentQuaternion;
    double  dGyroUpdateInterval;
    double  dLatestFusedMotionCopied;
    double  dLatestTimestamp;
    double  dStartOfLogging;
    struct OpaqueFigSemaphore { } * dataSemaphore;
    struct { 
        float x; 
        float y; 
        float z; 
    }  fusedRingAccel;
    bool  fusedRingDoingBiasEstimation;
    int  fusedRingIndex;
    struct { 
        float x; 
        float y; 
        float z; 
    }  fusedRingPosition;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  fusedRingQuaternion;
    double  fusedRingTime;
    bool  gettingAttitudeChange;
    double  latestGravityDataTime;
    double  latestMotionDataTime;
    bool  manageAccel;
    bool  manageFusedMotion;
    bool  manageGravity;
    CMMotionManager * motionManager;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    }  position;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  previousQuaternion;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  ringMutex;
    double  timestampLatency;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    }  velocity;
}

- (id)copyAllFusedMotionData;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4;
- (id)copyNewFusedMotionData;
- (void)dealloc;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; float x9; })arg1 time:(double)arg2 ifsync:(bool)arg3;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (int)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (int)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (int)getLatestMotionDataTime:(double*)arg1;
- (void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithAccelerometer:(bool)arg1 gravityZ:(bool)arg2 fusedMotion:(bool)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5 motionCallbackThreadPriority:(id)arg6;
- (bool)isCopyingAllData;
- (bool)managingAccel;
- (bool)managingFusedMotion;
- (bool)managingGravity;
- (int)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (int)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)updateDeviceCallback:(bool)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;

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
