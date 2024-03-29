<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACHClient.h</title>
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

/PrivateFrameworks/ActivityAchievements.framework/ACHClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements (1)
 */

@interface ACHClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    id /* block */  _injectedErrorHandler;
    HKPluginProxyProvider * _pluginProxyProvider;
    <ACHServerInterface> * _serverProxy;
    NSObject<OS_dispatch_queue> * _serverQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ injectedErrorHandler;
@property (nonatomic, retain) HKPluginProxyProvider *pluginProxyProvider;
@property (nonatomic, retain) <ACHServerInterface> *serverProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPluginProxyErrorHandler:(id /* block */)arg1;
- (id /* block */)_clientQueueCompletion:(id /* block */)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (void)_remoteProxy:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)addEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)addTemplate:(id)arg1 completion:(id /* block */)arg2;
- (id)clientQueue;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchActivityChallengeAssetsServerURLWithCompletion:(id /* block */)arg1;
- (void)fetchAllAchievementsWithCompletion:(id /* block */)arg1;
- (void)fetchAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)fetchAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(id /* block */)arg2;
- (void)forceAwardingSchedulerWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id /* block */)injectedErrorHandler;
- (id)pluginProxyProvider;
- (id)remoteInterface;
- (void)removeAllEarnedInstancesWithCompletion:(id /* block */)arg1;
- (void)removeAllTemplatesWithCompletion:(id /* block */)arg1;
- (void)removeEarnedInstance:(id)arg1 completion:(id /* block */)arg2;
- (void)removeTemplate:(id)arg1 completion:(id /* block */)arg2;
- (id)serverProxy;
- (id)serverQueue;
- (void)setActivityChallengeAssetsServerURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setClientQueue:(id)arg1;
- (void)setInjectedErrorHandler:(id /* block */)arg1;
- (void)setPluginProxyProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)setServerQueue:(id)arg1;

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
