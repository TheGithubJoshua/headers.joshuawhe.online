<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSPAbstractMutableLargeArraySegment.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSPAbstractMutableLargeArraySegment.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSPAbstractMutableLargeArraySegment : TSPObject <NSFastEnumeration> {
    NSMutableArray * _backingStore;
    unsigned int  _delayedArchivingPriority;
    <TSPMutableLargeArraySegmentDelegate> * _delegate;
    unsigned long long  _estimatedByteSize;
    unsigned long long  _mutations;
    NSString * _packageLocator;
    bool  _shouldDelayArchiving;
    bool  _storeOutsideObjectArchive;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (nonatomic) unsigned int delayedArchivingPriority;
@property (nonatomic) <TSPMutableLargeArraySegmentDelegate> *delegate;
@property (nonatomic) unsigned long long estimatedByteSize;
@property (nonatomic, readonly) NSMutableArray *mutableArrayWrapper;
@property (nonatomic, copy) NSString *packageLocator;
@property (nonatomic) bool shouldDelayArchiving;
@property (nonatomic) bool storeOutsideObjectArchive;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 willModify:(bool)arg2;
- (id)allObjects;
- (id)bisectAtIndex:(unsigned long long)arg1;
- (void)commonInit;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned int)delayedArchivingPriority;
- (id)delegate;
- (unsigned long long)estimatedByteSize;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;
- (id)initWithArray:(id)arg1 context:(id)arg2;
- (id)initWithArray:(id)arg1 delegate:(id)arg2 shouldDelayArchiving:(bool)arg3 context:(id)arg4;
- (id)initWithContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 shouldDelayArchiving:(bool)arg2 context:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadFromLargeArraySegmentMessage:(const struct LargeArraySegment { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; bool x6; unsigned int x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadStoreOutsideObjectArchiveFromUnarchiver:(id)arg1;
- (id)mutableArrayWrapper;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)packageLocator;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToLargeArraySegmentMessage:(struct LargeArraySegment { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; bool x6; unsigned int x7; }*)arg1 archiver:(id)arg2;
- (void)setDelayedArchivingPriority:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedByteSize:(unsigned long long)arg1;
- (void)setPackageLocator:(id)arg1;
- (void)setShouldDelayArchiving:(bool)arg1;
- (void)setStoreOutsideObjectArchive:(bool)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;

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
