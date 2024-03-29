<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TTMergeableString.h</title>
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

/PrivateFrameworks/NotesShared.framework/TTMergeableString.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared (1349.30)
 */

@interface TTMergeableString : NSObject <CRDataType> {
    NSMutableAttributedString * _attributedString;
    bool  _cacheInvalid;
    NSObject<TTMergeableStringDelegate> * _delegate;
    unsigned long long  _editCount;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _endNodes;
    bool  _hasLocalChanges;
    NSHashTable * _objectsNeedingUpdatedRanges;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _orderedSubstrings;
    unsigned long long  _replicaStyleClock;
    unsigned long long  _replicaTextClock;
    NSUUID * _replicaUUID;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _startNodes;
    TTVectorMultiTimestamp * _timestamp;
    unsigned int  _unserializedClock;
    id /* block */  _updateRangeBlock;
}

@property (nonatomic, retain) NSMutableAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TTMergeableStringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRTTCompatibleDocument *document;
@property (nonatomic) bool hasLocalChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *objectsNeedingUpdatedRanges;
@property (nonatomic, readonly) unsigned long long replicaStyleClock;
@property (nonatomic, readonly) unsigned long long replicaTextClock;
@property (nonatomic, retain) NSUUID *replicaUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTVectorMultiTimestamp *timestamp;

+ (id)unserialisedReplicaID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_testSetTextTimestamp:(unsigned long long)arg1;
- (id)attributedString;
- (void)beginEditing;
- (bool)canMergeString:(id)arg1;
- (id)characterRangesForSelection:(id)arg1;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(id /* block */)arg2;
- (bool)check:(id*)arg1;
- (void)checkTimestampLogStyleErrors:(bool)arg1;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (void)coalesce;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)deleteSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 withCharacterRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg2;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (id)dotDescription:(unsigned long long)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)endEditing;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)endNodes;
- (void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSubstrings:(id /* block */)arg1;
- (void)generateIdsForLocalChanges;
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(bool)arg1;
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID { id x1; unsigned int x2; })arg1;
- (void)getCharacterRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 forSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg2;
- (struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)getSubstringBeforeTopoID:(struct TopoID { id x1; unsigned int x2; })arg1;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 forTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 inOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg2 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)graphIsEqual:(id)arg1;
- (bool)hasLocalChanges;
- (unsigned long long)hash;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
- (id)init;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg3;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg3 timestamp:(id)arg4;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)initWithReplicaID:(id)arg1 asFragment:(bool)arg2;
- (struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })insertAttributedString:(id)arg1 after:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg2 before:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg3;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateCache;
- (bool)isEqual:(id)arg1;
- (bool)isFragment;
- (unsigned long long)length;
- (void)mergeWith:(id)arg1;
- (unsigned long long)mergeWithString:(id)arg1;
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(bool)arg2;
- (void)moveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned long long)arg2;
- (id)objectsNeedingUpdatedRanges;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)orderedSubstrings;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (unsigned long long)replicaStyleClock;
- (unsigned long long)replicaTextClock;
- (id)replicaUUID;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)resetLocalReplicaClocksToTimestampValues;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
- (void)saveSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 archiveSet:(struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg2 linkSet:(struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg3 archivedString:(id*)arg4 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg5;
- (void)saveToArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1;
- (bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)serialize;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setHasLocalChanges:(bool)arg1;
- (void)setReplicaUUID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)sortSplitNodes;
- (struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)splitTopoSubstring:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg1 atIndex:(unsigned int)arg2;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)startNodes;
- (id)string;
- (long long)substring:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; unsigned int x_2_1_2; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg1 modifiedAfter:(id)arg2;
- (bool)textEitherSideOfSelectionAnchor:(struct TopoID { id x1; unsigned int x2; })arg1 wasModifiedAfter:(id)arg2;
- (id)timestamp;
- (id)tombstone;
- (void)traverseUnordered:(id /* block */)arg1;
- (void)updateAttributedStringAfterMerge;
- (void)updateCache;
- (void)updateClock;
- (void)updateSubstringIndexes;
- (void)updateTimestampsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; unsigned int x_1_1_2; } x1; unsigned int x2; })arg2;
- (void)walkGraph:(id /* block */)arg1;

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
