<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUPlaybackTimeIndicatorTileViewController.h</title>
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

/Frameworks/PhotosUI.framework/PUPlaybackTimeIndicatorTileViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUPlaybackTimeIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingViewModelChangeObserver> {
    NSDate * __forcedIndicatorVisibilityEndDate;
    long long  __indicatorFormat;
    bool  __isIndicatorVisible;
    PUPlaybackTimeLabel * __label;
    <PUPlaybackTimeIndicatorTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToCanFlashIndicator; 
    }  _delegateFlags;
    PUBrowsingVideoPlayer * _videoPlayer;
    PUBrowsingViewModel * _viewModel;
}

@property (setter=_setForcedIndicatorVisibilityEndDate:, nonatomic, retain) NSDate *_forcedIndicatorVisibilityEndDate;
@property (setter=_setIndicatorFormat:, nonatomic) long long _indicatorFormat;
@property (setter=_setIndicatorVisible:, nonatomic) bool _isIndicatorVisible;
@property (nonatomic, readonly) PUPlaybackTimeLabel *_label;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPlaybackTimeIndicatorTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingVideoPlayer *videoPlayer;
@property (nonatomic, retain) PUBrowsingViewModel *viewModel;

+ (struct CGSize { double x1; double x2; })playbackTimeIndicatorTileSize;

- (void).cxx_destruct;
- (id)_forcedIndicatorVisibilityEndDate;
- (void)_handleVideoPlayer:(id)arg1 change:(id)arg2;
- (void)_handleViewModel:(id)arg1 change:(id)arg2;
- (long long)_indicatorFormat;
- (bool)_isIndicatorVisible;
- (id)_label;
- (void)_setForcedIndicatorVisibilityEndDate:(id)arg1;
- (void)_setIndicatorFormat:(long long)arg1;
- (void)_setIndicatorFormat:(long long)arg1 animated:(bool)arg2;
- (void)_setIndicatorVisible:(bool)arg1;
- (void)_setIndicatorVisible:(bool)arg1 animated:(bool)arg2;
- (void)_updateIndicatorDisplayStyle;
- (void)_updateIndicatorValueWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)becomeReusable;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)videoPlayer;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

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
