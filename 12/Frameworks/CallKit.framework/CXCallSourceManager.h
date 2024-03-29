<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CXCallSourceManager.h</title>
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

/Frameworks/CallKit.framework/CXCallSourceManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CallKit.framework/CallKit (1)
 */

@interface CXCallSourceManager : NSObject <CXCallSourceDelegate, CXTransactionManagerDelegate, NSXPCListenerDelegate> {
    <CXCallSourceManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _mutableCallSources;
    NSObject<OS_dispatch_queue> * _queue;
    CXTransactionManager * _transactionManager;
    CXTransactionGroup * _uncommittedTransactionGroup;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) NSArray *callSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallSourceManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *mutableCallSources;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CXTransactionManager *transactionManager;
@property (nonatomic, retain) CXTransactionGroup *uncommittedTransactionGroup;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2;
- (void)addCallSource:(id)arg1;
- (void)callSource:(id)arg1 actionCompleted:(id)arg2;
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(id /* block */)arg4;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)callSourceConnectionEnded:(id)arg1;
- (void)callSourceConnectionStarted:(id)arg1;
- (void)callSourceInvalidated:(id)arg1;
- (id)callSourceWithIdentifier:(id)arg1;
- (id)callSources;
- (void)commitTransaction:(id)arg1 toCallSource:(id)arg2;
- (void)commitUncommittedTransactions;
- (id)delegate;
- (id)delegateQueue;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)mutableCallSources;
- (void)performDelegateCallback:(id /* block */)arg1;
- (id)queue;
- (void)removeCallSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setMutableCallSources:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTransactionManager:(id)arg1;
- (void)setUncommittedTransactionGroup:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)transactionManager;
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;
- (id)uncommittedTransactionGroup;
- (id)xpcListener;

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
