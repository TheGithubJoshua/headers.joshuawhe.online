<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BCCloudCollectionsManager.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BCCloudCollectionsManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BCCloudCollectionsManager : NSObject <BDSCloudKitSupportSignOut> {
    BCCloudChangeTokenController * _changeTokenController;
    BCCloudDataSource * _collectionDataSource;
    NSObject<BCCloudCollectionDetailManager> * _collectionDetailManager;
    NSObject<BCCloudCollectionMemberManager> * _collectionMemberManager;
    NSManagedObjectModel * _objectModel;
    bool  _proxyMode;
    BDSServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic, retain) BCCloudDataSource *collectionDataSource;
@property (nonatomic, retain) NSObject<BCCloudCollectionDetailManager> *collectionDetailManager;
@property (nonatomic, retain) NSObject<BCCloudCollectionMemberManager> *collectionMemberManager;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic, retain) NSManagedObjectModel *objectModel;
@property (nonatomic) bool proxyMode;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;

+ (id)sharedClientXPCProxy;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)changeTokenController;
- (id)collectionDataSource;
- (id)collectionDetailManager;
- (id)collectionMemberManager;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (id)initClientXPCProxy;
- (id)objectModel;
- (bool)proxyMode;
- (id)serviceProxy;
- (void)setChangeTokenController:(id)arg1;
- (void)setCollectionDataSource:(id)arg1;
- (void)setCollectionDetailManager:(id)arg1;
- (void)setCollectionMemberManager:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setProxyMode:(bool)arg1;
- (void)setServiceProxy:(id)arg1;

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
