<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FMFSession.h</title>
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

/PrivateFrameworks/FMF.framework/FMFSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF (1)
 */

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {
    NSMutableDictionary * _cachedCanShareLocationWithHandleByHandle;
    NSSet * _cachedGetHandlesFollowingMyLocation;
    NSSet * _cachedGetHandlesSharingLocationsWithMe;
    NSMutableDictionary * _cachedLocationForHandleByHandle;
    NSMutableDictionary * _cachedOfferExpirationForHandleByHandle;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <FMFSessionDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    NSObject<OS_dispatch_queue> * _handlesQueue;
    NSMutableSet * _internalHandles;
    bool  _isModelInitialized;
}

@property (nonatomic, retain) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle;
@property (nonatomic, retain) NSSet *cachedGetHandlesFollowingMyLocation;
@property (nonatomic, retain) NSSet *cachedGetHandlesSharingLocationsWithMe;
@property (nonatomic, retain) NSMutableDictionary *cachedLocationForHandleByHandle;
@property (nonatomic, retain) NSMutableDictionary *cachedOfferExpirationForHandleByHandle;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMFSessionDelegate> *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *handles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlesQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *internalHandles;
@property (nonatomic) bool isModelInitialized;
@property (readonly) Class superclass;

+ (bool)FMFAllowed;
+ (bool)FMFRestricted;
+ (bool)isAnyAccountManaged;
+ (bool)isProvisionedForLocationSharing;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)__connection;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_daemonDidLaunch;
- (bool)_isNoMappingPacketReturnedError:(id)arg1;
- (void)_registerForFMFDLaunchedNotification;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (void)addFavorite:(id)arg1 completion:(id /* block */)arg2;
- (void)addFence:(id)arg1 completion:(id /* block */)arg2;
- (void)addHandles:(id)arg1;
- (void)approveFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedCanShareLocationWithHandleByHandle;
- (id)cachedGetHandlesFollowingMyLocation;
- (id)cachedGetHandlesSharingLocationsWithMe;
- (id)cachedLocationForHandle:(id)arg1;
- (id)cachedLocationForHandleByHandle;
- (id)cachedOfferExpirationForHandleByHandle;
- (bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(id /* block */)arg2;
- (bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (id)connection;
- (id)connectionQueue;
- (void)contactForPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)crashDaemon;
- (void)dataForPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)declineFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)delegateQueue;
- (void)deleteFence:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didUpdateFences:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(bool)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)dispatchOnDelegateQueue:(id /* block */)arg1;
- (void)dumpStateWithCompletion:(id /* block */)arg1;
- (void)encryptPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)exit5XXGracePeriod;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (void)favoritesForMaxCount:(id)arg1 completion:(id /* block */)arg2;
- (void)fencesForHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)forceRefresh;
- (id)getActiveLocationSharingDevice;
- (void)getActiveLocationSharingDevice:(id /* block */)arg1;
- (id)getAllDevices;
- (void)getAllDevices:(id /* block */)arg1;
- (void)getAllLocations:(id /* block */)arg1;
- (void)getDataForPerformanceRequest:(id /* block */)arg1;
- (id)getFavoritesSharingLocationWithMe;
- (void)getFavoritesWithCompletion:(id /* block */)arg1;
- (void)getFences:(id /* block */)arg1;
- (id)getHandlesFollowingMyLocation;
- (void)getHandlesFollowingMyLocation:(id /* block */)arg1;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (id)getHandlesSharingLocationsWithMe;
- (void)getHandlesSharingLocationsWithMe:(id /* block */)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (id)getHandlesWithPendingOffers;
- (void)getHandlesWithPendingOffers:(id /* block */)arg1;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)getPendingFriendshipRequestsWithCompletion:(id /* block */)arg1;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id /* block */)arg3;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)getRecordIdForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAndLocationForPayload:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(id /* block */)arg2;
- (id)handles;
- (id)handlesQueue;
- (bool)hasModelInitialized;
- (oneway void)iCloudAccountNameWithCompletion:(id /* block */)arg1;
- (void)includeDeviceInAutomations:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)internalConnection;
- (id)internalHandles;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (bool)is5XXError:(id)arg1;
- (void)isIn5XXGracePeriodWithCompletion:(id /* block */)arg1;
- (bool)isModelInitialized;
- (bool)isMyLocationEnabled;
- (void)isMyLocationEnabled:(id /* block */)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (void)locationForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (double)maxLocatingInterval;
- (oneway void)modelDidLoad;
- (void)nearbyLocationsWithCompletion:(id /* block */)arg1;
- (oneway void)networkReachabilityUpdated:(bool)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id /* block */)arg4;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id /* block */)arg4;
- (void)reloadDataIfNotLoaded;
- (void)removeDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)removeFavorite:(id)arg1 completion:(id /* block */)arg2;
- (void)removeHandles:(id)arg1;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)serverProxy;
- (void)sessionHandleReport:(id /* block */)arg1;
- (void)setActiveDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedCanShareLocationWithHandleByHandle:(id)arg1;
- (void)setCachedGetHandlesFollowingMyLocation:(id)arg1;
- (void)setCachedGetHandlesSharingLocationsWithMe:(id)arg1;
- (void)setCachedLocationForHandleByHandle:(id)arg1;
- (void)setCachedOfferExpirationForHandleByHandle:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setExpiredInitTimestamp;
- (void)setHandles:(id)arg1;
- (void)setHandlesQueue:(id)arg1;
- (void)setHideMyLocationEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setInternalHandles:(id)arg1;
- (void)setIsModelInitialized:(bool)arg1;
- (oneway void)setLocations:(id)arg1;
- (bool)shouldHandleErrorInFWK:(id)arg1;
- (void)showShareMyLocationRestrictedAlert;
- (void)showShareMyLocationiCloudSettingsOffAlert;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (id)verifyRestrictionsAndShowDialogIfRequired;

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
