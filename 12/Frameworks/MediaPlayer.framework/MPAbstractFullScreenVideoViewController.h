<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPAbstractFullScreenVideoViewController.h</title>
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

/Frameworks/MediaPlayer.framework/MPAbstractFullScreenVideoViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned int  _autoHidingForItemChange;
    unsigned int  _requestExitAfterHidingControls;
    unsigned int  _rotateAfterHidingControls;
    unsigned int  _scheduledAutoHide;
    unsigned int  _showControlsAfterRotate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(bool)arg1;
- (void)_hideOverlayWithAnimation:(bool)arg1 shouldUpdateAutohideFlag:(bool)arg2;
- (void)_resumedEventsOnlyNotification:(id)arg1;
- (bool)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (long long)_validInterfaceOrientation;
- (bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (bool)canHideOverlay:(bool)arg1;
- (bool)canShowControlsOverlay;
- (void)cancelControlsOverlayAutohide;
- (bool)controlsOverlayVisible;
- (void)dealloc;
- (void)displayVideoViewOnScreen;
- (bool)forceScaleToFitInPortrait;
- (void)hideOverlayAnimated:(bool)arg1;
- (bool)inhibitOverlay;
- (id)init;
- (void)loadView;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1;
- (void)setCanShowControlsOverlay:(bool)arg1;
- (void)setControlsOverlayVisible:(bool)arg1 animate:(bool)arg2 force:(bool)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)setDisableControlsAutohide:(bool)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setInhibitOverlay:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(long long)arg1 animate:(bool)arg2;
- (void)setPlayer:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(bool)arg2;
- (void)showOverlayAnimated:(bool)arg1;
- (void)showOverlayIfNecessary;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)swipableViewHadActivity:(id)arg1;
- (void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(bool)arg2;
- (bool)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2;
- (bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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
