<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DADConnection.h</title>
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

/PrivateFrameworks/DataAccessExpress.framework/DADConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress (1.0)
 */

@interface DADConnection : NSObject {
    NSMutableSet * _accountIdsWithAlreadyResetCerts;
    NSMutableSet * _accountIdsWithAlreadyResetThrottleTimers;
    NSObject<OS_xpc_object> * _conn;
    NSMutableDictionary * _inFlightAttachmentDownloads;
    NSMutableDictionary * _inFlightCalendarAvailabilityRequests;
    NSMutableDictionary * _inFlightCalendarDirectorySearches;
    NSMutableDictionary * _inFlightFolderChanges;
    NSMutableDictionary * _inFlightOofSettingsRequests;
    NSMutableDictionary * _inFlightSearchQueries;
    NSMutableDictionary * _inFlightShareRequests;
    NSObject<OS_dispatch_queue> * _muckingWithConn;
    NSObject<OS_dispatch_queue> * _muckingWithInFlightCollections;
    bool  _registered;
    id /* block */  _statusReportBlock;
}

@property (nonatomic) bool registered;

+ (unsigned long long)_nextStopMonitoringStatusToken;
+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)_connection;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)_dispatchMessage:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (id)_init;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(bool)arg3;
- (void)_policyKeyChanged:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)_requestDaemonChangeAgentMonitoringStatus:(bool)arg1 withToken:(unsigned long long)arg2 waitForReply:(bool)arg3;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id /* block */)arg2;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_tearDownInFlightObjects;
- (bool)_validateXPCReply:(id)arg1;
- (id)activeSyncDeviceIdentifier;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)cancelServerContactsSearch:(id)arg1;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)dealloc;
- (id)decodedErrorFromData:(id)arg1;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(id /* block */)arg2;
- (void)fillOutCurrentEASTimeZoneInfo;
- (void)handleURL:(id)arg1;
- (id)init;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)reallyRegisterForInterrogation;
- (bool)registerForInterrogationWithBlock:(id /* block */)arg1;
- (bool)registered;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (void)requestDaemonShutdown;
- (void)requestDaemonStartMonitoringAgentsSyncWithToken:(unsigned long long)arg1;
- (void)requestDaemonStartMonitoringAgentsWithToken:(unsigned long long)arg1;
- (unsigned long long)requestDaemonStopMonitoringAgents;
- (unsigned long long)requestDaemonStopMonitoringAgentsSync;
- (bool)requestPolicyUpdateForAccountID:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)setRegistered:(bool)arg1;
- (id)statusReports;
- (bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(bool)arg4;
- (bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(bool)arg4;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(bool)arg3;
- (bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(bool)arg3 isUserRequested:(bool)arg4;
- (bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(bool)arg3;

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