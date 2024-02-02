<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ISOperation.h</title>
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

/PrivateFrameworks/iTunesStore.framework/ISOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore (1)
 */

@interface ISOperation : NSOperation {
    <ISOperationDelegate> * _delegate;
    NSError * _error;
    NSLock * _lock;
    NSRunLoop * _operationRunLoop;
    ISOperation * _parentOperation;
    NSString * _powerAssertionIdentifier;
    SSOperationProgress * _progress;
    NSArray * _serializationLockIdentifiers;
    bool  _shouldMessageMainThread;
    bool  _shouldRunWithBackgroundPriority;
    bool  _stopped;
    NSMutableArray * _subOperations;
    bool  _success;
}

@property <ISOperationDelegate> *delegate;
@property (retain) NSError *error;
@property (retain) NSRunLoop *operationRunLoop;
@property (retain) ISOperation *parentOperation;
@property (retain) NSString *powerAssertionIdentifier;
@property (nonatomic, readonly) SSOperationProgress *progress;
@property (readonly) long long progressWeight;
@property (copy) NSArray *serializationLockIdentifiers;
@property bool shouldMessageMainThread;
@property bool shouldRunWithBackgroundPriority;
@property bool success;
@property (readonly) NSString *uniqueKey;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (void).cxx_destruct;
- (void)_addSubOperation:(id)arg1;
- (void)_failAfterException;
- (void)_keepAliveTimer:(id)arg1;
- (void)_main:(bool)arg1;
- (void)_removeSubOperation:(id)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)_sendSuccessToDelegate;
- (void)_sendWillStartToDelegate;
- (unsigned long long)authenticatedAccountCredentialSource;
- (id)authenticatedAccountDSID;
- (void)cancel;
- (bool)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id*)arg4;
- (bool)copyAccountID:(id*)arg1 credentialSource:(unsigned long long*)arg2 byHandlingAuthenticateResponse:(id)arg3 returningError:(id*)arg4;
- (id)copyActivePowerAssertionIdentifiers;
- (id)copySerializationLocks;
- (id)delegate;
- (void)delegateDispatch:(id /* block */)arg1;
- (void)dispatchCompletionBlock;
- (id)error;
- (id)init;
- (bool)loadSoftwareMapReturningError:(id*)arg1;
- (bool)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2;
- (id)loadedURLBagWithContext:(id)arg1 accountDSID:(id)arg2 returningError:(id*)arg3;
- (id)loadedURLBagWithContext:(id)arg1 returningError:(id*)arg2;
- (void)lock;
- (void)main;
- (id)operationRunLoop;
- (id)parentOperation;
- (id)powerAssertionIdentifier;
- (id)progress;
- (long long)progressWeight;
- (void)releasePowerAssertionsDuringBlock:(id /* block */)arg1;
- (void)run;
- (void)run:(bool)arg1;
- (int)runRunLoopUntilStopped;
- (bool)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3;
- (bool)runSubOperation:(id)arg1 returningError:(id*)arg2;
- (void)sendDidTakeSerializationLocks;
- (void)sendProgressToDelegate;
- (id)serializationLockIdentifiers;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOperationRunLoop:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setPowerAssertionIdentifier:(id)arg1;
- (void)setSerializationLockIdentifiers:(id)arg1;
- (void)setShouldMessageMainThread:(bool)arg1;
- (void)setShouldRunWithBackgroundPriority:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)shouldFailAfterUniquePredecessorError:(id)arg1;
- (bool)shouldMessageMainThread;
- (bool)shouldRunWithBackgroundPriority;
- (bool)stopRunLoop;
- (bool)success;
- (id)uniqueKey;
- (void)unlock;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)sendCompletionCallback:(id)arg1;
- (void)setScriptOptions:(id)arg1;

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