<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSAlbumSharingDaemon.h</title>
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

/PrivateFrameworks/CoreMediaStream.framework/MSAlbumSharingDaemon.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream (520.1)
 */

@interface MSAlbumSharingDaemon : MSDaemon {
    int  _busyCount;
    MSASDaemonModel * _daemonModel;
    <MSAlbumSharingDaemonDelegate> * _delegate;
    bool  _isRetryingOutstandingActivities;
    NSObject<OS_dispatch_queue> * _mapQueue;
    NSMutableDictionary * _nextUpdateDateByPersonID;
    NSMutableDictionary * _personIDToDelegateMap;
    NSMutableDictionary * _personIDToStateMachineMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) int busyCount;
@property (nonatomic, retain) MSASDaemonModel *daemonModel;
@property (nonatomic) <MSAlbumSharingDaemonDelegate> *delegate;
@property (nonatomic) bool isRetryingOutstandingActivities;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mapQueue;
@property (nonatomic, retain) NSMutableDictionary *nextUpdateDateByPersonID;
@property (nonatomic, retain) NSMutableDictionary *personIDToDelegateMap;
@property (nonatomic, retain) NSMutableDictionary *personIDToStateMachineMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)_delegateForPersonID:(id)arg1;
- (void)_postModelShutdownForPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAlbum:(id)arg1;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (int)assetsInDownloadQueueCountForPersonID:(id)arg1;
- (id)boundStateMachineForPersonID:(id)arg1;
- (int)busyCount;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (id)daemonModel;
- (void)dealloc;
- (id)delegate;
- (void)deleteAlbumWithGUID:(id)arg1;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)didCreateStateMachineForPersonID:(id)arg1;
- (void)didDestroyStateMachineForPersonID:(id)arg1;
- (void)didIdle;
- (void)didReceiveAuthFailureForPersonID:(id)arg1;
- (void)didReceiveAuthSuccessForPersonID:(id)arg1;
- (void)didReceiveCommentTooLongError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didReceiveTooManyAlbumsError:(id)arg1 personID:(id)arg2;
- (void)didReceiveTooManyCommentsError:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 personID:(id)arg4;
- (void)didReceiveTooManyPhotosError:(id)arg1 forAlbum:(id)arg2 personID:(id)arg3;
- (void)didReceiveTooManySubscriptionsError:(id)arg1 personID:(id)arg2;
- (void)didUnidle;
- (id)existingModelForPersonID:(id)arg1;
- (id)existingStateMachineForPersonID:(id)arg1;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)forgetEverythingAboutPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)forgetEverythingCompletionBlock:(id /* block */)arg1;
- (bool)hasCommandsInGroupedCommandQueue;
- (id)init;
- (bool)isInRetryState;
- (bool)isRetryingOutstandingActivities;
- (bool)isWaitingForAuth;
- (id)mapQueue;
- (void)mapQueueShutDownStateMachineInMap:(id)arg1 personIDs:(id)arg2 index:(unsigned long long)arg3 forDestruction:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(bool)arg3 info:(id)arg4;
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (id)modelForPersonID:(id)arg1;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (id)nextActivityDate;
- (id)nextUpdateDateByPersonID;
- (id)persistentObjectForKey:(id)arg1 personID:(id)arg2;
- (id)personIDToDelegateMap;
- (id)personIDToStateMachineMap;
- (id)personIDsListeningToPushNotification;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)arg1;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)refreshAccessControlListOfAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshResetSync:(bool)arg1 personID:(id)arg2;
- (void)refreshResetSync:(bool)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)retryOutstandingActivities;
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;
- (void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)setBusyCount:(int)arg1;
- (void)setDaemonModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setIsRetryingOutstandingActivities:(bool)arg1;
- (void)setMapQueue:(id)arg1;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setMultipleContributorsEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (void)setNextUpdateDateByPersonID:(id)arg1;
- (void)setPersistentObject:(id)arg1 forKey:(id)arg2 personID:(id)arg3;
- (void)setPersonIDToDelegateMap:(id)arg1;
- (void)setPersonIDToStateMachineMap:(id)arg1;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setPublicAccessEnabled:(bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setWorkQueue:(id)arg1;
- (void)shutDown;
- (void)shutDownCompletionBlock:(id /* block */)arg1;
- (void)shutDownStateMachine:(id)arg1 forDestruction:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)start;
- (void)stopAssetDownloadsForPersonID:(id)arg1;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)updateOwnerReputationScoreForAlbum:(id)arg1;
- (void)willDestroyStateMachineForPersonID:(id)arg1;
- (id)workQueue;
- (void)workQueueForgetEverythingAboutPersonID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)workQueueForgetEverythingAboutPersonIDs:(id)arg1 index:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;

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