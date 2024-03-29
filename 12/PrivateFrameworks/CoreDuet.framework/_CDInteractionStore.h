<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_CDInteractionStore.h</title>
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

/PrivateFrameworks/CoreDuet.framework/_CDInteractionStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet (1)
 */

@interface _CDInteractionStore : NSObject <_CDInteractionDeleting, _CDInteractionQuerying, _CDInteractionRecording> {
    <_DKLocationHistorian> * _locationHistorian;
    _CDInteractionStoreNotifier * _notifier;
    _DKCoreDataStorage * _storage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (retain) <_DKLocationHistorian> *locationHistorian;
@property (nonatomic, readonly) _DKCoreDataStorage *storage;

+ (id)defaultDatabaseDirectory;
+ (id)storeWithDirectory:(id)arg1 readOnly:(bool)arg2;

- (void).cxx_destruct;
- (void)anonymizeContactsWithSalt:(id)arg1;
- (void)anonymizeInteractionsWithSalt:(id)arg1;
- (void)anonymizeKeywordsWithSalt:(id)arg1;
- (void)anonymizeWithSalt:(id)arg1;
- (id)anonymizedCopyToDirectory:(id)arg1 salt:(id)arg2;
- (id)batchFetchExistingAttachmentRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingContactRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingInteractionsWithUUIDs:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)batchFetchExistingKeywordRecords:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)closeStorage;
- (void)countContactsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countContactsUsingPredicate:(id)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countInteractionsUsingPredicate:(id)arg1 error:(id*)arg2;
- (id)createAttachmentFromRecord:(id)arg1;
- (id)createInteractionFromRecord:(id)arg1;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)createInteractionRecord:(id)arg1 context:(id)arg2 keywordCache:(id)arg3 attachmentCache:(id)arg4 contactCache:(id)arg5 error:(id*)arg6;
- (id)createKeywordFromRecord:(id)arg1;
- (id)dateFromTimeIntervalSinceRef:(double)arg1;
- (void)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)deleteInteractionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)deleteInteractionsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 domainIdentifier:(id)arg2 error:(id*)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteOldInteractionsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (bool)deleteStorage;
- (unsigned long long)deleteUnreferencedContacts;
- (unsigned long long)deleteUnreferencedKeywords;
- (id)errorForException:(id)arg1;
- (id)fetchOrCreateAttachmentRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateContactRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 cache:(id)arg3 error:(id*)arg4;
- (id)fetchOrCreateKeywordRecord:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (void)fillWithoutRelationshipsInteractionRecord:(id)arg1 fromInteraction:(id)arg2;
- (id)getContactForRecord:(id)arg1;
- (id)histogramContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 inDirectory:(id)arg2;
- (id)initWithDirectory:(id)arg1 readOnly:(bool)arg2;
- (id)interactionCountPerMechanism;
- (id)locationHistorian;
- (unsigned long long)numberOfContactsMatchingPredicate:(id)arg1;
- (unsigned long long)numberOfInteractionsMatchingPredicate:(id)arg1;
- (bool)openAndCheckIfReadable;
- (id)queryContactInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (void)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryContactsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2 error:(id*)arg3;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (void)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 error:(id*)arg5;
- (id)queryInteractionsUsingPredicate:(id)arg1 withLimit:(unsigned long long)arg2;
- (long long)queryVersionNumber;
- (bool)recordInteraction:(id)arg1;
- (bool)recordInteractions:(id)arg1;
- (void)recordInteractions:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)recordInteractions:(id)arg1 error:(id*)arg2;
- (bool)recordInteractionsBatch:(id)arg1 error:(id*)arg2;
- (bool)recordVersionNumber:(long long)arg1;
- (void)setLocationHistorian:(id)arg1;
- (id)storage;
- (void)updateCachedStatsForContactRecord:(id)arg1 isSender:(bool)arg2 withInteraction:(id)arg3;

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
