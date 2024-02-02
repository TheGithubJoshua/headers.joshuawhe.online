<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PAAggregatedProcessInstance.h</title>
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

/PrivateFrameworks/PASampling.framework/PAAggregatedProcessInstance.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling (218.2)
 */

@interface PAAggregatedProcessInstance : PAAggregatedTask {
    bool  _combinedStacks;
    NSMutableSet * _concurrentDispatchQueueIds;
    unsigned int  _countSuspended;
    unsigned int  _countTerminated;
    unsigned long long  _cpuCyclesCached;
    unsigned long long  _cpuInstructionsCached;
    unsigned long long  _cpuTimeNsCached;
    unsigned long long  _firstTimestampIndex;
    unsigned long long  _mainThreadId;
    double  _mostRecentTimeSamplingOnlyMainThread;
    bool  _previousThreadsWereUnchanged;
    NSDictionary * _threadsInPreviousSample;
    unsigned long long  _timestampIndexWhenTransitionedToSamplingAllThreads;
    NSMutableArray * _timestampIndexedTasks;
    struct __CFDictionary { } * stacks;
}

@property (readonly) PAProcessInstanceAggregator *aggregator;
@property (readonly) bool allowsIdleExit;
@property (readonly) NSMutableSet *concurrentDispatchQueueIds;
@property (readonly) unsigned int count;
@property (readonly) unsigned int countSuspended;
@property (readonly) unsigned int countTerminated;
@property (readonly) unsigned long long firstTimestampIndex;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTranslocated;
@property (readonly) bool isUnresponsive;
@property (readonly) unsigned long long lastTimestampIndex;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property (readonly) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (retain) NSDictionary *threadsInPreviousSample;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned long long timestampIndexWhenTransitionedToSamplingAllThreads;
@property (readonly) NSArray *timestampIndexedTasks;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool workQueueExceededConstrainedThreadLimit;
@property (readonly) bool workQueueExceededTotalThreadLimit;

- (void).cxx_destruct;
- (void)_combineAllStacks;
- (void)_combineMainThreadStacks;
- (void)_combineSerialDispatchQueueStacks;
- (void)_combineStacksByThreadID;
- (bool)_shouldDisplayStacks;
- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(bool)arg3;
- (id)aggregator;
- (bool)allowsIdleExit;
- (id)architectureString;
- (void)calculateTimeIndexes;
- (void)combineStacks;
- (long long)compare:(id)arg1;
- (id)concurrentDispatchQueueIds;
- (unsigned int)count;
- (unsigned int)countSuspended;
- (unsigned int)countTerminated;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (void)dealloc;
- (id)debugDescription;
- (void)fillGaps;
- (id)firstTask;
- (unsigned long long)firstTimestampIndex;
- (unsigned long long)hash;
- (id)initForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isThirdParty;
- (bool)isTranslocated;
- (bool)isUnresponsive;
- (unsigned long long)lastTimestampIndex;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (id)name;
- (int)pid;
- (int)ppid;
- (void)printHeaderToOutputStream:(id)arg1;
- (void)printStacksToOutputStream:(id)arg1;
- (void)printToOutputStream:(id)arg1;
- (int)rpid;
- (id)sampleTaskAtTimestampIndex:(unsigned long long)arg1;
- (void)setThreadsInPreviousSample:(id)arg1;
- (id)sortedStacks;
- (id)threadsInPreviousSample;
- (double)timeOfLastResponse;
- (unsigned long long)timestampIndexWhenTransitionedToSamplingAllThreads;
- (id)timestampIndexedTasks;
- (unsigned int)uid;
- (unsigned long long)uniquePid;
- (bool)usesSuddenTermination;
- (bool)workQueueExceededConstrainedThreadLimit;
- (bool)workQueueExceededTotalThreadLimit;

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