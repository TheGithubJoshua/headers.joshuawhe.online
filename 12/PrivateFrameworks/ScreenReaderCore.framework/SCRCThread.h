<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SCRCThread.h</title>
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

/PrivateFrameworks/ScreenReaderCore.framework/SCRCThread.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore (562.44)
 */

@interface SCRCThread : NSObject {
    id  __key;
    bool  _isInvalid;
    bool  _isRegistered;
    bool  _isTimerSet;
    bool  _isWaitingForStoppingThread;
    double  _lastStartTime;
    SCRCStackQueue * _queue;
    id  _queueLock;
    struct __CFRunLoop { } * _runLoop;
    bool  _shouldStop;
    struct __CFRunLoopSource { } * _source;
    SCRCStackQueue * _waitingQueue;
}

@property (setter=_setKey:, nonatomic, retain) id _key;
@property (setter=_setLastStartTime:, nonatomic) double lastStartTime;

+ (bool)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(char *)arg8;
+ (bool)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (long long)activeThreadCount;
+ (id)activity;
+ (id)currentThreadTaskCache;
+ (long long)defaultThreadPriority;
+ (void)initialize;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (void)postStopNotification;
+ (void)setDefaultThreadPriority:(long long)arg1;

- (void).cxx_destruct;
- (void)_assignThreadPriority;
- (bool)_debug_currentlyRunningOnThisThread;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (bool)_isWaitingForStoppingThread;
- (id)_key;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_runThread:(id)arg1;
- (void)_setIsWaitingForStoppingThread:(bool)arg1;
- (void)_setKey:(id)arg1;
- (void)_setLastStartTime:(double)arg1;
- (bool)_shouldStop;
- (void)_threadDidStop;
- (void)dealloc;
- (id)init;
- (bool)isInvalid;
- (double)lastStartTime;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (void)setIsInvalid:(bool)arg1;
- (void)setName:(id)arg1;

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