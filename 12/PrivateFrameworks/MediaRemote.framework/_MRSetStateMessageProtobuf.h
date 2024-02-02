<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MRSetStateMessageProtobuf.h</title>
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

/PrivateFrameworks/MediaRemote.framework/_MRSetStateMessageProtobuf.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote (1)
 */

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    NSString * _displayID;
    NSString * _displayName;
    struct { 
        unsigned int playbackStateTimestamp : 1; 
        unsigned int playbackState : 1; 
    }  _has;
    _MRNowPlayingInfoProtobuf * _nowPlayingInfo;
    _MRPlaybackQueueProtobuf * _playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf * _playbackQueueCapabilities;
    int  _playbackState;
    double  _playbackStateTimestamp;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    _MRPlaybackQueueRequestProtobuf * _request;
    _MRSupportedCommandsProtobuf * _supportedCommands;
}

@property (nonatomic, retain) NSString *displayID;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayID;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasNowPlayingInfo;
@property (nonatomic, readonly) bool hasPlaybackQueue;
@property (nonatomic, readonly) bool hasPlaybackQueueCapabilities;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic) bool hasPlaybackStateTimestamp;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasSupportedCommands;
@property (nonatomic, retain) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property (nonatomic, retain) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic, retain) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property (nonatomic) int playbackState;
@property (nonatomic) double playbackStateTimestamp;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic, retain) _MRSupportedCommandsProtobuf *supportedCommands;

- (void).cxx_destruct;
- (int)StringAsPlaybackState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayID;
- (id)displayName;
- (bool)hasDisplayID;
- (bool)hasDisplayName;
- (bool)hasNowPlayingInfo;
- (bool)hasPlaybackQueue;
- (bool)hasPlaybackQueueCapabilities;
- (bool)hasPlaybackState;
- (bool)hasPlaybackStateTimestamp;
- (bool)hasPlayerPath;
- (bool)hasRequest;
- (bool)hasSupportedCommands;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (id)playbackQueue;
- (id)playbackQueueCapabilities;
- (int)playbackState;
- (id)playbackStateAsString:(int)arg1;
- (double)playbackStateTimestamp;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasPlaybackStateTimestamp:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackQueueCapabilities:(id)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setPlaybackStateTimestamp:(double)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;
- (void)writeTo:(id)arg1;

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