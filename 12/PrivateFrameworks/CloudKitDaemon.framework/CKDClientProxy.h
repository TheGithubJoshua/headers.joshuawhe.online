<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDClientProxy.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDClientProxy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher> {
    <NSObject> * _TCCDatabaseChangedNotificationObserver;
    NSOperationQueue * _backgroundOperationThrottleQueue;
    NSString * _bundleIdentifier;
    NSArray * _cachedSandboxExtensions;
    bool  _canOpenByID;
    bool  _canUsePackages;
    NSObject<OS_dispatch_queue> * _cancellationQueue;
    NSOperationQueue * _cleanupOperationQueue;
    NSXPCConnection * _connection;
    NSDate * _connectionDate;
    NSDictionary * _connectionEntitlements;
    CKDClientContext * _context;
    bool  _hasFakeEntitlements;
    long long  _hasTCCAuthorizationTernary;
    bool  _holdAllOperations;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationStatisticsByClassName;
    NSMutableArray * _pendingContexts;
    NSMutableSet * _pendingOperationIDs;
    int  _pid;
    NSString * _procName;
    bool  _sandboxed;
    NSObject<OS_dispatch_queue> * _setupQueue;
    NSString * _sourceApplicationBundleIdentifier;
    NSObject<OS_dispatch_queue> * _statusQueue;
    NSOperationQueue * _tccAuthOpQueue;
    NSObject<OS_dispatch_queue> * _tccAuthQueue;
}

@property (nonatomic, retain) <NSObject> *TCCDatabaseChangedNotificationObserver;
@property (nonatomic, retain) NSOperationQueue *backgroundOperationThrottleQueue;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSArray *cachedSandboxExtensions;
@property (nonatomic) bool canOpenByID;
@property (nonatomic) bool canUsePackages;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cancellationQueue;
@property (nonatomic, retain) NSOperationQueue *cleanupOperationQueue;
@property (nonatomic) NSXPCConnection *connection;
@property (nonatomic, retain) NSDate *connectionDate;
@property (nonatomic, retain) NSDictionary *connectionEntitlements;
@property (nonatomic, retain) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasFakeEntitlements;
@property (nonatomic) long long hasTCCAuthorizationTernary;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool holdAllOperations;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSMutableDictionary *operationStatisticsByClassName;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic, retain) NSMutableSet *pendingOperationIDs;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *procName;
@property (getter=isSandboxed, nonatomic) bool sandboxed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *setupQueue;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *tccAuthOpQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *tccAuthQueue;

+ (id)operationStatusReport:(id)arg1;
+ (id)sharedClientThrottlingOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)TCCDatabaseChangedNotificationObserver;
- (void)_accountStatusWithClientContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(id /* block */)arg2;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (id)_clientPrefixEntitlement;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleProgressForOperationWithID:(id)arg1 withArguments:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleStatisticsForOperation:(id)arg1 withArguments:(id)arg2;
- (bool)_hasCustomAccountsEntitlement;
- (bool)_hasEntitlementForKey:(id)arg1;
- (bool)_hasEnvironmentEntitlement;
- (bool)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2;
- (bool)_lockedHasTCCAuthorization;
- (void)_lockedSetHasTCCAuthorizationTernary:(long long)arg1;
- (id)_locked_eligiblePendingContextForSetupInfo:(id)arg1;
- (unsigned long long)_outstandingOperationCount;
- (void)_performFetchCurrentUserRecordOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_reallyPerformFetchRecordsOperation:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setupOperationQueues;
- (void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_updateConnectionEntitlementsWithFakeEntitlements:(id)arg1;
- (void)accountChangedWithID:(id)arg1;
- (void)accountInfoWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)applicationIdentifier;
- (id)apsEnvironmentEntitlement;
- (id)backgroundOperationThrottleQueue;
- (id)bundleIdentifier;
- (id)cachedSandboxExtensions;
- (bool)canOpenByID;
- (bool)canOpenFileAtURL:(id)arg1;
- (bool)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (bool)canUsePackages;
- (bool)canUsePackagesWithError:(id*)arg1;
- (void)cancelAllOperations;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (id)cancellationQueue;
- (id)cleanupOperationQueue;
- (void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3;
- (void)clearCachesForRecordWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesForZoneWithSetupInfo:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearCachesWithSetupInfo:(id)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)clearContextFromMetadataCache;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (id)connection;
- (id)connectionDate;
- (id)connectionEntitlements;
- (id)context;
- (void)currentDeviceIDWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)darkWakeEnabledEntitlement;
- (void)dataclassEnabled:(id)arg1 withSetupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)decryptPersonalInfoOnShare:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)description;
- (void)displayInfoOnAccountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dumpDaemonStatusReportToFileHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLongLivedOperationsWithIDs:(id)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)flushOperationMetricsToPowerLog;
- (void)forceFinishClientSetupWithClientContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getOutstandingOperationCountWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getTCCAuthorizationWithCompletion:(id /* block */)arg1;
- (void)handleCheckpointForOperationWithID:(id)arg1 withArguments:(id)arg2;
- (bool)hasAllowAccessDuringBuddyEntitlement;
- (bool)hasCloudKitSystemServiceEntitlement;
- (bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (bool)hasDeviceIdentifierEntitlement;
- (bool)hasDisplaysSystemAcceptPromptEntitlement;
- (bool)hasFakeEntitlements;
- (bool)hasLightweightPCSEntitlement;
- (bool)hasMasqueradingEntitlement;
- (bool)hasNonLegacyShareURLEntitlement;
- (bool)hasOutOfProcessUIEntitlement;
- (bool)hasParticipantPIIEntitlement;
- (bool)hasProtectionDataEntitlement;
- (bool)hasTCCAuthorization;
- (long long)hasTCCAuthorizationTernary;
- (bool)hasZoneProtectionDataEntitlement;
- (bool)holdAllOperations;
- (void)importantUserIDsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (bool)isLongLived;
- (bool)isSandboxed;
- (id)openFileWithOpenInfo:(id)arg1 error:(id*)arg2;
- (id)operationQueue;
- (id)operationStatisticsByClassName;
- (id)pendingContexts;
- (id)pendingOperationIDs;
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
- (int)pid;
- (id)procName;
- (void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(id /* block */)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serviceNameForContainerMapEntitlement;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 setupInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setBackgroundOperationThrottleQueue:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedSandboxExtensions:(id)arg1;
- (void)setCanOpenByID:(bool)arg1;
- (void)setCanUsePackages:(bool)arg1;
- (void)setCancellationQueue:(id)arg1;
- (void)setCleanupOperationQueue:(id)arg1;
- (void)setClientProxyAvailable:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDate:(id)arg1;
- (void)setConnectionEntitlements:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(id)arg5;
- (void)setHasFakeEntitlements:(bool)arg1;
- (void)setHasTCCAuthorizationTernary:(long long)arg1;
- (void)setHoldAllOperations:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setOperationStatisticsByClassName:(id)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setPendingOperationIDs:(id)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setStatusQueue:(id)arg1;
- (void)setTCCDatabaseChangedNotificationObserver:(id)arg1;
- (void)setTccAuthOpQueue:(id)arg1;
- (void)setTccAuthQueue:(id)arg1;
- (id)setupQueue;
- (void)showAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2;
- (id)sourceApplicationBundleIdentifier;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)statusQueue;
- (void)submitClientEventMetric:(id)arg1 withSetupInfo:(id)arg2;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (id)tccAuthOpQueue;
- (id)tccAuthQueue;
- (void)tearDown;
- (void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)triggerAutoBugCaptureSnapshot;
- (void)updatePushTokens;
- (id)valueForEntitlement:(id)arg1;
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
