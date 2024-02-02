<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NAFuture.h</title>
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

/PrivateFrameworks/NetAppsUtilities.framework/NAFuture.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities (1)
 */

@interface NAFuture : NSObject <NAPromise> {
    NSMutableArray * _completionBlocks;
    NSString * _descriptor;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSError * _resultError;
    id  _resultValue;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptor;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (void)_setShouldEnforceThreadSafety:(bool)arg1;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(bool)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithResult:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (bool)_queue_isCancelled;
- (id)addCompletionBlock:(id /* block */)arg1;
- (id)addFailureBlock:(id /* block */)arg1;
- (id)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (id /* block */)completionHandlerAdapter;
- (id)description;
- (id)descriptor;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithNoResult;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (bool)isCancelled;
- (bool)isFinished;
- (id)recover:(id /* block */)arg1;
- (id)recoverIgnoringError;
- (id)reschedule:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)willAddCompletionBlock;

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