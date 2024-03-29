<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDEventTriggerExecutionSession.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDEventTriggerExecutionSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDEventTriggerExecutionSession : HMDEventTriggerSession <HMDEventDelegate, HMFDumpState, HMFLogging, HMFTimerDelegate> {
    bool  _actionSetExecutionInProgress;
    NSArray * _actionSets;
    NSMutableArray * _causingDevices;
    NSArray * _endEvents;
    NSPredicate * _evaluationCondition;
    bool  _executionCompleteCalled;
    unsigned long long  _executionState;
    HomeKitEventTriggerExecutionSessionEvent * _metricEvent;
    NSArray * _monitorEvents;
    HMDPredicateUtilities * _predicateUtilities;
    NSArray * _recurrences;
    bool  _restoreInProgress;
    HMDTriggerConfirmationTimer * _secureTriggerConfirmationTimer;
    HMFTimer * _startCharacteristicsMonitorTimer;
    NSMutableArray * _triggerEvents;
    HMDEventTriggerUserConfirmationSession * _userConfirmationSession;
    NSMapTable * _writeRequests;
}

@property (nonatomic) bool actionSetExecutionInProgress;
@property (nonatomic, readonly) NSArray *actionSets;
@property (nonatomic, readonly) NSMutableArray *causingDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *endEvents;
@property (nonatomic, readonly) NSPredicate *evaluationCondition;
@property (nonatomic) bool executionCompleteCalled;
@property (nonatomic) unsigned long long executionState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HomeKitEventTriggerExecutionSessionEvent *metricEvent;
@property (nonatomic, retain) NSArray *monitorEvents;
@property (nonatomic, readonly) bool needsUserConfirmation;
@property (nonatomic, readonly) HMDPredicateUtilities *predicateUtilities;
@property (nonatomic, readonly) NSArray *recurrences;
@property (nonatomic) bool restoreInProgress;
@property (nonatomic, retain) HMDTriggerConfirmationTimer *secureTriggerConfirmationTimer;
@property (nonatomic, retain) HMFTimer *startCharacteristicsMonitorTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *triggerEvents;
@property (nonatomic, readonly) HMDEventTriggerUserConfirmationSession *userConfirmationSession;
@property (nonatomic, retain) NSMapTable *writeRequests;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_activateDurationEvents;
- (void)_activateEvents:(id)arg1;
- (void)_activateMonitoringEvents;
- (void)_addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)_callExecutionComplete:(id)arg1;
- (void)_callExecutionComplete:(id)arg1 callDelegate:(bool)arg2;
- (id)_createMonitoringEvents:(id)arg1;
- (void)_directlyExecuteActionSetsWithCompletionHandler:(id /* block */)arg1;
- (void)_evaluateFiringTrigger;
- (void)_executeTriggerAfterEvaluatingCondition:(id)arg1;
- (void)_handleActionSetExecutionResponse:(id)arg1 actionSetError:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleMonitoringEvent:(id)arg1;
- (void)_removeUserDialog;
- (void)_restoreState;
- (void)_submitMetric:(id)arg1;
- (void)_userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionSetExecutionInProgress;
- (id)actionSets;
- (void)addEvent:(id)arg1 causingDevice:(id)arg2;
- (void)cancelSessionIfWaitingForUserResponse;
- (id)causingDevices;
- (bool)containsSecureActionSet;
- (void)dealloc;
- (id)description;
- (id)didOccurEvent:(id)arg1 causingDevice:(id)arg2;
- (id)dumpState;
- (id)durationEndEvents;
- (id)endEvents;
- (void)evaluateFiringTrigger;
- (id)evaluationCondition;
- (bool)executionCompleteCalled;
- (unsigned long long)executionState;
- (id)initWithEventTrigger:(id)arg1 predicateUtilities:(id)arg2 triggerEvent:(id)arg3 causingDevice:(id)arg4 workQueue:(id)arg5 actionSets:(id)arg6 evaluationCondition:(id)arg7 recurrences:(id)arg8 endEvents:(id)arg9 msgDispatcher:(id)arg10;
- (id)logIdentifier;
- (id)metricEvent;
- (id)monitorEvents;
- (bool)needsUserConfirmation;
- (void)postponeRestoreIfWaitingForEndEvent;
- (id)predicateUtilities;
- (id)recurrences;
- (bool)restoreInProgress;
- (id)secureTriggerConfirmationTimer;
- (void)setActionSetExecutionInProgress:(bool)arg1;
- (void)setExecutionCompleteCalled:(bool)arg1;
- (void)setExecutionState:(unsigned long long)arg1;
- (void)setMonitorEvents:(id)arg1;
- (void)setRestoreInProgress:(bool)arg1;
- (void)setSecureTriggerConfirmationTimer:(id)arg1;
- (void)setStartCharacteristicsMonitorTimer:(id)arg1;
- (void)setWriteRequests:(id)arg1;
- (id)startCharacteristicsMonitorTimer;
- (void)timerDidFire:(id)arg1;
- (id)triggerEvents;
- (id)userConfirmationSession;
- (void)userResponse:(unsigned long long)arg1 device:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)valueInActionSetWriteResponse:(id)arg1 actionSetUUID:(id)arg2 accUUID:(id)arg3 serviceID:(id)arg4 characteristicID:(id)arg5;
- (id)writeRequests;

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
