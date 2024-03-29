<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_KSTextReplacementLegacyStore.h</title>
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

/PrivateFrameworks/KeyboardServices.framework/_KSTextReplacementLegacyStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices (1)
 */

@interface _KSTextReplacementLegacyStore : NSObject <NSManagedObjectContextFaultingDelegate, _KSTextReplacementSyncProtocol> {
    NSURL * _baseURL;
    NSString * _cacheFilePath;
    bool  _didScheduleCacheUpdate;
    bool  _forceMaintenance;
    long long  _importedSinceMaintenance;
    NSDate * _lastMaintenanceDate;
    NSManagedObjectContext * _managedObjectContext;
    bool  _minimumUptimeDidExpire;
    bool  _pendingSampleShortcutImport;
    NSPersistentStore * _persistentStore;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSDate * _persistentStoreDidLoadTime;
    bool  _shouldDisableCaching;
    bool  _shouldUpdateTheCache;
    bool  _suspendedForAccountChange;
    NSDate * _ubiquityStoreLoadStartTime;
    bool  _ubiquityStoreLoaded;
    NSObject<OS_os_transaction> * _uptimeTransaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSString *cacheFilePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didScheduleCacheUpdate;
@property (nonatomic) bool forceMaintenance;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long importedSinceMaintenance;
@property (nonatomic, retain) NSDate *lastMaintenanceDate;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) bool minimumUptimeDidExpire;
@property (nonatomic) bool pendingSampleShortcutImport;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, retain) NSDate *persistentStoreDidLoadTime;
@property (nonatomic) bool shouldDisableCaching;
@property (nonatomic) bool shouldUpdateTheCache;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendedForAccountChange;
@property (nonatomic, retain) NSDate *ubiquityStoreLoadStartTime;
@property (nonatomic) bool ubiquityStoreLoaded;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)basePersistentStoreURL;
+ (id)cachedStorePath;
+ (id)legacyImportFilePaths;
+ (id)legacyImportWordKeyPairsFromFiles:(id)arg1;
+ (id)legacyStorePath;
+ (id)textReplacementEntriesFromManagedObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteDuplicatesOfShortcut:(id)arg1 phrase:(id)arg2 count:(long long)arg3 withContext:(id)arg4;
- (id)_deleteTransaction:(id)arg1;
- (bool)_mergeShortcut:(id)arg1 phrase:(id)arg2 fromContext:(id)arg3;
- (bool)_shouldMergeShortcut:(id)arg1 phrase:(id)arg2 intoContext:(id)arg3;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)baseURL;
- (id)cacheFilePath;
- (void)cleanup;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)currentStoreIndentity;
- (void)dealloc;
- (bool)detectAndCleanDuplicatesWithContext:(id)arg1;
- (void)didMaintenance;
- (void)didMergeEntriesForNewUbiquityIdentity:(id)arg1;
- (void)didMergeEntriesForOtherLocalPeers:(id)arg1;
- (bool)didScheduleCacheUpdate;
- (void)endMinimumUptime;
- (id)entityDescription;
- (id)entriesFromCache:(id*)arg1;
- (id)entriesMatchingPredicate:(id)arg1;
- (id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)entriesUsingSortDescriptors:(id)arg1;
- (bool)forceMaintenance;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)importLegacyEntries;
- (void)importSampleShortcutsIfNecessary;
- (long long)importedSinceMaintenance;
- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (void)insertEntryWithValue:(id)arg1;
- (id)lastMaintenanceDate;
- (void)loadMaintenancePreferencesIfNecessary;
- (void)loadPersistentStoreIfNecessary;
- (id)managedObjectContext;
- (id)managedObjectModelURL;
- (bool)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(bool)arg2;
- (bool)mergeEntriesForUbiquityIdentityChangeIfNecessary;
- (bool)mergeEntriesFromAllStoresIncludeLocalVariations:(bool)arg1;
- (id)mergeShortcutsFromContext:(id)arg1;
- (bool)migrateEntriesFromStoreAtURL:(id)arg1 error:(id*)arg2;
- (void)migrateSundanceData;
- (void)migrateTellurideData;
- (bool)minimumUptimeDidExpire;
- (double)minimumUptimeRemaining;
- (bool)needsMaintenance;
- (bool)pendingSampleShortcutImport;
- (void)performMaintenanceIfNecessary;
- (id)persistentStore;
- (id)persistentStoreCoordinator;
- (void)persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)persistentStoreCoordinatorStoresWillChange:(id)arg1;
- (void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1;
- (id)persistentStoreDidLoadTime;
- (void)prepareForMigration;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)removeAllEntries;
- (id)removeEntriesWithPredicate:(id)arg1;
- (void)requestMinimumUptime;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (void)retirePersistentStoreAtURL:(id)arg1;
- (void)runLegacyMigration;
- (void)runMaintenanceIncludeLocalVariations:(bool)arg1;
- (bool)save;
- (void)scheduleCacheUpdate:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCacheFilePath:(id)arg1;
- (void)setDidScheduleCacheUpdate:(bool)arg1;
- (void)setForceMaintenance:(bool)arg1;
- (void)setImportedSinceMaintenance:(long long)arg1;
- (void)setLastMaintenanceDate:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setMinimumUptimeDidExpire:(bool)arg1;
- (void)setPendingSampleShortcutImport:(bool)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPersistentStoreDidLoadTime:(id)arg1;
- (void)setShouldDisableCaching:(bool)arg1;
- (void)setShouldUpdateTheCache:(bool)arg1;
- (void)setSuspendedForAccountChange:(bool)arg1;
- (void)setUbiquityStoreLoadStartTime:(id)arg1;
- (void)setUbiquityStoreLoaded:(bool)arg1;
- (bool)shouldDisableCaching;
- (bool)shouldUpdateTheCache;
- (id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(bool*)arg4;
- (bool)suspendedForAccountChange;
- (id)textReplacementEntries;
- (id)ubiquityStoreLoadStartTime;
- (bool)ubiquityStoreLoaded;
- (void)unloadPersistentStore;
- (id)workQueue;
- (bool)writeEntriesToCache:(id)arg1;

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
