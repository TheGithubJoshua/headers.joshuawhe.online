<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCEFormulasForUndo.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCEFormulasForUndo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCEFormulasForUndo : NSObject {
    struct unordered_map<TSCECellRef, NSString *, std::__1::hash<TSCECellRef>, std::__1::equal_to<TSCECellRef>, std::__1::allocator<std::__1::pair<const TSCECellRef, NSString *> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSCECellRef, NSString *>, std::__1::__unordered_map_hasher<TSCECellRef, std::__1::__hash_value_type<TSCECellRef, NSString *>, std::__1::hash<TSCECellRef>, true>, std::__1::__unordered_map_equal<TSCECellRef, std::__1::__hash_value_type<TSCECellRef, NSString *>, std::__1::equal_to<TSCECellRef>, true>, std::__1::allocator<std::__1::__hash_value_type<TSCECellRef, NSString *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCECellRef, NSString *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSCECellRef, std::__1::__hash_value_type<TSCECellRef, NSString *>, std::__1::hash<TSCECellRef>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSCECellRef, std::__1::__hash_value_type<TSCECellRef, NSString *>, std::__1::equal_to<TSCECellRef>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _formulaStringsForCellRefs;
    struct unordered_map<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *, std::__1::hash<TSCESubFormulaOwnerIndex>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, std::__1::allocator<std::__1::pair<const TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__1::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__1::hash<TSCESubFormulaOwnerIndex>, true>, std::__1::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, true>, std::__1::allocator<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSCESubFormulaOwnerIndex, std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__1::hash<TSCESubFormulaOwnerIndex>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSCESubFormulaOwnerIndex, std::__1::__hash_value_type<TSCESubFormulaOwnerIndex, TSCEFormulasForUndoForOwnerKind *>, std::__1::equal_to<TSCESubFormulaOwnerIndex>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _formulasForOwnerKind;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFormula:(struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned char x_2_1_1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2 forOwnerKind:(unsigned short)arg3;
- (void)addFormulaString:(id)arg1 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (struct vector<TSCESubFormulaOwnerIndex, std::__1::allocator<TSCESubFormulaOwnerIndex> > { unsigned short *x1; unsigned short *x2; struct __compressed_pair<TSCESubFormulaOwnerIndex *, std::__1::allocator<TSCESubFormulaOwnerIndex> > { unsigned short *x_3_1_1; } x3; })allOwnerKinds;
- (unsigned long long)count;
- (unsigned long long)countForOwnerKind:(unsigned short)arg1;
- (id)description;
- (void)foreachFormulaInOwnerKind:(unsigned short)arg1 performBlock:(id /* block */)arg2;
- (id)formulaStringAtCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initWithArchive:(const struct FormulasForUndoArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::FormulaCoordPairsByOwnerArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1;
- (bool)isEmpty;
- (struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })ownerUIDsForOwnerKind:(unsigned short)arg1;
- (void)saveToArchive:(struct FormulasForUndoArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::FormulaCoordPairsByOwnerArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (id)subsetForOwnerKind:(unsigned short)arg1;

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