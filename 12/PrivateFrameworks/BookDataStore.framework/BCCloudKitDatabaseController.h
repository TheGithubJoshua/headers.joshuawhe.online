<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BCCloudKitDatabaseController.h</title>
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

/PrivateFrameworks/BookDataStore.framework/BCCloudKitDatabaseController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore (4053)
 */

@interface BCCloudKitDatabaseController : NSObject <BCCloudDataPrivacyDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSURL * _archiveURL;
    bool  _attachedToContainer;
    double  _backOffInterval;
    NSMutableSet * _changedRecordZoneIDs;
    BDSCoalescingCallBlock * _coalescedArchive;
    BDSCoalescingCallBlock * _coalescedZoneFetch;
    CKContainer * _container;
    NSString * _containerIdentifier;
    CKDatabase * _database;
    NSArray * _desiredRecordZoneIDs;
    bool  _fetchRecordZoneChangesSuccess;
    bool  _hasSubscription;
    NSMutableDictionary * _observers;
    NSData * _recordIDSalt;
    NSMutableDictionary * _recordZones;
    CKServerChangeToken * _serverChangeToken;
    bool  _serverFetchPostponed;
    NSString * _subscriptionID;
    NSMutableDictionary * _tokenStores;
    CKRecordID * _userRecordID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSURL *archiveURL;
@property (nonatomic) bool attachedToContainer;
@property (nonatomic) double backOffInterval;
@property (nonatomic, retain) NSMutableSet *changedRecordZoneIDs;
@property (nonatomic, retain) BDSCoalescingCallBlock *coalescedArchive;
@property (nonatomic, retain) BDSCoalescingCallBlock *coalescedZoneFetch;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, copy) NSArray *desiredRecordZoneIDs;
@property (nonatomic) bool fetchRecordZoneChangesSuccess;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (nonatomic, retain) NSData *recordIDSalt;
@property (nonatomic, retain) NSMutableDictionary *recordZones;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic) bool serverFetchPostponed;
@property (nonatomic, copy) NSString *subscriptionID;
@property (nonatomic, retain) NSMutableDictionary *tokenStores;
@property (nonatomic, retain) CKRecordID *userRecordID;

+ (id)decodeRecordFromSystemFields:(id)arg1;
+ (id)encodeRecordSystemFields:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteRecordZonesWithIDs:(id)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)accessQueue;
- (void)addObserver:(id)arg1 recordType:(id)arg2;
- (id)archiveURL;
- (void)attachToZones:(id)arg1 completion:(id /* block */)arg2;
- (bool)attachedToContainer;
- (double)backOffInterval;
- (id)changedRecordZoneIDs;
- (id)coalescedArchive;
- (id)coalescedZoneFetch;
- (void)connectUserTo:(id)arg1 container:(id)arg2 updateSubscription:(bool)arg3 completion:(id /* block */)arg4 subscriptionCompletion:(id /* block */)arg5;
- (id)container;
- (id)containerIdentifier;
- (id)database;
- (id)desiredRecordZoneIDs;
- (void)detach;
- (void)detachWithCompletion:(id /* block */)arg1;
- (bool)establishedSalt;
- (void)fetchChangesWithCompletion:(id /* block */)arg1;
- (void)fetchRecordForRecordID:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchRecordZoneChangesSuccess;
- (void)getAttached:(id /* block */)arg1;
- (bool)hasSubscription;
- (id)initWithSubscriptionID:(id)arg1 archiveURL:(id)arg2;
- (id)observers;
- (id)p_archiveToData;
- (void)p_createRecordIDSaltWithCompletion:(id /* block */)arg1;
- (void)p_createRecordZones:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)p_fetchDatabaseChanges:(id /* block */)arg1;
- (void)p_fetchRecordZoneChanges:(id)arg1 optionsByRecordZoneID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)p_fetchRecordZoneChangesForRecordZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)p_fetchZoneChanges:(id /* block */)arg1;
- (void)p_informObserversOfAttachmentChange;
- (void)p_informObserversOfCompletedFetchOfZone:(id)arg1;
- (void)p_informObserversOfRecordsChanged:(id)arg1;
- (void)p_informObserversOfRecordsChanged:(id)arg1 forRecordType:(id)arg2;
- (void)p_scheduleArchiveWithCompletion:(id /* block */)arg1;
- (void)p_subscribeWithCompletion:(id /* block */)arg1;
- (void)p_unarchive;
- (id)p_unarchiveFromData:(id)arg1;
- (void)p_unsubscribeToContainer:(id)arg1;
- (void)p_updateRetryParametersFromFetchZoneChangesOperationError:(id)arg1;
- (id)recordIDSalt;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;
- (void)recordZoneWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)recordZones;
- (void)registerServerChangeTokenStore:(id)arg1 forZoneID:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 recordType:(id)arg2;
- (id)saltedAndHashedIDFromLocalID:(id)arg1;
- (id)serverChangeToken;
- (bool)serverFetchPostponed;
- (void)setAccessQueue:(id)arg1;
- (void)setArchiveURL:(id)arg1;
- (void)setAttachedToContainer:(bool)arg1;
- (void)setBackOffInterval:(double)arg1;
- (void)setChangedRecordZoneIDs:(id)arg1;
- (void)setCoalescedArchive:(id)arg1;
- (void)setCoalescedZoneFetch:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredRecordZoneIDs:(id)arg1;
- (void)setFetchRecordZoneChangesSuccess:(bool)arg1;
- (void)setHasSubscription:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setRecordIDSalt:(id)arg1;
- (void)setRecordZones:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerFetchPostponed:(bool)arg1;
- (void)setSubscriptionID:(id)arg1;
- (void)setTokenStores:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)subscriptionID;
- (id)tokenStores;
- (void)unregisterServerChangeTokenStore:(id)arg1;
- (id)userRecordID;
- (void)willAttachToContainer:(id)arg1 serviceMode:(bool)arg2 completion:(id /* block */)arg3;
- (void)zonesTemporarilyUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)zonesUnreadableDueToMissingD2DEncryptionIdentity:(id)arg1 completion:(id /* block */)arg2;

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