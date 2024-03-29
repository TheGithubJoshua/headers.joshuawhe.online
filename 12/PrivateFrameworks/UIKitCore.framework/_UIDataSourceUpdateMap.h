<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDataSourceUpdateMap.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIDataSourceUpdateMap.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIDataSourceUpdateMap : NSObject {
    _UIDataSourceBatchUpdateMapHelper * _batchUpdateMapHelper;
    _UIDataSourceSnapshotter * _finalSnapshot;
    _UIDataSourceSnapshotter * _initialSnapshot;
    NSArray * _originalUpdateItems;
    NSArray * _reverseUpdateItems;
    NSArray * _updateItems;
}

@property (nonatomic, retain) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper;
@property (nonatomic, retain) _UIDataSourceSnapshotter *finalSnapshot;
@property (nonatomic, retain) _UIDataSourceSnapshotter *initialSnapshot;
@property (nonatomic, readonly) bool isBatchUpdateMap;
@property (nonatomic, copy) NSArray *originalUpdateItems;
@property (nonatomic, retain) NSArray *reverseUpdateItems;
@property (nonatomic, retain) NSArray *updateItems;

+ (id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3;
+ (id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2;

- (void).cxx_destruct;
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1;
- (id)_findUpdateForIdentifier:(id)arg1;
- (bool)_isSectionOnlyIndexPath:(id)arg1;
- (bool)_mapIsSimpleInsertMoveSequence;
- (id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2;
- (void)_performAppendingInsertsFixups;
- (id)_rebasedUpdatesForUpdate:(id)arg1;
- (id)_sectionIndexPathForSection:(long long)arg1;
- (id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3;
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1;
- (void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2;
- (id)batchUpdateMapHelper;
- (id)description;
- (id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)finalSnapshot;
- (id)finalUpdateForInitialUpdate:(id)arg1;
- (id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)initialSnapshot;
- (id)initialUpdateForFinalUpdate:(id)arg1;
- (id)initialUpdateForUpdateIdentifier:(id)arg1;
- (bool)isBatchUpdateMap;
- (id)originalUpdateItems;
- (id)rebasedMapFromNewBaseMap:(id)arg1;
- (id)reverseUpdateItems;
- (void)setBatchUpdateMapHelper:(id)arg1;
- (void)setFinalSnapshot:(id)arg1;
- (void)setInitialSnapshot:(id)arg1;
- (void)setOriginalUpdateItems:(id)arg1;
- (void)setReverseUpdateItems:(id)arg1;
- (void)setUpdateItems:(id)arg1;
- (id)submapAfterUpdate:(id)arg1;
- (id)submapBeforeUpdate:(id)arg1;
- (id)updateItems;
- (id)updateMapByRevertingUpdateWithIdentifier:(id)arg1;
- (id)updates;

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
