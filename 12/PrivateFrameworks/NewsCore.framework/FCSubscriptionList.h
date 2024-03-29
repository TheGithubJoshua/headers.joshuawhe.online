<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCSubscriptionList.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCSubscriptionList.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCSubscriptionList : FCPrivateDataController {
    NSSet * _autoFavoriteTagIDs;
    NSSet * _groupableTagIDs;
    NSSet * _ignoredTagIDs;
    FCMTWriterLock * _itemsLock;
    NSMutableDictionary * _mutableSubscriptionsBySubscriptionID;
    NSSet * _mutedTagIDs;
    NSOrderedSet * _orderedSubscribedTagIDs;
    NSSet * _subscribedTagIDs;
    <FCTagRanking> * _subscribedTagRanker;
}

@property (nonatomic, readonly, copy) NSSet *allSubscribedTagIDs;
@property (nonatomic, copy) NSSet *autoFavoriteTagIDs;
@property (nonatomic, copy) NSSet *groupableTagIDs;
@property (nonatomic, copy) NSSet *ignoredTagIDs;
@property (nonatomic, retain) FCMTWriterLock *itemsLock;
@property (nonatomic, retain) NSMutableDictionary *mutableSubscriptionsBySubscriptionID;
@property (nonatomic, copy) NSSet *mutedTagIDs;
@property (nonatomic, copy) NSOrderedSet *orderedSubscribedTagIDs;
@property (nonatomic, copy) NSSet *subscribedTagIDs;
@property (nonatomic, retain) <FCTagRanking> *subscribedTagRanker;
@property (nonatomic, readonly, copy) NSDictionary *subscriptionsBySubscriptionID;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (void)configureKeyValueStoreForJSONHandling:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)subscriptionIDForTagID:(id)arg1 type:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_addRemoteSubscriptions:(id)arg1;
- (void)_assignOrderToTagSubscriptions:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_localAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 removeSubscriptions:(id)arg3 eventInitiationLevel:(long long)arg4;
- (void)_modifyRemoteSubscriptions:(id)arg1;
- (id)_newSubscriptionOrder;
- (long long)_orderOfHighestRankedTagSubscription;
- (unsigned long long)_preferredZoneForSubscriptionType:(unsigned long long)arg1;
- (id)_reconcileSubscriptions:(id)arg1;
- (void)_regenerateSortedSubscriptions;
- (void)_removeRemoteSubscription:(id)arg1;
- (void)_removeRemoteSubscriptions:(id)arg1;
- (id)_subscriptionFromRecord:(id)arg1;
- (void)addObserver:(id)arg1;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 eventInitiationLevel:(long long)arg4;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 eventInitiationLevel:(long long)arg5;
- (bool)addSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 origin:(unsigned long long)arg3 groupID:(id)arg4 notificationsEnabled:(bool)arg5 eventInitiationLevel:(long long)arg6;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 originProvider:(id /* block */)arg3 eventInitiationLevelProvider:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)addSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 originProvider:(id /* block */)arg3 groupID:(id)arg4 notificationsEnabled:(bool)arg5 eventInitiationLevelProvider:(id /* block */)arg6 completion:(id /* block */)arg7;
- (id)allSubscribedTagIDs;
- (void)assignOrderToTagSubscriptionsIfNeeded;
- (id)autoFavoriteTagIDs;
- (bool)canAddSubscription;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)groupableTagIDs;
- (void)handleSyncCompletion;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (bool)hasAutoFavoriteSubscriptionForTagID:(id)arg1;
- (bool)hasIgnoredSubscriptionForTagID:(id)arg1;
- (bool)hasMutedSubscriptionForTagID:(id)arg1;
- (bool)hasNotificationsEnabledForTagID:(id)arg1;
- (bool)hasSubscriptionForTagID:(id)arg1;
- (id)ignoredTagIDs;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)itemsLock;
- (void)loadLocalCachesFromStore;
- (bool)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutableSubscriptionsBySubscriptionID;
- (id)mutedTagIDs;
- (id)orderedSubscribedTagIDs;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3;
- (void)removeSubscriptionsForTagIDs:(id)arg1 typeProvider:(id /* block */)arg2 eventInitiationLevel:(long long)arg3 completion:(id /* block */)arg4;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setGroupableTagIDs:(id)arg1;
- (void)setIgnoredTagIDs:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (void)setMutableSubscriptionsBySubscriptionID:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (bool)setNotificationsEnabled:(bool)arg1 forTagID:(id)arg2;
- (void)setOrderedSubscribedTagIDs:(id)arg1;
- (void)setSubscribedTagIDs:(id)arg1;
- (void)setSubscribedTagRanker:(id)arg1;
- (id)subscribedTagIDs;
- (id)subscribedTagRanker;
- (id)subscriptionForTagID:(id)arg1;
- (id)subscriptionForTagID:(id)arg1 type:(unsigned long long)arg2;
- (id)subscriptionForTagIDOfAnyType:(id)arg1;
- (id)subscriptionsBySubscriptionID;
- (id)subscriptionsForType:(unsigned long long)arg1;
- (id)t_reconcileSubscriptions:(id)arg1;

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
