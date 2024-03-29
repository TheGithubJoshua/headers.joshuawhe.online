<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUIMediaInfo.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUIMediaInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUIMediaInfo : TVMediaInfo {
    bool  _automaticPlaybackStart;
    bool  _automaticPlaybackStop;
    UIColor * _backgroundColor;
    bool  _hasProgress;
    bool  _overridesStartTimeWithResumeTime;
    unsigned long long  _playbackStartReason;
    unsigned long long  _playbackStopReason;
    bool  _restrictionsAlreadyUnlocked;
    bool  _shouldDelayLoadingImage;
    bool  _showsSecondaryVideoView;
    TVPPlaylist * _tvpPlaylist;
}

@property (getter=isAutomaticPlaybackStart, nonatomic) bool automaticPlaybackStart;
@property (getter=isAutomaticPlaybackStop, nonatomic) bool automaticPlaybackStop;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) bool hasProgress;
@property (nonatomic) bool overridesStartTimeWithResumeTime;
@property (nonatomic) unsigned long long playbackStartReason;
@property (nonatomic) unsigned long long playbackStopReason;
@property (nonatomic) bool restrictionsAlreadyUnlocked;
@property (nonatomic) bool shouldDelayLoadingImage;
@property (nonatomic) bool showsSecondaryVideoView;
@property (nonatomic, retain) TVPPlaylist *tvpPlaylist;

- (void).cxx_destruct;
- (id)_auxMediaItemFromVideosPlayable:(id)arg1;
- (id)_playbackOverridesForURL:(id)arg1 orAdamID:(id)arg2;
- (id)_playlistFromVideosPlayables:(id)arg1 andStoreDictionary:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataFromVideosPlayable:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadataOverrides:(id)arg2;
- (id)_storeMediaItemsFromVideosPlayable:(id)arg1 andStoreDictionary:(id)arg2;
- (id)_tvpMediaTypeFromPlayableType:(id)arg1 isRental:(bool)arg2;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasProgress;
- (unsigned long long)hash;
- (id)init;
- (id)initWithVideosPlayables:(id)arg1 imageProxies:(id)arg2 storeDictionary:(id)arg3;
- (bool)isAutomaticPlaybackStart;
- (bool)isAutomaticPlaybackStop;
- (bool)isEqual:(id)arg1;
- (bool)overridesStartTimeWithResumeTime;
- (unsigned long long)playbackStartReason;
- (unsigned long long)playbackStopReason;
- (bool)restrictionsAlreadyUnlocked;
- (void)setAutomaticPlaybackStart:(bool)arg1;
- (void)setAutomaticPlaybackStop:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setOverridesStartTimeWithResumeTime:(bool)arg1;
- (void)setPlaybackStartReason:(unsigned long long)arg1;
- (void)setPlaybackStopReason:(unsigned long long)arg1;
- (void)setRestrictionsAlreadyUnlocked:(bool)arg1;
- (void)setShouldDelayLoadingImage:(bool)arg1;
- (void)setShowsSecondaryVideoView:(bool)arg1;
- (void)setTvpPlaylist:(id)arg1;
- (void)setUserPlaybackInitiationDate:(id)arg1 openURLCompletionDate:(id)arg2;
- (bool)shouldDelayLoadingImage;
- (bool)showsSecondaryVideoView;
- (id)tvpPlaylist;

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
