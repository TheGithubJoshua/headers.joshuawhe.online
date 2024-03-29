<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSPUnknownMessage.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSPUnknownMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSPUnknownMessage : NSObject <TSPArchivableContent> {
    NSArray * _datas;
    NSObject<OS_dispatch_data> * _messageData;
    struct MessageInfo { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArena { 
            void *ptr_; 
        } _internal_metadata_; 
        struct HasBits<1> { 
            unsigned int has_bits_[1]; 
        } _has_bits_; 
        struct CachedSize { 
            struct atomic<int> { 
                _Atomic int __a_; 
            } size_; 
        } _cached_size_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } version_; 
        int _version_cached_byte_size_; 
        struct RepeatedPtrField<TSP::FieldInfo> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } field_infos_; 
        struct RepeatedField<unsigned long long> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } object_references_; 
        int _object_references_cached_byte_size_; 
        struct RepeatedField<unsigned long long> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } data_references_; 
        int _data_references_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } diff_merge_version_; 
        int _diff_merge_version_cached_byte_size_; 
        struct RepeatedPtrField<TSP::FieldPath> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } fields_to_remove_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } diff_read_version_; 
        int _diff_read_version_cached_byte_size_; 
        struct FieldPath {} *diff_field_path_; 
        unsigned int type_; 
        unsigned int length_; 
        unsigned int base_message_index_; 
    }  _messageInfo;
    TSPLazyReferenceArray * _objects;
}

@property (nonatomic, retain) NSArray *datas;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*fieldPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isContentUnknown;
@property (nonatomic, readonly) bool isDiff;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *messageData;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic, retain) TSPLazyReferenceArray *objects;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)datas;
- (const struct FieldPath { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; }*)fieldPath;
- (id)init;
- (id)initWithMessageInfo:(const struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)arg1 data:(id)arg2;
- (bool)isContentUnknown;
- (bool)isDiff;
- (id)messageData;
- (const struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)messageInfo;
- (unsigned long long)messageVersion;
- (id)objects;
- (void)setDatas:(id)arg1;
- (void)setObjects:(id)arg1;

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
