<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKTranscriptCollectionViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKTranscriptCollectionViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKTranscriptCollectionViewController : CKViewController <CKAssociatedMessageTranscriptCellDelegate, CKAudioControllerDelegate, CKFullScreenEffectManagerDelegate, CKLocationShareBalloonViewDelegate, CKLocationSharingDelegate, CKMovieBalloonViewDelegate, CKPluginPlaybackManagerDelegate, CKSendAnimationManagerDelegate, CKTitledImageBalloonViewDelegate, CKTranscriptCollectionViewDelegate, CNAvatarViewDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    NSString * ___CurrentTestName;
    id /* block */  _alertHandler;
    bool  _allowsPluginPlayback;
    NSArray * _associatedChatItems;
    CKAudioController * _audioController;
    double  _balloonMaxWidth;
    NSArray * _bulletins;
    NSArray * _chatItems;
    CKTranscriptCollectionView * _collectionView;
    long long  _contentAnimationPauseReasons;
    CKConversation * _conversation;
    NSMutableSet * _currentEffectDecorationViews;
    <CKTranscriptCollectionViewControllerDelegate> * _delegate;
    <UIDragInteractionDelegate> * _dragInteractionDelegate;
    bool  _filterAllButFirstMessage;
    CKFullScreenEffectManager * _fullscreenEffectManager;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    bool  _hasHiddenItems;
    NSIndexSet * _hiddenBalloonViews;
    NSIndexSet * _hiddenItems;
    CKImpactEffectManager * _impactEffectManager;
    bool  _initialLoad;
    bool  _isLoadingMoreMessages;
    bool  _isPerformingRegenerateOnlyUpdate;
    NSIndexPath * _itemIndexPathToHighlight;
    UITapGestureRecognizer * _loggingTapGestureRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    NSString * _mostRecentlyTouchedPlugin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _peekSampleTranslation;
    bool  _peeking;
    bool  _playedLastImpactEffectForTransitionFromComposing;
    double  _pluginPlaybackDelay;
    CKPluginPlaybackManager * _pluginPlaybackManager;
    bool  _shouldLoadDefaultConversationViewingMessageCountOnAppear;
    bool  _shouldUseOpaqueMask;
    bool  _sizedFullTranscript;
    UIView * _snapshotOfPluginBeingReplacedByBreadcrumb;
    NSString * _speakerTransferGUID;
    UIView<CKFullscreenEffectView> * _topEffectView;
    bool  _transcriptUpdateAnimated;
    id /* block */  _transcriptUpdateCompletion;
    bool  _transitionedFromComposing;
    NSObject<OS_dispatch_group> * _updateAnimationGroup;
}

@property (setter=__setCurrentTestName:, nonatomic, retain) NSString *__CurrentTestName;
@property (nonatomic, copy) id /* block */ alertHandler;
@property (nonatomic) bool allowsPluginPlayback;
@property (nonatomic, copy) NSArray *associatedChatItems;
@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic) double balloonMaxWidth;
@property (nonatomic, copy) NSArray *bulletins;
@property (nonatomic, readonly) IMChat *chat;
@property (nonatomic, copy) NSArray *chatItems;
@property (nonatomic, retain) CKTranscriptCollectionView *collectionView;
@property (nonatomic) long long contentAnimationPauseReasons;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) NSMutableSet *currentEffectDecorationViews;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKTranscriptCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UIDragInteractionDelegate> *dragInteractionDelegate;
@property (nonatomic) bool filterAllButFirstMessage;
@property (nonatomic, retain) CKFullScreenEffectManager *fullscreenEffectManager;
@property (nonatomic, retain) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) bool hasHiddenItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexSet *hiddenBalloonViews;
@property (nonatomic, copy) NSIndexSet *hiddenItems;
@property (nonatomic, retain) CKImpactEffectManager *impactEffectManager;
@property (getter=isInitialLoad, nonatomic) bool initialLoad;
@property (nonatomic) bool isLoadingMoreMessages;
@property (nonatomic) bool isPerformingRegenerateOnlyUpdate;
@property (nonatomic, retain) UITapGestureRecognizer *loggingTapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) NSString *mostRecentlyTouchedPlugin;
@property (nonatomic) struct CGPoint { double x1; double x2; } peekSampleTranslation;
@property (getter=isPeeking, nonatomic) bool peeking;
@property (nonatomic) bool playedLastImpactEffectForTransitionFromComposing;
@property (nonatomic) double pluginPlaybackDelay;
@property (nonatomic, retain) CKPluginPlaybackManager *pluginPlaybackManager;
@property (nonatomic) bool shouldLoadDefaultConversationViewingMessageCountOnAppear;
@property (nonatomic) bool shouldUseOpaqueMask;
@property (nonatomic) bool sizedFullTranscript;
@property (nonatomic, retain) UIView *snapshotOfPluginBeingReplacedByBreadcrumb;
@property (nonatomic, copy) NSString *speakerTransferGUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<CKFullscreenEffectView> *topEffectView;
@property (getter=isTranscriptUpdateAnimated, nonatomic) bool transcriptUpdateAnimated;
@property (nonatomic, copy) id /* block */ transcriptUpdateCompletion;
@property (nonatomic) bool transitionedFromComposing;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *updateAnimationGroup;

- (void).cxx_destruct;
- (id)__CurrentTestName;
- (void)__handleLoggingTapped:(id)arg1;
- (void)__setCurrentTestName:(id)arg1;
- (bool)_allowsEffectAutoPlayback;
- (double)_balloonHorizontalOffsetForParentChatItem:(id)arg1 contentAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 responsibleChatItems:(id*)arg3 individualOffsets:(id*)arg4;
- (void)_collectionViewDidRestAsync:(bool)arg1;
- (void)_deferredStartPlayback;
- (void)_diffAssociatedItemsWithOldAssociatedItems:(id)arg1 removedAssociatedIndexes:(id*)arg2 insertedAssociatedIndexes:(id*)arg3;
- (void)_downgradeMessageAtIndexPath:(id)arg1;
- (void)_handleAssociatedMessageCellTapEvent:(id)arg1 isDoubleTap:(bool)arg2;
- (void)_hideBalloonViewIfNecessaryForCell:(id)arg1 indexPath:(id)arg2;
- (void)_highlightCell:(id)arg1;
- (unsigned long long)_indexOfBreadcrumbReplacingTranscriptPluginInChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outIndexOfReplacedPlugin:(unsigned long long*)arg4 outIndexOfNewPlugin:(unsigned long long*)arg5;
- (void)_indicesOfTranscriptPluginChatItemRemoveAndInsertedWithoutFading:(id)arg1 inserted:(id)arg2 removed:(id)arg3 outInsertIndices:(id*)arg4 outRemoveIndices:(id*)arg5;
- (void)_launchTapToRadar;
- (id)_localLogDumpButtonTitle;
- (void)_performLocalLogDump;
- (void)_performRemoteLogDump;
- (bool)_pluginChatItem:(id)arg1 hasControllerConformingToProtocol:(id)arg2;
- (void)_prewarmBalloonControllers;
- (void)_prewarmTranscriptAssetsIfNecessary;
- (void)_refreshLocationsForRecipientsIfNecessary;
- (void)_releaseActiveBalloonControllers;
- (id)_remoteLogDumpButtonTitle;
- (void)_replayLastImpactEffectIfNotFromMe;
- (void)_resendMessageAtIndexPath:(id)arg1;
- (void)_setupLoggingTapGestureRecognizer;
- (bool)_shouldShowInternalUILogging;
- (bool)_shouldShowUILogging;
- (void)_showLoggingAlertIfNecessary;
- (void)_startPlaybackWithIndexPaths:(id)arg1;
- (void)_tearDownLiveBubbles;
- (void)_tearDownLoggingTapGestureRecognizer;
- (void)_updateEffectViewMessageRect:(id)arg1 effect:(id)arg2;
- (void)_updatePluginPlaybackManagerForInsertedChatItems:(id)arg1;
- (void)addContentAnimationPauseReasons:(long long)arg1;
- (void)addressBookChanged:(id)arg1;
- (id /* block */)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)allowsPluginPlayback;
- (id)associatedChatItems;
- (void)associatedMessageTranscriptCellDoubleTapped:(id)arg1;
- (void)associatedMessageTranscriptCellLongTouched:(id)arg1;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)audioControllerPlayingDidChange:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (double)balloonMaxWidth;
- (id)balloonPluginForViewController:(id)arg1;
- (void)balloonView:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)balloonViewDoubleTapped:(id)arg1;
- (id)balloonViewForChatItem:(id)arg1;
- (id)balloonViewForIndexPath:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (void)balloonViewTitleTapped:(id)arg1;
- (id)bulletins;
- (bool)canRaiseToListen;
- (bool)canRaiseToTalk;
- (id)cellForAssociatedChatItem:(id)arg1;
- (id)cellForChatItem:(id)arg1;
- (id)chat;
- (id)chatForSendAnimationManager:(id)arg1;
- (id)chatItemForCell:(id)arg1;
- (void)chatItemIsFilteredChanged:(id)arg1;
- (id)chatItemWithBulletin:(id)arg1;
- (id)chatItemWithIMChatItem:(id)arg1;
- (id)chatItems;
- (void)chatItemsDidChange:(id)arg1;
- (id)chatItemsWithBulletins:(id)arg1;
- (id)chatItemsWithIMChatItems:(id)arg1;
- (void)chatRegistryDidLoad:(id)arg1;
- (void)clearRecentPluginTouch;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 chatItemForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 layout:(id)arg2 chatItemForSupplementaryViewAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionViewControllerForImpactEffectManager:(id)arg1;
- (void)collectionViewDidInset:(id)arg1;
- (id)collectionViewLayout;
- (void)collectionViewLayout:(id)arg1 sizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)collectionViewLayoutRestingDidChange:(id)arg1;
- (void)collectionViewWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(id)arg1 animated:(bool)arg2;
- (void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg2;
- (void)configureAssociatedCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)configureSpeakerButtonCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)contentAnimationPauseReasons;
- (id)conversation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertedBoundsToCullFromView:(id)arg1;
- (void)cullCellSubviews;
- (id)currentEffectDecorationViews;
- (id)currentEffectForCollectionView:(id)arg1 layout:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deleteSelectedItems:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)dragInteractionDelegate;
- (void)effectManager:(id)arg1 didStartEffect:(id)arg2;
- (void)effectManager:(id)arg1 didStopEffect:(id)arg2;
- (void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
- (bool)filterAllButFirstMessage;
- (id)fullscreenEffectManager;
- (id)gradientReferenceView;
- (bool)hasHiddenItems;
- (bool)hasRecentTouchForSendingPlugin:(id)arg1;
- (id)hiddenBalloonViews;
- (id)hiddenItems;
- (void)highlightItemAtIndexPathWhenDisplayed:(id)arg1;
- (id)impactEffectManager;
- (id)indexPathForBalloonView:(id)arg1;
- (id)initWithConversation:(id)arg1 balloonMaxWidth:(double)arg2 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithConversation:(id)arg1 bulletins:(id)arg2 balloonMaxWidth:(double)arg3 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4;
- (void)installedAppsChanged:(id)arg1;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)isInitialLoad;
- (bool)isLoadingMoreMessages;
- (bool)isPeeking;
- (bool)isPerformingRegenerateOnlyUpdate;
- (bool)isTranscriptUpdateAnimated;
- (bool)isVisiblePlugin:(id)arg1;
- (id)lastMessagePartChatItem;
- (void)liveBalloonTouched:(id)arg1;
- (void)liveViewController:(id)arg1 requestPresentationStyle:(unsigned long long)arg2;
- (void)liveViewController:(id)arg1 stagePayload:(id)arg2 skipShelf:(bool)arg3 allowAllCommits:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)liveViewController:(id)arg1 stageSticker:(id)arg2 skipShelf:(bool)arg3 allowAllCommits:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)loadEarlierMessages;
- (void)loadEarlierMessagesIfNeeded;
- (void)loadMoreRecentMessages;
- (void)loadView;
- (void)locationShareBalloonViewIgnoreButtonTapped:(id)arg1;
- (void)locationShareBalloonViewShareButtonTapped:(id)arg1;
- (void)locationSharingClient:(id)arg1 showShareLocationMenuWithBalloonPluginView:(id)arg2;
- (void)locationStringDidChange:(id)arg1;
- (id)loggingTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)messagePartForBalloonView:(id)arg1;
- (id)mostRecentlyTouchedPlugin;
- (void)multiwayCallStateChanged:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)parentControllerDidBecomeActive;
- (struct CGPoint { double x1; double x2; })peekSampleTranslation;
- (void)performResumeDeferredSetup;
- (bool)playedLastImpactEffectForTransitionFromComposing;
- (double)pluginPlaybackDelay;
- (id)pluginPlaybackManager;
- (void)pluginPlaybackManagerDidStopPlayback:(id)arg1;
- (void)prepareForSuspend;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)previewDidChange:(id)arg1;
- (void)raiseGestureRecognized:(id)arg1;
- (void)reconfigureVisibleSpeakerButtonCells;
- (void)reloadData;
- (void)removeContentAnimationPauseReasons:(long long)arg1;
- (void)scrollToTopOfLastBubbleCellAnimated:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)selectChatItem:(id)arg1;
- (id)selectedItems;
- (void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)setAlertHandler:(id /* block */)arg1;
- (void)setAllowsPluginPlayback:(bool)arg1;
- (void)setAssociatedChatItems:(id)arg1;
- (void)setAudioController:(id)arg1;
- (void)setBalloonMaxWidth:(double)arg1;
- (void)setBulletins:(id)arg1;
- (void)setChatItems:(id)arg1;
- (void)setChatItems:(id)arg1 removedAssociatedIndexes:(id*)arg2 insertedAssociatedIndexes:(id*)arg3;
- (void)setCollectionView:(id)arg1;
- (void)setContentAnimationPauseReasons:(long long)arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentEffectDecorationViews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragInteractionDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFilterAllButFirstMessage:(bool)arg1;
- (void)setFullscreenEffectManager:(id)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setHasHiddenItems:(bool)arg1;
- (void)setHiddenBalloonViews:(id)arg1;
- (void)setHiddenItems:(id)arg1;
- (void)setImpactEffectManager:(id)arg1;
- (void)setInitialLoad:(bool)arg1;
- (void)setIsLoadingMoreMessages:(bool)arg1;
- (void)setIsPerformingRegenerateOnlyUpdate:(bool)arg1;
- (void)setLoggingTapGestureRecognizer:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMostRecentlyTouchedPlugin:(id)arg1;
- (void)setPeekSampleTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeeking:(bool)arg1;
- (void)setPlayedLastImpactEffectForTransitionFromComposing:(bool)arg1;
- (void)setPluginPlaybackDelay:(double)arg1;
- (void)setPluginPlaybackManager:(id)arg1;
- (void)setScrollAnchor:(double)arg1;
- (void)setSelectedItems:(id)arg1;
- (void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(bool)arg1;
- (void)setShouldUseOpaqueMask:(bool)arg1;
- (void)setSizedFullTranscript:(bool)arg1;
- (void)setSnapshotOfPluginBeingReplacedByBreadcrumb:(id)arg1;
- (void)setSpeakerTransferGUID:(id)arg1;
- (void)setTopEffectView:(id)arg1;
- (void)setTranscriptUpdateAnimated:(bool)arg1;
- (void)setTranscriptUpdateCompletion:(id /* block */)arg1;
- (void)setTransitionedFromComposing:(bool)arg1;
- (void)setUpdateAnimationGroup:(id)arg1;
- (bool)shouldLoadDefaultConversationViewingMessageCountOnAppear;
- (bool)shouldUseOpaqueMask;
- (void)sizeFullTranscriptIfNecessary;
- (bool)sizedFullTranscript;
- (void)snapshotDidChange:(id)arg1;
- (id)snapshotOfPluginBeingReplacedByBreadcrumb;
- (void)snapshotTaken:(id)arg1;
- (id)speakerTransferGUID;
- (void)startFullscreenEffectIfNeededForChatItem:(id)arg1;
- (void)startPluginPlaybackAfterDelay:(double)arg1;
- (void)stopFullscreenEffect;
- (void)stopPlayingAudio;
- (void)stopPluginPlayback;
- (id)topEffectView;
- (void)touchUpInsideCellFailureButton:(id)arg1;
- (void)touchUpInsideCellReportSpamButton:(id)arg1;
- (void)touchUpInsideCellSpeakerButton:(id)arg1;
- (void)touchUpInsideCellStatusButton:(id)arg1;
- (id /* block */)transcriptUpdateCompletion;
- (void)transferRestored:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (bool)transitionedFromComposing;
- (void)tuConversationBalloonJoinButtonTapped:(id)arg1;
- (id)updateAnimationGroup;
- (void)updateAnimationPaused;
- (void)updateEffectViewMessageRects;
- (void)updateLastAddressedHandleID:(id)arg1 lastAddressedSIMID:(id)arg2;
- (void)updateTranscript:(id /* block */)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(bool)arg6 checkFiltered:(bool)arg7 completion:(id /* block */)arg8;
- (void)updateTranscriptChatItems:(id)arg1 inserted:(id)arg2 removed:(id)arg3 reload:(id)arg4 regenerate:(id)arg5 animated:(bool)arg6 completion:(id /* block */)arg7;
- (void)verticallyScrollTranscriptByAmount:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsDrawerLayout;

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
