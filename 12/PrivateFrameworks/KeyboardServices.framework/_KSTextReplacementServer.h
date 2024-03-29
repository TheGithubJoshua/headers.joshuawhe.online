<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_KSTextReplacementServer.h</title>
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

/PrivateFrameworks/KeyboardServices.framework/_KSTextReplacementServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices (1)
 */

@interface _KSTextReplacementServer : NSObject <APSConnectionDelegate, NSXPCListenerDelegate, _KSTextReplacementCancellation, _KSTextReplacementStoreProtocol, _KSTextReplacementSyncProtocol> {
    _KSTRClient * _daemonClient;
    NSString * _directoryPath;
    NSXPCListener * _listener;
    APSConnection * _pushConnection;
    _KSTextReplacementManager * _textReplacementManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *directoryPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (readonly) Class superclass;
@property (nonatomic, retain) _KSTextReplacementManager *textReplacementManager;

+ (bool)isBlackListed:(unsigned int)arg1;
+ (id)textReplacementServer;

- (void).cxx_destruct;
- (bool)_cancelPendingUpdateForClient:(id)arg1;
- (void)_performCleanup;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)buddySetupDidFinish;
- (void)cancelPendingUpdates;
- (void)cleanup;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (id)directoryPath;
- (id)init;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (bool)isSetupAssistantRunning;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)pushConnection;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)reachabilityDidChange:(id)arg1;
- (void)registerForPushNotifications;
- (void)removeAllEntries;
- (void)requestPeriodicSync;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)runMigration;
- (void)scheduleSyncTask;
- (void)setDirectoryPath:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setTextReplacementManager:(id)arg1;
- (void)shutdown;
- (void)start;
- (id)textReplacementEntries;
- (id)textReplacementEntriesForClient:(id)arg1;
- (id)textReplacementManager;

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
