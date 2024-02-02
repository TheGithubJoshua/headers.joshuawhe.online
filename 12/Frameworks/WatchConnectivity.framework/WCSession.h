<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WCSession.h</title>
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

/Frameworks/WatchConnectivity.framework/WCSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity (178)
 */

@interface WCSession : NSObject <WCXPCManagerDelegate> {
    long long  _activationState;
    NSDictionary * _applicationContext;
    NSOperationQueue * _backgroundWorkOperationQueue;
    bool  _complicationEnabled;
    bool  _connectionWasInterrupted;
    WCSessionUserInfoTransfer * _currentComplicationUserInfoTransfer;
    NSMutableSet * _currentMessageIdentifiersAwaitingReply;
    NSMutableDictionary * _currentMessages;
    <WCSessionDelegate> * _delegate;
    NSOperationQueue * _delegateOperationQueue;
    bool  _delegateSupportsActiveDeviceSwitch;
    bool  _delegateSupportsAsyncActivate;
    bool  _hasCompletedInitialActivation;
    bool  _hasContentPending;
    bool  _iOSDeviceNeedsUnlockAfterRebootForReachability;
    NSMutableDictionary * _internalOutstandingFileTransfers;
    NSMutableDictionary * _internalOutstandingUserInfoTransfers;
    bool  _paired;
    NSString * _pairingID;
    WCQueueManager * _queueManager;
    bool  _reachable;
    bool  _reachableForced;
    NSDictionary * _receivedApplicationContext;
    unsigned long long  _remainingComplicationUserInfoTransfers;
    NSMutableArray * _switchTasksQueue;
    bool  _watchAppInstalled;
    NSURL * _watchDirectoryURL;
    NSOperationQueue * _workOperationQueue;
}

@property (nonatomic) long long activationState;
@property (nonatomic, copy) NSDictionary *applicationContext;
@property (readonly) NSOperationQueue *backgroundWorkOperationQueue;
@property (getter=isComplicationEnabled, nonatomic) bool complicationEnabled;
@property (nonatomic) bool connectionWasInterrupted;
@property (retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer;
@property (retain) NSMutableSet *currentMessageIdentifiersAwaitingReply;
@property (readonly) NSMutableDictionary *currentMessages;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WCSessionDelegate> *delegate;
@property (readonly) NSOperationQueue *delegateOperationQueue;
@property (nonatomic) bool delegateSupportsActiveDeviceSwitch;
@property (nonatomic) bool delegateSupportsAsyncActivate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCompletedInitialActivation;
@property (nonatomic) bool hasContentPending;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iOSDeviceNeedsUnlockAfterRebootForReachability;
@property (nonatomic, retain) NSMutableDictionary *internalOutstandingFileTransfers;
@property (nonatomic, retain) NSMutableDictionary *internalOutstandingUserInfoTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingFileTransfers;
@property (nonatomic, readonly, copy) NSArray *outstandingUserInfoTransfers;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic, copy) NSString *pairingID;
@property (retain) WCQueueManager *queueManager;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, copy) NSDictionary *receivedApplicationContext;
@property (nonatomic) unsigned long long remainingComplicationUserInfoTransfers;
@property (readonly) Class superclass;
@property (retain) NSMutableArray *switchTasksQueue;
@property (getter=isWatchAppInstalled, nonatomic) bool watchAppInstalled;
@property (nonatomic, retain) NSURL *watchDirectoryURL;
@property (readonly) NSOperationQueue *workOperationQueue;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultSession;
+ (bool)isSupported;

- (void).cxx_destruct;
- (id)_init;
- (void)_onqueue_notifyOfMessageError:(id)arg1 messageID:(id)arg2 withErrorHandler:(id /* block */)arg3;
- (void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(bool)arg3;
- (void)activateSession;
- (long long)activationState;
- (id)applicationContext;
- (id)backgroundWorkOperationQueue;
- (void)cancelFileTransfer:(id)arg1;
- (void)cancelUserInfo:(id)arg1;
- (bool)connectionWasInterrupted;
- (id)createAndStartTimerOnWorkQueueWithHandler:(id /* block */)arg1;
- (id)currentComplicationUserInfoTransfer;
- (id)currentMessageIdentifiersAwaitingReply;
- (id)currentMessages;
- (id)currentPairingID;
- (void)dealloc;
- (id)delegate;
- (id)delegateOperationQueue;
- (bool)delegateSupportsActiveDeviceSwitch;
- (bool)delegateSupportsAsyncActivate;
- (id)description;
- (bool)didPairingIDChange:(id)arg1;
- (void)didSessionStateChange:(id)arg1 withChangeHandler:(id /* block */)arg2;
- (bool)didWatchURLChange:(id)arg1;
- (id)errorIfNotReachable;
- (id)errorIfPreconditionsNotSatisfied;
- (id)fileSizeFromURL:(id)arg1;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleApplicationContextWithPairingID:(id)arg1;
- (void)handleFileResultWithPairingID:(id)arg1;
- (void)handleIncomingFileWithPairingID:(id)arg1;
- (void)handleIncomingUserInfoWithPairingID:(id)arg1;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleUserInfoResultWithPairingID:(id)arg1;
- (bool)hasCompletedInitialActivation;
- (bool)hasContentPending;
- (unsigned long long)hash;
- (bool)iOSDeviceNeedsUnlockAfterRebootForReachability;
- (id)init;
- (id)internalOutstandingFileTransfers;
- (id)internalOutstandingUserInfoTransfers;
- (bool)isComplicationEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPaired;
- (bool)isReachable;
- (bool)isWatchAppInstalled;
- (bool)logAndTestIfUnactivatedOrMissingDelegate;
- (void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg1 triggerKVO:(bool)arg2;
- (void)onqueue_addOutstandingFileTransfer:(id)arg1;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_cancelFileTransfer:(id)arg1;
- (void)onqueue_cancelMessagesIfAppropriate;
- (void)onqueue_cancelTransfersIfAppropriate;
- (void)onqueue_cancelUserInfo:(id)arg1;
- (void)onqueue_completeSwitchTask:(id)arg1 withSessionState:(id)arg2;
- (void)onqueue_createProgressForFileTransfer:(id)arg1;
- (void)onqueue_dequeueContent;
- (void)onqueue_handleDataMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleDictionaryMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2;
- (void)onqueue_handleProgressFinishedForFileTransfer:(id)arg1;
- (void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleUpdateSessionState:(id)arg1;
- (void)onqueue_loadAppContexts;
- (void)onqueue_loadFileTransferProgress;
- (void)onqueue_loadOutstandingFileTransfers;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (void)onqueue_loadPersistedContent;
- (void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_removeOutstandingFileTransfer:(id)arg1;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_removeProgressForFileTransfer:(id)arg1;
- (void)onqueue_sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3 dictionaryMessage:(bool)arg4;
- (void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(bool)arg3;
- (void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)onqueue_startNextDeviceSwitch;
- (void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2;
- (void)onqueue_updateClientProgressForFileTransfer:(id)arg1;
- (void)onqueue_updateProgressForFileTransfer:(id)arg1 progress:(id)arg2;
- (id)outstandingFileTransfers;
- (id)outstandingUserInfoTransfers;
- (id)pairingID;
- (id)queueManager;
- (id)receivedApplicationContext;
- (unsigned long long)remainingComplicationUserInfoTransfers;
- (void)reportFileTransfer:(id)arg1;
- (unsigned long long)roundValue:(unsigned long long)arg1 toSignificantFigures:(int)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)sendMessageData:(id)arg1 replyHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)setActivationState:(long long)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setComplicationEnabled:(bool)arg1;
- (void)setConnectionWasInterrupted:(bool)arg1;
- (void)setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)setCurrentMessageIdentifiersAwaitingReply:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateSupportsActiveDeviceSwitch:(bool)arg1;
- (void)setDelegateSupportsAsyncActivate:(bool)arg1;
- (void)setHasCompletedInitialActivation:(bool)arg1;
- (void)setHasContentPending:(bool)arg1;
- (void)setIOSDeviceNeedsUnlockAfterRebootForReachability:(bool)arg1;
- (void)setInternalOutstandingFileTransfers:(id)arg1;
- (void)setInternalOutstandingUserInfoTransfers:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPairingID:(id)arg1;
- (void)setQueueManager:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setReceivedApplicationContext:(id)arg1;
- (void)setRemainingComplicationUserInfoTransfers:(unsigned long long)arg1;
- (void)setSwitchTasksQueue:(id)arg1;
- (void)setWatchAppInstalled:(bool)arg1;
- (void)setWatchDirectoryURL:(id)arg1;
- (void)storeAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2;
- (bool)supportsActiveDeviceSwitch;
- (id)switchTasksQueue;
- (id)transferCurrentComplicationUserInfo:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;
- (bool)updateApplicationContext:(id)arg1 error:(id*)arg2;
- (void)updatePairingID:(id)arg1;
- (bool)verifySessionFile:(id)arg1;
- (id)watchDirectoryURL;
- (id)workOperationQueue;
- (void)xpcConnectionInterrupted;
- (void)xpcConnectionRestoredWithState:(id)arg1;

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