<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXAssetsScene.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXAssetsScene.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXAssetsScene : NSObject <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {
    NSMutableArray * __anchors;
    PXAssetsDataSource * __dataSource;
    bool  _animatesContent;
    PXAssetBadgeManager * _badgeManager;
    PXAssetsDataSourceManager * _dataSourceManager;
    <PXAssetsSceneDelegate> * _delegate;
    struct { 
        bool respondsToTileIdentifierConverterForChange; 
        bool respondsToWillTransitionToDataSource; 
        bool respondsToDidTransitionToDataSource; 
        bool respondsToTransitionAnimationCoordinatorForChange; 
    }  _delegateFlags;
    bool  _hasScheduledUpdate;
    bool  _isAskingForTileIdentifierConverter;
    bool  _isAskingForTransitionAnimationCoordinator;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    PXMediaProvider * _mediaProvider;
    struct { 
        bool layout; 
    }  _needsUpdateFlags;
    PXScrollViewSpeedometer * _scrollSpeedometer;
    PXSectionedSelectionManager * _selectionManager;
    PXTilingController * _tilingController;
    PXReusableObjectPool * _viewTileReusePool;
}

@property (nonatomic, readonly) NSMutableArray *_anchors;
@property (setter=_setDataSource:, nonatomic, retain) PXAssetsDataSource *_dataSource;
@property (nonatomic) bool animatesContent;
@property (nonatomic, readonly) PXAssetBadgeManager *badgeManager;
@property (nonatomic, readonly) PXAssetsTilingLayout *currentLayout;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXAssetsSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXScrollViewSpeedometer *scrollSpeedometer;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXAssetsTilingLayout *targetLayout;
@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) PXReusableObjectPool *viewTileReusePool;

- (void).cxx_destruct;
- (id)_anchors;
- (void)_configureLayout:(id)arg1;
- (id)_dataSource;
- (void)_invalidateLayout;
- (void)_saveAnchorAsset;
- (void)_setDataSource:(id)arg1;
- (void)_updateDataSourceIfNeeded;
- (void)_updateLayoutIfNeeded;
- (bool)animatesContent;
- (id)badgeManager;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)currentLayout;
- (id)dataSourceManager;
- (void)dealloc;
- (id)delegate;
- (void)didTransitionToDataSource:(id)arg1;
- (id)init;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4;
- (id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5;
- (id)mediaProvider;
- (bool)needsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (bool)providesTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (id)scrollSpeedometer;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (id)selectionManager;
- (void)setAnimatesContent:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsUpdate;
- (id)targetLayout;
- (id)tilingController;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)transitionToLayout:(id)arg1;
- (void)updateIfNeeded;
- (id)viewTileReusePool;
- (void)willTransitionToDataSource:(id)arg1;

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
