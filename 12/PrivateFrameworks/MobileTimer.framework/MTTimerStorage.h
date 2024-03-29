<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTTimerStorage.h</title>
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

/PrivateFrameworks/MobileTimer.framework/MTTimerStorage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer (1)
 */

@interface MTTimerStorage : NSObject <MTAgentDiagnosticDelegate, MTTimerSchedulerDelegate, MTTimerStorage> {
    id /* block */  _currentDateProvider;
    NSDate * _lastModifiedDate;
    MTTimerMigrator * _migrator;
    NSPointerArray * _observers;
    NSMutableArray * _orderedTimers;
    <MTPersistence> * _persistence;
    MTTimerScheduler * _scheduler;
    <NAScheduler> * _serializer;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, retain) MTTimerMigrator *migrator;
@property (nonatomic, readonly) MTTimer *nextTimer;
@property (nonatomic, retain) NSPointerArray *observers;
@property (nonatomic, retain) NSMutableArray *orderedTimers;
@property (nonatomic, retain) <MTPersistence> *persistence;
@property (nonatomic) MTTimerScheduler *scheduler;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *timers;

+ (id)_diagnosticDictionaryForTimer:(id)arg1;

- (void).cxx_destruct;
- (id)_applyNecessaryChangesFromOldTimer:(id)arg1 currentTimer:(id)arg2;
- (void)_createDefaultTimerIfNeededWithCompletion:(id /* block */)arg1;
- (id)_diagnosticTimerDictionary;
- (void)_loadTimersWithCompletion:(id /* block */)arg1;
- (id)_queuePersistTimer:(id)arg1 replacingTimer:(id)arg2;
- (void)_queue_addTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (bool)_queue_hasMatchingTimer:(id)arg1;
- (void)_queue_notifyObserversForNextTimerChange:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerAdd:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerDismiss:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerFire:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerRemoval:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversForTimerUpdate:(id)arg1 source:(id)arg2;
- (void)_queue_notifyObserversWithBlock:(id /* block */)arg1;
- (void)_queue_persistTimers;
- (void)_queue_removeAllTimersForSource:(id)arg1;
- (void)_queue_removeTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2;
- (void)_queue_setAllTimers:(id)arg1 source:(id)arg2 persist:(bool)arg3 notify:(bool)arg4;
- (void)_queue_sortTimers;
- (id)_queue_timerMatchingTimerIdentifier:(id)arg1;
- (id)_queue_updateTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)addTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id /* block */)currentDateProvider;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(id /* block */)arg1;
- (void)handleF5Reset;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1 migrator:(id)arg2 scheduler:(id)arg3 currentDateProvider:(id /* block */)arg4;
- (id)lastModifiedDate;
- (void)loadTimers;
- (void)loadTimersSync;
- (id)migrator;
- (id)nextTimer;
- (id)observers;
- (id)orderedTimers;
- (id)persistence;
- (void)printDiagnostics;
- (void)registerObserver:(id)arg1;
- (void)removeTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;
- (id)scheduler;
- (void)scheduler:(id)arg1 didChangeNextTimer:(id)arg2;
- (void)scheduler:(id)arg1 didFireTimer:(id)arg2;
- (id)serializer;
- (void)setAllTimers:(id)arg1 source:(id)arg2;
- (void)setLastModifiedDate:(id)arg1;
- (void)setMigrator:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOrderedTimers:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setSerializer:(id)arg1;
- (id)timers;
- (void)updateTimer:(id)arg1 withCompletion:(id /* block */)arg2 source:(id)arg3;

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
