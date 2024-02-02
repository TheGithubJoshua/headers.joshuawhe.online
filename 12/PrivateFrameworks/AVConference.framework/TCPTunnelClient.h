<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TCPTunnelClient.h</title>
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

/PrivateFrameworks/AVConference.framework/TCPTunnelClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {
    NSData * _allocateReq;
    id /* block */  _allocationResponseHandler;
    double  _allocationTimestamp;
    id /* block */  _bindingResponseHandler;
    TCPBufferPool * _bufferPool;
    NSData * _channelBReq;
    unsigned short  _channelNumber;
    int  _connectState;
    int  _connectedFD;
    unsigned short  _currentMsgType;
    long long  _currentPadding;
    long long  _currentlyReadingDataGoalLength;
    NSMutableData * _currentlyReadingMessage;
    id /* block */  _destroyHandler;
    float  _fTimeout;
    id /* block */  _handler;
    int  _head;
    int  _isChannelBound;
    NSString * _participantID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    NSDictionary * _relayUpdateDict;
    NSMutableDictionary * _reqRespDict;
    struct tagIPPORT { 
        int iFlags; 
        BOOL szIfName[16]; 
        union { 
            unsigned int dwIPv4; 
            unsigned char abIPv6[16]; 
        } IP; 
        unsigned short wPort; 
    }  _serverIPPort;
    int  _tail;
    id /* block */  _terminationHandler;
    NSObject<OS_dispatch_source> * _timer;
    char * _writeBuf;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSourceSuspended;
}

@property (copy) id /* block */ allocationResponseHandler;
@property (copy) id /* block */ bindingResponseHandler;
@property (copy) id /* block */ destroyHandler;
@property (copy) NSString *participantID;
@property (copy) id /* block */ receiveHandler;
@property (copy) id /* block */ terminationHandler;

- (id /* block */)allocationResponseHandler;
- (id /* block */)bindingResponseHandler;
- (void)closeTunnelSocket;
- (unsigned int)connectionType;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2;
- (void)dealloc;
- (void)destroyDispatchTimer;
- (id /* block */)destroyHandler;
- (void)finalize;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned int)arg2 relayType:(unsigned char)arg3 errorCode:(int*)arg4;
- (bool)isTunnelSocketClosed;
- (id)participantID;
- (void)processSocketRead;
- (void)processSocketReadSSL;
- (void)processSocketWrite:(unsigned char)arg1;
- (id /* block */)receiveHandler;
- (void)receivedControlData:(id)arg1;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5;
- (void)resetConnection;
- (bool)sendAllocateMsg:(id*)arg1;
- (bool)sendChannelBindingMsgWithDict:(id)arg1 error:(id*)arg2;
- (bool)sendRefreshMsg:(unsigned int)arg1 error:(id*)arg2;
- (void)sendTCPData:(const void*)arg1 bufSize:(int)arg2;
- (void)setAllocationResponseHandler:(id /* block */)arg1;
- (void)setBindingResponseHandler:(id /* block */)arg1;
- (void)setDestroyHandler:(id /* block */)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setReceiveHandler:(id /* block */)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id /* block */)terminationHandler;
- (void)unbindChannel;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(bool)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

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