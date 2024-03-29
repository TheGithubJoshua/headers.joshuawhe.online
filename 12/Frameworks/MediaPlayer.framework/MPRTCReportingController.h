<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPRTCReportingController.h</title>
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

/Frameworks/MediaPlayer.framework/MPRTCReportingController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver> {
    NSString * _clientName;
    int  _clientType;
    long long  _clientVersion;
    long long  _currentInterfaceType;
    MPAVItem * _currentItem;
    bool  _isReloadingWithPlaybackContext;
    MPQueueFeeder * _pendingFailureQueueFeeder;
    MPAVController * _player;
    NSNumber * _tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent * _tracklistSummaryEvent;
    NSMutableDictionary * _uniqueIdentifierToReportingSession;
    NSMutableDictionary * _uniqueIdentifierToSummaryEvent;
}

@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly) int clientType;
@property (nonatomic, readonly) long long clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPAVController *player;
@property (readonly) Class superclass;

+ (long long)defaultClientVersion;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;

- (void).cxx_destruct;
- (void)_avControllerBufferingStateDidChangeNotification:(id)arg1;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerItemWillChangeNotification:(id)arg1;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avItemAssetLoadedNotification:(id)arg1;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3;
- (void)_configureBaseEventPropertiesForEvent:(id)arg1;
- (void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2;
- (void)_handleDeallocationForUniqueIdentifier:(id)arg1;
- (void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2;
- (bool)_isAVItemReadyForReportingSessionInitialization:(id)arg1;
- (bool)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_newReportingSession;
- (id)_preparedSummaryEventForAVItem:(id)arg1;
- (id)_reportingSessionForAVItem:(id)arg1;
- (void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2;
- (id)_uniqueIdentifierForAVItem:(id)arg1;
- (id)clientName;
- (int)clientType;
- (long long)clientVersion;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4;
- (id)player;

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
