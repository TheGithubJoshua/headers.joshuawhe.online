<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PAContiguousStack.h</title>
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

/PrivateFrameworks/PASampling.framework/PAContiguousStack.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling (218.2)
 */

@interface PAContiguousStack : NSObject {
    unsigned long long  _firstTimestampIndex;
    unsigned long long  _previousCpuCycles;
    unsigned long long  _previousCpuInstructions;
    unsigned long long  _previousCpuTimeNs;
    NSMutableArray * _threads;
}

@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) unsigned long long threadId;

- (void).cxx_destruct;
- (void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)cpuCycles;
- (unsigned long long)cpuInstructions;
- (unsigned long long)cpuTimeNs;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (unsigned long long)firstTimestampIndex;
- (bool)hasSingleName:(id*)arg1;
- (id)initWithTimestampIndex:(unsigned long long)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 andPreviousCpuInstructions:(unsigned long long)arg3 andPreviousCpuCycles:(unsigned long long)arg4;
- (bool)isGlobalForcedIdleThread;
- (bool)isIdleWorkQueueThread;
- (bool)isProcessorIdleThread;
- (bool)isSingleStackWithLeafUserFrame:(id)arg1 andLeafKernelFrame:(id)arg2;
- (void)iterateSampleTaskThreadPairsWithTasks:(id)arg1 fromTimestampIndex:(unsigned long long)arg2 toTimestampIndex:(unsigned long long)arg3 callback:(id /* block */)arg4;
- (void)iterateSampleThreadsFromTimestampIndex:(unsigned long long)arg1 toTimestampIndex:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (unsigned long long)lastTimestampIndex;
- (id)sampleThreadAtTimestampIndex:(unsigned long long)arg1;
- (bool)threadExistedPreviously;
- (unsigned long long)threadId;

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