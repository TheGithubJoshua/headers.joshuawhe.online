<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_EKNotificationMonitor.h</title>
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

/Frameworks/EventKit.framework/_EKNotificationMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface _EKNotificationMonitor : NSObject {
    NSMutableSet * _alertedNotificationsThatFailedToMarkAlerted;
    bool  _allowedToMarkAlerted;
    NSArray * _eventNotificationReferences;
    EKEventStore * _eventStore;
    id /* block */  _eventStoreGetter;
    bool  _initialCheck;
    bool  _loadRecentlyRepliedNotifications;
    NSDate * _nextFireTime;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    long long  _notificationTypes;
    bool  _pendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registerForDarwinNotifications;
    NSArray * _reminderNotificationReferences;
    bool  _running;
    bool  _shouldInstallPersistentTimer;
    NSTimer * _syncTimer;
    PCPersistentTimer * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    bool  _useSyncIdleTimer;
}

@property (nonatomic) bool allowedToMarkAlerted;
@property (nonatomic, readonly) unsigned long long eventNotificationCount;
@property (nonatomic, readonly) NSArray *eventNotificationReferences;
@property (nonatomic, readonly) unsigned long long notificationCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSArray *notificationReferences;
@property (nonatomic, readonly) NSArray *reminderNotificationReferences;

+ (id)logHandle;
+ (id)requestedDarwinNotifications;

- (void).cxx_destruct;
- (void)_alertPrefChanged;
- (void)_databaseChanged;
- (id)_eventStore;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1;
- (void)_killSyncTimer;
- (void)_notificationCountChangedExternally;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (unsigned long long)_reminderNotificationCount;
- (void)_resetSyncTimer;
- (void)_resetTimer;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timerFired;
- (void)adjust;
- (bool)allowedToMarkAlerted;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(bool)arg1;
- (void)dealloc;
- (unsigned long long)eventNotificationCount;
- (id)eventNotificationReferences;
- (void)handleDarwinNotification:(id)arg1;
- (id)init;
- (id)initByHandlingOnlyEvents:(bool)arg1 eventStore:(id)arg2;
- (id)initByHandlingTypes:(long long)arg1 bulletinBoardWithEventStoreGetter:(id /* block */)arg2;
- (void)killTimer;
- (unsigned long long)notificationCount;
- (id)notificationQueue;
- (id)notificationReferences;
- (id)reminderNotificationReferences;
- (void)setAllowedToMarkAlerted:(bool)arg1;
- (void)start;
- (void)stop;
- (bool)wantsEvents;
- (bool)wantsReminders;

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