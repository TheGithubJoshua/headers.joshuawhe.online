<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDSyncOperationManager.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDSyncOperationManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDSyncOperationManager : HMFObject <HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _cloudCancelPauseOperations;
    HMDSyncOperationQueue * _cloudFetchOperations;
    HMFExponentialBackoffTimer * _cloudPushDelayTimer;
    HMDSyncOperationQueue * _cloudPushOperations;
    NSMutableArray * _cloudVerifyAccountOperations;
    NSMutableArray * _cloudZoneFetchOperations;
    NSMutableDictionary * _cloudZoneFetchOperationsMap;
    NSMutableArray * _cloudZonePushOperations;
    NSMutableDictionary * _cloudZonePushOperationsMap;
    HMDHomeManager * _homeManager;
    long long  _pauseCloudPushLevel;
    bool  _pauseQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _syncLoopDialogDisplayed;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) NSMutableArray *cloudCancelPauseOperations;
@property (nonatomic, retain) HMDSyncOperationQueue *cloudFetchOperations;
@property (nonatomic, retain) HMFExponentialBackoffTimer *cloudPushDelayTimer;
@property (nonatomic, retain) HMDSyncOperationQueue *cloudPushOperations;
@property (nonatomic, retain) NSMutableArray *cloudVerifyAccountOperations;
@property (nonatomic, retain) NSMutableArray *cloudZoneFetchOperations;
@property (nonatomic, retain) NSMutableDictionary *cloudZoneFetchOperationsMap;
@property (nonatomic, retain) NSMutableArray *cloudZonePushOperations;
@property (nonatomic, retain) NSMutableDictionary *cloudZonePushOperationsMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) long long pauseCloudPushLevel;
@property (nonatomic) bool pauseQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (getter=wasSyncLoopDialogDisplayed, nonatomic) bool syncLoopDialogDisplayed;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (long long)_cloudZoneFetchOperationsCountTotal;
- (long long)_cloudZonePushOperationsCountTotal;
- (void)_handleCancelledOperations:(id)arg1;
- (void)_handleNextOperation;
- (void)_reportPossibleSyncLoop;
- (void)addOperation:(id)arg1;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (void)cancelOperations;
- (id)clientQueue;
- (id)cloudCancelPauseOperations;
- (id)cloudFetchOperations;
- (id)cloudPushDelayTimer;
- (id)cloudPushOperations;
- (id)cloudVerifyAccountOperations;
- (id)cloudZoneFetchOperations;
- (id)cloudZoneFetchOperationsMap;
- (id)cloudZonePushOperations;
- (id)cloudZonePushOperationsMap;
- (id)dequeueNextOperation;
- (id)description;
- (id)dumpState;
- (id)homeManager;
- (id)initWithClientQueue:(id)arg1 homeManager:(id)arg2;
- (void)kick;
- (void)killCloudPushAndResume;
- (void)pause;
- (void)pauseAndWaitForCurrentOperationCompletion:(id /* block */)arg1;
- (void)pauseCloudPush;
- (long long)pauseCloudPushLevel;
- (bool)pauseQueue;
- (id)propertyQueue;
- (void)resetCloudPushTimer:(id)arg1;
- (void)resume;
- (void)resumeCloudPush;
- (void)setCloudCancelPauseOperations:(id)arg1;
- (void)setCloudFetchOperations:(id)arg1;
- (void)setCloudPushDelayTimer:(id)arg1;
- (void)setCloudPushOperations:(id)arg1;
- (void)setCloudVerifyAccountOperations:(id)arg1;
- (void)setCloudZoneFetchOperations:(id)arg1;
- (void)setCloudZoneFetchOperationsMap:(id)arg1;
- (void)setCloudZonePushOperations:(id)arg1;
- (void)setCloudZonePushOperationsMap:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setPauseCloudPushLevel:(long long)arg1;
- (void)setPauseQueue:(bool)arg1;
- (void)setSyncLoopDialogDisplayed:(bool)arg1;
- (void)timerDidFire:(id)arg1;
- (bool)wasSyncLoopDialogDisplayed;
- (id)workQueue;

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