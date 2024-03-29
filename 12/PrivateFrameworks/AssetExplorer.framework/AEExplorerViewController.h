<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AEExplorerViewController.h</title>
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

/PrivateFrameworks/AssetExplorer.framework/AEExplorerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer (1)
 */

@interface AEExplorerViewController : UIViewController <AEBrowserLayoutDelegate, AECameraTileSource, CAMCameraCaptureDelegate, CAMCameraConfigurationDelegate, CAMCameraReviewDelegate, CAMCameraViewControllerPresentationDelegate, PUAssetExplorerReviewScreenViewControllerDelegate, PXAssetsSceneDelegate, PXChangeObserver, PXPhotoLibraryPresenting, PXPhotoLibraryUIChangeObserver, PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, UIViewControllerPreviewingDelegate> {
    AECameraAssetPackageGenerator * __cameraPackageGenerator;
    CAMCameraReviewAdapter * __cameraReviewAdapter;
    AECameraTileController * __cameraTileController;
    NSArray * __clientGestureRecognizers;
    PXPhotoKitAssetsDataSourceManager * __dataSourceManager;
    bool  __didPresentPhotoLibrary;
    bool  __fakeAllCloudAndVideo;
    UIPopoverPresentationController * __imagePickerPopoverPresentationController;
    UIView * __imagePickerSenderView;
    PXMediaProvider * __mediaProvider;
    NSIndexSet * __missingThumbnailAssetIndexes;
    unsigned long long  __options;
    AEPackageTransport * __packageTransport;
    NSIndexSet * __pendingCloudAssetIndexes;
    NSIndexSet * __pendingMissingThumbnailAssetIndexes;
    <UIViewControllerPreviewing> * __previewingItem;
    UIView * __previousSuperview;
    AEProgressViewModel * __progressModel;
    NSMutableIndexSet * __recentlyDownloadedAssetIndexes;
    NSIndexSet * __requiringDownloadAssetIndexes;
    PUAssetExplorerReviewScreenViewController * __reviewController;
    PXAssetsScene * __sceneController;
    PXUIScrollViewController * __scrollViewController;
    <AEHostStatisticsManager> * __statisticsManager;
    PXBasicUIViewTileAnimator * __tileAnimator;
    NSMutableSet * __tilesInUse;
    PXTilingController * __tilingController;
    <AEExplorerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) AECameraAssetPackageGenerator *_cameraPackageGenerator;
@property (nonatomic, readonly) CAMCameraReviewAdapter *_cameraReviewAdapter;
@property (nonatomic, readonly) AECameraTileController *_cameraTileController;
@property (readonly) NSArray *_clientGestureRecognizers;
@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *_dataSourceManager;
@property (setter=_setDidPresentPhotoLibrary:, nonatomic) bool _didPresentPhotoLibrary;
@property (setter=_setFakeAllCloudAndVideo:, nonatomic) bool _fakeAllCloudAndVideo;
@property (setter=_setImagePickerPopoverPresentationController:, nonatomic) UIPopoverPresentationController *_imagePickerPopoverPresentationController;
@property (setter=_setImagePickerSenderView:, nonatomic) UIView *_imagePickerSenderView;
@property (nonatomic, readonly) PXMediaProvider *_mediaProvider;
@property (setter=_setMissingThumbnailAssetIndexes:, nonatomic, retain) NSIndexSet *_missingThumbnailAssetIndexes;
@property (nonatomic, readonly) unsigned long long _options;
@property (nonatomic, readonly) AEPackageTransport *_packageTransport;
@property (setter=_setPendingCloudAssetIndexes:, nonatomic, retain) NSIndexSet *_pendingCloudAssetIndexes;
@property (setter=_setPendingMissingThumbnailAssetIndexes:, nonatomic, retain) NSIndexSet *_pendingMissingThumbnailAssetIndexes;
@property (setter=_setPreviewingItem:, nonatomic, retain) <UIViewControllerPreviewing> *_previewingItem;
@property (setter=_setPreviousSuperview:, nonatomic, retain) UIView *_previousSuperview;
@property (nonatomic, readonly) AEProgressViewModel *_progressModel;
@property (nonatomic, readonly) NSMutableIndexSet *_recentlyDownloadedAssetIndexes;
@property (setter=_setRequiringDownloadAssetIndexes:, nonatomic, retain) NSIndexSet *_requiringDownloadAssetIndexes;
@property (setter=_setReviewController:, nonatomic, retain) PUAssetExplorerReviewScreenViewController *_reviewController;
@property (setter=_setSceneController:, nonatomic, retain) PXAssetsScene *_sceneController;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) <AEHostStatisticsManager> *_statisticsManager;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (setter=_setTilingController:, nonatomic, retain) PXTilingController *_tilingController;
@property (nonatomic, readonly) UIViewController *cameraParentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AEExplorerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addCloudIndexes:(id)arg1;
- (void)_addThumbnailIndexes:(id)arg1;
- (void)_attachGestureRecognizersIfNeeded:(void*)arg1;
- (id)_cameraPackageGenerator;
- (id)_cameraReviewAdapter;
- (id)_cameraTileController;
- (id)_clientGestureRecognizers;
- (id)_cloudResourcesIndexSetForAssets:(id)arg1;
- (void)_computeInitialResourcesIndexSetAsync;
- (void)_configureReviewControllerWithAssetReference:(id)arg1;
- (id)_createNewLayoutForDataSource:(id)arg1;
- (id)_createOpenCameraButtonTileWithLayoutStyle:(long long)arg1;
- (id)_createOpenPhotoLibraryButtonTileWithLayoutStyle:(long long)arg1;
- (id)_currentDataSource;
- (long long)_currentLayoutStyle;
- (id)_dataSourceManager;
- (bool)_didPresentPhotoLibrary;
- (void)_dismissFullScreenCamera;
- (void)_dismissPhotoLibraryIfNeeded;
- (void)_dismissReviewScreenViewController;
- (void)_dismissViewControllerAboveKeyboardAnimated:(bool)arg1;
- (bool)_fakeAllCloudAndVideo;
- (void)_handleAttemptedSelectionToggleOfAssetReference:(id)arg1 cancelIfAlreadySelected:(bool)arg2 suppressLivePhotoContent:(bool)arg3;
- (void)_handleImagePickerMediaWithInfo:(id)arg1;
- (void)_handleInProgressPackageGenerator:(id)arg1 suppressLivePhotoContent:(bool)arg2 mediaOrigin:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleTransportStagingUpdateWithDataSource:(id)arg1;
- (id)_imagePickerPopoverPresentationController;
- (id)_imagePickerSenderView;
- (void)_immediatelyGenerateAndStagePackageFromReviewAsset:(id)arg1 suppressLivePhoto:(bool)arg2 mediaOrigin:(long long)arg3;
- (void)_invalidateCameraTileLayout;
- (bool)_isPresentingFullscreenCamera;
- (long long)_layoutStyleForSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_maximumThumbnailSize;
- (id)_mediaProvider;
- (id)_missingThumbnailAssetIndexes;
- (unsigned long long)_options;
- (id)_packageTransport;
- (id)_pendingCloudAssetIndexes;
- (id)_pendingMissingThumbnailAssetIndexes;
- (void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromNavigationController:(id)arg2;
- (void)_presentCameraReviewViewControllerFromAdapter:(id)arg1 fromViewController:(id)arg2;
- (void)_presentConfidentialityAlertWithConfirmAction:(id /* block */)arg1 abortAction:(id /* block */)arg2;
- (void)_presentFullScreenCamera;
- (id)_presentViewControllerAboveKeyboard:(id)arg1 animated:(bool)arg2;
- (id)_previewingItem;
- (id)_previousSuperview;
- (id)_progressModel;
- (id)_recentlyDownloadedAssetIndexes;
- (id)_requiringDownloadAssetIndexes;
- (id)_reviewController;
- (id)_sceneController;
- (id)_scrollViewController;
- (id)_selectedAssetUUIDs;
- (void)_setDidPresentPhotoLibrary:(bool)arg1;
- (void)_setFakeAllCloudAndVideo:(bool)arg1;
- (void)_setImagePickerPopoverPresentationController:(id)arg1;
- (void)_setImagePickerSenderView:(id)arg1;
- (void)_setMissingThumbnailAssetIndexes:(id)arg1;
- (void)_setPendingCloudAssetIndexes:(id)arg1;
- (void)_setPendingMissingThumbnailAssetIndexes:(id)arg1;
- (void)_setPreviewingItem:(id)arg1;
- (void)_setPreviousSuperview:(id)arg1;
- (void)_setRequiringDownloadAssetIndexes:(id)arg1;
- (void)_setReviewController:(id)arg1;
- (void)_setSceneController:(id)arg1;
- (void)_setTilingController:(id)arg1;
- (bool)_shouldEnable3DTouchPreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPhotoLibraryPresentationInCoordinateSpace:(id)arg1;
- (void)_stageAsset:(id)arg1 withReference:(id)arg2 atIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg3 suppressLivePhotoContent:(bool)arg4;
- (id)_statisticsManager;
- (id)_thumbnailResourcesIndexSetForAssets:(id)arg1;
- (id)_tileAnimator;
- (id)_tilesInUse;
- (id)_tilingController;
- (void)_updatePhotoLibraryPresentationIfNeeded;
- (id)_validateAssetReference:(id)arg1 forScrollViewPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyExistingGeometryForTile:(id)arg1;
- (bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (void)assetsScene:(id)arg1 didTransitionToDataSource:(id)arg2;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (void)assetsScene:(id)arg1 willTransitionToDataSource:(id)arg2;
- (Class)assetsSceneClass;
- (void)associateAsset:(id)arg1 withTile:(void*)arg2;
- (id)cameraParentViewController;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewControllerDidCompleteConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)cameraViewControllerRequestedDismissal:(id)arg1;
- (void)cameraViewControllerWillBeginConfigurationForCaptureMode:(long long)arg1 captureDevice:(long long)arg2;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (bool)confirmAsset:(id)arg1 matchesView:(id)arg2 alertOnInternal:(bool)arg3;
- (id)contentAssetReferenceAtPoint:(struct CGPoint { double x1; double x2; })arg1 outContentFrame:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)dismissPresentedViewController:(id)arg1;
- (void)ensureSubviewForTile:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleInProgressPackageGenerator:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithPackageTransport:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 cameraTileController:(id)arg4 statisticsManager:(id)arg5 additionalGestureRecognizers:(id)arg6 options:(unsigned long long)arg7;
- (bool)layout:(id)arg1 shouldShowCloudDecorationAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(id)arg1 shouldShowLoopDecorationAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(id)arg1 shouldShowVideoDecorationAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)ppt_openPhotoLibrary;
- (void)ppt_scrollThumbnailGridWithTestName:(id)arg1 fakeExpensiveBadges:(bool)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)reviewViewController:(id)arg1 didFinishReviewingAssets:(id)arg2;
- (void)reviewViewControllerDidCancelReview:(id)arg1;
- (void)reviewViewControllerDidRequestRetake:(id)arg1;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)showPhotoLibraryPicker:(id)arg1;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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
