<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVClusterer.h</title>
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

/PrivateFrameworks/PhotoVision.framework/PVClusterer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision (3462.12.130)
 */

@interface PVClusterer : NSObject <PVFaceClusteringProtocol> {
    unsigned long long  _accumulatedChangesCount;
    NSURL * _cacheDirUrl;
    NSURL * _cacheFileUrl;
    VNClustererBuilder * _clusterBuilder;
    long long  _clustererBringUpState;
    PVCanceler * _clusteringCanceler;
    NSString * _clusteringType;
    PVContext * _context;
    struct { 
        unsigned long long countOfEligibleFaces; 
        unsigned long long countOfFacesPendingToAdd; 
        bool isClustering; 
        bool rebuildRequired; 
    }  _currentStatusSnapshot;
    bool  _currentStatusSnapshotIsValid;
    NSLock * _currentStatusSnapshotLock;
    PVSuggestionRequest * _currentSuggestionRequest;
    PVDataAccessor * _dataAccessor;
    PVEventManager * _eventManager;
    NSSet * _faceCSNsInClusterCache;
    NSMutableSet * _faceCSNsToRemove;
    NSMutableSet * _faceIdStrsToAdd;
    unsigned long long  _nextClusterTriggeringAccumulatedChangesCount;
    unsigned long long  _nextSeqNum;
    NSMutableArray * _outstandingSuggestionRequests;
    PVQueue * _processingQueue;
    NSMutableDictionary * _propertyDictionary;
    NSLock * _propertyDictionaryLock;
    bool  _rebuildClusterer;
    NSLock * _suggestionLock;
    NSNumber * _threshold;
    NSDate * _timestampOfLastClusterComparison;
    VNCanceller * _visionCanceler;
    <PVVisionIntegrating> * _visionIntegration;
}

@property (nonatomic) long long clustererBringUpState;
@property (nonatomic, readonly) long long clustererState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property PVEventManager *eventManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool needsFullSync;
@property (nonatomic, readonly) bool needsUpdate;
@property (getter=isReady, nonatomic, readonly) bool ready;
@property (readonly) Class superclass;

+ (bool)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cancelClusteringAndRestoreClusterCache:(bool)arg1;
- (id)_faceObservationsFromFaceCSNs:(id)arg1;
- (id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3 excludeClustered:(bool)arg4;
- (id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(bool)arg2 updatedFaces:(id)arg3;
- (bool)_performAndPersistClustersByAddingFaceObs:(id)arg1 removingFaceObs:(id)arg2 updateFaces:(id)arg3 canceler:(id)arg4 error:(id*)arg5;
- (id)_persistenceDelegate;
- (void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
- (bool)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id*)arg1 lastClusterSequenceNumber:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(bool)arg3 error:(id*)arg4;
- (bool)_processingQueuePerformForcedFaceClustering:(bool)arg1 withCanceler:(id)arg2;
- (void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id*)arg2 withCanceler:(id)arg3;
- (bool)_processingQueueResetClusterCache:(id*)arg1;
- (bool)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(bool)arg1 error:(id*)arg2;
- (bool)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id*)arg4;
- (bool)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (bool)_processingQueueSaveClusterCache:(id*)arg1;
- (void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2;
- (id)_propertyDictionaryFileURL;
- (void)_readPropertyDictionary;
- (void)_recordClusterRebuildRequired:(bool)arg1;
- (void)_recordClusteringState:(bool)arg1;
- (void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_recordCurrentStatus:(struct { unsigned long long x1; unsigned long long x2; bool x3; bool x4; })arg1;
- (void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1;
- (void)_removeEmptyGroups;
- (void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1;
- (void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2;
- (id)_stringForPVClustererBringUpState:(long long)arg1;
- (id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id*)arg3;
- (id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2;
- (void)cancelAllSuggestionRequests;
- (void)cancelClustering;
- (void)cancelSuggestionRequest:(id)arg1;
- (void)clusterAndWait;
- (void)clusterIfNecessaryAndWait;
- (long long)clustererBringUpState;
- (long long)clustererState;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1;
- (id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3;
- (id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id*)arg3;
- (id)eventManager;
- (bool)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(bool*)arg3 error:(id*)arg4;
- (id)initWithContext:(id)arg1 dataAccessor:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4;
- (bool)isReady;
- (bool)isReadyToReturnSuggestions;
- (id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2;
- (bool)needsFullSync;
- (bool)needsUpdate;
- (unsigned long long)numberOfAccumulatedClusterChanges;
- (void)performClusteringWithCompletion:(id /* block */)arg1;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(id /* block */)arg3 error:(id*)arg4;
- (long long)restoreClusterCacheAndSyncWithLibrary:(bool)arg1;
- (void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2;
- (void)setClustererBringUpState:(long long)arg1;
- (void)setEventManager:(id)arg1;
- (id)status;
- (id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2;
- (void)terminate;

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
