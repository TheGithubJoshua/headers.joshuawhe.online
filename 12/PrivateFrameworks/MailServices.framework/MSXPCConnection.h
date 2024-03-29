<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSXPCConnection.h</title>
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

/PrivateFrameworks/MailServices.framework/MSXPCConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices (3445.120.0.1.2)
 */

@interface MSXPCConnection : NSXPCConnection {
    MFPromise * _connectionPromise;
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSLock * _lock;
    Protocol * _protocol;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteObjectInterface;
    long long  _resumeCount;
    bool  _shouldLaunchMobileMail;
    unsigned int  _state;
}

@property (nonatomic, readonly, retain) Protocol *protocol;
@property (nonatomic) bool shouldLaunchMobileMail;

- (id)_connection;
- (id)_connectionForPromise:(id)arg1;
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (void)_invalidatePromise:(id)arg1;
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(id /* block */)arg4;
- (int)auditSessionIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithProtocol:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)processIdentifier;
- (id)protocol;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)resume;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setShouldLaunchMobileMail:(bool)arg1;
- (bool)shouldLaunchMobileMail;
- (void)suspend;

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
