<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBWorkspace.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBWorkspace.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBWorkspace : NSObject <FBSceneClientProvider, FBWorkspaceServerDelegate> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSMapTable * _hostToClientMap;
    bool  _invalidated;
    NSMutableSet * _invalidatingScenes;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    NSObject<OS_dispatch_queue> * _queue;
    FBWorkspaceServer * _server;
    bool  _willInvalidate;
    BSZeroingWeakReference * _zeroingWeakDelegate;
    BSZeroingWeakReference * _zeroingWeakProcess;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSceneClientWithIdentifier:(id)arg1 specification:(id)arg2;
- (void)_invalidateSceneClientWithIdentifier:(id)arg1;
- (id)_queue;
- (void)_queue_enumerateScenes:(id /* block */)arg1;
- (void)_queue_fireInvalidationAction;
- (void)_queue_invalidateAllScenes;
- (void)_queue_sceneDidInvalidate:(id)arg1;
- (void)_queue_willInvalidateAllScenes;
- (Class)_sceneClassForSpecification:(id)arg1;
- (id)_server;
- (Class)_serverClass;
- (id)auditToken;
- (void)beginTransaction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endTransaction;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (id)process;
- (id)registerHost:(id)arg1;
- (void)registerInvalidationAction:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)server:(id)arg1 handleConnectEvent:(id)arg2;
- (void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)serverDidInvalidateConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterHost:(id)arg1;

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