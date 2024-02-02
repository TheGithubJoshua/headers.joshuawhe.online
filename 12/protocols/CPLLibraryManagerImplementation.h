<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CPLLibraryManagerImplementation.h</title>
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

/protocols/CPLLibraryManagerImplementation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>

@required

- (void)acceptMomentShare:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLMomentShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)acknowledgeChangedStatuses:(NSArray *)arg1;
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(NSArray *)arg1 persist:(bool)arg2;
- (void)beginDownloadForResource:(void *)arg1 clientBundleID:(void *)arg2 highPriority:(void *)arg3 proposedTaskIdentifier:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: CPLResource *, NSString *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)beginInMemoryDownloadOfResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLResourceTransferTask *, void*
- (void)boostPriorityForScopeWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deactivateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)diagnosticsEnabled;
- (void)disableMainScopeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)disableMingling;
- (void)disableSynchronizationWithReason:(NSString *)arg1;
- (void)enableMainScopeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)enableMingling;
- (void)enableSynchronizationWithReason:(NSString *)arg1;
- (void)fetchMomentShareFromShareURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLMomentShare *, NSError *, void*
- (void)forceSynchronizingScopeWithIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLForceSyncTask *, void*
- (void)getChangedStatusesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(void *)arg1 inAreLocalIdentifiers:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getStatusForRecordsWithScopedIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getSystemBudgetsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSString *, NSString *, NSURL *, void*
- (void)publishMomentShare:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLMomentShare *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLMomentShare *, NSError *, void*
- (void)publishResource:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: CPLResource *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSDate *, NSError *, void*
- (void)queryUserIdentitiesWithParticipants:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rampingRequestForResourceType:(void *)arg1 numRequested:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)resetStatus;
- (void)setDiagnosticsEnabled:(bool)arg1;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (void)startSyncSession;

@optional

- (void)addInfoToLog:(NSString *)arg1;
- (void)barrier;
- (void)blockEngineElement:(NSString *)arg1;
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(void *)arg1 related:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: CPLScopedIdentifier *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, NSError *, void*
- (void)compactFileCacheWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteResources:(void *)arg1 checkServerIfNecessary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*
- (void)getCloudCacheForRecordWithScopedIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopedIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPLRecordChange *, NSError *, void*
- (void)getListOfComponentsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getResourcesForItemWithScopedIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: CPLScopedIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSArray *, void*
- (void)getStatusArrayForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getStatusForComponents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getStatusesForScopesWithIdentifiers:(void *)arg1 includeStorages:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)reportMiscInformation:(NSDictionary *)arg1;
- (void)reportSetting:(NSString *)arg1 hasBeenSetToValue:(NSString *)arg2;
- (void)resetCacheWithOption:(void *)arg1 reason:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unblockEngineElement:(NSString *)arg1;
- (void)unblockEngineElementOnce:(NSString *)arg1;

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