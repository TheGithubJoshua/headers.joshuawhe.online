<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AFMyriadCoordinator.h</title>
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

/PrivateFrameworks/AssistantServices.framework/AFMyriadCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices (1)
 */

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol> {
    bool  _BTLEReady;
    float  _advertInterval;
    AFMyriadEmergencyCallPunchout * _callPunchout;
    struct __CFNotificationCenter { } * _center;
    bool  _clientDoneRespondingToSlowdown;
    bool  _clientIsDirectActivating;
    bool  _clientIsInEarActivation;
    bool  _clientIsListeningAfterRecentWin;
    bool  _clientIsRespondingToSlowdown;
    bool  _clientIsWatchActivation;
    bool  _clientIsWatchTrumpPromote;
    bool  _clientLostDueToTrumping;
    bool  _clientRecentlyLostElection;
    bool  _clientRespondingToCarPlay;
    int  _constantGoodness;
    bool  _coordinationEnabled;
    _DKKnowledgeStore * _coreDuetStore;
    NSDateFormatter * _dateFormat;
    float  _delayTarget;
    id  _delegate;
    NSUUID * _designatedSelfID;
    int  _deviceAdjust;
    unsigned char  _deviceClass;
    NSString * _deviceClassName;
    double  _deviceDelay;
    unsigned char  _deviceGroup;
    double  _deviceInEarDelay;
    double  _deviceInEarInterval;
    double  _deviceTrumpDelay;
    bool  _ducking;
    WPHeySiri * _heySiriBTLE;
    bool  _inTask;
    BOOL  _incomingAdjustment;
    NSMutableDictionary * _incomingTrumps;
    bool  _lastDecision;
    unsigned long long  _lastDecisionTime;
    double  _lastEmergencyAttempt;
    unsigned short  _lastPHash;
    double  _lastSiriActivationTime;
    bool  _listenTimerIsRunning;
    AFMyriadRecord * _maxSlowdownRecord;
    NSMutableDictionary * _multipleContinuations;
    NSObject<OS_dispatch_queue> * _myriadReadinessQueue;
    unsigned long long  _myriadState;
    NSObject<OS_dispatch_queue> * _myriadTimerManagementQueue;
    NSObject<OS_dispatch_queue> * _myriadWaitWiProxQueue;
    NSObject<OS_dispatch_queue> * _myriadWorkQueue;
    int  _nDeltaTs;
    int  _nTimesContinued;
    int  _nTimesExtended;
    unsigned long long  _nextState;
    AFMyriadStereoPairManager * _pairManager;
    AFPowerAssertionManager * _powerAssertionManager;
    NSData * _previousAdvertisedData;
    unsigned long long  _previousState;
    NSMutableDictionary * _previousTrumps;
    NSMutableDictionary * _replies;
    NSMutableDictionary * _replyCounts;
    int  _slowdownMsecs;
    bool  _supportsExtended;
    int  _testInducedSlowdownMsecs;
    NSObject<OS_dispatch_source> * _timer;
    NSString * _timerLabel;
    NSObject<OS_dispatch_source> * _timerSource;
    AFMyriadRecord * _triggerRecord;
    NSDate * _triggerTime;
    unsigned long long  _voiceTriggerTime;
    bool  _wasEmergency;
    NSObject<OS_dispatch_semaphore> * _wiproxReadinessSemaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)clearCurrentCoordinator;
+ (id)currentCoordinator;
+ (void)didChangeDefaults;

- (void).cxx_destruct;
- (void)_CreateDispatchTimerFor:(double)arg1 toExecute:(id /* block */)arg2;
- (void)_CreateDispatchTimerForEvent:(id)arg1 toExecute:(id /* block */)arg2;
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;
- (void)_advertiseIndefinite:(id)arg1;
- (void)_advertiseSlowdown;
- (void)_advertiseSuppressTriggerInOutput;
- (void)_advertiseTrigger;
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(id /* block */)arg4;
- (void)_ageWedgeFilter;
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;
- (void)_duringNextWindowExecute:(id /* block */)arg1;
- (id)_endAdvertisingAnalyticsContext:(bool)arg1;
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)_enterState:(unsigned long long)arg1;
- (bool)_inTaskTriggerWasTooSoon;
- (void)_initDeviceClassAndAdjustments;
- (void)_initializeTimer;
- (bool)_isAPhone:(unsigned char)arg1;
- (void)_loseElection;
- (bool)_okayToSuppressOnOutput;
- (void)_readDefaults;
- (void)_resetActionWindows;
- (void)_setupActionWindows;
- (bool)_shouldContinueFor:(id)arg1;
- (bool)_shouldHandleEmergency;
- (void)_signalEmergencyCallHandled;
- (id)_sortedReplies;
- (void)_startAdvertisingFromVoiceTrigger;
- (void)_startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)_startListenTimer;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(id /* block */)arg3;
- (void)_startTimer:(id)arg1 until:(id)arg2 thenExecute:(id /* block */)arg3;
- (id)_stateAsString;
- (id)_stateAsString:(unsigned long long)arg1;
- (void)_stopAdvertisingAndListening;
- (double)_targetDelayAfterTrigger:(unsigned long long)arg1;
- (bool)_testAndUpdateWedgeFilter:(id)arg1;
- (void)_unduck;
- (void)_waitWiProx:(long long)arg1 andExecute:(id /* block */)arg2;
- (void)_waitWiProxAndExecute:(id /* block */)arg1;
- (id)activityEventStream;
- (void)advertiseWith:(id)arg1;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (id)continuationRecord;
- (void)dealloc;
- (id)directTriggerRecord;
- (id)emergencyHandledRecord;
- (id)emergencyRecord;
- (void)endAdvertising;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)endTask;
- (void)enterState:(unsigned long long)arg1;
- (void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)heySiri:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)heySiriAdvertisingPending:(id)arg1;
- (void)heySiriDidUpdateState:(id)arg1;
- (void)heySiriStartedAdvertising:(id)arg1;
- (void)heySiriStartedScanning:(id)arg1;
- (void)heySiriStoppedAdvertising:(id)arg1;
- (void)heySiriStoppedScanning:(id)arg1;
- (bool)inTask;
- (id)initWithDelegate:(id)arg1;
- (id)lateSuppressionRecord;
- (void)logCoreDuetResults:(id)arg1;
- (void)preheatWiProx;
- (void)readDefaults;
- (unsigned short)recentEventBump;
- (void)resetReplies;
- (id)responseObject:(unsigned short)arg1;
- (void)setInTask:(bool)arg1;
- (void)setupAdvIntervalsInDelay:(float*)arg1 interval:(float*)arg2 withSlowdown:(int)arg3;
- (void)setupEnabled:(bool)arg1;
- (id)slowdownRecord:(unsigned short)arg1;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)startAdvertisingEmergency;
- (void)startAdvertisingEmergencyHandled;
- (void)startAdvertisingFromAlertFiringVoiceTrigger;
- (void)startAdvertisingFromCarPlayTrigger;
- (void)startAdvertisingFromDirectTrigger;
- (void)startAdvertisingFromInEarTrigger;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)startAdvertisingSlowdown:(unsigned short)arg1;
- (void)startListening;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startWatchAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (void)stopAdvertising;
- (void)stopListening;
- (id)voiceTriggerRecord;

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