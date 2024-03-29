<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BCCloudKitController.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BCCloudKitController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BDSCoalescingCallBlock * _coalescedAttachment;
    <BCContainerConfiguration> * _configuration;
    CKContainer * _container;
    bool  _didChangeContainer;
    bool  _enableCloudSync;
    bool  _gettingAccountInfo;
    BCCloudKitDatabaseController * _privateCloudDatabaseController;
    bool  _serviceMode;
    BCCloudKitTransactionManager * _transactionManager;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) BDSCoalescingCallBlock *coalescedAttachment;
@property (nonatomic, retain) <BCContainerConfiguration> *configuration;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) bool didChangeContainer;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic) bool gettingAccountInfo;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (nonatomic) bool serviceMode;
@property (nonatomic, retain) BCCloudKitTransactionManager *transactionManager;

+ (id)databaseFolderURLForConfiguration:(id)arg1;
+ (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accessQueue;
- (void)applicationDidBecomeActive;
- (id)coalescedAttachment;
- (id)configuration;
- (id)container;
- (bool)didChangeContainer;
- (bool)enableCloudSync;
- (bool)gettingAccountInfo;
- (void)handleRemoteNotification:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)p_accountChanged:(id)arg1;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(id /* block */)arg2;
- (void)p_identityChanged:(id)arg1;
- (void)p_internetReachabilityChanged:(id)arg1;
- (void)p_updateAttachment;
- (id)privateCloudDatabaseController;
- (bool)serviceMode;
- (void)setAccessQueue:(id)arg1;
- (void)setCoalescedAttachment:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setDidChangeContainer:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setEnableCloudSync:(bool)arg1 serviceMode:(bool)arg2;
- (void)setGettingAccountInfo:(bool)arg1;
- (void)setPrivateCloudDatabaseController:(id)arg1;
- (void)setServiceMode:(bool)arg1;
- (void)setTransactionManager:(id)arg1;
- (id)transactionManager;

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
