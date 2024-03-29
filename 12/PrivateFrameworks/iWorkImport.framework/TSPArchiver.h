<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSPArchiver.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSPArchiver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSPArchiver : TSPArchiverBase {
    TSPReferenceOrderedSet * _aggregatedCommandToModelReferences;
    NSHashTable * _aggregatedDataReferences;
    NSHashTable * _aggregatedLazyReferences;
    TSPReferenceOrderedSet * _aggregatedStrongReferences;
    TSPReferenceOrderedSet * _aggregatedWeakReferences;
    NSObject<OS_dispatch_group> * _archiveGroup;
    TSPObject * _explicitComponentRootObject;
    NSMutableSet * _featureInfos;
    _Atomic BOOL  _flags;
    NSUUID * _objectUUID;
    NSObject<OS_dispatch_group> * _serializeGroup;
    NSObject<OS_dispatch_data> * _serializedData;
    TSPUnknownContentSnapshot * _unknownContentSnapshot;
}

@property (nonatomic, readonly) TSPReferenceOrderedSet *aggregatedCommandToModelReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedDataReferences;
@property (nonatomic, readonly) NSHashTable *aggregatedLazyReferences;
@property (nonatomic, readonly) TSPReferenceOrderedSet *aggregatedStrongReferences;
@property (nonatomic, readonly) TSPReferenceOrderedSet *aggregatedWeakReferences;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *archiveGroup;
@property (nonatomic, readonly) TSPObject *explicitComponentRootObject;
@property (nonatomic, readonly) NSSet *featureInfos;
@property (nonatomic) unsigned long long messageVersion;
@property (nonatomic, readonly) bool needsArchive;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *serializeGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;
@property (nonatomic, readonly) bool shouldSaveAlternates;
@property (nonatomic, readonly) bool success;

- (void).cxx_destruct;
- (id)addAlternateArchiverForVersion:(unsigned long long)arg1 fieldPath:(const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)arg2 isDiffArchiver:(bool)arg3 diffReadVersion:(unsigned long long)arg4;
- (void)addDocumentFeatureInfoWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 validatingValues:(bool)arg4;
- (void)aggregateReferencesFromArchiver:(id)arg1;
- (id)aggregatedCommandToModelReferences;
- (id)aggregatedDataReferences;
- (id)aggregatedLazyReferences;
- (id)aggregatedStrongReferences;
- (id)aggregatedWeakReferences;
- (id)alternateForVersion:(unsigned long long)arg1;
- (void)archive;
- (id)archiveGroup;
- (bool)beginArchive;
- (bool)beginWrite;
- (id)calculateOrderedArchivableContent;
- (void)cleanup;
- (id)explicitComponentRootObject;
- (void)fail;
- (id)featureInfos;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 flags:(BOOL)arg2;
- (bool)isSavingCollaborativeDocument;
- (bool)isSavingDocumentAs;
- (bool)needsArchive;
- (id)objectUUID;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2;
- (void)requiresDocumentReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)requiresDocumentVersion:(unsigned long long)arg1;
- (void)requiresDocumentVersion:(unsigned long long)arg1 featureIdentifier:(id)arg2;
- (void)serialize;
- (id)serializeGroup;
- (id)serializedData;
- (bool)shouldSaveAlternates;
- (bool)success;
- (bool)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)arg1 withArchiver:(id)arg2;
- (void)validateOrderedArchivableContent:(id)arg1;

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
