<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUActivityItemSource.h</title>
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

/Frameworks/PhotosUI.framework/PUActivityItemSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUActivityItemSource : NSObject <UIActivityItemApplicationExtensionSource, UIActivityItemDeferredSource, UIActivityItemImageDataProvider, UIActivityItemSource> {
    PHAssetExportRequest * __assetExportRequest;
    NSURL * __assetsLibraryURL;
    NSProgress * __exportProgress;
    id /* block */  __exportProgressHandler;
    NSDictionary * __pasteboardRepresentation;
    long long  __remakerWasCancelled;
    PUActivityItemSourceAnchorOperation * _anchorOperation;
    PHAsset * _asset;
    NSString * _assetOriginalFilename;
    NSDictionary * _cachedSharingVariants;
    NSObject<OS_dispatch_group> * _cachedSharingVariantsDisptachGroup;
    id /* block */  _completionHandler;
    _PUActivityItemSourceOperation * _currentOperation;
    bool  _hasRecognizedVideoAdjustments;
    NSArray * _nonLocalAssetsActivities;
    NSMutableSet * _onDemandExports;
    PFSharingRemaker * _photoRemaker;
    id /* block */  _postCompletionHandler;
    id /* block */  _progressHandler;
    PLVideoRemaker * _remaker;
    id /* block */  _remakerCompletionHandler;
    NSMutableDictionary * _sharingURLs;
    NSString * _sharingUUID;
    bool  _shouldAnchorPreparation;
    bool  _shouldSkipPreparation;
    id  _strongSelf;
    bool  _useStillImage;
}

@property (setter=_setAssetExportRequest:, nonatomic, retain) PHAssetExportRequest *_assetExportRequest;
@property (setter=_setAssetsLibraryURL:, retain) NSURL *_assetsLibraryURL;
@property (setter=_setExportProgress:, nonatomic, retain) NSProgress *_exportProgress;
@property (setter=_setExportProgressHandler:, nonatomic, copy) id /* block */ _exportProgressHandler;
@property (setter=_setPasteboardRepresentation:, retain) NSDictionary *_pasteboardRepresentation;
@property (setter=_setRemakerWasCancelled:) long long _remakerWasCancelled;
@property (nonatomic, readonly) PHAsset *asset;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ postCompletionHandler;
@property (copy) id /* block */ progressHandler;
@property (nonatomic) bool shouldAnchorPreparation;
@property (nonatomic) bool shouldSkipPreparation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useStillImage;

+ (id)_photosInternalActivities;
+ (id)_sharingErrorWithCode:(long long)arg1 underlyingError:(id)arg2 localizedDescription:(id)arg3 additionalInfo:(id)arg4;
+ (id)activityItemSourceLog;
+ (void)initialize;
+ (bool)supportsAssetLocalIdentifierForActivityType:(id)arg1;
+ (bool)supportsPhotoIrisBundleForActivityType:(id)arg1;

- (void).cxx_destruct;
- (id)_activityOperationQueue;
- (id)_assetExportRequest;
- (id)_assetsLibraryURL;
- (void)_beginObservingExportRequest:(id)arg1 withProgressHandler:(id /* block */)arg2;
- (void)_cancelVideoRemaking:(id)arg1;
- (void)_cleanupPhotoRemaker;
- (void)_cleanupProgress;
- (void)_cleanupRemaker;
- (bool)_copyResourceAtURL:(id)arg1 toURL:(id)arg2 shouldMove:(bool)arg3;
- (id)_createManagedURLForResourceAtURL:(id)arg1 shouldMove:(bool)arg2 forType:(long long)arg3;
- (id)_createTempPhotoIrisBundle;
- (id)_customAccessibilityLabel;
- (id)_exportProgress;
- (id /* block */)_exportProgressHandler;
- (void)_fetchAlternateForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchImageForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchPhotoIrisForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchSharingVariants;
- (void)_fetchVideoForActivityType:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_generateURLForType:(long long)arg1 desiredPathExtension:(id)arg2;
- (bool)_isColorOptimizationNeededForAsset:(id)arg1 imageURL:(id)arg2;
- (id)_itemForActivityType:(id)arg1;
- (unsigned long long)_maxFileSizeLimitForActivityType:(id)arg1 asset:(id)arg2;
- (id)_newOperationForActivityType:(id)arg1;
- (id)_newPasteboardRepresentationForURL:(id)arg1;
- (void)_operation:(id)arg1 prepareItemForActivityType:(id)arg2;
- (id)_outboundResourcesDirectoryURL;
- (id)_pasteboardRepresentation;
- (long long)_remakerWasCancelled;
- (void)_removeTempFiles;
- (void)_removeTempIrisBundleFile;
- (void)_removeTempPhotoRemakerFile;
- (void)_removeTempVideoRemakerFile;
- (id)_resourceURLForType:(long long)arg1;
- (void)_runExportRequestWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_runOnDemandExportForAsset:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setAssetExportRequest:(id)arg1;
- (void)_setAssetsLibraryURL:(id)arg1;
- (void)_setExportProgress:(id)arg1;
- (void)_setExportProgressHandler:(id /* block */)arg1;
- (void)_setPasteboardRepresentation:(id)arg1;
- (void)_setRemakerWasCancelled:(long long)arg1;
- (void)_setResourceURL:(id)arg1 forType:(long long)arg2;
- (id)_sharingVariants;
- (bool)_shouldExcludeAlternateVariantForActivityType:(id)arg1;
- (void)_stopObservingExportRequest;
- (id)_uniformTypeIdentifierForActivityType:(id)arg1;
- (bool)_wantsAlternateVariantForActivityType:(id)arg1;
- (bool)_wantsAssetsLibraryURLForActivityType:(id)arg1;
- (bool)_wantsCompatibleFormatForActivityType:(id)arg1;
- (bool)_wantsIrisRemakerURLForActivityType:(id)arg1;
- (bool)_wantsLocalAssetsForActivityType:(id)arg1;
- (bool)_wantsPhotoIrisBundleForActivityType:(id)arg1;
- (bool)_wantsPhotoRemakerURLForActivityType:(id)arg1;
- (bool)_wantsVideoRemakerForActivityType:(id)arg1;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageDataForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)asset;
- (void)cancel;
- (void)cancelRemaking;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 useStillImage:(bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)postCompletionHandler;
- (id /* block */)progressHandler;
- (void)remakePhotoWithURL:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)remakeVideoWithTrimStartTime:(double)arg1 endTime:(double)arg2 forMail:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)runWithActivityType:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPostCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setShouldAnchorPreparation:(bool)arg1;
- (void)setShouldSkipPreparation:(bool)arg1;
- (bool)shouldAnchorPreparation;
- (bool)shouldSkipPreparation;
- (void)signalAnchorCompletion;
- (bool)useStillImage;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;

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
