<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>W5Client.h</title>
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

/PrivateFrameworks/WiFiVelocity.framework/W5Client.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity (111)
 */

@interface W5Client : NSObject {
    NSXPCConnection * _conn;
    id /* block */  _eventCallback;
    bool  _isBrowsing;
    double  _lastRecoveryTimestamp;
    NSMutableDictionary * _mutableDiagnosticsCallbackMap;
    NSMutableArray * _mutableEventIDs;
    NSMutableDictionary * _mutableLogsCallbackMap;
    NSMutableDictionary * _mutablePerformanceCallbackMap;
    NSMutableArray * _mutableUUIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ eventCallback;

+ (id)sharedClient;

- (void)__cancelAllRequestsAndReply:(id /* block */)arg1;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (id)__collectJetsamFallbackLogsAndCompress:(bool)arg1;
- (void)__log:(id)arg1 timestamp:(bool)arg2 reply:(id /* block */)arg3;
- (void)__logsCollectedWithTemporaryURL:(id)arg1 receipts:(id)arg2 error:(id)arg3 outputURL:(id)arg4 compress:(bool)arg5 reply:(id /* block */)arg6;
- (id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4;
- (void)__queryLocalPeerAndReply:(id /* block */)arg1;
- (void)__queryPeerCacheAndReply:(id /* block */)arg1;
- (void)__startBrowsingAndReply:(id /* block */)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (void)__stopBrowsingAndReply:(id /* block */)arg1;
- (void)__stopMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (bool)__tarballUsingBOMWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3;
- (bool)__tarballUsingToolWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3;
- (bool)__tarballWithSource:(id)arg1 destination:(id)arg2 error:(id*)arg3;
- (void)cancelAllRequests;
- (void)cancelRequestWithUUID:(id)arg1;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(bool)arg3 peer:(id)arg4 update:(id /* block */)arg5 diagnostics:(id /* block */)arg6 receipts:(id*)arg7 error:(out id*)arg8;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(bool)arg3 peer:(id)arg4 update:(id /* block */)arg5 diagnostics:(id /* block */)arg6 reply:(id /* block */)arg7;
- (id)collectLogs:(id)arg1 compress:(bool)arg2 peer:(id)arg3 update:(id /* block */)arg4 diagnostics:(id /* block */)arg5 error:(out id*)arg6;
- (id)collectLogs:(id)arg1 compress:(bool)arg2 peer:(id)arg3 update:(id /* block */)arg4 diagnostics:(id /* block */)arg5 reply:(id /* block */)arg6;
- (void)collectedLogItem:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)completedDiagnosticsTest:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)dealloc;
- (id /* block */)eventCallback;
- (id)init;
- (id)localPeer;
- (void)log:(id)arg1 timestamp:(bool)arg2;
- (id)peerCache;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(id /* block */)arg2;
- (id)queryStatusForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryStatusForPeer:(id)arg1 reply:(id /* block */)arg2;
- (void)receivedEvent:(id)arg1;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id /* block */)arg3 error:(out id*)arg4;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id /* block */)arg3 reply:(id /* block */)arg4;
- (id)runPerformanceTest:(id)arg1 update:(id /* block */)arg2 error:(out id*)arg3;
- (id)runPerformanceTest:(id)arg1 update:(id /* block */)arg2 reply:(id /* block */)arg3;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(id /* block */)arg4;
- (bool)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(id /* block */)arg3;
- (void)setEventCallback:(id /* block */)arg1;
- (void)startBrowsing;
- (void)startMonitoringEvents:(id)arg1;
- (void)stopBrowsing;
- (void)stopMonitoringEvents:(id)arg1;
- (void)updatedPerformanceTest:(id)arg1 uuid:(id)arg2;

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