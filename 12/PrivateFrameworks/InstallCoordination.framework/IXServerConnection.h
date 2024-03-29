<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IXServerConnection.h</title>
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

/PrivateFrameworks/InstallCoordination.framework/IXServerConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination (1)
 */

@interface IXServerConnection : NSObject <IXClientDelegateProtocol> {
    NSMutableDictionary * _coordinatorInstances;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _promiseInstances;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSMutableDictionary *coordinatorInstances;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSMutableDictionary *promiseInstances;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)retrySynchronousIPC:(id /* block */)arg1;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
- (oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
- (bool)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_reSetupObserversAfter:(id)arg1;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)coordinatorInstances;
- (id)init;
- (id)internalQueue;
- (id)promiseInstances;
- (void)registerAppInstallCoordinatorForUpdates:(id)arg1 notifyDaemon:(bool)arg2;
- (void)registerDataPromiseForUpdates:(id)arg1 notifyDaemon:(bool)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)unregisterAppInstallCoordinatorForUpdates:(id)arg1;
- (void)unregisterDataPromiseForUpdates:(id)arg1;
- (id)xpcConnection;

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
