<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDSyncOperationQueue.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDSyncOperationQueue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDSyncOperationQueue : HMFObject {
    HMFExponentialBackoffTimer * _backoffTimer;
    bool  _hasExponentialBackoff;
    double  _initialBackoff;
    double  _initialDelay;
    HMDSyncOperationManager * _manager;
    NSString * _name;
    NSMutableArray * _stagedOperations;
    NSMutableArray * _waitingOperations;
}

@property (nonatomic, retain) HMFExponentialBackoffTimer *backoffTimer;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long countTotal;
@property (nonatomic) bool hasExponentialBackoff;
@property (nonatomic) double initialBackoff;
@property (nonatomic) double initialDelay;
@property (nonatomic) HMDSyncOperationManager *manager;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSMutableArray *stagedOperations;
@property (nonatomic, retain) NSMutableArray *waitingOperations;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_createBackoffTimer;
- (void)addOperation:(id)arg1 withDelay:(double)arg2;
- (id)allOperations;
- (id)backoffTimer;
- (long long)count;
- (long long)countTotal;
- (id)description;
- (void)dropAllOperations;
- (void)dropOperation:(id)arg1;
- (bool)hasExponentialBackoff;
- (id)initName:(id)arg1 syncManager:(id)arg2 initialDelay:(double)arg3 initialBackoff:(double)arg4 hasBackoff:(bool)arg5;
- (double)initialBackoff;
- (double)initialDelay;
- (bool)isInMaximumTimeInterval;
- (id)manager;
- (id)name;
- (id)nextOperation;
- (id)operationsToCancel;
- (bool)processFiredTimer:(id)arg1;
- (void)resetBackoffTimer;
- (void)setBackoffTimer:(id)arg1;
- (void)setHasExponentialBackoff:(bool)arg1;
- (void)setInitialBackoff:(double)arg1;
- (void)setInitialDelay:(double)arg1;
- (void)setManager:(id)arg1;
- (void)setStagedOperations:(id)arg1;
- (void)setWaitingOperations:(id)arg1;
- (void)stageOperation:(id)arg1;
- (id)stagedOperations;
- (id)waitingOperations;

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
