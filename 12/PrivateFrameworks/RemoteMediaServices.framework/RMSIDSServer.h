<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RMSIDSServer.h</title>
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

/PrivateFrameworks/RemoteMediaServices.framework/RMSIDSServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices (1)
 */

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSControlSessionDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSSessionManagerDelegate> {
    IDSService * _idsService;
    NSMutableDictionary * _nowPlayingSessions;
    NSMutableDictionary * _pairingCompletionHandlers;
    NSMutableDictionary * _pairingSessions;
    RMSSessionManager * _sessionManager;
    NSMutableDictionary * _touchRemoteSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)server;

- (void).cxx_destruct;
- (void)_cleanupStaleSessions:(id)arg1;
- (void)_handleAddToWishlist:(id)arg1;
- (void)_handleBeginDiscovery:(id)arg1;
- (void)_handleBeginObservingNowPlaying:(id)arg1;
- (void)_handleBeginPairing:(id)arg1;
- (void)_handleConnectToService:(id)arg1;
- (void)_handleEndDiscovery:(id)arg1;
- (void)_handleEndObservingNowPlaying:(id)arg1;
- (void)_handleEndPairing:(id)arg1;
- (void)_handleLogout:(id)arg1;
- (void)_handleNavigationCommand:(id)arg1;
- (void)_handleNowPlayingArtworkRequest:(id)arg1;
- (void)_handlePairingChallengeResponse:(id)arg1;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handlePlaybackCommand:(id)arg1;
- (void)_handleSeekToPlaybackTime:(id)arg1;
- (void)_handleSendText:(id)arg1;
- (void)_handleSessionHeartbeat:(id)arg1;
- (void)_handleSetLikeState:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (void)_handleTouchEnd:(id)arg1;
- (void)_handleTouchMove:(id)arg1;
- (void)_handleUnpairService:(id)arg1;
- (void)_handleUpdatePairedNetworkNames:(id)arg1;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 timeout:(int)arg4 queueOneID:(id)arg5 inResponseTo:(id)arg6;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 inResponseTo:(id)arg5;
- (void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)controlSession:(id)arg1 didReceivePairingChallengeRequestWithCredentials:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;
- (void)controlSessionDidBeginEditingText:(id)arg1;
- (void)controlSessionDidEnd:(id)arg1;
- (void)controlSessionDidEndEditingText:(id)arg1;
- (void)discoverySessionDidUpdateAvailableServices:(id)arg1;
- (void)discoverySessionNetworkAvailabilityDidChange:(id)arg1;
- (id)init;
- (void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingSessionDidFail:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sessionManager:(id)arg1 sessionDidTimeout:(id)arg2 withIdentifier:(int)arg3;

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
