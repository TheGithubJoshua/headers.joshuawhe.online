<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRCoderUnarchiver.h</title>
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

/PrivateFrameworks/NotesShared.framework/CRCoderUnarchiver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared (1349.30)
 */

@interface CRCoderUnarchiver : CRCoder {
    NSMutableArray * _allocedDocObjects;
    NSMutableArray * _completionHandlers;
    const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; } * _currentDocObjectForDecodingPtr;
    struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; } * _currentDocument;
    CRDocument * _document;
    NSMutableOrderedSet * _keySet;
    NSUUID * _replica;
    NSMutableOrderedSet * _typeSetForDecoding;
    NSMutableArray * _uuidArray;
}

@property (nonatomic, retain) NSMutableArray *allocedDocObjects;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic) const /* Warning: unhandled struct encoding: '{Document_DocObject=^^?{basic_string<char' */ struct *currentDocObjectForDecodingPtr; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i(ContentsUnion=^{RegisterLatest}^{RegisterLatest}^{RegisterLatest}^{Dictionary}^{Dictionary}^{Dictionary}^{Timestamp}^{VectorTimestamp}^{Index}^{String}Q^{OneOf}^{Document_CustomObject}^{StringArray}^{Array}^{OrderedSet})[1I]} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{Document=^^?{basic_string<char' */ struct *currentDocument; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}[1I]i^{VectorTimestamp}^{VectorTimestamp}{RepeatedPtrField<CRDT::Document_DocObject>=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}{RepeatedPtrField<std::__1::basic_string<char> >=^^viii}^{VectorTimestamp}} */
@property (nonatomic, retain) CRDocument *document;
@property (nonatomic, retain) NSMutableOrderedSet *keySet;
@property (nonatomic, copy) NSUUID *replica;
@property (nonatomic, retain) NSMutableOrderedSet *typeSetForDecoding;
@property (nonatomic, retain) NSMutableArray *uuidArray;

+ (id)decodedDocumentFromData:(id)arg1 replica:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addDecoderCompletionHandler:(id /* block */)arg1 dependency:(id)arg2 for:(id)arg3;
- (id)allocedDocObjects;
- (id)allocedObjectAtIndex:(unsigned long long)arg1 outNeedsInit:(bool*)arg2;
- (id)completionHandlers;
- (const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)currentDocObjectForDecodingPtr;
- (struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)currentDocument;
- (const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)currentDocumentObjectForDecoding;
- (const struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)currentObjectIDForKey:(id)arg1;
- (id)decodeDocumentFromData:(id)arg1 replica:(id)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForProtobufObjectID:(const struct ObjectID { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { long long x_5_1_1; unsigned long long x_5_1_2; double x_5_1_3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_5; unsigned int x_5_1_6; } x5; unsigned int x6[1]; }*)arg1;
- (id)decodeStringForKey:(id)arg1;
- (unsigned int)decodeUInt32ForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (id)decodeUUIDForKey:(id)arg1;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)arg1;
- (id)document;
- (bool)hasDecodableValueForKey:(id)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)keySet;
- (id)replica;
- (void)setAllocedDocObjects:(id)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setCurrentDocObjectForDecodingPtr:(const struct Document_DocObject { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; union ContentsUnion { struct RegisterLatest {} *x_5_1_1; struct RegisterLatest {} *x_5_1_2; struct RegisterLatest {} *x_5_1_3; struct Dictionary {} *x_5_1_4; struct Dictionary {} *x_5_1_5; struct Dictionary {} *x_5_1_6; struct Timestamp {} *x_5_1_7; struct VectorTimestamp {} *x_5_1_8; struct Index {} *x_5_1_9; struct String {} *x_5_1_10; unsigned long long x_5_1_11; struct OneOf {} *x_5_1_12; struct Document_CustomObject {} *x_5_1_13; struct StringArray {} *x_5_1_14; struct Array {} *x_5_1_15; struct OrderedSet {} *x_5_1_16; } x5; }*)arg1;
- (void)setCurrentDocument:(struct Document { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; struct VectorTimestamp {} *x6; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; }*)arg1;
- (void)setDocument:(id)arg1;
- (void)setKeySet:(id)arg1;
- (void)setReplica:(id)arg1;
- (void)setTypeSetForDecoding:(id)arg1;
- (void)setUuidArray:(id)arg1;
- (void)sortCompletionHandlers;
- (id)typeSetForDecoding;
- (id)uuidArray;
- (bool)willModifySelfInInitForClass:(Class)arg1;

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