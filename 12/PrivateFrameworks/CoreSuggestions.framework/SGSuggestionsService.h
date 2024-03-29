<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGSuggestionsService.h</title>
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

/PrivateFrameworks/CoreSuggestions.framework/SGSuggestionsService.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions (680.125)
 */

@interface SGSuggestionsService : NSObject <SGSuggestionsServiceContactsProtocol, SGSuggestionsServiceEventsProtocol, SGSuggestionsServiceFidesProtocol, SGSuggestionsServiceInternalProtocol, SGSuggestionsServiceMailProtocol> {
    _PASLock * _cacheLock;
    SGDaemonConnection * _daemonConnection;
    bool  _keepDirty;
    NSString * _machServiceName;
    <SGDSuggestManagerAllProtocol> * _managerForTesting;
    bool  _queuesRequestsIfBusy;
}

+ (id)_daemonConnectionForMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(bool)arg3;
+ (id)filteredSearchableItemsFromItems:(id)arg1;
+ (bool)hasEntitlement:(id)arg1;
+ (void)initialize;
+ (bool)isHarvestingSupported;
+ (void)prepareForQuery;
+ (id)serviceForContacts;
+ (id)serviceForEvents;
+ (id)serviceForFides;
+ (id)serviceForInternal;
+ (id)serviceForMail;
+ (id)serviceForMessages;
+ (id)wantedSearchableItemsFromItems:(id)arg1;

- (void).cxx_destruct;
- (void)_addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(id /* block */)arg3;
- (id)_remoteSuggestionManager;
- (bool)addInteractions:(id)arg1 bundleId:(id)arg2 error:(id*)arg3;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)addSearchableItems:(id)arg1 error:(id*)arg2;
- (void)addSearchableItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)allContactsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)allEventsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (bool)clearCachesFully:(bool)arg1 error:(id*)arg2;
- (void)clearCachesFully:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)cnContactMatchesForRecordId:(id)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cnContactMatchesForRecordIds:(id)arg1 error:(id*)arg2;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmContact:(id)arg1 error:(id*)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmContactDetailRecord:(id)arg1 error:(id*)arg2;
- (void)confirmContactDetailRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmEvent:(id)arg1 error:(id*)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)confirmEventByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)confirmRecord:(id)arg1 error:(id*)arg2;
- (void)confirmRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactFromRecordID:(id)arg1;
- (id)contactFromRecordID:(id)arg1 error:(id*)arg2;
- (void)contactFromRecordID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id*)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesOrLookupIdByEmailAddress:(id)arg1 error:(id*)arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 error:(id*)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (bool)daemonExit:(id*)arg1;
- (void)daemonExitWithCompletion:(id /* block */)arg1;
- (void)deleteCloudKitZoneWithCompletion:(id /* block */)arg1;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (bool)deregisterContactsChangeObserverWithToken:(id)arg1;
- (bool)deregisterEventsChangeObserverWithToken:(id)arg1;
- (bool)drainQueueCompletely:(id*)arg1;
- (void)drainQueueCompletelyWithCompletion:(id /* block */)arg1;
- (id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)eventFromRecordID:(id)arg1 error:(id*)arg2;
- (void)eventFromRecordID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)eventFromUniqueId:(id)arg1 error:(id*)arg2;
- (void)eventFromUniqueId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(id /* block */)arg3;
- (id)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id*)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2;
- (id)initWithMachServiceName:(id)arg1 protocol:(id)arg2 useCache:(bool)arg3;
- (bool)isEnabledWithError:(id*)arg1;
- (void)isEventCandidateForURL:(id)arg1 andTitle:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)keepDirty:(bool)arg1;
- (void)keysForSchemas:(id)arg1 completion:(id /* block */)arg2;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)messagesToRefreshWithCompletion:(id /* block */)arg1;
- (id)messagesToRefreshWithError:(id*)arg1;
- (id)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 error:(id*)arg4;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)originFromRecordId:(id)arg1 error:(id*)arg2;
- (void)originFromRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(id /* block */)arg2;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id /* block */)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(id /* block */)arg6;
- (bool)prepareForRealtimeExtraction:(id*)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(id /* block */)arg1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (bool)queuesRequestsIfBusy;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)refreshCacheSnapshot;
- (id)registerContactsChangeObserver:(id /* block */)arg1;
- (id)registerEventsChangeObserver:(id /* block */)arg1;
- (bool)rejectContact:(id)arg1 error:(id*)arg2;
- (void)rejectContact:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectContactDetailRecord:(id)arg1 error:(id*)arg2;
- (void)rejectContactDetailRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 error:(id*)arg3;
- (void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)rejectEvent:(id)arg1 error:(id*)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)rejectEventByRecordId:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)rejectRecord:(id)arg1 error:(id*)arg2;
- (void)rejectRecord:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)removeAllStoredPseudoContacts:(id*)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(id /* block */)arg1;
- (bool)reportMessagesFound:(id)arg1 lost:(id)arg2 error:(id*)arg3;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)resetConfirmationAndRejectionHistory:(id*)arg1;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(id /* block */)arg1;
- (bool)resolveFullDownloadRequests:(id)arg1 error:(id*)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)sendRTCLogs:(id*)arg1;
- (void)setManagerForTesting:(id)arg1;
- (void)setQueuesRequestsIfBusy:(bool)arg1;
- (bool)sleep:(id*)arg1;
- (void)sleepWithCompletion:(id /* block */)arg1;
- (id)spotlightObserver;
- (bool)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 withCompletion:(id /* block */)arg5;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(id /* block */)arg3;
- (void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 error:(id*)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(id /* block */)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 error:(id*)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(id /* block */)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(id /* block */)arg5;
- (void)suggestionsFromMockData:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)updateMessages:(id)arg1 state:(unsigned long long)arg2 error:(id*)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithCompletion:(id /* block */)arg2;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(id /* block */)arg3;

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
