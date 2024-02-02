<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLContainerChangeNotification.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLContainerChangeNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLContainerChangeNotification : PLChangeNotification {
    NSIndexSet * _changedIndexes;
    NSArray * _changedObjects;
    bool  _countDidChange;
    NSIndexSet * _deletedIndexes;
    bool  _didCalculateDiffs;
    NSIndexSet * _insertedIndexes;
    struct __CFArray { } * _movedFromIndexes;
    NSIndexSet * _movedIndexes;
    id  _object;
    bool  _shouldReload;
    PLObjectSnapshot * _snapshot;
}

@property (nonatomic, readonly, retain) NSArray *_changedObjects;
@property (nonatomic, readonly, retain) NSString *_contentRelationshipName;
@property (setter=_setDidCalculateDiffs:, nonatomic) bool _didCalculateDiffs;
@property (nonatomic, readonly, retain) NSString *_diffDescription;
@property (nonatomic, readonly, retain) PLManagedObject *_managedObject;
@property (nonatomic, readonly, retain) NSIndexSet *changedIndexes;
@property (nonatomic, readonly, retain) NSIndexSet *changedIndexesRelativeToSnapshot;
@property (nonatomic, readonly, retain) NSArray *changedObjects;
@property (nonatomic, readonly) bool countDidChange;
@property (nonatomic, readonly, retain) NSIndexSet *deletedIndexes;
@property (nonatomic, readonly, retain) NSArray *deletedObjects;
@property (nonatomic, readonly) bool hasMoves;
@property (nonatomic, readonly, retain) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly, retain) NSArray *insertedObjects;
@property (nonatomic, readonly, retain) struct __CFArray { }*movedFromIndexes;
@property (nonatomic, readonly, retain) NSIndexSet *movedIndexes;
@property (nonatomic, readonly) bool shouldReload;
@property (nonatomic, readonly, retain) PLObjectSnapshot *snapshot;

- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (id)_changedObjects;
- (id)_contentRelationshipName;
- (bool)_didCalculateDiffs;
- (id)_diffDescription;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)_init;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (id)_managedObject;
- (void)_setDidCalculateDiffs:(bool)arg1;
- (id)changedIndexes;
- (id)changedIndexesRelativeToSnapshot;
- (id)changedObjects;
- (bool)countDidChange;
- (void)dealloc;
- (id)deletedIndexes;
- (id)deletedObjects;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (bool)hasMoves;
- (id)init;
- (id)insertedIndexes;
- (id)insertedObjects;
- (struct __CFArray { }*)movedFromIndexes;
- (id)movedIndexes;
- (id)name;
- (id)object;
- (bool)shouldReload;
- (id)snapshot;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;

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