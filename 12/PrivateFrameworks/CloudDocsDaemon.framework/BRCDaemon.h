<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCDaemon.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCDaemon.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCDaemon : NSObject <BRCAccountHandlerDelegate, BRCReachabilityDelegate, NSXPCListenerDelegate, UMUserSyncStakeholder> {
    BRCAccountHandler * _accountHandler;
    NSObject<OS_dispatch_queue> * _accountLoaderQueue;
    NSObject<OS_dispatch_queue> * _accountReadyQueue;
    NSObject<OS_dispatch_queue> * _accountResumedQueue;
    NSString * _appSupportDirPath;
    NSString * _cacheDirPath;
    Class  _containerClass;
    bool  _deviceUnlocked;
    NSMutableDictionary * _dirPaths;
    bool  _disableAccountChangesHandling;
    bool  _disableAppsChangesHandling;
    unsigned long long  _forceIsGreedyState;
    bool  _hasNotEnoughDiskSpaceToBeFunctional;
    bool  _isInSyncBubble;
    NSError * _loggedOutError;
    UMUserSyncTask * _loginTask;
    NSString * _logsDirPath;
    bool  _resumed;
    int  _serverAvailabilityNotifyToken;
    BRCAccountSession * _session;
    NSMutableDictionary * _shareAcceptOperationsByURL;
    NSOperationQueue * _shareAcceptQueue;
    NSObject<OS_dispatch_source> * _sigIntSrc;
    NSObject<OS_dispatch_source> * _sigQuitSrc;
    NSObject<OS_dispatch_source> * _sigTermSrc;
    NSDate * _startupDate;
    NSObject<OS_dispatch_queue> * _startupQueue;
    NSXPCListener * _tokenListener;
    NSString * _ubiquityTokenSalt;
    bool  _unitTestMode;
    BRCVersionsFileProvider * _versionsProvider;
    NSXPCListener * _xpcListener;
    NSObject<OS_dispatch_queue> * _xpcListenersReadyQueue;
}

@property (nonatomic, readonly) BRCAccountHandler *accountHandler;
@property (nonatomic, retain) NSString *appSupportDirPath;
@property (nonatomic, retain) NSString *cacheDirPath;
@property (nonatomic, retain) Class containerClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAccountChangesHandling;
@property (nonatomic) bool disableAppsChangesHandling;
@property (nonatomic) bool doesNotHaveEnoughDiskSpaceToBeFunctional;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) unsigned long long forceIsGreedyState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInSyncBubble;
@property (nonatomic, retain) NSError *loggedOutError;
@property (nonatomic, retain) NSString *logsDirPath;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) NSDate *startupDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *ubiquityTokenSalt;
@property (nonatomic, readonly) BRCVersionsFileProvider *versionsProvider;

+ (id)UTIForExtension:(id)arg1;
+ (id)daemon;
+ (bool)isDaemonRunning;

- (void).cxx_destruct;
- (void)_createSyncBubbleTasks;
- (void)_finishStartup;
- (bool)_haveRequiredKernelFeatures;
- (void)_initSignals;
- (bool)_isDeviceUnlocked;
- (void)_loadAccountIfNeeded;
- (void)_resumeAccount;
- (void)_setupCacheDelete;
- (void)_setupVNodeRapidAging;
- (bool)_shouldCacheDeleteForVolume:(id)arg1;
- (void)_startXPCListeners;
- (void)_startupAndLoadAccount;
- (id)accountHandler;
- (void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2;
- (void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2;
- (id)appSupportDirPath;
- (id)cacheDirPath;
- (bool)checkEnoughDiskSpaceToBeFunctional;
- (Class)containerClass;
- (id)dirPathForSyncedFolderType:(unsigned long long)arg1;
- (bool)disableAccountChangesHandling;
- (bool)disableAppsChangesHandling;
- (bool)doesNotHaveEnoughDiskSpaceToBeFunctional;
- (void)dumpToContext:(id)arg1;
- (id)endpoint;
- (void)exitWithCode:(int)arg1;
- (unsigned long long)forceIsGreedyState;
- (void)handleExitSignal:(int)arg1;
- (id)init;
- (bool)isInSyncBubble;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadAccount;
- (void)loadAndResumeAccount;
- (void)localeDidChange;
- (id)loggedOutError;
- (id)logsDirPath;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)networkReachabilityFlagsChanged:(unsigned int)arg1;
- (id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2;
- (void)restart;
- (void)resumeIPCAcceptation;
- (bool)retrySyncBubbleLaterIfNeededWithError:(id)arg1;
- (bool)selfCheck:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)session;
- (void)setAppSupportDirPath:(id)arg1;
- (void)setCacheDirPath:(id)arg1;
- (void)setContainerClass:(Class)arg1;
- (void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned long long)arg2;
- (void)setDisableAccountChangesHandling:(bool)arg1;
- (void)setDisableAppsChangesHandling:(bool)arg1;
- (void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(bool)arg1;
- (void)setForceIsGreedyState:(unsigned long long)arg1;
- (void)setIsInSyncBubble:(bool)arg1;
- (void)setLoggedOutError:(id)arg1;
- (void)setLogsDirPath:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setUpAnonymousListener;
- (void)setUpSandbox;
- (void)start;
- (id)startupDate;
- (void)suspendIPCAcceptation;
- (id)ubiquityTokenSalt;
- (void)uploadContent;
- (id)versionsProvider;
- (void)waitForConfiguration;
- (void)waitOnAccountResumedQueue;
- (void)waitUntilDeviceIsUnlocked;
- (void)willSwitchUser;

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