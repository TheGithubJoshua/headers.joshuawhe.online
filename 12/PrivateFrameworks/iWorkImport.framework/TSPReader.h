<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSPReader.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSPReader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate> {
    TSPCancellationState * _cancellationState;
    NSObject<OS_dispatch_group> * _completionGroup;
    TSPComponent * _component;
    TSPComponentObjectUUIDMap * _componentObjectUUIDMap;
    <TSPReaderDelegate> * _delegate;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _errorQueue;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    struct { 
        unsigned int didFinishResolvingReferences : 1; 
        unsigned int needsUpgrade : 1; 
        unsigned int hasDocumentVersionUUID : 1; 
        unsigned int sourceType : 3; 
        unsigned int canRetainObjectReferencedByWeakLazyReference : 1; 
        unsigned int isCrossDocumentPaste : 1; 
        unsigned int isCrossAppPaste : 1; 
        unsigned int delegateRespondsToDidResetObjectIdentifierForObject : 1; 
        unsigned int delegateRespondsToDidResetObjectUUID : 1; 
        unsigned int delegateRespondsToDidUnarchiveObject : 1; 
    }  _flags;
    bool  _hasReadFailure;
    struct unordered_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, TSP::ObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _objectInfoMap;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    NSHashTable * _objectsToModify;
    NSObject<OS_dispatch_queue> * _objectsToModifyQueue;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
        struct UnarchiverRepeatedReference {} *__begin_; 
        struct UnarchiverRepeatedReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct UnarchiverRepeatedReference {} *__value_; 
        } __end_cap_; 
    }  _repeatedReferences;
    NSObject<OS_dispatch_queue> * _unarchiveQueue;
}

@property (nonatomic, readonly) bool canRetainObjectReferencedByWeakLazyReference;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic, readonly) TSPComponent *component;
@property (nonatomic, readonly) long long componentIdentifier;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSPReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didFinishResolvingReferences;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (readonly) bool hasReadFailure;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) long long sourceType;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UUIDForObjectIdentifier:(long long)arg1;
- (void)addUnarchivedObject:(id)arg1 unarchiver:(id)arg2;
- (void)attemptedToReadInMemoryObject:(id)arg1 objectIdentifier:(long long)arg2;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (bool)canSetObjectUUIDForObject:(id)arg1;
- (id)completionGroup;
- (id)component;
- (long long)componentIdentifier;
- (id)context;
- (id)dataForIdentifier:(long long)arg1;
- (id)delegate;
- (bool)didFinishResolvingReferences;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (id)error;
- (unsigned long long)fileFormatVersion;
- (bool)finishUnarchiving;
- (bool)hasDocumentVersionUUID;
- (bool)hasReadFailure;
- (id)init;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isObjectInDocument:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (id)newObjectUUIDForObject:(id)arg1 baseOffset:(unsigned long long)arg2 ignoringBaseUUIDForObjectUUID:(bool)arg3;
- (long long)objectIdentifierForUUID:(id)arg1;
- (struct ObjectInfo { struct vector<TSP::ReferenceCompletionInfo, std::__1::allocator<TSP::ReferenceCompletionInfo> > { struct ReferenceCompletionInfo {} *x_1_1_1; struct ReferenceCompletionInfo {} *x_1_1_2; struct __compressed_pair<TSP::ReferenceCompletionInfo *, std::__1::allocator<TSP::ReferenceCompletionInfo> > { struct ReferenceCompletionInfo {} *x_3_2_1; } x_1_1_3; } x1; }*)objectInfoForIdentifier:(long long)arg1;
- (id)objectUUIDMap;
- (void)processObjectsToModifyWithRootObject:(id)arg1;
- (void)readWithIOCompletionQueue:(id)arg1 ioCompletion:(id /* block */)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)resolveReferences;
- (void)setError:(id)arg1;
- (void)setObjectDelegatesToContextObjectDelegate;
- (bool)shouldValidateComponentsOfInMemoryObjects;
- (long long)sourceType;
- (void)unarchiveObjectWithUnarchiver:(id)arg1;
- (void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(bool*)arg3;
- (bool)validateObjectIdentifierForObject:(id)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(bool)arg2;

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
