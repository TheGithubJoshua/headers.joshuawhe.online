<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SYFileTransferSyncEngine.h</title>
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

/PrivateFrameworks/CompanionSync.framework/SYFileTransferSyncEngine.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync (1)
 */

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate> {
    SYDevice * _activeDevice;
    NSDictionary * _customIDSOptions;
    NSMutableArray * _deferredIncomingSessions;
    NSObject<OS_dispatch_queue> * _idsQueue;
    IDSService * _idsService;
    bool  _inSession;
    NSURL * _inputFileURL;
    IDSMessageContext * _inputPriorityBoostContext;
    _SYInputStreamer * _inputStream;
    NSMutableDictionary * _messageIDsToSessionIDs;
    NSMutableIndexSet * _messageRows;
    NSURL * _outputFileURL;
    _SYOutputStreamer * _outputStream;
    SYDevice * _responseDevice;
    NSURL * _responseFileURL;
    NSMutableIndexSet * _responseMessageRows;
    _SYOutputStreamer * _responseStream;
    bool  _responsesCanceled;
    bool  _sessionCanceled;
    SYDevice * _sessionDevice;
    SYStartSyncSession * _sessionStartMessage;
    NSMutableSet * _singleMessageUUIDs;
}

@property (nonatomic, copy) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id*)arg2;
- (void)_cancelResponses;
- (void)_cancelSession;
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)_crcChecksum:(id)arg1;
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)_fileTransferHeader;
- (void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3;
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(bool)arg4 withCompletion:(id /* block */)arg5;
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;
- (void)_readNextProtobuf:(id /* block */)arg1;
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(id /* block */)arg5;
- (void)_recordLastSeqNo:(id)arg1;
- (bool)_sessionDeviceCanUseSingleMessages;
- (bool)_shouldTreatAsSessionEnd:(id)arg1;
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;
- (void)beginResponseSession;
- (void)beginSession;
- (bool)buffersHandshake;
- (bool)buffersSessions;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)customIDSOptions;
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(bool)arg4 messageRows:(id)arg5;
- (void)endResponseSession;
- (void)endSession;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(id /* block */)arg6;
- (id)idsOptions:(id)arg1;
- (id)idsOptions:(id)arg1 forFileTransfer:(bool)arg2;
- (id)initWithService:(id)arg1 queue:(id)arg2;
- (bool)isInSession;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)resume:(id*)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(id /* block */)arg3;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setCustomIDSOptions:(id)arg1;
- (id)stateForLogging;
- (void)suspend;
- (bool)targetIsNearby;

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
