<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPTunnelTuscany.h</title>
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

/PrivateFrameworks/NetworkServiceProxy.framework/NPTunnelTuscany.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy (1)
 */

@interface NPTunnelTuscany : NPTunnel {
    NSObject<OS_nw_connection> * _UDPSession;
    void * _clientRef;
    void * _connectionTimer;
    NSUUID * _dayPassUUID;
    bool  _ignoreWaldoTimestamp;
    bool  _isFirstTunnel;
    unsigned long long  _nextFlowID;
    NPTuscanyOnRamp * _onRamp;
    id /* block */  _pendingPingCompletionHandler;
    void * _pingTimer;
    bool  _shouldReportUsage;
    void * _usageReportTimer;
}

@property (retain) NSObject<OS_nw_connection> *UDPSession;
@property void*clientRef;
@property void*connectionTimer;
@property (readonly) long long currentMTU;
@property (readonly) unsigned int dayPassSessionCounter;
@property (readonly) NSUUID *dayPassUUID;
@property bool ignoreWaldoTimestamp;
@property bool isFirstTunnel;
@property (readonly) unsigned long long maxFrameSize;
@property unsigned long long nextFlowID;
@property (retain) NPTuscanyOnRamp *onRamp;
@property (copy) id /* block */ pendingPingCompletionHandler;
@property void*pingTimer;
@property bool shouldReportUsage;
@property void*usageReportTimer;

- (void).cxx_destruct;
- (id)UDPSession;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (unsigned long long)allocateFlowID;
- (bool)canHandleMoreData;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)checkForStaleWaldo:(unsigned int)arg1;
- (void*)clientRef;
- (void)closeFlow:(id)arg1;
- (void*)connectionTimer;
- (id)createConnectionInfo;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (unsigned int)dayPassSessionCounter;
- (id)dayPassUUID;
- (void)dealloc;
- (void)destroyConnection;
- (bool)flowIsFirstFlow:(id)arg1;
- (void)handleConnected;
- (void)handleConnectionError;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (void)handleHelloAck:(unsigned int)arg1;
- (void)handleInputAvailable;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1;
- (bool)ignoreWaldoTimestamp;
- (id)initWithConfiguration:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 appRule:(id)arg4 flowProperties:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (bool)isFirstTunnel;
- (bool)isTFOProbeSucceeded;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (unsigned long long)maxFrameSize;
- (unsigned long long)nextFlowID;
- (id)onRamp;
- (id /* block */)pendingPingCompletionHandler;
- (void*)pingTimer;
- (void)pingWithCompletionHandler:(id /* block */)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)sendUsageReportWithSuccess:(bool)arg1 rtt:(unsigned long long)arg2 geohash:(id)arg3 fallbackReason:(long long)arg4;
- (void)setClientRef:(void*)arg1;
- (void)setConnectionTimer:(void*)arg1;
- (void)setIgnoreWaldoTimestamp:(bool)arg1;
- (void)setIsFirstTunnel:(bool)arg1;
- (void)setNextFlowID:(unsigned long long)arg1;
- (void)setOnRamp:(id)arg1;
- (void)setPendingPingCompletionHandler:(id /* block */)arg1;
- (void)setPingTimer:(void*)arg1;
- (void)setShouldReportUsage:(bool)arg1;
- (void)setUDPSession:(id)arg1;
- (void)setUsageReportTimer:(void*)arg1;
- (bool)shouldReportUsage;
- (bool)start;
- (void)startConnectionTimer;
- (double)timeIntervalSinceLastUsage;
- (void*)usageReportTimer;
- (void)writeInitialData;

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
