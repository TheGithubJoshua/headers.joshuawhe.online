<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSSQLSavePlan.h</title>
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

/Frameworks/CoreData.framework/NSSQLSavePlan.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface NSSQLSavePlan : NSObject {
    struct __CFDictionary { } * _changeCache;
    struct __CFDictionary { } * _deletedFOKRowsInCurrentSave;
    NSMutableArray * _externalDataReferencesToDelete;
    NSMutableArray * _externalDataReferencesToSave;
    NSMutableArray * _fileBackedFuturesToCopy;
    NSMutableArray * _fileBackedFuturesToDelete;
    struct _sqlSaveFlags { 
        unsigned int notifyFOKChanges : 1; 
        unsigned int hasChanges : 1; 
        unsigned int reserved : 30; 
    }  _flags;
    struct __CFDictionary { } * _insertCache;
    NSSQLSaveChangesRequestContext * _requestContext;
    NSMutableArray * _rowsToDelete;
    struct __CFDictionary { } * _toManyCache;
    NSMutableDictionary * _toManyRelationshipChanges;
    int  _transactionInMemorySequence;
    NSMutableSet * _updatedByForeignKey;
    NSMutableSet * _updatedByRequest;
    struct __CFDictionary { } * _updatedFOKRowsInCurrentSave;
}

@property (nonatomic, readonly) <_NSCoreDataCollectionWithoutKeys> *externalDataReferencesToDelete;
@property (nonatomic, readonly) <_NSCoreDataCollectionWithoutKeys> *externalDataReferencesToSave;
@property (nonatomic, readonly) <_NSCoreDataCollectionWithoutKeys> *fileBackedFuturesToCopy;
@property (nonatomic, readonly) <_NSCoreDataCollectionWithoutKeys> *fileBackedFuturesToDelete;
@property (nonatomic, readonly) NSSaveChangesRequest *saveRequest;
@property (nonatomic, readonly) NSManagedObjectContext *savingContext;
@property (nonatomic) int transactionInMemorySequence;

- (void)_addExternalReferenceDataToDelete:(id)arg1;
- (void)_addExternalReferenceDataToSave:(id)arg1;
- (void)_addFileBackedFutureToCopy:(id)arg1;
- (void)_addFileBackedFutureToDelete:(id)arg1;
- (void)_computeUpdatedRowSplit;
- (id)_correlationTableUpdateTrackerForRelationship:(id)arg1;
- (void)_createCorrelationTrackerUpdatesForDeletedObject:(id)arg1;
- (void)_createRowsForSave;
- (id)_entityForObject:(id)arg1;
- (id)_findOrCreateChangeSnapshotForGlobalID:(id)arg1;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalOrderKeys:(id)arg3 originalSnapshot:(id)arg4 value:(id)arg5 added:(id)arg6 deleted:(id)arg7 sourceRowPK:(long long)arg8 properties:(id)arg9 sourceObject:(id)arg10 newIndexes:(unsigned long long**)arg11 reorderedIndexes:(char **)arg12;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long**)arg4 reorderedIndexes:(char **)arg5;
- (void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(bool)arg4;
- (void)_prepareForDeletionOfDatabaseExternalPropertiesForObject:(id)arg1;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1;
- (void)_prepareForDeletionOfFileBackedFuturesForObject:(id)arg1;
- (void)_recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(bool)arg4;
- (void)_registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4;
- (void)dealloc;
- (id)entityForEntityDescription:(id)arg1;
- (id)externalDataReferencesToDelete;
- (id)externalDataReferencesToSave;
- (id)fileBackedFuturesToCopy;
- (id)fileBackedFuturesToDelete;
- (id)foreignOrderKeysBeingDeleted;
- (id)foreignOrderKeysBeingUpdated;
- (bool)hasChangesForWriting;
- (id)initForRequestContext:(id)arg1;
- (id)newAncillaryRowsUpdatedForRowCache;
- (id)newCorrelationTableUpdates;
- (id)newObjectsForExhaustiveLockConflictDetection;
- (id)newObjectsForFastLockConflictDetection;
- (id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)arg1;
- (id)newPrimaryRowsUpdatedForRowCache;
- (id)newRowsToAddToRowCache;
- (id)newRowsToRemoveFromRowCache;
- (void)prepareRows;
- (id)saveRequest;
- (id)savingContext;
- (void)setTransactionInMemorySequence:(int)arg1;
- (id)toManyRelationshipChanges;
- (int)transactionInMemorySequence;

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
