<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACHCompanionAwardingScheduler.h</title>
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

/PrivateFrameworks/ActivityAchievements.framework/ACHCompanionAwardingScheduler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements (1)
 */

@interface ACHCompanionAwardingScheduler : NSObject <ACHAwardingScheduler, ACHTemplateStoreObserving, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    NSMutableArray * _awardEvaluationCompletionBlocks;
    ACHEarnedInstanceAwardingEngine * _awardingEngine;
    NSObject<OS_dispatch_queue> * _awardingEvaluationQueue;
    NSCalendar * _calendar;
    NSNumber * _coalescingDelayOverride;
    ACHDataStore * _dataStore;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    NSNumber * _forceActivityAppInstalled;
    NSDate * _lastSuccessfulRunDate;
    HDKeyValueDomain * _localKeyValueDomain;
    HDMaintenanceOperation * _maintenanceOperation;
    _HKDelayedOperation * _operation;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDPeriodicActivity * _scheduler;
    bool  _shouldRetryEarnedInstanceDeletion;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic, retain) NSMutableArray *awardEvaluationCompletionBlocks;
@property (nonatomic, retain) ACHEarnedInstanceAwardingEngine *awardingEngine;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *awardingEvaluationQueue;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSNumber *coalescingDelayOverride;
@property (nonatomic, retain) ACHDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ACHEarnedInstanceStore *earnedInstanceStore;
@property (nonatomic, retain) NSNumber *forceActivityAppInstalled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastSuccessfulRunDate;
@property (nonatomic, retain) HDKeyValueDomain *localKeyValueDomain;
@property (nonatomic, retain) HDMaintenanceOperation *maintenanceOperation;
@property (nonatomic, retain) _HKDelayedOperation *operation;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HDPeriodicActivity *scheduler;
@property (nonatomic) bool shouldRetryEarnedInstanceDeletion;
@property (readonly) Class superclass;
@property (nonatomic, retain) ACHTemplateStore *templateStore;

- (void).cxx_destruct;
- (void)_applicationsInstalled:(id)arg1;
- (void)_applicationsUninstalled:(id)arg1;
- (bool)_didRunToday;
- (void)_queue_addAwardingCompletion:(id /* block */)arg1;
- (void)_queue_callAwardingCompletionsWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_queue_performCleanupTasks;
- (void)_queue_removeAllEarnedInstances;
- (void)_queue_removeMaintenanceOperation;
- (void)_queue_requestAwardingEvaluation;
- (bool)_shouldRunImmediatelyOnTemplateLoad;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (bool)_userInfoContainsCompanionActivityBundleID:(id)arg1;
- (void)addAwardingCompletion:(id /* block */)arg1;
- (id)awardEvaluationCompletionBlocks;
- (id)awardingEngine;
- (id)awardingEvaluationQueue;
- (id)calendar;
- (void)clearLastSuccessfulRunDate;
- (id)coalescingDelayOverride;
- (void)daemonReady:(id)arg1;
- (id)dataStore;
- (id)diagnosticDescription;
- (id)earnedInstanceStore;
- (id)forceActivityAppInstalled;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 templateStore:(id)arg4 awardingEngine:(id)arg5;
- (id)lastSuccessfulRunDate;
- (id)localKeyValueDomain;
- (id)maintenanceOperation;
- (id)operation;
- (void)overrideCoalescingDelay:(double)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (id)queue;
- (void)requestAwardingEvaluationWithCompletion:(id /* block */)arg1;
- (void)scheduleMaintenanceTaskForAwardingWithCompletion:(id /* block */)arg1;
- (id)scheduler;
- (void)setAwardEvaluationCompletionBlocks:(id)arg1;
- (void)setAwardingEngine:(id)arg1;
- (void)setAwardingEvaluationQueue:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCoalescingDelayOverride:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setForceActivityAppInstalled:(id)arg1;
- (void)setLastSuccessfulRunDate:(id)arg1;
- (void)setLocalKeyValueDomain:(id)arg1;
- (void)setMaintenanceOperation:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setShouldRetryEarnedInstanceDeletion:(bool)arg1;
- (void)setTemplateStore:(id)arg1;
- (void)setlastSuccessfulRunDate:(id)arg1;
- (void)shouldForceActivityAppInstalled:(bool)arg1;
- (bool)shouldRetryEarnedInstanceDeletion;
- (id)templateStore;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;

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
