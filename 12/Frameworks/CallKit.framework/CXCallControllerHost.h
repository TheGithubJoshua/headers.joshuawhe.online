<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CXCallControllerHost.h</title>
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

/Frameworks/CallKit.framework/CXCallControllerHost.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CallKit.framework/CallKit (1)
 */

@interface CXCallControllerHost : NSObject <CXCallControllerHostConnectionDelegate, NSXPCListenerDelegate> {
    NSMutableDictionary * _callUUIDToCallMap;
    NSMutableDictionary * _callUUIDToPublicCallUUIDMap;
    int  _clientsShouldConnectToken;
    NSMutableSet * _connections;
    <CXCallControllerHostDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSMutableDictionary *callUUIDToCallMap;
@property (nonatomic, retain) NSMutableDictionary *callUUIDToPublicCallUUIDMap;
@property (nonatomic, readonly) int clientsShouldConnectToken;
@property (nonatomic, retain) NSMutableSet *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallControllerHostDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)_callsForCallControllerHostConnection:(id)arg1;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)_sanitizedCallFromCall:(id)arg1 forCallControllerHostConnection:(id)arg2;
- (void)addOrUpdateCall:(id)arg1;
- (void)callControllerHostConnection:(id)arg1 requestCalls:(id /* block */)arg2;
- (void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(id /* block */)arg3;
- (void)callControllerHostConnectionInvalidated:(id)arg1;
- (id)callUUIDToCallMap;
- (id)callUUIDToPublicCallUUIDMap;
- (int)clientsShouldConnectToken;
- (id)connections;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (void)removeCall:(id)arg1;
- (void)setCallUUIDToCallMap:(id)arg1;
- (void)setCallUUIDToPublicCallUUIDMap:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
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
