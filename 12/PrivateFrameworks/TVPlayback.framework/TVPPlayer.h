<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVPPlayer.h</title>
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

/PrivateFrameworks/TVPlayback.framework/TVPPlayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback (1)
 */

@interface TVPPlayer : NSObject <TVPAVFPlayback> {
    id /* block */  _AVKitExternalImageScanningUpdateBlock;
    AVQueuePlayer * _AVQueuePlayer;
    NSTimer * _HDCPStatusPollTimer;
    NSTimer * _HDCPUnprotectedTooLongTimer;
    <TVPASyncPlaybackDelegate> * _asyncDelegate;
    bool  _asyncDelegateInProgress;
    NSMutableArray * _asyncDelegateOperations;
    NSArray * _audioOptions;
    TVPPlayerBookmarkMonitor * _bookmarkMonitor;
    NSMutableDictionary * _boundaryTimeObserverInfos;
    float  _cachedAVPlayerRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedElapsedTime;
    NSArray * _cachedLoadedTimeRanges;
    NSArray * _cachedSeekableTimeRanges;
    TVPAudioOption * _cachedSelectedAudioOption;
    id  _chapterBoundaryTimeObserverToken;
    NSArray * _chapterCollections;
    bool  _createsPlayerItemButDoesNotEnqueue;
    TVPChapter * _currentChapter;
    TVPChapterCollection * _currentChapterCollection;
    long long  _currentDirectionOfPlaylistChange;
    TVPInterstitial * _currentInterstitial;
    TVPInterstitialCollection * _currentInterstitialCollection;
    bool  _currentMediaItemHasDates;
    bool  _currentMediaItemHasVideoContent;
    bool  _currentMediaItemInitialLoadingComplete;
    bool  _currentMediaItemIsStreaming;
    TVPMediaItemLoader * _currentMediaItemLoader;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentMediaItemPresentationSize;
    long long  _currentMediaItemVideoRange;
    TVPPlayerItem * _currentPlayerItem;
    bool  _currentPlayerItemContainsDates;
    bool  _currentPlayerItemContainsRealDates;
    NSDate * _dateBeingSeekedTo;
    <TVPPlaybackDelegate> * _delegate;
    NSMutableDictionary * _elapsedTimeObserverBlocks;
    long long  _errorBehavior;
    TVPExternalImagePlayer * _externalImagePlayer;
    bool  _handleRemoteCommandsWithoutUpdatingMediaRemote;
    id /* block */  _highFrequencyElapsedTimeObserverBlock;
    id  _highFrequencyTimeObserverToken;
    struct CGSize { 
        double width; 
        double height; 
    }  _iFramePrefetchMaxSize;
    bool  _initialMediaItemHasCompletedInitialLoading;
    bool  _interactive;
    id  _interstitialBoundaryTimeObserverToken;
    bool  _invalidated;
    bool  _isLive;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTimeSentToAVKitImageHandler;
    bool  _limitsBandwidthForCellularAccess;
    bool  _loadingInitialItemInPlaylist;
    double  _maximumBitRate;
    NSString * _mediaItemChangeReason;
    long long  _mediaItemEndAction;
    NSMutableSet * _mediaItemLoaders;
    bool  _mediaRemoteUpdatingEnabled;
    bool  _modifyingAVPlayerQueue;
    bool  _modifyingAVPlayerRate;
    bool  _muted;
    NSString * _name;
    long long  _numOutstandingSeeks;
    bool  _outputObscuredDueToInsufficientExternalProtection;
    bool  _pausesOnHDCPProtectionDown;
    bool  _pausesOnRouteChange;
    NSArray * _pendingSelectedMediaArray;
    id  _periodicTimeObserverToken;
    NSDate * _playbackDateAtStartOfSeek;
    NSArray * _playbackEndTimeBoundaryObserverTokens;
    TVPPlayerItem * _playerItemFromCacheManager;
    TVPPlayerReporter * _playerReporter;
    TVPPlaylist * _playlistInternal;
    TVPPlaybackState * _postAVKitScanningState;
    TVPPlaybackState * _postLoadingState;
    double  _preferredForwardBufferDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredMaximumResolution;
    bool  _preventsSleepDuringVideoPlayback;
    TVPProgressiveJumpingScrubber * _progressiveJumpingScrubber;
    double  _rateUsedForPlayback;
    bool  _remainLoadingWhenSeekCompletes;
    bool  _sceneCompletelyBuffered;
    bool  _screenIsBeingRecorded;
    int  _screenRecordingNotifyToken;
    bool  _sendsPlayerReports;
    NSDate * _startDate;
    double  _startPosition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startingSeekPrecision;
    TVPPlaybackState * _state;
    TVPStateMachine * _stateMachine;
    NSArray * _subtitleOptions;
    NSNumber * _temporarySubtitleOverrideType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeAtStartOfSeek;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeBeingSeekedTo;
    AVPlayerItem * _unqueuedPlayerItem;
    bool  _updatesBookmarks;
    bool  _updatesMediaRemoteInfoAutomatically;
    bool  _usesLegacyDelegateBehavior;
    NSHashTable * _videoViewWeakReferences;
    float  _volume;
    bool  _waitsAfterPreparingMediaItems;
}

@property (nonatomic, copy) id /* block */ AVKitExternalImageScanningUpdateBlock;
@property (nonatomic, retain) AVQueuePlayer *AVQueuePlayer;
@property (nonatomic, retain) NSTimer *HDCPStatusPollTimer;
@property (nonatomic, retain) NSTimer *HDCPUnprotectedTooLongTimer;
@property (nonatomic) <TVPASyncPlaybackDelegate> *asyncDelegate;
@property (nonatomic) bool asyncDelegateInProgress;
@property (nonatomic, retain) NSMutableArray *asyncDelegateOperations;
@property (nonatomic, retain) NSArray *audioOptions;
@property (nonatomic, readonly) AVPlayer *avPlayer;
@property (nonatomic, retain) TVPPlayerBookmarkMonitor *bookmarkMonitor;
@property (nonatomic, retain) NSMutableDictionary *boundaryTimeObserverInfos;
@property (nonatomic, readonly) TVPTimeRange *bufferedTimeRange;
@property (nonatomic) float cachedAVPlayerRate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedElapsedTime;
@property (nonatomic, retain) NSArray *cachedLoadedTimeRanges;
@property (nonatomic, retain) NSArray *cachedSeekableTimeRanges;
@property (nonatomic, retain) TVPAudioOption *cachedSelectedAudioOption;
@property (nonatomic, retain) id chapterBoundaryTimeObserverToken;
@property (nonatomic, retain) NSArray *chapterCollections;
@property (nonatomic) bool createsPlayerItemButDoesNotEnqueue;
@property (nonatomic, retain) TVPChapter *currentChapter;
@property (nonatomic, retain) TVPChapterCollection *currentChapterCollection;
@property (nonatomic) long long currentDirectionOfPlaylistChange;
@property (nonatomic, retain) TVPInterstitial *currentInterstitial;
@property (nonatomic, retain) TVPInterstitialCollection *currentInterstitialCollection;
@property (nonatomic, retain) NSObject<TVPMediaItem> *currentMediaItem;
@property (nonatomic) bool currentMediaItemHasDates;
@property (nonatomic) bool currentMediaItemHasVideoContent;
@property (nonatomic) bool currentMediaItemInitialLoadingComplete;
@property (nonatomic) bool currentMediaItemIsStreaming;
@property (nonatomic, retain) TVPMediaItemLoader *currentMediaItemLoader;
@property (nonatomic, readonly) bool currentMediaItemPreparedForLoading;
@property (nonatomic) struct CGSize { double x1; double x2; } currentMediaItemPresentationSize;
@property (nonatomic) long long currentMediaItemVideoRange;
@property (nonatomic, retain) TVPPlayerItem *currentPlayerItem;
@property (nonatomic) bool currentPlayerItemContainsDates;
@property (nonatomic) bool currentPlayerItemContainsRealDates;
@property (nonatomic, retain) NSDate *dateBeingSeekedTo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVPPlaybackDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, retain) NSMutableDictionary *elapsedTimeObserverBlocks;
@property (nonatomic) long long errorBehavior;
@property (nonatomic, retain) TVPExternalImagePlayer *externalImagePlayer;
@property (nonatomic, readonly) double forwardPlaybackEndTime;
@property (nonatomic) bool handleRemoteCommandsWithoutUpdatingMediaRemote;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ highFrequencyElapsedTimeObserverBlock;
@property (nonatomic, retain) id highFrequencyTimeObserverToken;
@property (nonatomic) struct CGSize { double x1; double x2; } iFramePrefetchMaxSize;
@property (nonatomic) bool initialMediaItemHasCompletedInitialLoading;
@property (nonatomic) bool interactive;
@property (nonatomic, retain) id interstitialBoundaryTimeObserverToken;
@property (nonatomic) bool invalidated;
@property (nonatomic) bool isLive;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastTimeSentToAVKitImageHandler;
@property (nonatomic) bool limitReadAhead;
@property (nonatomic) bool limitsBandwidthForCellularAccess;
@property (nonatomic) bool loadingInitialItemInPlaylist;
@property (nonatomic) double maximumBitRate;
@property (nonatomic, retain) NSString *mediaItemChangeReason;
@property (nonatomic) long long mediaItemEndAction;
@property (nonatomic, retain) NSMutableSet *mediaItemLoaders;
@property (nonatomic) bool mediaRemoteUpdatingEnabled;
@property (nonatomic) bool modifyingAVPlayerQueue;
@property (nonatomic) bool modifyingAVPlayerRate;
@property (nonatomic) bool muted;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long numOutstandingSeeks;
@property (nonatomic) bool outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) bool pausesOnHDCPProtectionDown;
@property (nonatomic) bool pausesOnRouteChange;
@property (nonatomic, copy) NSArray *pendingSelectedMediaArray;
@property (nonatomic, retain) id periodicTimeObserverToken;
@property (nonatomic, copy) NSDate *playbackDate;
@property (nonatomic, retain) NSDate *playbackDateAtStartOfSeek;
@property (nonatomic, retain) NSArray *playbackEndTimeBoundaryObserverTokens;
@property (nonatomic, retain) TVPPlayerItem *playerItemFromCacheManager;
@property (nonatomic, retain) TVPPlayerReporter *playerReporter;
@property (nonatomic, retain) TVPPlaylist *playlist;
@property (nonatomic, retain) TVPPlaylist *playlistInternal;
@property (nonatomic, retain) TVPPlaybackState *postAVKitScanningState;
@property (nonatomic, retain) TVPPlaybackState *postLoadingState;
@property (nonatomic) double preferredForwardBufferDuration;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredMaximumResolution;
@property (nonatomic) bool preventsSleepDuringVideoPlayback;
@property (nonatomic, retain) TVPProgressiveJumpingScrubber *progressiveJumpingScrubber;
@property (nonatomic, readonly) double rate;
@property (nonatomic) double rateUsedForPlayback;
@property (nonatomic) bool remainLoadingWhenSeekCompletes;
@property (nonatomic, readonly) double reversePlaybackEndTime;
@property (nonatomic) bool sceneCompletelyBuffered;
@property (nonatomic) bool screenIsBeingRecorded;
@property (nonatomic) int screenRecordingNotifyToken;
@property (nonatomic, readonly) TVPDateRange *seekableDateRange;
@property (nonatomic, readonly) TVPTimeRange *seekableTimeRange;
@property (nonatomic, retain) TVPAudioOption *selectedAudioOption;
@property (nonatomic, retain) TVPSubtitleOption *selectedSubtitleOption;
@property (nonatomic) bool sendsPlayerReports;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double startPosition;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startingSeekPrecision;
@property (nonatomic, readonly) TVPPlaybackState *state;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (nonatomic, retain) NSArray *subtitleOptions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *temporarySubtitleOverrideType;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeAtStartOfSeek;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timeBeingSeekedTo;
@property (nonatomic, retain) AVPlayerItem *unqueuedPlayerItem;
@property (nonatomic) bool updatesBookmarks;
@property (nonatomic) bool updatesMediaRemoteInfoAutomatically;
@property (nonatomic) bool usesLegacyDelegateBehavior;
@property (nonatomic, retain) NSHashTable *videoViewWeakReferences;
@property (nonatomic) float volume;
@property (nonatomic) bool waitsAfterPreparingMediaItems;

+ (id)_audioSelectionCriteriaForMediaItemLoader:(id)arg1;
+ (id)_newAVQueuePlayer;
+ (void)_playerDidBecomeInactive:(id)arg1;
+ (void)_playerWillBecomeActive:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (void)removeTemporaryDownloadDirectory;
+ (id)savedPreferredAudioLanguageCode;
+ (void)setSavedPreferredAudioLanguageCode:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)AVKitExternalImageScanningUpdateBlock;
- (id)AVQueuePlayer;
- (id)HDCPStatusPollTimer;
- (id)HDCPUnprotectedTooLongTimer;
- (void)_HDCPStatusPollTimerFired:(id)arg1;
- (void)_HDCPUnprotectedTooLongTimerFired:(id)arg1;
- (void)_addBoundaryTimeObserversToAVQueuePlayer:(id)arg1;
- (void)_addHighFrequencyTimeObserverIfNecessary;
- (void)_addObserversForMediaItem:(id)arg1;
- (void)_addObserversForMediaItemLoader:(id)arg1;
- (void)_addObserversForPlayerItem:(id)arg1;
- (void)_addObserversForPlaylist:(id)arg1;
- (void)_addObserversToAVQueuePlayer:(id)arg1;
- (void)_addPeriodicTimeObserverToAVQueuePlayer:(id)arg1;
- (void)_addPlaybackEndTimeBoundaryObservers;
- (id)_audioAssetTracksFromTracks:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)_avPlayerRateDidChangeTo:(float)arg1;
- (void)_avPlayerTimeDidChangeTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)_beingUsedForIFrameOnlyPlayback;
- (id)_bitRateString:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_clampInfiniteTimeToSeekableRange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_clampedElapsedTimeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_clampedSceneTimeForPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_configureSoundCheckForPlayerItem:(id)arg1 tracks:(id)arg2;
- (id)_currentDateFromPlayerItem:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_currentMediaItemForwardPlaybackEndTime;
- (void)_currentMediaItemMetadataDidChange:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_currentMediaItemReversePlaybackEndTime;
- (void)_currentPlayerItemAccessLogDidChange:(id)arg1;
- (void)_currentPlayerItemBufferEmptyDidChangeTo:(bool)arg1;
- (void)_currentPlayerItemBufferFullDidChangeTo:(bool)arg1;
- (bool)_currentPlayerItemCanScanAtRate:(double)arg1;
- (void)_currentPlayerItemDidChangeTo:(id)arg1;
- (void)_currentPlayerItemDidFailToPlayToEnd:(id)arg1;
- (void)_currentPlayerItemDidHitBeginningOrEnd:(id)arg1;
- (void)_currentPlayerItemDidStall:(id)arg1;
- (void)_currentPlayerItemDurationDidChangeTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_currentPlayerItemErrorLogDidChange:(id)arg1;
- (void)_currentPlayerItemHasVideoDidChangeTo:(bool)arg1;
- (void)_currentPlayerItemLikelyToKeepUpDidChangeTo:(bool)arg1;
- (void)_currentPlayerItemLoadedTimeRangesDidChangeTo:(id)arg1;
- (void)_currentPlayerItemMediaSelectionDidChange:(id)arg1;
- (void)_currentPlayerItemPresentationSizeDidChangeTo:(struct CGSize { double x1; double x2; })arg1;
- (void)_currentPlayerItemSeekableTimeRangesDidChangeTo:(id)arg1;
- (void)_currentPlayerItemStatusDidChangeTo:(long long)arg1 from:(long long)arg2;
- (void)_currentPlayerItemTimedMetadataDidChange;
- (void)_currentPlayerItemTracksDidChangeTo:(id)arg1 from:(id)arg2;
- (void)_currentPlayerItemWillChange;
- (id)_descriptionForVideoRange:(long long)arg1;
- (id)_descriptionForVideoResolutionClass:(long long)arg1;
- (void)_enqueueAsyncDelegateOperation:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_estimatedCMTimeForPlaybackDate:(id)arg1 referenceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referenceDate:(id)arg3;
- (id)_estimatedPlaybackDateForCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_externalPlaybackActiveDidChange;
- (bool)_getStringForTitleLabel:(id*)arg1 subtitleLabel:(id*)arg2 forMediaItem:(id)arg3;
- (bool)_hasDolbyAtmosForTracks:(id)arg1;
- (bool)_isPlaybackLikelyToKeepUp;
- (void)_logAccessLogEvents;
- (void)_logExternalPlaybackType;
- (void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2;
- (void)_notifyListenersOfElapsedTimeChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playbackDate:(id)arg2 dueToTimeJump:(bool)arg3;
- (void)_notifyOfBoundaryCrossingBetweenPreviousTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 updatedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_outputObscuredDidChangeTo:(bool)arg1 dueToKVONotification:(bool)arg2;
- (void)_playlistCurrentMediaItemDidChangeWithContext:(id)arg1;
- (void)_playlistCurrentMediaItemWillChangeWithContext:(id)arg1;
- (void)_playlistEndActionDidChange;
- (void)_playlistNextMediaItemDidChangeWithContext:(id)arg1;
- (void)_populateCurrentPlayerItemWithUpNextMetadata;
- (void)_populatePlayerItem:(id)arg1 withMetadataFromMediaItem:(id)arg2;
- (void)_postCurrentMediaItemDidChangeNotificationWithDirection:(id)arg1 reason:(id)arg2 didHitBeginningOfPlaylist:(bool)arg3 didHitEndOfPlaylist:(bool)arg4;
- (void)_postCurrentMediaItemWillChangeNotificationWithDirection:(id)arg1 reason:(id)arg2 didHitBeginningOfPlaylist:(bool)arg3 didHitEndOfPlaylist:(bool)arg4;
- (void)_preferVideoDescriptionsSettingDidChange;
- (void)_processNextAsyncDelegateOperation;
- (void)_registerStateMachineHandlers;
- (void)_removeBoundaryTimeObserversFromAVQueuePlayer:(id)arg1;
- (void)_removeHighFrequencyTimeObserverIfNecessary;
- (void)_removeObserversForMediaItem:(id)arg1;
- (void)_removeObserversForMediaItemLoader:(id)arg1;
- (void)_removeObserversForPlayerItem:(id)arg1;
- (void)_removeObserversForPlaylist:(id)arg1;
- (void)_removeObserversFromAVQueuePlayer:(id)arg1;
- (void)_removePeriodicTimeObserverFromAVQueuePlayer:(id)arg1;
- (void)_removePlaybackEndTimeBoundaryObservers;
- (void)_resetAndReselectAudioOptions;
- (void)_savePreferredAudioLanguageFromAudioOption:(id)arg1;
- (void)_selectMediaArray:(id)arg1 withItem:(id)arg2;
- (void)_setScrubPlayerItem:(id)arg1 onPlayerItem:(id)arg2;
- (void)_setSelectedSubtitleOption:(id)arg1 userOverridesSystemSubtitleSettings:(bool)arg2;
- (void)_setState:(id)arg1 updatedRate:(double)arg2 notifyListeners:(bool)arg3;
- (void)_setState:(id)arg1 updatedRate:(double)arg2 reason:(id)arg3 notifyListeners:(bool)arg4;
- (id)_soundCheckNormalizationForMediaItem:(id)arg1;
- (id)_statesThatReturnAVPlayerTime;
- (id)_statesThatReturnSeekTime;
- (id)_statesThatReturnStartTime;
- (void)_subtitleSettingsDidChange;
- (void)_timeControlStatusDidChangeTo:(long long)arg1;
- (long long)_tvpVideoRangeForVideoDynamicRange:(int)arg1;
- (void)_updateAVPlayerActionAtItemEnd;
- (void)_updateAudioSelectionCriteriaForMediaItemLoader:(id)arg1;
- (void)_updateIsLiveForElapsedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_updateMediaRemoteManager;
- (void)_updateMetadataWithVideoQualityColorRangeAndDolbyAtmosForPlayerItem:(id)arg1 tracks:(id)arg2;
- (void)_updateScreenRecordingState;
- (void)_updateSelectedSubtitleForFilteredOptions:(id)arg1;
- (void)_updateVideoViewsWithAVQueuePlayer:(id)arg1;
- (id)_videoAssetTracksFromTracks:(id)arg1;
- (int)_videoTrackIDFromTracks:(id)arg1;
- (id)accessLog;
- (id)addBoundaryTimeObserverForDates:(id)arg1 withHandler:(id /* block */)arg2;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 withHandler:(id /* block */)arg2;
- (id)addElapsedTimeObserver:(id /* block */)arg1;
- (void)addWeakReferenceToVideoView:(id)arg1;
- (id)asyncDelegate;
- (bool)asyncDelegateInProgress;
- (id)asyncDelegateOperations;
- (id)audioOptions;
- (void)avKitDidFinishScanning;
- (void)avKitSeekDidComplete;
- (id)avPlayer;
- (id)bookmarkMonitor;
- (id)boundaryTimeObserverInfos;
- (id)bufferedTimeRange;
- (float)cachedAVPlayerRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedElapsedTime;
- (id)cachedLoadedTimeRanges;
- (id)cachedSeekableTimeRanges;
- (id)cachedSelectedAudioOption;
- (void)changeMediaInDirection:(long long)arg1;
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2;
- (void)changeMediaInDirection:(long long)arg1 reason:(id)arg2 ignoreDelegate:(bool)arg3;
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2;
- (void)changeToMediaAtIndex:(unsigned long long)arg1 reason:(id)arg2 ignoreDelegate:(bool)arg3;
- (id)chapterBoundaryTimeObserverToken;
- (id)chapterCollections;
- (void)continueLoadingCurrentItem;
- (bool)createsPlayerItemButDoesNotEnqueue;
- (id)currentChapter;
- (id)currentChapterCollection;
- (long long)currentDirectionOfPlaylistChange;
- (id)currentInterstitial;
- (id)currentInterstitialCollection;
- (id)currentMediaItem;
- (bool)currentMediaItemHasDates;
- (bool)currentMediaItemHasVideoContent;
- (bool)currentMediaItemInitialLoadingComplete;
- (bool)currentMediaItemIsStreaming;
- (id)currentMediaItemLoader;
- (bool)currentMediaItemPreparedForLoading;
- (struct CGSize { double x1; double x2; })currentMediaItemPresentationSize;
- (bool)currentMediaItemSupportsScrubbingUsingPlayer;
- (long long)currentMediaItemVideoRange;
- (id)currentPlayerItem;
- (bool)currentPlayerItemContainsDates;
- (bool)currentPlayerItemContainsRealDates;
- (long long)currentScanMode;
- (id)dateBeingSeekedTo;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })durationCMTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })elapsedCMTime;
- (double)elapsedTime;
- (id)elapsedTimeObserverBlocks;
- (long long)errorBehavior;
- (id)errorLog;
- (id)externalImagePlayer;
- (long long)externalPlaybackType;
- (double)forwardPlaybackEndTime;
- (bool)handleRemoteCommandsWithoutUpdatingMediaRemote;
- (id /* block */)highFrequencyElapsedTimeObserverBlock;
- (id)highFrequencyTimeObserverToken;
- (struct CGSize { double x1; double x2; })iFramePrefetchMaxSize;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)initialMediaItemHasCompletedInitialLoading;
- (bool)interactive;
- (id)interstitialBoundaryTimeObserverToken;
- (void)invalidate;
- (bool)invalidated;
- (bool)isLive;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTimeSentToAVKitImageHandler;
- (bool)limitReadAhead;
- (bool)limitsBandwidthForCellularAccess;
- (bool)loadingInitialItemInPlaylist;
- (double)maximumBitRate;
- (id)mediaItemChangeReason;
- (long long)mediaItemEndAction;
- (id)mediaItemLoaders;
- (bool)mediaRemoteUpdatingEnabled;
- (bool)modifyingAVPlayerQueue;
- (bool)modifyingAVPlayerRate;
- (bool)muted;
- (id)name;
- (long long)numOutstandingSeeks;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)pauseIgnoringDelegate:(bool)arg1;
- (void)pauseWithAVKitCompletion:(id /* block */)arg1;
- (void)pauseWithVolumeRampDuration:(double)arg1;
- (bool)pausesOnHDCPProtectionDown;
- (bool)pausesOnRouteChange;
- (id)pendingSelectedMediaArray;
- (id)periodicTimeObserverToken;
- (void)play;
- (void)playIgnoringDelegate:(bool)arg1;
- (void)playWithAVKitCompletion:(id /* block */)arg1;
- (id)playbackDate;
- (id)playbackDateAtStartOfSeek;
- (id)playbackEndTimeBoundaryObserverTokens;
- (void)playerDidHitBeginningOrEnd;
- (id)playerItemFromCacheManager;
- (id)playerReporter;
- (id)playlist;
- (id)playlistInternal;
- (id)postAVKitScanningState;
- (id)postLoadingState;
- (double)preferredForwardBufferDuration;
- (struct CGSize { double x1; double x2; })preferredMaximumResolution;
- (bool)preventsSleepDuringVideoPlayback;
- (id)progressiveJumpingScrubber;
- (double)rate;
- (double)rateUsedForPlayback;
- (bool)remainLoadingWhenSeekCompletes;
- (void)removeBoundaryTimeObserverWithToken:(id)arg1;
- (void)removeElapsedTimeObserverWithToken:(id)arg1;
- (void)removeWeakReferenceToVideoView:(id)arg1;
- (double)reversePlaybackEndTime;
- (void)scanWithRate:(double)arg1;
- (void)scanWithRate:(double)arg1 withAVKitCompletion:(id /* block */)arg2;
- (bool)sceneCompletelyBuffered;
- (bool)screenIsBeingRecorded;
- (int)screenRecordingNotifyToken;
- (id)seekableDateRange;
- (id)seekableTimeRange;
- (bool)seeking;
- (void)selectMediaArray:(id)arg1;
- (id)selectedAudioOption;
- (id)selectedSubtitleOption;
- (bool)sendsPlayerReports;
- (void)setAVKitExternalImageScanningUpdateBlock:(id /* block */)arg1;
- (void)setAVQueuePlayer:(id)arg1;
- (void)setAsyncDelegate:(id)arg1;
- (void)setAsyncDelegateInProgress:(bool)arg1;
- (void)setAsyncDelegateOperations:(id)arg1;
- (void)setAudioOptions:(id)arg1;
- (void)setBookmarkMonitor:(id)arg1;
- (void)setBoundaryTimeObserverInfos:(id)arg1;
- (void)setCachedAVPlayerRate:(float)arg1;
- (void)setCachedDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedElapsedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedLoadedTimeRanges:(id)arg1;
- (void)setCachedSeekableTimeRanges:(id)arg1;
- (void)setCachedSelectedAudioOption:(id)arg1;
- (void)setChapterBoundaryTimeObserverToken:(id)arg1;
- (void)setChapterCollections:(id)arg1;
- (void)setCreatesPlayerItemButDoesNotEnqueue:(bool)arg1;
- (void)setCurrentChapter:(id)arg1;
- (void)setCurrentChapterCollection:(id)arg1;
- (void)setCurrentDirectionOfPlaylistChange:(long long)arg1;
- (void)setCurrentInterstitial:(id)arg1;
- (void)setCurrentInterstitialCollection:(id)arg1;
- (void)setCurrentMediaItem:(id)arg1;
- (void)setCurrentMediaItemHasDates:(bool)arg1;
- (void)setCurrentMediaItemHasVideoContent:(bool)arg1;
- (void)setCurrentMediaItemInitialLoadingComplete:(bool)arg1;
- (void)setCurrentMediaItemIsStreaming:(bool)arg1;
- (void)setCurrentMediaItemLoader:(id)arg1;
- (void)setCurrentMediaItemPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentMediaItemVideoRange:(long long)arg1;
- (void)setCurrentPlayerItem:(id)arg1;
- (void)setCurrentPlayerItemContainsDates:(bool)arg1;
- (void)setCurrentPlayerItemContainsRealDates:(bool)arg1;
- (void)setDateBeingSeekedTo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(id /* block */)arg3;
- (void)setElapsedTime:(double)arg1 precise:(bool)arg2;
- (void)setElapsedTime:(double)arg1 seekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setElapsedTime:(double)arg1 seekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ignoreDelegate:(bool)arg3;
- (void)setElapsedTime:(double)arg1 seekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 ignoreDelegate:(bool)arg3 withAVKitCompletion:(id /* block */)arg4;
- (void)setElapsedTimeObserverBlocks:(id)arg1;
- (void)setErrorBehavior:(long long)arg1;
- (void)setExternalImagePlayer:(id)arg1;
- (void)setHDCPStatusPollTimer:(id)arg1;
- (void)setHDCPUnprotectedTooLongTimer:(id)arg1;
- (void)setHandleRemoteCommandsWithoutUpdatingMediaRemote:(bool)arg1;
- (void)setHighFrequencyElapsedTimeObserverBlock:(id /* block */)arg1;
- (void)setHighFrequencyTimeObserverToken:(id)arg1;
- (void)setIFramePrefetchMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInitialMediaItemHasCompletedInitialLoading:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setInterstitialBoundaryTimeObserverToken:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setIsLive:(bool)arg1;
- (void)setLastTimeSentToAVKitImageHandler:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLimitReadAhead:(bool)arg1;
- (void)setLimitsBandwidthForCellularAccess:(bool)arg1;
- (void)setLoadingInitialItemInPlaylist:(bool)arg1;
- (void)setMaximumBitRate:(double)arg1;
- (void)setMediaItemChangeReason:(id)arg1;
- (void)setMediaItemEndAction:(long long)arg1;
- (void)setMediaItemLoaders:(id)arg1;
- (void)setMediaRemoteUpdatingEnabled:(bool)arg1;
- (void)setModifyingAVPlayerQueue:(bool)arg1;
- (void)setModifyingAVPlayerRate:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setNumOutstandingSeeks:(long long)arg1;
- (void)setOutputObscuredDueToInsufficientExternalProtection:(bool)arg1;
- (void)setPausesOnHDCPProtectionDown:(bool)arg1;
- (void)setPausesOnRouteChange:(bool)arg1;
- (void)setPendingSelectedMediaArray:(id)arg1;
- (void)setPeriodicTimeObserverToken:(id)arg1;
- (void)setPlaybackDate:(id)arg1;
- (void)setPlaybackDate:(id)arg1 withAVKitCompletion:(id /* block */)arg2;
- (void)setPlaybackDateAtStartOfSeek:(id)arg1;
- (void)setPlaybackEndTimeBoundaryObserverTokens:(id)arg1;
- (void)setPlaybackHUDString:(id)arg1;
- (void)setPlayerItemFromCacheManager:(id)arg1;
- (void)setPlayerReporter:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setPlaylistInternal:(id)arg1;
- (void)setPostAVKitScanningState:(id)arg1;
- (void)setPostLoadingState:(id)arg1;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)setPreferredMaximumResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)setProgressiveJumpingScrubber:(id)arg1;
- (void)setRateUsedForPlayback:(double)arg1;
- (void)setRemainLoadingWhenSeekCompletes:(bool)arg1;
- (void)setSceneCompletelyBuffered:(bool)arg1;
- (void)setScreenIsBeingRecorded:(bool)arg1;
- (void)setScreenRecordingNotifyToken:(int)arg1;
- (void)setSelectedAudioOption:(id)arg1;
- (void)setSelectedSubtitleOption:(id)arg1;
- (void)setSelectedSubtitleOption:(id)arg1 setGlobalPreference:(bool)arg2;
- (void)setSendsPlayerReports:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartPosition:(double)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStartingSeekPrecision:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStateMachine:(id)arg1;
- (void)setSubtitleOptions:(id)arg1;
- (void)setTemporarySubtitleOverrideType:(id)arg1;
- (void)setTimeAtStartOfSeek:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimeBeingSeekedTo:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUnqueuedPlayerItem:(id)arg1;
- (void)setUpdatesBookmarks:(bool)arg1;
- (void)setUpdatesMediaRemoteInfoAutomatically:(bool)arg1;
- (void)setUsesLegacyDelegateBehavior:(bool)arg1;
- (void)setVideoViewWeakReferences:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setWaitsAfterPreparingMediaItems:(bool)arg1;
- (void)skipToNextChapterInDirection:(long long)arg1;
- (id)startDate;
- (double)startPosition;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startingSeekPrecision;
- (id)state;
- (id)stateMachine;
- (void)stop;
- (void)stopWithVolumeRampDuration:(double)arg1;
- (id)subtitleOptions;
- (id)temporarySubtitleOverrideType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeAtStartOfSeek;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeBeingSeekedTo;
- (id)timedMetadata;
- (void)togglePlayPause;
- (id)tvp_PlaybackErrorFromError:(id)arg1;
- (id)unqueuedPlayerItem;
- (void)updateSubtitleOptions;
- (void)updateSubtitleOptionsAndSelection;
- (bool)updatesBookmarks;
- (bool)updatesMediaRemoteInfoAutomatically;
- (bool)usesLegacyDelegateBehavior;
- (id)videoViewWeakReferences;
- (float)volume;
- (bool)waitsAfterPreparingMediaItems;

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
