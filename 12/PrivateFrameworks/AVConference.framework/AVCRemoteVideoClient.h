<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCRemoteVideoClient.h</title>
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

/PrivateFrameworks/AVConference.framework/AVCRemoteVideoClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface AVCRemoteVideoClient : NSObject {
    int  _activeVideoMode;
    NSObject<OS_dispatch_queue> * _avcRemoteVideoQueue;
    AVConferenceXPCClient * _connection;
    NSString * _connectionTypeString;
    id  _delegate;
    bool  _hasReceivedFirstFrame;
    bool  _hasReceivedLastFrame;
    bool  _isMediaStalled;
    bool  _isVideoDegraded;
    bool  _isVideoPaused;
    bool  _isVideoSuspended;
    CALayer * _primaryCameraLayer;
    CALayer * _primaryCameraSubLayer;
    VideoAttributes * _remoteScreenAttributes;
    VideoAttributes * _remoteVideoAttributes;
    CALayer * _screenLayer;
    CALayer * _screenSubLayer;
    CALayer * _secondaryCameraLayer;
    CALayer * _secondaryCameraSubLayer;
    bool  _shouldDisplayVideoInfoLayer;
    NSDictionary * _slotsForModes;
    long long  _streamToken;
}

@property (nonatomic, copy) NSString *connectionTypeString;
@property (nonatomic, readonly) <AVCRemoteVideoClientDelegate> *delegate;
@property (nonatomic) bool hasReceivedFirstFrame;
@property (nonatomic) bool hasReceivedLastFrame;
@property (nonatomic) bool isMediaStalled;
@property (nonatomic) bool isVideoDegraded;
@property (nonatomic) bool isVideoPaused;
@property (nonatomic) bool isVideoSuspended;
@property (nonatomic, retain) VideoAttributes *remoteScreenAttributes;
@property (nonatomic, retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) bool shouldDisplayVideoInfoLayer;
@property (nonatomic, readonly) long long streamToken;

- (void)cleanupSubLayerForMode:(int)arg1;
- (id)connectionTypeString;
- (void)dealloc;
- (id)delegate;
- (void)deregisterBlocksForNotifications;
- (void)drawText:(id)arg1 inSubLayer:(id)arg2;
- (bool)hasReceivedFirstFrame;
- (bool)hasReceivedLastFrame;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2;
- (void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3;
- (bool)isMediaStalled;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVideoSuspended;
- (void)registerBlocksForNotifications;
- (id)remoteScreenAttributes;
- (id)remoteVideoAttributes;
- (void)setActiveVideoLayerForMode:(int)arg1;
- (void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg1;
- (void)setConnectionTypeString:(id)arg1;
- (void)setHasReceivedFirstFrame:(bool)arg1;
- (void)setHasReceivedLastFrame:(bool)arg1;
- (void)setIsMediaStalled:(bool)arg1;
- (void)setIsVideoDegraded:(bool)arg1;
- (void)setIsVideoPaused:(bool)arg1;
- (void)setIsVideoSuspended:(bool)arg1;
- (void)setRemoteScreenAttributes:(id)arg1;
- (void)setRemoteVideoAttributes:(id)arg1;
- (void)setShouldDisplayVideoInfoLayer:(bool)arg1;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (bool)shouldDisplayVideoInfoLayer;
- (id)slotForMode:(int)arg1;
- (long long)streamToken;
- (id)subLayerForMode:(int)arg1;
- (id*)subLayerRefForMode:(int)arg1;
- (void)terminateConnection;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2;

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
