<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIKBRTTouchInfo.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIKBRTTouchInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIKBRTTouchInfo : _UIKBRTObject {
    double  _currentTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTouchPoint;
    BOOL  _currentTouchState;
    double  _currentZGradient;
    double  _maximumRadius;
    double  _originalTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalTouchPoint;
    double  _originalZGradient;
    BOOL  _preRuleTouchState;
    _UIKBRTTimerBlock * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    id  _touchIdentifier;
}

@property (nonatomic, readonly) double currentTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentTouchPoint;
@property (nonatomic) BOOL currentTouchState;
@property (nonatomic, readonly) double currentZGradient;
@property (nonatomic, readonly) double maximumRadius;
@property (nonatomic, readonly) _UIKBRTTouchInfo *nextTouch;
@property (nonatomic, readonly) double originalTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originalTouchPoint;
@property (nonatomic, readonly) double originalZGradient;
@property (nonatomic) BOOL preRuleTouchState;
@property (nonatomic, readonly) _UIKBRTTouchInfo *previousTouch;
@property (nonatomic, readonly) _UIKBRTTimerBlock *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic, readonly) id touchIdentifier;

+ (id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(bool)arg3;
+ (void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2;
+ (id)touchDict;
+ (id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)cleanup;
- (double)currentTimestamp;
- (struct CGPoint { double x1; double x2; })currentTouchPoint;
- (BOOL)currentTouchState;
- (double)currentZGradient;
- (void)dealloc;
- (void)fireTimerNow;
- (id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(bool)arg3;
- (void)invalidateTimer;
- (double)maximumRadius;
- (id)nextTouch;
- (double)originalTimestamp;
- (struct CGPoint { double x1; double x2; })originalTouchPoint;
- (double)originalZGradient;
- (BOOL)preRuleTouchState;
- (id)previousTouch;
- (void)setCurrentTouchState:(BOOL)arg1;
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (void)setPreRuleTouchState:(BOOL)arg1;
- (void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(id /* block */)arg3;
- (id)timer;
- (id)timerQueue;
- (id)touchIdentifier;
- (void)updateTouch:(id)arg1;
- (bool)willChangeTouchInfo:(id)arg1 toState:(BOOL)arg2;

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
