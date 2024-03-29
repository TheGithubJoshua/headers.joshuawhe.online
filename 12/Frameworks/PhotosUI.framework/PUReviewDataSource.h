<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUReviewDataSource.h</title>
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

/Frameworks/PhotosUI.framework/PUReviewDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUReviewDataSource : NSObject {
    NSMutableArray * __assetIdentifiers;
    NSMutableDictionary * __assetsByIdentifier;
    NSMutableDictionary * __enqueuedBurstAssetIdentifiersByBurstIdentifier;
    NSMutableDictionary * __enqueuedBurstAssetsByAssetIdentifier;
    long long  __nestedPerformChanges;
    NSHashTable * __observers;
    NSMutableDictionary * __representativeAssetsByBurstIdentifier;
    NSMutableSet * __updatedAssetIdentifiers;
}

@property (nonatomic, readonly) NSMutableArray *_assetIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *_assetsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier;
@property (setter=_setNestedPerformChanges:, nonatomic) long long _nestedPerformChanges;
@property (nonatomic, readonly) NSHashTable *_observers;
@property (nonatomic, readonly) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (nonatomic, readonly) NSMutableSet *_updatedAssetIdentifiers;

- (void).cxx_destruct;
- (id)_assetIdentifiers;
- (id)_assetsByIdentifier;
- (id)_enqueuedBurstAssetIdentifiersByBurstIdentifier;
- (id)_enqueuedBurstAssetsByAssetIdentifier;
- (long long)_nestedPerformChanges;
- (id)_observers;
- (id)_representativeAssetsByBurstIdentifier;
- (void)_setNestedPerformChanges:(long long)arg1;
- (id)_updatedAssetIdentifiers;
- (id)assetsByIdentifier;
- (id)description;
- (void)enqueuePendingBurstAsset:(id)arg1;
- (id)existingAssetForIdentifier:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)init;
- (void)insertAsset:(id)arg1;
- (void)insertAssets:(id)arg1;
- (id)orderedIdentifiers;
- (void)performChanges:(id /* block */)arg1;
- (void)processPendingBurstAssets;
- (void)registerChangeObserver:(id)arg1;
- (void)removeAllAssets;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)replaceAsset:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

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
