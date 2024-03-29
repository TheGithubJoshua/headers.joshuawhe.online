<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPhotosDataSourceChange.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPhotosDataSourceChange.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPhotosDataSourceChange : NSObject {
    NSDictionary * _assetCollectionChangeDetails;
    NSDictionary * _assetCollectionToSectionCache;
    NSArray * _changedIndexPaths;
    NSIndexSet * _changedSections;
    bool  _changesAreNoOp;
    PHFetchResultChangeDetails * _collectionListChangeDetails;
    NSArray * _contentChangedIndexPaths;
    NSArray * _deletedIndexPaths;
    NSIndexSet * _deletedSections;
    NSArray * _favoriteChangedIndexPaths;
    NSArray * _insertedIndexPaths;
    NSIndexSet * _insertedSections;
    PHChange * _originatingPhotoLibraryChange;
    bool  _prepared;
    long long  _previousCollectionsCount;
    PXSectionedDataSourceChangeDetails * _sectionedDataSourceChangeDetails;
    NSIndexSet * _sectionsWithKeyAssetChanges;
}

@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly) bool changesAreNoOp;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly) bool hasIncrementalChanges;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly) PHChange *originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (nonatomic, readonly) NSIndexSet *sectionsWithKeyAssetChanges;

- (void).cxx_destruct;
- (void)_prepareIncrementalDetails;
- (bool)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (bool)affectsSectionsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)changedIndexPaths;
- (id)changedSections;
- (bool)changesAreNoOp;
- (id)contentChangedIndexPaths;
- (id)deletedIndexPaths;
- (id)deletedSections;
- (id)description;
- (id)favoriteChangedIndexPaths;
- (bool)hasIncrementalChanges;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;
- (id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8;
- (id)insertedIndexPaths;
- (id)insertedSections;
- (id)originatingPhotoLibraryChange;
- (void)prepareIfNeeded;
- (id)sectionedDataSourceChangeDetails;
- (id)sectionsWithKeyAssetChanges;

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
