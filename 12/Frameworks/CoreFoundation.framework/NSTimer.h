<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSTimer.h</title>
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

/Frameworks/CoreFoundation.framework/NSTimer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (1575.23)
 */

@interface NSTimer : NSObject

@property (copy) NSDate *fireDate;
@property (readonly) double timeInterval;
@property double tolerance;
@property (readonly, retain) id userInfo;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(bool)arg3;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;

- (double)_cffireTime;
- (struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); })context;
- (struct __CFString { }*)copyDebugDescription;
- (void)fire;
- (id)fireDate;
- (double)fireTime;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(bool)arg3 block:(id /* block */)arg4;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(bool)arg6;
- (double)interval;
- (void)invalidate;
- (bool)isValid;
- (long long)order;
- (void)setFireDate:(id)arg1;
- (void)setFireTime:(double)arg1;
- (void)setTolerance:(double)arg1;
- (double)timeInterval;
- (double)tolerance;
- (id)userInfo;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (void)blockInvoke:(id)arg1;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 repeats:(bool)arg2 block:(id /* block */)arg3;
+ (id)pu_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(bool)arg5;
+ (id)pu_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(bool)arg3 block:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (void)p_tsu_ExecuteScheduledBlock:(id)arg1;
+ (id)tsu_ScheduledTimerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;
+ (id)tsu_TimerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

+ (void)blockInvoke:(id)arg1;
+ (id)is_timerWithTimeInterval:(double)arg1 block:(id /* block */)arg2 repeats:(bool)arg3;

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
