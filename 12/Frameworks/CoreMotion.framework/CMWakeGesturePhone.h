<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMWakeGesturePhone.h</title>
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

/Frameworks/CoreMotion.framework/CMWakeGesturePhone.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion (2245.16.14)
 */

@interface CMWakeGesturePhone : CMWakeGestureManager {
    unsigned int  backlightService;
    long long  fCurrentState;
    BOOL  fDisplayState;
    bool  fEnableAudioAlert;
    bool  fEnableLatencyAlert;
    unsigned int  fIoNotification;
    struct IONotificationPort { } * fIoNotifyPort;
    bool  fIsRunningInPrimaryProcess;
    double  fLastDisplayOnTime;
    double  fLastNotificationTime;
    int  fLatencyAlertThreshold;
    int  fLockScreenToken;
    int  fMeasureLatencyState;
    struct Dispatcher { int (**x1)(); id x2; } * fPowerStateDispatcher;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSString * fProcessName;
    int  fScreenDimmingNotificationToken;
    int  fSelector;
    struct Dispatcher { int (**x1)(); id x2; } * fWakeDispatcher;
    struct unique_ptr<CMWakeGestureVisitor, std::__1::default_delete<CMWakeGestureVisitor> > { 
        struct __compressed_pair<CMWakeGestureVisitor *, std::__1::default_delete<CMWakeGestureVisitor> > { 
            struct CMWakeGestureVisitor {} *__value_; 
        } __ptr_; 
    }  fWakeGestureVisitor;
    double  fWakePacketTimestamp;
    bool  gestureUpdatesStarted;
}

+ (bool)hasSlowBootArgs;
+ (id)stringForGestureState:(long long)arg1;
+ (id)stringForMode:(unsigned char)arg1;
+ (id)stringForNotification:(unsigned char)arg1;
+ (id)stringForStartPose:(unsigned char)arg1;
+ (id)stringForViewPose:(unsigned char)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invokeDelegateWithState:(long long)arg1;
- (void)loadPreferences;
- (void)logWakeLatency;
- (void)onBacklightServiceUpdated:(unsigned int)arg1;
- (void)onNotificationControl:(id)arg1;
- (void)onPowerStateUpdated:(const struct Sample { unsigned int x1; }*)arg1;
- (void)onWakeUpdated:(const struct Sample { unsigned long long x1; struct CLGestureReport {} *x2; }*)arg1;
- (void)playAlert;
- (void)reenableDetectedStateRecognition;
- (void)setDelegate:(id)arg1;
- (bool)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;
- (void)writeAggdScalarForKey:(id)arg1 withValue:(id)arg2;

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
