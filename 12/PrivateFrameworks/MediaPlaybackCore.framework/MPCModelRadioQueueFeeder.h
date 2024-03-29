<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPCModelRadioQueueFeeder.h</title>
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

/PrivateFrameworks/MediaPlaybackCore.framework/MPCModelRadioQueueFeeder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore (1)
 */

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining> {
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    MPAVItem * _currentItem;
    bool  _hasLoadedAdditionalItemsForCurrentItem;
    <MPAVItemQueueIdentifier> * _lastCleanPlayedIdentifier;
    <MPAVItemQueueIdentifier> * _lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse * _lastResponse;
    long long  _loadingOperationDepth;
    NSOperationQueue * _loadingOperationQueue;
    bool  _mayHaveRestrictedContent;
    ICUserIdentityStore * _observedIdentityStore;
    SSVPlayActivityController * _playActivityController;
    MPCModelRadioPlaybackQueue * _playbackQueue;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    ICUserIdentity * _proactiveCacheIdentity;
    long long  _queueGeneration;
    NSString * _siriAssetInfo;
    ICStoreRequestContext * _storeRequestContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_beginObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_endObservingIdentityStoreForSignOut;
- (void)_failAfterRequest:(id)arg1 withError:(id)arg2;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (long long)_indexOfAVItem:(id)arg1;
- (void)_loadAdditionalItemsIfNeeded;
- (void)_loadTracksWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (id)_startPlaybackRequestWithPlaybackContext:(id)arg1;
- (void)_updateProactiveCaching;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)init;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (bool)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)modelPlayEvent;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (bool)preventsHardQueueModificationsForItem:(id)arg1;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (id)rtcReportingSessionAdditionalUserInfo;
- (bool)userCanChangeShuffleAndRepeatType;

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
