<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSPCloudRepeatableTask.h</title>
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

/PrivateFrameworks/MapsSupport.framework/MSPCloudRepeatableTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport (1)
 */

@interface MSPCloudRepeatableTask : NSObject {
    id /* block */  _attemptHandler;
    bool  _canRetry;
    id /* block */  _cancelHandler;
    NSOperationQueue * _cloudKitOperationsQueue;
    MSPCloudRepeatableTask * _errorResolvingTask;
    id /* block */  _failureHandler;
    NSDate * _finished;
    NSOperation<MSPCloudRequest> * _operation;
    MSPCloudRepeatableTask * _originalErrorTriggeringTask;
    _MSPCloudAttemptTaskOperation * _owningOperation;
    MSPCloudRepeatableTask * _parentTask;
    NSDate * _started;
    bool  _success;
    id /* block */  _successHandler;
}

@property (nonatomic, copy) id /* block */ attemptHandler;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (getter=_desiredQualityOfService, nonatomic, readonly) long long desiredQualityOfService;
@property (nonatomic, retain) MSPCloudRepeatableTask *errorResolvingTask;
@property (nonatomic) NSOperation<MSPCloudRequest> *operation;
@property (nonatomic, retain) MSPCloudRepeatableTask *originalErrorTriggeringTask;
@property (nonatomic) _MSPCloudAttemptTaskOperation *owningOperation;
@property (nonatomic) MSPCloudRepeatableTask *parentTask;

- (void).cxx_destruct;
- (long long)_desiredQualityOfService;
- (id /* block */)attemptHandler;
- (void)attemptWithAccess:(id)arg1;
- (id /* block */)cancelHandler;
- (id)description;
- (id)errorResolvingTask;
- (void)failWithError:(id)arg1 canReattempt:(bool)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4;
- (id)init;
- (id)initWithAttemptHandler:(id /* block */)arg1 performCancelHandler:(id /* block */)arg2;
- (id)operation;
- (id)originalErrorTriggeringTask;
- (id)owningOperation;
- (id)parentTask;
- (void)performCancel;
- (void)performRequest:(id)arg1 continuation:(id /* block */)arg2;
- (void)setAttemptHandler:(id /* block */)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setErrorResolvingTask:(id)arg1;
- (void)setFailureHandler:(id /* block */)arg1;
- (void)setOperation:(id)arg1;
- (void)setOriginalErrorTriggeringTask:(id)arg1;
- (void)setOwningOperation:(id)arg1;
- (void)setParentTask:(id)arg1;
- (void)setSuccessHandler:(id /* block */)arg1;
- (void)succeed;

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
