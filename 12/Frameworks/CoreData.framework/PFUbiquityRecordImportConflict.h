<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PFUbiquityRecordImportConflict.h</title>
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

/Frameworks/CoreData.framework/PFUbiquityRecordImportConflict.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface PFUbiquityRecordImportConflict : NSObject {
    NSDate * _conflictLogDate;
    NSDictionary * _conflictingLogContent;
    PFUbiquityKnowledgeVector * _conflictingLogKnowledgeVector;
    NSNumber * _conflictingLogTransactionNumber;
    int  _conflictingLogTransactionType;
    NSString * _conflictingObjectGlobalIDStr;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    NSDictionary * _globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext * _importContext;
    NSMutableDictionary * _relationshipsToObjectIDsToCheck;
    NSManagedObject * _sourceObject;
    NSArray * _transactionHistory;
}

@property (nonatomic, retain) NSDate *conflictLogDate;
@property (nonatomic, retain) NSDictionary *conflictingLogContent;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;
@property (nonatomic, retain) NSNumber *conflictingLogTransactionNumber;
@property (nonatomic) int conflictingLogTransactionType;
@property (nonatomic, retain) NSString *conflictingObjectGlobalIDStr;
@property (nonatomic, retain) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (nonatomic, retain) NSDictionary *globalIDIndexToLocalIDURIMap;
@property (nonatomic, retain) PFUbiquityImportContext *importContext;
@property (nonatomic, readonly) NSDictionary *relationshipToObjectIDsToCheck;
@property (nonatomic, retain) NSManagedObject *sourceObject;
@property (nonatomic, retain) NSArray *transactionHistory;

+ (id)createSnapshotFromManagedObject:(id)arg1 withSourceObject:(id)arg2;
+ (id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3;
+ (void)initialize;
+ (int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(bool*)arg3;

- (id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2;
- (void)addObjectID:(id)arg1 forRelationship:(id)arg2;
- (void)addObjectIDsForDiff:(id)arg1 forRelationship:(id)arg2;
- (id)conflictLogDate;
- (id)conflictingLogContent;
- (id)conflictingLogKnowledgeVector;
- (id)conflictingLogTransactionNumber;
- (int)conflictingLogTransactionType;
- (id)conflictingObjectGlobalIDStr;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;
- (id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id*)arg3;
- (id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id*)arg2;
- (id)createSnapshotFromBaselineForEntry:(id)arg1 error:(id*)arg2;
- (id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2;
- (id)currentKnowledgeVector;
- (void)dealloc;
- (id)description;
- (id)globalIDIndexToLocalIDURIMap;
- (id)importContext;
- (id)init;
- (id)relationshipToObjectIDsToCheck;
- (bool)resolveConflict:(id*)arg1;
- (bool)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned int)arg4 andNewVersion:(unsigned int)arg5 error:(id*)arg6;
- (void)setConflictLogDate:(id)arg1;
- (void)setConflictingLogContent:(id)arg1;
- (void)setConflictingLogKnowledgeVector:(id)arg1;
- (void)setConflictingLogTransactionNumber:(id)arg1;
- (void)setConflictingLogTransactionType:(int)arg1;
- (void)setConflictingObjectGlobalIDStr:(id)arg1;
- (void)setCurrentKnowledgeVector:(id)arg1;
- (void)setGlobalIDIndexToLocalIDURIMap:(id)arg1;
- (void)setImportContext:(id)arg1;
- (void)setSourceObject:(id)arg1;
- (void)setTransactionHistory:(id)arg1;
- (id)sourceObject;
- (id)transactionHistory;

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