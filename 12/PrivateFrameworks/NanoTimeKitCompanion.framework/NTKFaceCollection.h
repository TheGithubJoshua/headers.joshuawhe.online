<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKFaceCollection.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKFaceCollection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKFaceCollection : NSObject <NTKEnumeratableFaceCollection, NTKFaceObserver> {
    NSMapTable * _UUIDsByFace;
    NSString * _collectionIdentifier;
    NSString * _debugName;
    NSUUID * _deviceUUID;
    NSMutableDictionary * _facesByUUID;
    NSString * _logIdentifier;
    NSHashTable * _observers;
    NSMutableArray * _orderedUUIDs;
    NSUUID * _selectedUUID;
}

@property (nonatomic, readonly) NSString *collectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugName;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (getter=hasLoaded, nonatomic, readonly) bool hasLoaded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NTKFace *selectedFace;
@property (nonatomic, readonly) unsigned long long selectedFaceIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUIDsByFace;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4;
- (id)_chooseNewSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1;
- (void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)_didRemoveFace:(id)arg1 withUUID:(id)arg2;
- (void)_didSelectFaceUUID:(id)arg1;
- (void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3;
- (void)_notifyReorderedFacesOmittingObserver:(id)arg1;
- (void)_notifySelectedFaceOmittingObserver:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1;
- (void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)_selectFaceUUID:(id)arg1 notify:(bool)arg2;
- (void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3;
- (void)_setSelectedUUID:(id)arg1 notify:(bool)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)_systemAppStateDidChange;
- (void)_throwIfNotLoaded:(SEL)arg1;
- (void)_updateLogIdentifier;
- (void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(bool)arg2;
- (void)_upgradeFace:(id)arg1 forUUID:(id)arg2;
- (void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (void)addObserver:(id)arg1;
- (void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (id)collectionIdentifier;
- (bool)containsFace:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (id)deviceUUID;
- (void)enumerateFaceNamesUsingBlock:(id /* block */)arg1;
- (void)enumerateFacesUsingBlock:(id /* block */)arg1;
- (void)enumerateFacesWithIndexesUsingBlock:(id /* block */)arg1;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id)facesByUUID;
- (bool)hasLoaded;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;
- (id)logIdentifier;
- (void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3;
- (unsigned long long)numberOfFaces;
- (id)observers;
- (id)orderedUUIDs;
- (void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)reset;
- (id)selectedFace;
- (unsigned long long)selectedFaceIndex;
- (id)selectedUUID;
- (void)setDebugName:(id)arg1;
- (void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2;
- (void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2;

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