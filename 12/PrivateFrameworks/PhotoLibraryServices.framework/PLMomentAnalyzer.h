<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLMomentAnalyzer.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLMomentAnalyzer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLMomentAnalyzer : NSObject <PLGeoLocationShifterDelegate> {
    NSMutableArray * _activeGEORequests;
    bool  _addCountyIfNeeded;
    double  _analysisStartTime;
    bool  _analyzingAllMoments;
    NSString * _currentProviderId;
    unsigned long long  _currentRevGeoServerVersionNum;
    NSDateFormatter * _dayOfTheWeekDateFormatter;
    NSOrderedSet * _defaultDominantGeoOrderingForMegaMoment;
    NSOrderedSet * _defaultDominantGeoOrderingForMoment;
    NSOrderedSet * _defaultSecondaryGeoOrderingForYear;
    NSOrderedSet * _defaultSecondaryLocationGeoOrderingForMegaMoment;
    NSOrderedSet * _defaultSecondaryLocationGeoOrderingForMoment;
    bool  _delayedSavePending;
    int  _errorBackoffLevel;
    unsigned long long  _errorState;
    PLMomentAnalyzerWorkThread * _geoWorkThread;
    NSDictionary * _homeAddressDictionary;
    CLLocation * _homeLocation;
    <GEOMapItemPrivate> * _homeMapItem;
    NSString * _languageAndLocale;
    NSString * _lastGeoProviderId;
    NSDate * _lastGeoVersionFileFetchDate;
    unsigned long long  _lastGeoVersionFileVersion;
    double  _lastNetworkForcedAbortTime;
    double  _lastRevGeoRequestTime;
    double  _lastRevGeoURLFetchAttemptTime;
    double  _lastServerVersionInfoFetchAttemptTime;
    PLGeoLocationShifter * _locationShifter;
    PLMomentAnalyzerQueue * _megaMomentProcessingQueue;
    unsigned long long  _mode;
    bool  _momentAnalysisPaused;
    <PLMomentGenerationDataManagement> * _momentDataManager;
    <PLMomentGenerationDataManagement> * _momentGenerationDataManager;
    bool  _needToUpdateInvalidMomentsWhenPossible;
    bool  _networkObservingReachability;
    bool  _noResultErrorIsSuccess;
    unsigned long long  _objectUpdatesSinceSave;
    bool  _passSuccess;
    NSMutableOrderedSet * _pendingGEORequests;
    bool  _pendingServerVersionInfoFetch;
    <PLMomentGenerationDataManagement_Private> * _privateMomentDataManager;
    NSMutableSet * _processingMomentUuids;
    double  _revGeoServerVersionInfoFetchNewVersionInterval;
    NSString * _revGeoServerVersionInfoURL;
    unsigned long long  _revGeoURLFetchAttemptCount;
    NSDictionary * _serverVersionInfo;
    NSDateFormatter * _shortDateFormatter;
    bool  _skippedMomentsDuringAnalysis;
    bool  _throttlesCollectionListAnalysis;
    double  _timeToWaitBeforeNextRequest;
    int  _triesAtCurrentBackoffLevel;
    NSObject<OS_dispatch_queue> * _workQueue;
    PLMomentAnalyzerQueue * _yearMomentProcessingQueue;
}

@property (nonatomic, readonly, retain) CLLocation *_homeLocation;
@property (nonatomic, readonly, retain) <PLMomentGenerationDataManagement> *_momentDataManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PLMomentGenerationDataManagement> *momentGenerationDataManager;
@property (readonly) Class superclass;
@property bool throttlesCollectionListAnalysis;

- (void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2;
- (void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4;
- (void)_analysisComplete;
- (void)_analysisDidComplete:(bool)arg1;
- (bool)_canProcessMoments;
- (void)_checkForNewServerVersionInfoIfNeeded;
- (id)_compactPlaceDescriptionForMapItem:(id)arg1;
- (void)_countryCodeChanged:(id)arg1;
- (id)_currentProviderId;
- (id)_dictionaryFromLocation:(id)arg1;
- (id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 atLastLevel:(bool)arg7 outOtherNonDominantPlaces:(id)arg8;
- (void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(bool)arg2;
- (unsigned long long)_errorTypeForError:(id)arg1;
- (void)_fetchServerVersionInfo;
- (void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(bool)arg3;
- (void)_finalizeInitOnWorkQueue;
- (void)_finishedGEORequestInfo:(id)arg1 withSuccess:(bool)arg2 errorType:(unsigned long long)arg3;
- (void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(bool)arg2;
- (void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_geoLocationForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 date:(id)arg2;
- (unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_homeLocation;
- (void)_incrementalSaveAndRefresh;
- (unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2;
- (bool)_isNetworkReachable;
- (bool)_loadServerVersionInfo;
- (id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(bool)arg3 outAddedHome:(bool*)arg4;
- (id)_locationFromDictionary:(id)arg1;
- (id)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2;
- (id)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3;
- (id)_momentDataManager;
- (void)_networkReachabilityDidChange:(bool)arg1;
- (void)_processGEORequestWithRequestInfo:(id)arg1;
- (unsigned long long)_processMegaMomentList:(id)arg1;
- (void)_processMegaMomentLists;
- (void)_processNextAnalysisTransaction;
- (void)_processNextTransaction;
- (void)_processPendingGEORequests;
- (unsigned long long)_processYearMomentList:(id)arg1;
- (void)_processYearMomentLists;
- (void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(bool)arg1;
- (void)_refreshAllObjectsIfPossibleWithManager:(id)arg1;
- (id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(bool)arg2;
- (void)_resetErrorState;
- (void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(bool)arg2 invalidOnly:(bool)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 aferDelay:(double)arg2 block:(id /* block */)arg3;
- (void)_runOnWorkQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_saveDataIfNeededAfterTimeDiff:(double)arg1;
- (void)_saveDataIfReachedObjectChangeThreshold;
- (void)_saveGlobalMetadata;
- (void)_saveNow;
- (void)_scheduleCollectionListAnalysisThrottleTimerIfNeeded;
- (void)_setErrorState:(unsigned long long)arg1;
- (void)_setLocationDataValidForMomentId:(id)arg1;
- (void)_setMomentAnalysisPaused:(bool)arg1;
- (bool)_shouldProcessMoments:(id)arg1;
- (unsigned long long)_significantPlaceCountInMap:(id)arg1;
- (id)_simpleNamesForNameInfoArray:(id)arg1;
- (void)_startObservingReachabilityChanges;
- (bool)_startingToProcessMomentWithUuid:(id)arg1;
- (void)_stopObservingReachabilityChanges;
- (id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3;
- (id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2;
- (id)_transactionWithName:(const char *)arg1;
- (id)_transactionWithName:(const char *)arg1 inDataManager:(id)arg2;
- (void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6;
- (void)_updateCurrentProviderId;
- (void)_updateCurrentProviderIdWithCountryCode:(id)arg1;
- (void)_updateDateFormattersForLocale:(id)arg1;
- (id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long*)arg9 outUsedHome:(bool*)arg10;
- (void)_updateErrorStateWithSuccess:(bool)arg1 errorType:(unsigned long long)arg2;
- (bool)_updateHomeAddressIfNeeded;
- (void)_updateHomeLocation;
- (bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3;
- (void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1;
- (void)_updateInformationForGeoProviderIfNeeded;
- (void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
- (bool)_updateLanguageIfNeeded;
- (void)_updateLocalServerVersionInfo:(id)arg1;
- (void)_updateRevGeoServerFetchInfoConfig;
- (void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(bool)arg9;
- (id)_userSuppliedTitlesForCountedSet:(id)arg1;
- (void)_waitForReachability;
- (void)addressBookChanged;
- (void)dealloc;
- (id)init;
- (void)invalidateLocationShift;
- (id)locationShiftStatus;
- (void)locationShifter:(id)arg1 didShiftWithResult:(id)arg2;
- (id)locationShifter:(id)arg1 locationCoordinatesForAssetIDs:(id)arg2;
- (void)locationShifter:(id)arg1 requestsInvocation:(id)arg2;
- (void)locationShifterDidFinish:(id)arg1;
- (id)momentAnalysisStatus;
- (id)momentGenerationDataManager;
- (void)pauseMomentAnalysis;
- (void)resumeMomentAnalysis;
- (void)setMomentGenerationDataManager:(id)arg1;
- (void)setThrottlesCollectionListAnalysis:(bool)arg1;
- (bool)setVersionInfoURLIfAvailable:(id)arg1;
- (void)startAnalyzer;
- (bool)throttlesCollectionListAnalysis;
- (void)updateInfoForAllMoments;
- (void)updateInfoForInvalidMomentsIfNeeded;
- (bool)updateInfoForMegaMomentLists:(id)arg1;
- (bool)updateInfoForMomentListWithMomentListId:(id)arg1;
- (bool)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(bool)arg2;
- (bool)updateInfoForMoments:(id)arg1 invalidOnly:(bool)arg2;
- (bool)updateInfoForYearMomentLists:(id)arg1;
- (void)updateShiftForAssets:(id)arg1;

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