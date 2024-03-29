<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PCCProxyingDevice.h</title>
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

/PrivateFrameworks/OSAnalytics.framework/PCCProxyingDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics (1)
 */

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices> {
    PCCEndpoint * _endpoint;
    NSObject<OS_dispatch_source> * _expiryTimer;
    NSDate * _lastTouch;
    NSMutableDictionary * _reqById;
    NSMutableDictionary * _reqByTracker;
    double  _requestTimeout;
    NSObject<OS_dispatch_queue> * _request_queue;
    NSObject<OS_dispatch_queue> * _sync_proxy_queue;
    NSObject<OS_os_transaction> * _txn;
    int  expire_count;
    int  file_count;
    int  msg_count;
    int  request_count;
    int  up_count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double requestTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)addRequest:(id)arg1 onComplete:(id /* block */)arg2;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (bool)ensureParentDirectoryExists:(id)arg1;
- (void)finish:(id)arg1 result:(id)arg2;
- (void)handleConnection:(bool)arg1;
- (void)handleFile:(id)arg1 metadata:(id)arg2;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)listDevices:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)request:(id)arg1 logList:(id /* block */)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(id /* block */)arg3;
- (void)requestProxyMetadata:(id)arg1 onComplete:(id /* block */)arg2;
- (double)requestTimeout;
- (void)setRequestTimeout:(double)arg1;
- (void)startRequest:(id)arg1 message:(id)arg2 onComplete:(id /* block */)arg3;
- (void)startTimer;
- (void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)updateProxiedDeviceMetadata:(id)arg1 from:(id)arg2;

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
