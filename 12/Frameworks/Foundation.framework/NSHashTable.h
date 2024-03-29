<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSHashTable.h</title>
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

/Frameworks/Foundation.framework/NSHashTable.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSHashTable : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

@property (readonly, copy) NSArray *allObjects;
@property (nonatomic, readonly) id anyObject;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly, copy) NSSet *setRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)hashTableWithOptions:(unsigned long long)arg1;
+ (id)hashTableWithWeakObjects;
+ (bool)supportsSecureCoding;
+ (id)weakObjectsHashTable;

- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)intersectHashTable:(id)arg1;
- (bool)intersectsHashTable:(id)arg1;
- (bool)isEqualToHashTable:(id)arg1;
- (bool)isSubsetOfHashTable:(id)arg1;
- (id)member:(id)arg1;
- (void)minusHashTable:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableSet;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)removeAllItems;
- (void)removeAllObjects;
- (void)removeItem:(const void*)arg1;
- (void)removeObject:(id)arg1;
- (id)setRepresentation;
- (void)unionHashTable:(id)arg1;
- (unsigned long long)weakCount;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_mapkit_removeObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void)fc_addObjectsFromArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_weakObjectsHashTableUsingPointerPersonality;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (bool)tsp_saveDataReferencesToMessage:(struct RepeatedPtrField<TSP::DataInfo> { struct Arena {} *x1; int x2; int x3; struct Rep {} *x4; }*)arg1 dataArchiver:(id)arg2;

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
