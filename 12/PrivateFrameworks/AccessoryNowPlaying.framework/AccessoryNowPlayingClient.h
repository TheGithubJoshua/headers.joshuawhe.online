<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AccessoryNowPlayingClient.h</title>
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

/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlayingClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccessoryNowPlaying.framework/AccessoryNowPlaying (1)
 */

@interface AccessoryNowPlayingClient : NSObject <AccessoryNowPlayingXPCClientProtocol> {
    <AccessoryNowPlayingClientProtocol> * _delegate;
    <AccessoryNowPlayingXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
    bool  _shouldSendArtwork;
    NSSet * _subscriberList;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AccessoryNowPlayingClientProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <AccessoryNowPlayingXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (nonatomic) bool shouldSendArtwork;
@property (nonatomic, readonly) bool shouldSendPlaybackQueueList;
@property (nonatomic, retain) NSSet *subscriberList;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelRequestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2;
- (void)connectToServer;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)mediaItemArtworkDidChange;
- (void)mediaItemAttributesDidChange:(id)arg1;
- (void)playbackAttributesDidChange:(id)arg1;
- (void)playbackQueueListDidChange;
- (void)playbackQueueListInfoResponse:(id)arg1 requestID:(id)arg2 info:(id)arg3;
- (id)remoteObject;
- (void)requestPlaybackQueueListInfo:(id)arg1 requestID:(id)arg2 startIndex:(unsigned int)arg3 upToCount:(unsigned int)arg4 infoMask:(unsigned int)arg5;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setPlaybackElapsedTime:(id)arg1 withReply:(id /* block */)arg2;
- (void)setPlaybackQueueIndex:(id)arg1 withReply:(id /* block */)arg2;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)setShouldSendArtwork:(bool)arg1;
- (void)setSubscriberList:(id)arg1;
- (bool)shouldSendArtwork;
- (bool)shouldSendPlaybackQueueList;
- (id)subscriberList;
- (void)triggerMediaItemArtworkUpdateWithReply:(id /* block */)arg1;
- (void)triggerMediaItemAttributesUpdateWithReply:(id /* block */)arg1;
- (void)triggerPlaybackAttributesUpdateWithReply:(id /* block */)arg1;
- (void)updateSubscriberList:(id)arg1 WithReply:(id /* block */)arg2;

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
