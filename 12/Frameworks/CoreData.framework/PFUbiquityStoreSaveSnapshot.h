<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PFUbiquityStoreSaveSnapshot.h</title>
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

/Frameworks/CoreData.framework/PFUbiquityStoreSaveSnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableDictionary * _deletedObjects;
    NSMutableDictionary * _entityNameToIndex;
    NSMutableArray * _entityNames;
    NSString * _exportingPeerID;
    NSArray * _filesDeletedInTransaction;
    NSMutableArray * _filesInsertedInTransaction;
    PFUbiquityGlobalObjectIDCache * _gidCache;
    NSMutableDictionary * _globalObjectIDToIndex;
    NSMutableDictionary * _globalObjectIDToPermanentManagedObjectID;
    NSMutableArray * _globalObjectIDs;
    NSMutableDictionary * _insertedObjects;
    NSString * _localPeerID;
    NSMutableDictionary * _managedObjectIDToGlobalObjectID;
    NSMutableDictionary * _peerIDToIndex;
    NSMutableArray * _peerIDs;
    NSMutableDictionary * _peerStates;
    NSMutableDictionary * _primaryKeyToIndex;
    NSMutableArray * _primaryKeys;
    NSObject<OS_dispatch_queue> * _queue;
    PFUbiquityKnowledgeVector * _storeKV;
    NSNumber * _transactionNumber;
    NSMutableDictionary * _updatedObjects;
}

@property (nonatomic, readonly) NSDictionary *deletedObjects;
@property (nonatomic, readonly) NSDictionary *entityNameToIndex;
@property (nonatomic, readonly) NSArray *entityNames;
@property (nonatomic, retain) NSString *exportingPeerID;
@property (nonatomic, retain) PFUbiquityGlobalObjectIDCache *globalObjectIDCache;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToIndex;
@property (nonatomic, readonly) NSDictionary *globalObjectIDToPermanentManagedObjectID;
@property (nonatomic, readonly) NSArray *globalObjectIDs;
@property (nonatomic, readonly) NSDictionary *insertedObjects;
@property (nonatomic, retain) NSString *localPeerID;
@property (nonatomic, readonly) NSDictionary *managedObjectIDToGlobalObjectID;
@property (nonatomic, readonly) NSDictionary *peerIDToIndex;
@property (nonatomic, readonly) NSArray *peerIDs;
@property (nonatomic, readonly) NSDictionary *peerStates;
@property (nonatomic, readonly) NSDictionary *primaryKeyToIndex;
@property (nonatomic, readonly) NSArray *primaryKeys;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *storeKV;
@property (nonatomic, retain) NSNumber *transactionNumber;
@property (nonatomic, readonly) NSDictionary *updatedObjects;

- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id*)arg4;
- (id)checkIndecies:(id)arg1;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)deletedObjects;
- (id)description;
- (id)entityNameToIndex;
- (id)entityNames;
- (id)exportingPeerID;
- (id)filesDeletedInTransaction;
- (id)filesInsertedInTransaction;
- (void)finishGlobalIDReplacement;
- (void)generatePeerStates;
- (id)globalObjectIDCache;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)globalObjectIDToIndex;
- (id)globalObjectIDToPermanentManagedObjectID;
- (id)globalObjectIDs;
- (id)init;
- (id)initForExport:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;
- (id)insertedObjects;
- (id)localPeerID;
- (id)managedObjectIDToGlobalObjectID;
- (id)noSyncCheckIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)peerIDToIndex;
- (id)peerIDs;
- (id)peerStates;
- (void)prepareForGlobalIDReplacement;
- (id)primaryKeyToIndex;
- (id)primaryKeys;
- (void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)resetFromOptimisticLockingException;
- (void)setDeletedObjects:(id)arg1;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setExportingPeerID:(id)arg1;
- (void)setGlobalObjectIDCache:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setLocalPeerID:(id)arg1;
- (void)setStoreKV:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (void)setUpdatedObjects:(id)arg1;
- (id)storeKV;
- (id)transactionNumber;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)updatedObjects;

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