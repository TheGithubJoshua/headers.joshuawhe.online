<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKHealthRecordsStore.h</title>
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

/Frameworks/HealthKit.framework/HKHealthRecordsStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable> {
    long long  _ingestionState;
    NSHashTable * _ingestionStateChangeListeners;
    HKPluginProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKBrandImageManager *hk_brandImageManager;
@property long long ingestionState;
@property (retain) NSHashTable *ingestionStateChangeListeners;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_actionCompletionWithObjectOnClientQueue:(id /* block */)arg1;
- (void)_fetchHealthRecordsPluginServerProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_hk_shouldPromptForOptInClinicalDataCollection:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)accountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 setUserEnabled:(bool)arg2 completion:(id /* block */)arg3;
- (void)addIngestionStateListener:(id)arg1;
- (void)badgeForNewHealthRecordsWithCompletion:(id /* block */)arg1;
- (void)beginInitialLoginSessionForGateway:(id)arg1 completion:(id /* block */)arg2;
- (void)beginReloginSessionForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelInFlightSearchQueriesWithCompletion:(id /* block */)arg1;
- (void)clientRemote_updateIngestionState:(long long)arg1;
- (void)conceptForCodings:(id)arg1 preferredSystems:(id)arg2 completion:(id /* block */)arg3;
- (void)connectionInvalidated;
- (void)createStaticAccountWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 onlyIfNeededForSimulatedGatewayID:(id)arg4 completion:(id /* block */)arg5;
- (void)deleteAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(id /* block */)arg2;
- (void)dispatchIngestionStateChange;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
- (void)displayStringForMedicalCodingSystem:(id)arg1 code:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;
- (void)endLoginSessionWithState:(id)arg1 code:(id)arg2 completion:(id /* block */)arg3;
- (id)exportedInterface;
- (void)fetchAccountForSource:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAccountsForGateways:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllAccountsWithCompletion:(id /* block */)arg1;
- (void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id /* block */)arg1;
- (void)fetchExportedPropertiesForHealthRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFHIRJSONDocumentWithAccountIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)fetchLogoDataForBrand:(id)arg1 scaleKey:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRawSourceStringForHealthRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRemoteGatewayWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteProviderWithExternalID:(id)arg1 batchID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRemoteSearchResultsPageForQuery:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 from:(long long)arg4 completion:(id /* block */)arg5;
- (void)getHealthRecordsIngestionFrequencyWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(struct NSUUID { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg1 accountIdentifier:(struct NSUUID { Class x1; }*)arg2 options:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)ingestHealthRecordsWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (long long)ingestionState;
- (id)ingestionStateChangeListeners;
- (id)initWithHealthStore:(id)arg1;
- (void)invalidateCredentialForAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (void)notifyForNewHealthRecordsWithCompletion:(id /* block */)arg1;
- (void)performCodingTasks:(id)arg1 completion:(id /* block */)arg2;
- (void)pruneAuthenticationDataWithCompletion:(id /* block */)arg1;
- (void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteInterface;
- (void)replaceAccountWithNewAccountForAccountWithIdentifier:(struct NSUUID { Class x1; }*)arg1 usingCredentialWithPersistentID:(id)arg2 completion:(id /* block */)arg3;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)arg1;
- (void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id /* block */)arg1;
- (void)setHealthRecordsIngestionFrequency:(long long)arg1 completion:(id /* block */)arg2;
- (void)setIngestionState:(long long)arg1;
- (void)setIngestionStateChangeListeners:(id)arg1;
- (void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hk_brandImageManager;

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
