<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSHistoryStore.h</title>
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

/protocols/WBSHistoryStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol WBSHistoryStore <WBSHistoryLoader>

@required

- (void)addOrUpdateItemsOnDatabaseQueue:(NSSet *)arg1;
- (NSSet *)allVisitsForItemsOnDatabaseQueue:(NSSet *)arg1;
- (unsigned long long)cachedNumberOfDevicesInSyncCircle;
- (void)checkIfLocalVisitExistsInAnyOfItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clearHistoryVisitsAddedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clearHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WBSHistoryStoreDelegate> *)delegate;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(void *)arg1 ignoringVisits:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryItem *, WBSHistoryVisit *, void*
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(void *)arg1 items:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryVisit *, void*
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(void *)arg1 items:(void *)arg2 enumerationBlock:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryVisit *, void*
- (NSData *)fetchThrottlerData;
- (void)getAllTombstonesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getServerChangeTokenDataWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 15: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, long long, id /* block */, void*, void, id /* block */, bool, void*, void*
- (void)getVisitsCreatedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (double)historyAgeLimit;
- (bool)isUsingInMemoryDatabase;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (NSDate *)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (NSData *)longLivedSaveOperationData;
- (void)performMaintenance:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1;
- (bool)pushNotificationsAreInitialized;
- (NSData *)pushThrottlerData;
- (void)removeItemsOnDatabaseQueue:(NSSet *)arg1;
- (void)removePastHistoryVisitsForItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WBSHistoryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeVisitsOnDatabaseQueue:(NSSet *)arg1;
- (void)replayAndAddTombstones:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetCloudHistoryDataWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setDelegate:(id <WBSHistoryStoreDelegate>)arg1;
- (void)setFetchThrottlerData:(NSData *)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setLongLivedSaveOperationData:(NSData *)arg1;
- (void)setPushNotificationsAreInitialized:(bool)arg1;
- (void)setPushThrottlerData:(NSData *)arg1;
- (void)setServerChangeTokenData:(NSData *)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(NSData *)arg1;
- (NSData *)syncCircleSizeRetrievalThrottlerData;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)visitIdentifiersMatchingExistingVisits:(void *)arg1 populateAssociatedVisits:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;

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