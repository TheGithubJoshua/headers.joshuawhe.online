<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPKExpressPassController.h</title>
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

/PrivateFrameworks/NanoPassKit.framework/NPKExpressPassController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit (1)
 */

@interface NPKExpressPassController : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    PKPass * _currentTransactionPass;
    <NPKExpressPassControllerDelegate> * _delegate;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    int  _expressPassChangedNotifyToken;
    NSDictionary * _expressPasses;
    NSSet * _expressPassesInformation;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPassLibrary * _passLibrary;
    PKPaymentService * _queue_paymentService;
    unsigned long long  _transactionStatus;
}

@property (nonatomic, retain) PKPass *currentTransactionPass;
@property <NPKExpressPassControllerDelegate> *delegate;
@property (nonatomic, readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain) NSDictionary *expressPasses;
@property (retain) NSSet *expressPassesInformation;
@property (nonatomic, readonly) PKPassLibrary *passLibrary;

- (void).cxx_destruct;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (void)_handleEnterNearFieldNotification:(id)arg1;
- (void)_handleExitNearFieldNotification:(id)arg1;
- (void)_handleExpressTransactionEndNotification:(id)arg1;
- (void)_handleExpressTransactionFailedNotification:(id)arg1;
- (void)_handleExpressTransactionStartNotification:(id)arg1;
- (void)_handleExpressTransactionTimeOutNotification:(id)arg1;
- (void)_handlePassesLibraryChangedNotification:(id)arg1;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1;
- (id)_queue_paymentService;
- (void)_queue_updateExpressPasses;
- (void)_startListeningNotifications;
- (void)_stopListeningNotifications;
- (void)_transactionEndedWithApplicationIdentifier:(id)arg1;
- (void)_transactionFailedWithApplicationIdentifier:(id)arg1;
- (void)_transactionStartedWithApplicationIdentifier:(id)arg1;
- (void)_transitionToStatus:(unsigned long long)arg1 forExpressPass:(id)arg2;
- (id)currentTransactionPass;
- (void)dealloc;
- (id)delegate;
- (id)distributedNotificationCenter;
- (id)expressPasses;
- (id)expressPassesInformation;
- (id)initWithDelegate:(id)arg1;
- (id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4;
- (id)passLibrary;
- (void)reset;
- (void)setCurrentTransactionPass:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressPasses:(id)arg1;
- (void)setExpressPassesInformation:(id)arg1;
- (void)updateExpressPasses;

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
