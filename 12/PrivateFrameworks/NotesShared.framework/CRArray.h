<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRArray.h</title>
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

/PrivateFrameworks/NotesShared.framework/CRArray.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared (1349.30)
 */

@interface CRArray : NSObject <CRCoding, CRDataType, CRUndoDelegate> {
    TTArray * _array;
    CRDictionary * _contents;
    NSObject<CRUndoDelegate> * _delegate;
    CRDocument * _document;
    bool  _moveClock;
}

@property (nonatomic, retain) TTArray *array;
@property (nonatomic, retain) CRDictionary *contents;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool moveClock;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addObject:(id)arg1;
- (id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(bool)arg4;
- (void)addObject:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)array;
- (id)contents;
- (unsigned long long)count;
- (id)delegate;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 array:(struct Array { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StringArray {} *x5; struct Dictionary {} *x6; }*)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 array:(const struct Array { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StringArray {} *x5; struct Dictionary {} *x6; }*)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (bool)moveClock;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(bool)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)replicaUUID;
- (void)setArray:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setMoveClock:(bool)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;
- (bool)wantsUndoCommands;

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