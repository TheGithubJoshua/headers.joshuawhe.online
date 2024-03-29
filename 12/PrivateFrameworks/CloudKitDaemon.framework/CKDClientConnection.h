<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDClientConnection.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDClientConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDClientConnection : NSObject <CKXPCDaemon> {
    CKDClientProxy * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKDClientProxy *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addProxyOperationWithInfo:(id)arg1 withBlock:(id /* block */)arg2 longlivedProxyPreparationBlock:(id /* block */)arg3;
- (void)_handlePerformDaemonCallWithOperationInfo:(id)arg1 completionBlock:(id /* block */)arg2 forwardingBlock:(id /* block */)arg3;
- (void)accountChangedWithID:(id)arg1;
- (void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearContextFromMetadataCache;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)flushOperationMetricsToPowerLog;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)performAcceptSharesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performAggregateZonePCSOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performArchiveRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCodeFunctionInvokeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performCompleteParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverAllIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performDiscoverUserIdentitiesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchArchivedRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchDatabaseChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZoneChangesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareMetadataOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantKeyOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchShareParticipantsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performInitiateParticipantVettingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordAccessOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (id)proxy;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id /* block */)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
- (void)setProxy:(id)arg1;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)triggerAutoBugCaptureSnapshot;
- (void)updatePushTokens;
- (void)wipeAllCachedLongLivedProxiesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wipeAllCachesAndDie;

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
