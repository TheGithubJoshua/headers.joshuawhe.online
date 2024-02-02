<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPCReportingPlaybackObserver.h</title>
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

/PrivateFrameworks/MediaPlaybackCore.framework/MPCReportingPlaybackObserver.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore (1)
 */

@interface MPCReportingPlaybackObserver : NSObject {
    bool  _SBEnabled;
    NSData * _currentJingleReportingTimedMetadata;
    bool  _hasPendingContainerChange;
    bool  _hasSetLastPlayEventTimeStamp;
    bool  _isReloadingWithPlaybackContext;
    bool  _isScrubbing;
    MPAVItem * _itemForCurrentTimeChange;
    double  _lastPlayEventEndTimeForCurrentItem;
    double  _lastPlayEventTimeStamp;
    bool  _offline;
    MPAVController * _player;
    NSOperationQueue * _recordEventOperationQueue;
    MPCReportingController * _reportingController;
    bool  _shouldReportAsPlaying;
    double  _startTimeForCurrentTimeChange;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
}

@property (getter=isSBEnabled, nonatomic) bool SBEnabled;
@property (getter=isOffline, nonatomic) bool offline;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) MPCReportingController *reportingController;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;

- (void).cxx_destruct;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (double)_itemStartTimeForItem:(id)arg1;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_sendPlaybackEndNotification:(double)arg1 endTime:(double)arg2;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)dealloc;
- (void)didHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (bool)isOffline;
- (bool)isSBEnabled;
- (id)newPlayActivityEvent;
- (id)player;
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;
- (void)recordUserSeekFromTime:(double)arg1 toTime:(double)arg2 forItem:(id)arg3;
- (id)reportingController;
- (void)setOffline:(bool)arg1;
- (void)setSBEnabled:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;
- (void)willHitPlaybackTimeoutEndingPlayback:(bool)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

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