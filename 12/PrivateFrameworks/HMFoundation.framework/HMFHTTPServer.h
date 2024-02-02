<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMFHTTPServer.h</title>
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

/PrivateFrameworks/HMFoundation.framework/HMFHTTPServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation (1)
 */

@interface HMFHTTPServer : HMFObject <HMFHTTPClientConnectionDelegate, HMFLogging, _HMFCFHTTPServerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    double  _connectionIdleTimeout;
    NSMutableArray * _connections;
    <HMFHTTPServerDelegate> * _delegate;
    _HMFCFHTTPServer * _internal;
    HMFUnfairLock * _lock;
    NSString * _name;
    HMFMutableNetService * _netService;
    unsigned long long  _options;
    unsigned long long  _port;
    NSMutableArray * _requestHandlers;
    NSString * _serviceType;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property double connectionIdleTimeout;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property <HMFHTTPServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _HMFCFHTTPServer *internal;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) HMFMutableNetService *netService;
@property (nonatomic, readonly) unsigned long long options;
@property (readonly) unsigned long long port;
@property (readonly, copy) NSArray *requestHandlers;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleClosedConnection:(id)arg1;
- (void)_handleOpenedConnection:(id)arg1;
- (void)_handleReceivedRequest:(id)arg1 connection:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)attributeDescriptions;
- (id)clientQueue;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (double)connectionIdleTimeout;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithServiceType:(id)arg1 name:(id)arg2 port:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)internal;
- (id)logIdentifier;
- (id)name;
- (id)netService;
- (unsigned long long)options;
- (unsigned long long)port;
- (void)registerRequestHandler:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)requestHandlers;
- (void)server:(id)arg1 didCloseConnection:(id)arg2;
- (void)server:(id)arg1 didOpenConnection:(id)arg2;
- (void)serverDidInvalidate:(id)arg1;
- (id)serviceType;
- (void)setConnectionIdleTimeout:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)unregisterRequestHandler:(id)arg1;

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