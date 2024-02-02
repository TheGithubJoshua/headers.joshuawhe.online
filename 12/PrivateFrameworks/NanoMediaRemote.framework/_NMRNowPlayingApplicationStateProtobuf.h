<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_NMRNowPlayingApplicationStateProtobuf.h</title>
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

/PrivateFrameworks/NanoMediaRemote.framework/_NMRNowPlayingApplicationStateProtobuf.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote (880.30)
 */

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {
    NSString * _companionBundleIdentifier;
    struct { 
        unsigned int playbackState : 1; 
        unsigned int processID : 1; 
    }  _has;
    NSData * _iconDigest;
    NSString * _localizedDisplayName;
    unsigned int  _playbackState;
    int  _processID;
    NSString * _watchBundleIdentifier;
}

@property (nonatomic, retain) NSString *companionBundleIdentifier;
@property (nonatomic, readonly) bool hasCompanionBundleIdentifier;
@property (nonatomic, readonly) bool hasIconDigest;
@property (nonatomic, readonly) bool hasLocalizedDisplayName;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic) bool hasProcessID;
@property (nonatomic, readonly) bool hasWatchBundleIdentifier;
@property (nonatomic, retain) NSData *iconDigest;
@property (nonatomic, retain) NSString *localizedDisplayName;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) int processID;
@property (nonatomic, retain) NSString *watchBundleIdentifier;

- (void).cxx_destruct;
- (id)companionBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompanionBundleIdentifier;
- (bool)hasIconDigest;
- (bool)hasLocalizedDisplayName;
- (bool)hasPlaybackState;
- (bool)hasProcessID;
- (bool)hasWatchBundleIdentifier;
- (unsigned long long)hash;
- (id)iconDigest;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (void)mergeFrom:(id)arg1;
- (unsigned int)playbackState;
- (int)processID;
- (bool)readFrom:(id)arg1;
- (void)setCompanionBundleIdentifier:(id)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasProcessID:(bool)arg1;
- (void)setIconDigest:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setProcessID:(int)arg1;
- (void)setWatchBundleIdentifier:(id)arg1;
- (id)watchBundleIdentifier;
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