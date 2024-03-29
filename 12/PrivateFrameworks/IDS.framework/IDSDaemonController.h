<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IDSDaemonController.h</title>
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

/PrivateFrameworks/IDS.framework/IDSDaemonController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS (1000)
 */

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {
    bool  _acquiringDaemonConnection;
    bool  _autoReconnect;
    unsigned int  _cachedCapabilities;
    NSSet * _cachedCommands;
    NSSet * _cachedServices;
    NSSet * _commands;
    unsigned long long  _connectionID;
    int  _curXPCMessagePriority;
    NSObject<OS_dispatch_group> * _daemonConnectedGroup;
    IDSDaemonListener * _daemonListener;
    id  _delegate;
    bool  _fatalErrorOccured;
    bool  _hasBeenSuspended;
    bool  _hasCheckedForDaemon;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    unsigned int  _lastUpdateCaps;
    NSMutableDictionary * _listenerCapabilities;
    NSMutableDictionary * _listenerCommands;
    NSString * _listenerID;
    NSMutableDictionary * _listenerServices;
    IMLocalObject * _localObject;
    NSMutableSet * _notificationServices;
    bool  _preventReconnect;
    NSProtocolChecker * _protocol;
    NSObject<OS_dispatch_queue> * _remoteMessageQueue;
    IMRemoteObject<IDSDaemonProtocol> * _remoteObject;
    NSSet * _services;
}

@property (setter=_setAutoReconnect:) bool _autoReconnect;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_remoteMessageQueue;
@property (nonatomic) int curXPCMessagePriority;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnecting;
@property (nonatomic, readonly) IDSDaemonListener *listener;
@property (nonatomic, readonly) NSString *listenerID;
@property (readonly) Class superclass;

+ (bool)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_agentDidLaunchNotification:(id)arg1;
- (bool)_autoReconnect;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_disconnectFromDaemonWithForce:(bool)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (bool)_makeConnectionWithLaunch:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performBlock:(id /* block */)arg1 wait:(bool)arg2;
- (id)_remoteMessageQueue;
- (void)_remoteObjectCleanup;
- (void)_setAutoReconnect:(bool)arg1;
- (bool)_setCapabilities:(unsigned int)arg1;
- (bool)_setCommands:(id)arg1;
- (bool)_setServices:(id)arg1;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (bool)addListenerID:(id)arg1 services:(id)arg2;
- (bool)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)addedDelegateForService:(id)arg1;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commands;
- (id)commandsForListenerID:(id)arg1;
- (bool)connectToDaemon;
- (bool)connectToDaemonWithLaunch:(bool)arg1;
- (bool)connectToDaemonWithLaunch:(bool)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (int)curXPCMessagePriority;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromDaemon;
- (void)forwardInvocation:(id)arg1;
- (bool)hasListenerForID:(id)arg1;
- (id)init;
- (bool)isConnected;
- (bool)isConnecting;
- (id)listener;
- (id)listenerID;
- (id)localObject;
- (void)localObjectDiedNotification:(id)arg1;
- (bool)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)remoteObjectExists;
- (void)removeListenerID:(id)arg1;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (id)services;
- (id)servicesForListenerID:(id)arg1;
- (bool)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2 shouldLog:(bool)arg3;
- (bool)setCommands:(id)arg1 forListenerID:(id)arg2;
- (void)setCurXPCMessagePriority:(int)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setServices:(id)arg1 forListenerID:(id)arg2;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;

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
