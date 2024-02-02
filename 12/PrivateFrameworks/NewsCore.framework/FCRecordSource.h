<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCRecordSource.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCRecordSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCCacheFlushing, FCFetchCoordinatorDelegate, FCJSONEncodableObjectProviding> {
    NSString * _activeTreatmentID;
    FCCacheCoordinator * _cacheCoordinator;
    FCCKContentDatabase * _contentDatabase;
    NSString * _contentDirectory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _derivedKeysLock;
    NSArray * _desiredKeys;
    NSString * _experimentalizableFieldsPostfix;
    NSDictionary * _experimentalizedKeysByOriginalKey;
    FCFetchCoordinator * _fetchCoordinator;
    FCThreadSafeMutableDictionary * _fetchErrorsByKey;
    NSObject<OS_dispatch_queue> * _initQueue;
    FCKeyValueStore * _localStore;
    NSDictionary * _localizedExperimentalizedKeysByOriginalKey;
    NSDictionary * _localizedKeysByOriginalKey;
    NSDictionary * _localizedLanguageSpecificKeysByOriginalKey;
}

@property (nonatomic, readonly) NSString *activeTreatmentID;
@property (nonatomic, readonly) FCCacheCoordinator *cacheCoordinator;
@property (nonatomic, readonly) FCCKContentDatabase *contentDatabase;
@property (nonatomic, readonly) NSString *contentDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } derivedKeysLock;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (nonatomic, readonly) NSString *experimentalizableFieldsPostfix;
@property (nonatomic, readonly) NSArray *experimentalizableKeys;
@property (nonatomic, readonly) NSDictionary *experimentalizedKeysByOriginalKey;
@property (nonatomic, readonly) FCFetchCoordinator *fetchCoordinator;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, readonly) FCKeyValueStore *localStore;
@property (nonatomic, readonly) NSArray *localizableExperimentalizableKeys;
@property (nonatomic, readonly) NSArray *localizableKeys;
@property (nonatomic, readonly) NSArray *localizableLanguageSpecificKeys;
@property (nonatomic, readonly) NSDictionary *localizedExperimentalizedKeysByOriginalKey;
@property (nonatomic, readonly) NSDictionary *localizedKeysByOriginalKey;
@property (nonatomic, readonly) NSDictionary *localizedLanguageSpecificKeysByOriginalKey;
@property (nonatomic, readonly) NSArray *nonLocalizableKeys;
@property (readonly) Class superclass;

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)defaultCachePolicy;
+ (id)identifierFromCKRecord:(id)arg1;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (bool)supportsDeletions;

- (void).cxx_destruct;
- (id)_ckRecordIDFromIdentifier:(id)arg1;
- (id)_deleteRecordsWithWriteLockWithIDs:(id)arg1;
- (void)_deriveDesiredKeys;
- (void)_deriveDesiredKeysIfNeeded;
- (id)_desiredKeysForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2 languageCode:(id)arg3;
- (id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)arg1;
- (id)_faultableRecordsWithIdentifiers:(id)arg1;
- (id)_fetchErrorForKey:(id)arg1;
- (id)_identifierFromCKRecordID:(id)arg1;
- (void)_initStore;
- (id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1 experimentPostfix:(id)arg2;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)arg1;
- (id)_localizedLanguageSpecificKeysByOriginalKeyForContentStoreFrontID:(id)arg1 languageCode:(id)arg2;
- (void)_prepareForUse;
- (id)_recordBaseFromCKRecord:(id)arg1;
- (id)_saveCKRecordsWithWriteLock:(id)arg1 updateFetchDateForRecordIdentifiers:(id)arg2 fetchContext:(id)arg3;
- (id)activeTreatmentID;
- (id)cacheCoordinator;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)cachedRecordsWithIDs:(id)arg1;
- (id)contentDatabase;
- (id)contentDirectory;
- (id)convertRecords:(id)arg1;
- (id)deleteRecordsWithIDs:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })derivedKeysLock;
- (id)desiredKeys;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)experimentalizableFieldsPostfix;
- (id)experimentalizableKeys;
- (id)experimentalizedKeysByOriginalKey;
- (id)fetchCoordinator;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(bool)arg3 context:(id)arg4;
- (id)fetchErrorsByKey;
- (id)fetchOperationForRecordsWithIDs:(id)arg1;
- (id)fetchOperationForRecordsWithIDs:(id)arg1 ignoreCacheForRecordIDs:(id)arg2;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)init;
- (id)initQueue;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (bool)isRecordStale:(id)arg1 withCachePolicy:(id)arg2;
- (id)jsonEncodableObject;
- (id)keyValueRepresentationOfRecord:(id)arg1;
- (id)localStore;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (id)localizableLanguageSpecificKeys;
- (id)localizedExperimentalizedKeysByOriginalKey;
- (id)localizedKeysByOriginalKey;
- (id)localizedLanguageSpecificKeysByOriginalKey;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (bool)recognizesRecordID:(id)arg1;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (id)recordType;
- (id)saveRecords:(id)arg1;
- (void)setInitQueue:(id)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;
- (void)t_startOverridingExperimentalizableFieldsPostfix:(id)arg1 treatmentID:(id)arg2;
- (void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;
- (void)updateFetchDateForRecordIDs:(id)arg1;

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