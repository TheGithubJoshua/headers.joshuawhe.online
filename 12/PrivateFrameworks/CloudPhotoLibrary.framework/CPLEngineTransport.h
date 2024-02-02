<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CPLEngineTransport.h</title>
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

/PrivateFrameworks/CloudPhotoLibrary.framework/CPLEngineTransport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary (3462.1.170)
 */

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {
    CPLEngineLibrary * _engineLibrary;
    CPLPlatformObject * _platformObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class transportGroupClass;
@property (nonatomic, readonly) Class userIdentifierClass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)acceptTaskForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (void)cancelBlockedTasksIncludingBackground:(bool)arg1;
- (id)checkRecordsExistenceTaskForRecords:(id)arg1 fetchRecordProperties:(id)arg2 transportScope:(id)arg3 scope:(id)arg4 additionalTransportScopes:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (id)createGroupForAcceptingMomentShare;
- (id)createGroupForAnalysisDownload;
- (id)createGroupForChangeDownload;
- (id)createGroupForChangeUpload;
- (id)createGroupForFeedback;
- (id)createGroupForFetchScopeListChanges;
- (id)createGroupForFetchingMomentShare;
- (id)createGroupForInitialDownload;
- (id)createGroupForInitialUpload;
- (id)createGroupForLibraryStateCheck;
- (id)createGroupForMovieStreaming;
- (id)createGroupForPrefetch;
- (id)createGroupForPruningCheck;
- (id)createGroupForPublishingMomentShare;
- (id)createGroupForQueryUserIdentities;
- (id)createGroupForResetSync;
- (id)createGroupForResourcesDownload;
- (id)createGroupForSetup;
- (id)createGroupForThumbnailPrefetch;
- (id)createGroupForThumbnailsDownload;
- (id)createGroupForTransportScopeDelete;
- (id)createGroupForTransportScopeUpdate;
- (id)deleteTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)descriptionForTransportScope:(id)arg1;
- (id)downloadBatchTaskForSyncAnchor:(struct NSData { Class x1; }*)arg1 transportScope:(id)arg2 scope:(id)arg3 currentLibraryInfo:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)engineLibrary;
- (id)fetchScopeListChangesForScopeListSyncAnchor:(struct NSData { Class x1; }*)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchTaskForMomentShareURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchTransportScopeForScope:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getCurrentSyncAnchorWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getLibraryInfoAndStateWithTransportScope:(id)arg1 scope:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getPushEnvironmentWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)arg1;
- (id)inMemoryDownloadTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isResourceDynamic:(id)arg1;
- (void)noteClientIsBeginningSignificantWork;
- (void)noteClientIsEndingSignificantWork;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (id)publishTaskForMomentShare:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queryTaskForCursor:(id)arg1 class:(Class)arg2 transportScope:(id)arg3 scopeIdentifier:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)queryUserIdentitiesTaskForParticipants:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rampingRequestTaskForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)resourceCheckTaskForResources:(id)arg1 transportScopes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)resourcePublishTaskForResource:(id)arg1 transportScope:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)resourcesDownloadTaskWithCompletionHandler:(id /* block */)arg1;
- (id)scopeNameForTransportScope:(id)arg1;
- (id)sendFeedbackTaskForMessages:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setShouldOverride:(bool)arg1 forSystemBudgets:(unsigned long long)arg2;
- (id)setupTaskUpdateDisabledFeatures:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)simpleDescriptionForScopeListSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (id)simpleDescriptionForSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (Class)transportGroupClass;
- (id)transportScopeForUpgradeFromScopeName:(id)arg1;
- (id)updateTransportScope:(id)arg1 scope:(id)arg2 libraryInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)upgradeFlags:(id)arg1 fromTransportScope:(id)arg2;
- (id)uploadBatchTaskForBatch:(id)arg1 transportScope:(id)arg2 scope:(id)arg3 additionalTransportScopes:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (Class)userIdentifierClass;

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