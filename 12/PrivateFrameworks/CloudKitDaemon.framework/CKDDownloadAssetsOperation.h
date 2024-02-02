<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDDownloadAssetsOperation.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDDownloadAssetsOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation {
    NSMutableArray * _MMCSItemsToDownload;
    NSMutableArray * _MMCSItemsToDownloadInMemory;
    NSArray * _assetURLInfosToFillOut;
    NSArray * _assetsToDownload;
    NSArray * _assetsToDownloadInMemory;
    CKDCancelTokenGroup * _cancelTokens;
    id /* block */  _downloadCommandBlock;
    id /* block */  _downloadCompletionBlock;
    id /* block */  _downloadPreparationBlock;
    id /* block */  _downloadProgressBlock;
    NSMapTable * _downloadTasksByPackages;
    NSMutableDictionary * _keyOrErrorForHostname;
    unsigned long long  _maxPackageDownloadsPerBatch;
    NSArray * _packageIndexSets;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _urlFilledOutBlock;
}

@property (nonatomic, retain) NSMutableArray *MMCSItemsToDownload;
@property (nonatomic, retain) NSMutableArray *MMCSItemsToDownloadInMemory;
@property (nonatomic, retain) NSArray *assetURLInfosToFillOut;
@property (nonatomic, retain) NSArray *assetsToDownload;
@property (nonatomic, retain) NSArray *assetsToDownloadInMemory;
@property (nonatomic, retain) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic, copy) id /* block */ downloadCommandBlock;
@property (nonatomic, copy) id /* block */ downloadCompletionBlock;
@property (nonatomic, copy) id /* block */ downloadPreparationBlock;
@property (nonatomic, copy) id /* block */ downloadProgressBlock;
@property (nonatomic, retain) NSMapTable *downloadTasksByPackages;
@property (nonatomic, retain) NSMutableDictionary *keyOrErrorForHostname;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (nonatomic, retain) NSArray *packageIndexSets;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ urlFilledOutBlock;

- (void).cxx_destruct;
- (id)CKStatusReportLogGroups;
- (id)MMCSItemsToDownload;
- (id)MMCSItemsToDownloadInMemory;
- (void)_collectMetricsFromCompletedItemGroup:(id)arg1;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)arg1;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)arg1;
- (void)_didCommandForAsset:(id)arg1 command:(id)arg2;
- (void)_didCommandForMMCSItem:(id)arg1 command:(id)arg2;
- (void)_didDownloadAsset:(id)arg1 error:(id)arg2;
- (void)_didDownloadMMCSItem:(id)arg1 inMemory:(bool)arg2 error:(id)arg3;
- (void)_didDownloadMMCSItems:(id)arg1 inMemory:(bool)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didDownloadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didMakeProgressForMMCSItem:(id)arg1 inMemory:(bool)arg2;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didPrepareAsset:(id)arg1;
- (bool)_download;
- (void)_downloadMMCSItems:(id)arg1 downloadTasksByPackages:(id)arg2 shouldFetchAssetContentInMemory:(bool)arg3;
- (void)_downloadPackageSectionAtIndex:(long long)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_downloadPackageSectionsWithPendingTasks:(id)arg1 downloadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)arg1 task:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_downloadPackageSectionsWithTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (bool)_postProcess;
- (bool)_prepareForDownload;
- (void)_removeUntrackedMMCSItems:(id)arg1;
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg1;
- (id)activityCreate;
- (id)assetURLInfosToFillOut;
- (id)assetsToDownload;
- (id)assetsToDownloadInMemory;
- (void)cancel;
- (id)cancelTokens;
- (id /* block */)downloadCommandBlock;
- (id /* block */)downloadCompletionBlock;
- (id /* block */)downloadPreparationBlock;
- (id /* block */)downloadProgressBlock;
- (id)downloadTasksByPackages;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)keyOrErrorForHostname;
- (void)main;
- (bool)makeStateTransition;
- (unsigned long long)maxPackageDownloadsPerBatch;
- (id)nameForState:(unsigned long long)arg1;
- (id)packageIndexSets;
- (id)queue;
- (void)setAssetURLInfosToFillOut:(id)arg1;
- (void)setAssetsToDownload:(id)arg1;
- (void)setAssetsToDownloadInMemory:(id)arg1;
- (void)setCancelTokens:(id)arg1;
- (void)setDownloadCommandBlock:(id /* block */)arg1;
- (void)setDownloadCompletionBlock:(id /* block */)arg1;
- (void)setDownloadPreparationBlock:(id /* block */)arg1;
- (void)setDownloadProgressBlock:(id /* block */)arg1;
- (void)setDownloadTasksByPackages:(id)arg1;
- (void)setKeyOrErrorForHostname:(id)arg1;
- (void)setMMCSItemsToDownload:(id)arg1;
- (void)setMMCSItemsToDownloadInMemory:(id)arg1;
- (void)setMaxPackageDownloadsPerBatch:(unsigned long long)arg1;
- (void)setPackageIndexSets:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUrlFilledOutBlock:(id /* block */)arg1;
- (id /* block */)urlFilledOutBlock;

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