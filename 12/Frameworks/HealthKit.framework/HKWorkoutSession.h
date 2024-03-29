<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKWorkoutSession.h</title>
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

/Frameworks/HealthKit.framework/HKWorkoutSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKWorkoutSession : NSObject <HKStateMachineDelegate, NSSecureCoding, _HKXPCExportable> {
    HKLiveWorkoutBuilder * _associatedWorkoutBuilder;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKWorkoutSessionTaskConfiguration * _configuration;
    <HKWorkoutSessionDelegate> * _delegate;
    NSDate * _endDate;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startDate;
    long long  _state;
    <HKWorkoutSessionDelegate> * _strongDelegate;
    HKStateMachine * _targetStateMachine;
}

@property (readonly) unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property <HKWorkoutSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) bool isGymKitSession;
@property (readonly) long long locationType;
@property (readonly) NSDate *startDate;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)_applicationHasRunningWorkout;
+ (void)_unitTest_clearAllRunningWorkouts;
+ (id)clientInterface;
+ (id)serverInterface;
+ (bool)supportsSecureCoding;
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id*)arg3;
- (void)_queue_markRecoveryRequired;
- (bool)_queue_shouldAttemptRecovery;
- (void)_recoverWithCompletion:(id /* block */)arg1;
- (void)_setAssociatedWorkoutBuilder:(id)arg1;
- (void)_setupWithHealthStore:(id)arg1;
- (void)_unitTest_discardAssociatedWorkoutBuilder;
- (unsigned long long)activityType;
- (id)associatedWorkoutBuilder;
- (id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3;
- (void)client_didChangeToState:(long long)arg1 date:(id)arg2;
- (void)client_didFailWithError:(id)arg1;
- (void)client_didGenerateEvents:(id)arg1;
- (void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2;
- (void)client_synchronizeWithCompletion:(id /* block */)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)end;
- (id)endDate;
- (void)endWithCompletion:(id /* block */)arg1;
- (id)exportedInterface;
- (id)healthStore;
- (id)identifier;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (bool)isGymKitSession;
- (long long)locationType;
- (void)pause;
- (void)pauseWithCompletion:(id /* block */)arg1;
- (void)prepare;
- (void)prepareWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)resume;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)startActivity;
- (void)startActivityWithDate:(id)arg1;
- (void)startActivityWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)startDate;
- (long long)state;
- (void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stopActivity;
- (void)stopActivityWithDate:(id)arg1;
- (void)stopActivityWithDate:(id)arg1 completion:(id /* block */)arg2;
- (id)workoutConfiguration;

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
