<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTTimerScheduler.h</title>
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

/PrivateFrameworks/MobileTimer.framework/MTTimerScheduler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer (1)
 */

@interface MTTimerScheduler : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTScheduledListDelegate, MTTimerObserver> {
    id /* block */  _currentDateProvider;
    <MTTimerSchedulerDelegate> * _delegate;
    <MTNotificationCenter> * _notificationCenter;
    MTScheduledList * _scheduledTimers;
    <MTSchedulingDelegate> * _schedulingDelegate;
    <NAScheduler> * _serializer;
    <MTTimerStorage> * _storage;
    <MTTaskScheduler> * _taskScheduler;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTTimerSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTNotificationCenter> *notificationCenter;
@property (nonatomic, readonly) MTScheduledList *scheduledTimers;
@property (nonatomic, readonly) <MTSchedulingDelegate> *schedulingDelegate;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) <MTTimerStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTTaskScheduler> *taskScheduler;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)arg1;

- (void).cxx_destruct;
- (void)_fireScheduledTimer:(id)arg1 firedDate:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(id /* block */)arg1;
- (id)_queue_lastTimerTriggerDate;
- (id)_queue_nextScheduledTimer;
- (id)_queue_nextTimer;
- (void)_queue_rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)_queue_scheduleTimers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_setLastTimerTriggerDate:(id)arg1;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(id /* block */)arg1;
- (void)_queue_unregisterTimer;
- (void)_queue_unscheduleTimers:(id)arg1;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id /* block */)arg1;
- (id /* block */)currentDateProvider;
- (id)delegate;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(id /* block */)arg6;
- (id)nextTimer;
- (void)nextTimerDidChange:(id)arg1;
- (id)nextTriggerDate;
- (id)notificationCenter;
- (void)printDiagnostics;
- (void)rescheduleTimers;
- (void)rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)scheduleTimers:(id)arg1;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)scheduledTimers;
- (id)schedulingDelegate;
- (id)serializer;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (id)sourceIdentifier;
- (id)storage;
- (id)taskScheduler;
- (void)unscheduleTimers:(id)arg1;

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
