<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXUserEventTracker.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXUserEventTracker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    unsigned long long  _MaxDepthOfRelatedJumps;
    NSHashTable * __relatedLookupTable;
    double  _timeLoggedOnDetailViewWillAppear;
    double  _timeLoggedOnMemoriesFeedWillAppear;
    unsigned long long  _totalNumberOfRelatedJumps;
}

@property (setter=_setRelatedLookupTable:, nonatomic, retain) NSHashTable *_relatedLookupTable;

+ (bool)_isMemoryTriggered:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_aggdDurationLoggingDryrun:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdDurationLoggingDryrunForSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_aggdJumpCountLoggingDryrun:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_logAggdAddValueForScalarKey:(struct __CFString { }*)arg1 value:(long long)arg2;
- (void)_logAggdDurationCounterForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdDurationCounterForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)_logAggdRelatedJumpStatistics:(unsigned long long)arg1 totalJumpCount:(unsigned long long)arg2;
- (id)_relatedLookupTable;
- (void)_resetDetailViewTraversalStatistics;
- (void)_setRelatedLookupTable:(id)arg1;
- (void)didConfirmDeleteOfMemory;
- (void)didCreateMemoryViaAddToMemories;
- (void)didFavoriteMemory;
- (void)didFinishViewingDetailsWithCurrentContext:(id)arg1;
- (void)didFinishViewingMemoriesFeedView;
- (void)didNavigateInOneUpFromOrigin:(long long)arg1;
- (void)didPlayMiroMovieForAssetCollection:(id)arg1;
- (void)didPresentOneUpFromOrigin:(long long)arg1;
- (void)didViewDetailsForAssetCollection:(id)arg1;
- (id)init;
- (bool)isEventSourceSenderAppearingForTheFirstTime:(id)arg1;
- (void)livePhotoEffectOptionsAppeared;
- (void)livePhotoEffectPreviewFinishedRendering:(double)arg1;
- (void)livePhotoEffectRenderingFailed;
- (void)livePhotoEffectReverted;
- (void)livePhotoEffectSavingFailed;
- (void)livePhotoEffectSavingFinished:(double)arg1;
- (void)livePhotoEffectSelected:(long long)arg1;
- (void)livePhotoEffectShared;
- (void)livePhotoEffectSuggested:(long long)arg1;
- (void)livePhotoEffectSuggestionApplied;
- (void)logBootstrapMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logBootstrapMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidateFaceCountVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalMergeCandidatesVerifiedConfirmed:(unsigned long long)arg1 verifiedRejected:(unsigned long long)arg2 unverifiedConfirmed:(unsigned long long)arg3 unverifiedRejected:(unsigned long long)arg4;
- (void)logConfirmAdditionalSuggestionsConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logConfirmAdditionalVisionFaceCountConfirmed:(unsigned long long)arg1 rejected:(unsigned long long)arg2;
- (void)logCounterValuesForLogState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logCounterValuesForLogSubState:(unsigned long long)arg1 duration:(double)arg2;
- (void)logForYouContextualMemoriesDetailsCount;
- (void)logForYouInboxItemSelectedWithType:(long long)arg1;
- (void)logForYouInboxViewedCount;
- (void)logForYouMemoriesDetailsCount;
- (void)logForYouMemoriesFeedCount;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
- (void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
- (void)logForYouSharedAlbumInvitationAcceptedCount;
- (void)logForYouSharedAlbumInvitationDeclinedCount;
- (void)logForYouSharedAlbumInvitationReportedAsJunkCount;
- (void)logForYouSuggestionSavedCount;
- (void)logForYouSuggestionSharedCount;
- (void)logForYouSuggestionViewed1UpCount;
- (void)logForYouSuggestionViewedCount;
- (void)logInterestingMemoryNotificationRespondedCount;
- (void)logInterestingMemoryNotificationSeenCount;
- (void)logMergeCandidateInlineControlWithSignature:(unsigned long long)arg1;
- (void)logNamingTypeSelection:(unsigned long long)arg1;
- (void)logNavigationListViewTapWithKey:(struct __CFString { }*)arg1;
- (void)logPeopleAddToPeopleHome;
- (void)logPeopleConfirmAdditionalViewCount;
- (void)logPeopleDetailCount;
- (void)logPeopleDetailKeyPhotoChanged;
- (void)logPeopleDetailNotThisPerson;
- (void)logPeopleDetailShowFaces;
- (void)logPeopleHomeCount;
- (void)logPeopleHomeFavoritePersonCount:(unsigned long long)arg1 totalPersonCount:(unsigned long long)arg2;
- (void)logPeopleHomeNumberOfPeopleWithContactName:(unsigned long long)arg1 numberOfPeopleWithStringName:(unsigned long long)arg2;
- (void)logPeopleMeSuggestionConfirmed:(bool)arg1;
- (void)logPeopleRemoveFromPeopleHome;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchNumberOfTermsInSearchFieldOnSuccessfulSearch:(unsigned long long)arg1;
- (void)logSearchPerSessionNextTokenSuggestionTapped:(bool)arg1 wordCompletionTapped:(bool)arg2;
- (void)logSearchResultType:(unsigned long long)arg1;
- (void)logSearchSiriFoundResults:(bool)arg1;
- (void)logSearchSuccessfulResult:(bool)arg1;
- (void)logSearchTapSearch;
- (void)logSearchWordCompletionTapped;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchWordEmbeddingsPresented;
- (void)logSearchZeroKeywordSearch;
- (void)logTappedZKItemType:(long long)arg1;
- (void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString { }*)arg1;
- (void)logViewCountForLogState:(unsigned long long)arg1;
- (void)logZKSectionVisible:(bool)arg1 forSectionType:(long long)arg2;
- (void)willViewDetailsWithCurrentContext:(id)arg1;
- (void)willViewMemoriesFeedView;

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
