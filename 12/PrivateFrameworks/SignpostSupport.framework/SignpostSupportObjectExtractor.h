<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SignpostSupportObjectExtractor.h</title>
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

/PrivateFrameworks/SignpostSupport.framework/SignpostSupportObjectExtractor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport (31.1)
 */

@interface SignpostSupportObjectExtractor : NSObject {
    id /* block */  __intervalEndHandler;
    OSLogEventLiveStream * __liveStream;
    unsigned long long  __notificationTimeout;
    bool  __shouldStopProcessing;
    id /* block */  __stopProcessingBlock;
    id /* block */  _animationIntervalCompletionProcessingBlock;
    id /* block */  _beginEventProcessingBlock;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    id /* block */  _deviceRebootProcessingBlock;
    id /* block */  _emitEventProcessingBlock;
    id /* block */  _endEventProcessingBlock;
    SignpostIntervalBuilder * _intervalBuilder;
    id /* block */  _intervalCompletionProcessingBlock;
    id /* block */  _logMessageProcessingBlock;
    NSObject<OS_dispatch_queue> * _notificationProcessingQueue;
    SignpostSupportObjectFilter * _objectFilter;
    SignpostSupportPIDFilter * _pidFilter;
    SignpostSupportExactProcessNameFilter * _processNameFilter;
    unsigned long long  _processedEventCount;
    id /* block */  _processingCompletionBlock;
    id /* block */  _repeatedBeginEventProcessingBlock;
    SignpostSupportSubsystemCategoryFilter * _subsystemCategoryFilter;
    NSObject<OS_dispatch_semaphore> * _syncSem;
    id /* block */  _timedOutBeginEventProcessingBlock;
    SignpostSupportUniquePIDFilter * _uniquePidFilter;
    id /* block */  _unmatchedEndEventProcessingBlock;
}

@property (nonatomic, copy) id /* block */ _intervalEndHandler;
@property (nonatomic, retain) OSLogEventLiveStream *_liveStream;
@property (nonatomic) unsigned long long _notificationTimeout;
@property bool _shouldStopProcessing;
@property (nonatomic, copy) id /* block */ _stopProcessingBlock;
@property (nonatomic, copy) id /* block */ animationIntervalCompletionProcessingBlock;
@property (nonatomic, copy) id /* block */ beginEventProcessingBlock;
@property (nonatomic) bool buildAnimationCompositeIntervalTimelines;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (nonatomic, copy) id /* block */ deviceRebootProcessingBlock;
@property (nonatomic, copy) id /* block */ emitEventProcessingBlock;
@property (nonatomic, copy) id /* block */ endEventProcessingBlock;
@property (nonatomic, readonly) SignpostIntervalBuilder *intervalBuilder;
@property (nonatomic, copy) id /* block */ intervalCompletionProcessingBlock;
@property (nonatomic, copy) id /* block */ logMessageProcessingBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationProcessingQueue;
@property (nonatomic, retain) SignpostSupportObjectFilter *objectFilter;
@property (nonatomic, retain) SignpostSupportPIDFilter *pidFilter;
@property (nonatomic, retain) SignpostSupportExactProcessNameFilter *processNameFilter;
@property (nonatomic) unsigned long long processedEventCount;
@property (nonatomic, copy) id /* block */ processingCompletionBlock;
@property (nonatomic, copy) id /* block */ repeatedBeginEventProcessingBlock;
@property (nonatomic, retain) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *syncSem;
@property (nonatomic, copy) id /* block */ timedOutBeginEventProcessingBlock;
@property (nonatomic, retain) SignpostSupportUniquePIDFilter *uniquePidFilter;
@property (nonatomic, copy) id /* block */ unmatchedEndEventProcessingBlock;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

- (void).cxx_destruct;
- (bool)_eventPassesFilters:(id)arg1;
- (bool)_eventPassesWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5;
- (bool)_generateIntervalFromEnd:(id)arg1 shouldReport:(bool)arg2;
- (bool)_hasNonObjectFilters;
- (bool)_hasSignpostProcessingBlock;
- (id /* block */)_intervalEndHandler;
- (bool)_isTrackingIntervals;
- (id)_liveStream;
- (id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(bool)arg1;
- (unsigned long long)_notificationTimeout;
- (bool)_processSignpostEvent:(id)arg1 shouldReport:(bool)arg2;
- (bool)_processSignpostSupportLogMessage:(id)arg1;
- (void)_processingCompleted:(id)arg1;
- (bool)_shouldBuildEventWithPid:(int)arg1 uniquePid:(unsigned long long)arg2 processName:(id)arg3 subsystem:(id)arg4 category:(id)arg5 shouldReport:(bool*)arg6;
- (bool)_shouldProcessEvent:(id)arg1 shouldReport:(bool*)arg2;
- (bool)_shouldStopProcessing;
- (id /* block */)_stopProcessingBlock;
- (id /* block */)animationIntervalCompletionProcessingBlock;
- (id /* block */)beginEventProcessingBlock;
- (bool)buildAnimationCompositeIntervalTimelines;
- (id)completionSemaphore;
- (void)dealloc;
- (id /* block */)deviceRebootProcessingBlock;
- (id /* block */)emitEventProcessingBlock;
- (id /* block */)endEventProcessingBlock;
- (void)finishProcessingSerializedData;
- (id)init;
- (id)intervalBuilder;
- (id /* block */)intervalCompletionProcessingBlock;
- (id /* block */)logMessageProcessingBlock;
- (id)notificationProcessingQueue;
- (id)objectFilter;
- (id)pidFilter;
- (id)processNameFilter;
- (bool)processSerializedObjectsFromData:(id)arg1 errorOut:(id*)arg2;
- (bool)processSerializedObjectsFromSignpostFile:(id)arg1 errorOut:(id*)arg2;
- (unsigned long long)processedEventCount;
- (id /* block */)processingCompletionBlock;
- (id /* block */)repeatedBeginEventProcessingBlock;
- (void)setAnimationIntervalCompletionProcessingBlock:(id /* block */)arg1;
- (void)setBeginEventProcessingBlock:(id /* block */)arg1;
- (void)setBuildAnimationCompositeIntervalTimelines:(bool)arg1;
- (void)setDeviceRebootProcessingBlock:(id /* block */)arg1;
- (void)setEmitEventProcessingBlock:(id /* block */)arg1;
- (void)setEndEventProcessingBlock:(id /* block */)arg1;
- (void)setIntervalCompletionProcessingBlock:(id /* block */)arg1;
- (void)setLogMessageProcessingBlock:(id /* block */)arg1;
- (void)setNotificationProcessingQueue:(id)arg1;
- (void)setObjectFilter:(id)arg1;
- (void)setPidFilter:(id)arg1;
- (void)setProcessNameFilter:(id)arg1;
- (void)setProcessedEventCount:(unsigned long long)arg1;
- (void)setProcessingCompletionBlock:(id /* block */)arg1;
- (void)setRepeatedBeginEventProcessingBlock:(id /* block */)arg1;
- (void)setSubsystemCategoryFilter:(id)arg1;
- (void)setTimedOutBeginEventProcessingBlock:(id /* block */)arg1;
- (void)setUniquePidFilter:(id)arg1;
- (void)setUnmatchedEndEventProcessingBlock:(id /* block */)arg1;
- (void)set_intervalEndHandler:(id /* block */)arg1;
- (void)set_liveStream:(id)arg1;
- (void)set_notificationTimeout:(unsigned long long)arg1;
- (void)set_shouldStopProcessing:(bool)arg1;
- (void)set_stopProcessingBlock:(id /* block */)arg1;
- (void)stopProcessing;
- (id)subsystemCategoryFilter;
- (id)syncSem;
- (id /* block */)timedOutBeginEventProcessingBlock;
- (id)uniquePidFilter;
- (id /* block */)unmatchedEndEventProcessingBlock;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

- (void)_processOSLogEventProxy:(id)arg1;
- (void)_processStreamedOSLogEventProxy:(id)arg1 shouldCalculateFramerate:(bool)arg2;
- (bool)processLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id*)arg4;
- (bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id*)arg2;
- (bool)processNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 shouldCalculateAnimationFramerate:(bool)arg2 targetQueue:(id)arg3 errorOut:(id*)arg4;

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
