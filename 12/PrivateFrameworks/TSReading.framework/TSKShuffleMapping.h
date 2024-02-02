<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSKShuffleMapping.h</title>
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

/PrivateFrameworks/TSReading.framework/TSKShuffleMapping.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSKShuffleMapping : NSObject <NSCopying> {
    unsigned int  _destinationIndexForMove;
    unsigned int  _endIndex;
    unsigned int  _firstMovedIndex;
    bool  _isMoveOperation;
    bool  _isVertical;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _mapping;
    unsigned int  _numberOfIndexesMoved;
    unsigned int  _startIndex;
}

@property (nonatomic) unsigned int destinationIndexForMove;
@property (nonatomic, readonly) unsigned int endIndex;
@property (nonatomic) unsigned int firstMovedIndex;
@property (nonatomic, readonly) bool isIdentityMapping;
@property (nonatomic, readonly) bool isMoveOperation;
@property (nonatomic) bool isVertical;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned int' */ struct *mapping; /* unknown property attribute:  std::__1::allocator<unsigned int> >=^I}} */
@property (nonatomic, readonly) unsigned int mappingSize;
@property (nonatomic) unsigned int numberOfIndexesMoved;
@property (nonatomic, readonly) unsigned int startIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyMappingToIndexSet:(id)arg1;
- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)destinationIndexForMove;
- (unsigned int)endIndex;
- (void)enumerateMappingFollowingSwapsUsingBlock:(id /* block */)arg1;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned int)firstMovedIndex;
- (id)initForMovedIndexesStartingAtIndex:(unsigned int)arg1 destinationIndex:(unsigned int)arg2 numberOfIndexes:(unsigned int)arg3 vertical:(bool)arg4;
- (id)initWithArchive:(const struct ShuffleMappingArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; unsigned int x7; bool x8; unsigned int x9; unsigned int x10; unsigned int x11; bool x12; }*)arg1;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 mapping:(const struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)arg3;
- (void)insert:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2 insertingBefore:(bool)arg3;
- (bool)isIdentityMapping;
- (bool)isMove;
- (bool)isMoveOperation;
- (bool)isVertical;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })mapCoordinate:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (unsigned int)mapIndex:(unsigned int)arg1;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; }*)mapping;
- (unsigned int)mappingSize;
- (unsigned int)numberOfIndexesMoved;
- (void)remove:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })reverseMapCoordinate:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (unsigned int)reverseMapIndex:(unsigned int)arg1;
- (void)saveToArchive:(struct ShuffleMappingArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSK::ShuffleMappingArchive_Entry> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; unsigned int x7; bool x8; unsigned int x9; unsigned int x10; unsigned int x11; bool x12; }*)arg1;
- (void)setDestinationIndexForMove:(unsigned int)arg1;
- (void)setFirstMovedIndex:(unsigned int)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setNumberOfIndexesMoved:(unsigned int)arg1;
- (id)sourceIndexes;
- (unsigned int)startIndex;
- (void)swapIndex:(unsigned int)arg1 withIndex:(unsigned int)arg2;

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