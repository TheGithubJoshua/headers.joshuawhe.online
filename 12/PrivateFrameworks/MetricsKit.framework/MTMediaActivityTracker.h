<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTMediaActivityTracker.h</title>
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

/PrivateFrameworks/MetricsKit.framework/MTMediaActivityTracker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit (1)
 */

@interface MTMediaActivityTracker : NSObject {
    NSMutableArray * _eventData;
    MTMediaActivity * _playActivity;
    <MTMediaPlaylist> * _playlist;
    MTMediaActivity * _seekActivity;
    bool  _shouldGenerateTransitions;
    MTMediaTimeTracker * _timeTracker;
    MTVPAFKit * _vpafKit;
}

@property (nonatomic, retain) NSMutableArray *eventData;
@property (nonatomic, retain) MTMediaActivity *playActivity;
@property (nonatomic, retain) <MTMediaPlaylist> *playlist;
@property (nonatomic, retain) MTMediaActivity *seekActivity;
@property (nonatomic) bool shouldGenerateTransitions;
@property (nonatomic, retain) MTMediaTimeTracker *timeTracker;
@property (nonatomic) MTVPAFKit *vpafKit;

+ (id /* block */)playlistItemComparator;

- (void).cxx_destruct;
- (id)combineEventData:(id)arg1 withPlaylistDataForItem:(id)arg2;
- (id)eventData;
- (void)generatePlaylistTransitionsIfNecessary:(unsigned long long)arg1;
- (id)initWithVPAFKit:(id)arg1 playlist:(id)arg2;
- (id)playActivity;
- (void)playStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedWithPlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)playStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playTransitionedAtOverallPosition:(unsigned long long)arg1 eventData:(id)arg2;
- (id)playlist;
- (id)seekActivity;
- (void)seekStartedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)setEventData:(id)arg1;
- (void)setPlayActivity:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSeekActivity:(id)arg1;
- (void)setShouldGenerateTransitions:(bool)arg1;
- (void)setTimeTracker:(id)arg1;
- (void)setVpafKit:(id)arg1;
- (bool)shouldGenerateTransitions;
- (id)startActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)stopActivity:(long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)synchronizePlaybackRate:(float)arg1 overallPosition:(unsigned long long)arg2;
- (id)timeTracker;
- (void)updateEventData:(id)arg1;
- (id)vpafKit;

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
