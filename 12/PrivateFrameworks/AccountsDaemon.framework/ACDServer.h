<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACDServer.h</title>
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

/PrivateFrameworks/AccountsDaemon.framework/ACDServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon (113)
 */

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCListenerDelegate> {
    ACDAccessPluginManager * _accessPluginManager;
    NSMutableArray * _accountStoreClients;
    NSXPCListener * _accountStoreListener;
    NSXPCListener * _authenticationDialogListener;
    ACDAuthenticationDialogManager * _authenticationDialogManager;
    NSMutableArray * _authenticationDialogManagerClients;
    ACDAuthenticationPluginManager * _authenticationPluginManager;
    NSMutableDictionary * _clientsByConnection;
    ACDDatabaseBackupActivity * _databaseBackupActivity;
    ACDDataclassOwnersManager * _dataclassOwnersManager;
    NSObject<OS_dispatch_queue> * _deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> * _deferredConnectionResumeQueueSemaphore;
    NSMutableArray * _oauthSignerClients;
    NSXPCListener * _oauthSignerListener;
    NSObject<OS_dispatch_queue> * _performMigrationQueue;
    ACRemoteDeviceProxy * _remoteDeviceProxy;
}

@property (nonatomic, retain) ACDAccessPluginManager *accessPluginManager;
@property (nonatomic, retain) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (nonatomic, retain) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (nonatomic, retain) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (nonatomic, retain) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (void)_beginObservingIDSProxyNotifications;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_beginObservingLaunchNotifications;
- (void)_beginObservingMigrationDidFinishDarwinNotifications;
- (void)_endObservingLanguageChangeNotification;
- (void)_endObservingMigrationDidFinishDarwinNotifications;
- (void)_handleLanguageChangedDarwinNotification;
- (id)_keyForConnection:(id)arg1;
- (id)_newDaemonAccountStoreFilterForClient:(id)arg1;
- (id)_newOAuthSignerForClient:(id)arg1;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (id)accessPluginManager;
- (void)accountStore:(id)arg1 didSaveAccount:(id)arg2;
- (id)authenticationDialogManager;
- (id)authenticationPluginManager;
- (id)clientForConnection:(id)arg1;
- (id)createClientForConnection:(id)arg1;
- (void)credentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (id)databaseBackupActivity;
- (id)dataclassOwnersManager;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteDeviceProxy;
- (void)setAccessPluginManager:(id)arg1;
- (void)setAuthenticationDialogManager:(id)arg1;
- (void)setAuthenticationPluginManager:(id)arg1;
- (void)setDatabaseBackupActivity:(id)arg1;
- (void)setDataclassOwnersManager:(id)arg1;
- (void)setRemoteDeviceProxy:(id)arg1;
- (void)setUpWithAccountStoreConnectionListener:(id)arg1 oauthSignerConnectionListener:(id)arg2 authenticationDialogConnectionListener:(id)arg3;
- (void)shutdown;

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
