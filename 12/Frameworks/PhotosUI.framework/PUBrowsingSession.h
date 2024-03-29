<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUBrowsingSession.h</title>
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

/Frameworks/PhotosUI.framework/PUBrowsingSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUBrowsingSession : NSObject <PUAssetActionManagerDelegate, PUAssetsDataSourceManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver> {
    PUAssetActionManager * _actionManager;
    PUContentTileProvider * _contentTileProvider;
    PUAssetsDataSourceManager * _dataSourceManager;
    PXAssetEditOperationManager * _editOperationManager;
    PXGestureProvider * _gestureProvider;
    <PXImportStatusManager> * _importStatusManager;
    PULoadingStatusManager * _loadingStatusManager;
    PUMediaProvider * _mediaProvider;
    PXPhotosDetailsContext * _photosDetailsContext;
    PUTileAnimator * _tileAnimator;
    PUBrowsingViewModel * _viewModel;
}

@property (nonatomic, readonly) PUAssetActionManager *actionManager;
@property (nonatomic, retain) PUContentTileProvider *contentTileProvider;
@property (nonatomic, readonly) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXAssetEditOperationManager *editOperationManager;
@property (nonatomic, readonly) PXGestureProvider *gestureProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXImportStatusManager> *importStatusManager;
@property (nonatomic, readonly) PULoadingStatusManager *loadingStatusManager;
@property (nonatomic, retain) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUTileAnimator *tileAnimator;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

- (void).cxx_destruct;
- (id)actionManager;
- (id)assetActionManagerCurrentAssetsDataSource:(id)arg1;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void*)arg3;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)configureTilingView:(id)arg1;
- (id)contentTileProvider;
- (id)dataSourceManager;
- (id)editOperationManager;
- (id)gestureProvider;
- (id)importStatusManager;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4;
- (id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 gestureProvider:(id)arg5 importStatusManager:(id)arg6;
- (id)loadingStatusManager;
- (void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3;
- (id)mediaProvider;
- (id)photosDetailsContext;
- (void)setContentTileProvider:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setTileAnimator:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileAnimator;
- (id)viewModel;

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
