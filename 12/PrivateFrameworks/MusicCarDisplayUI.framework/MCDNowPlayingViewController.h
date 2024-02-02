<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MCDNowPlayingViewController.h</title>
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

/PrivateFrameworks/MusicCarDisplayUI.framework/MCDNowPlayingViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI (1)
 */

@interface MCDNowPlayingViewController : UIViewController {
    MCDLabelButton * _albumArtistLabelButton;
    NSLayoutConstraint * _artistAlbumLabelConstraint;
    UIImageView * _artworkView;
    UITapGestureRecognizer * _backPressRecognizer;
    UIFocusContainerGuide * _controlsFocusContainerGuide;
    <MCDNowPlayingViewControllerDataSource> * _dataSource;
    <MCDNowPlayingViewControllerDelegate> * _delegate;
    UILongPressGestureRecognizer * _fastForwardButtonLongPressRecognizer;
    NSString * _forwardTransportButtonImageIdentifier;
    bool  _handledWillAppear;
    long long  _heldAction;
    bool  _highTouchMode;
    bool  _isForMusic;
    bool  _isScrubbing;
    UITapGestureRecognizer * _knobPressRecognizer;
    UILongPressGestureRecognizer * _leftButtonLongPressRecognizer;
    UILongPressGestureRecognizer * _leftNudgeLongPressRecognizer;
    UITapGestureRecognizer * _leftNudgePressRecognizer;
    UIColor * _navbarColor;
    bool  _navbarHidesShadow;
    UINavigationBar * _navigationBar;
    MCDPlayModeControlView * _playModeControlView;
    UIViewController * _playModeViewController;
    NSString * _playPauseTransportButtonImageIdentifier;
    NSString * _previousTransportButtonImageIdentifier;
    MCDProgressView * _progressView;
    UILongPressGestureRecognizer * _rightNudgeLongPressRecognizer;
    UITapGestureRecognizer * _rightNudgePressRecognizer;
    MCDTitleView * _titleView;
    MCDTransportControlView * _transportControlView;
    UIViewController * _transportViewController;
    bool  _viewHasShifted;
}

@property (nonatomic, retain) NSLayoutConstraint *artistAlbumLabelConstraint;
@property (nonatomic, readonly) UIImageView *artworkView;
@property (nonatomic, readonly) UITapGestureRecognizer *backPressRecognizer;
@property (nonatomic, retain) UIFocusContainerGuide *controlsFocusContainerGuide;
@property (nonatomic) <MCDNowPlayingViewControllerDataSource> *dataSource;
@property (nonatomic) <MCDNowPlayingViewControllerDelegate> *delegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer;
@property (nonatomic, retain) NSString *forwardTransportButtonImageIdentifier;
@property (nonatomic, readonly) UITapGestureRecognizer *knobPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftButtonLongPressRecognizer;
@property (nonatomic, retain) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *leftNudgePressRecognizer;
@property (nonatomic, readonly) MCDPlayModeControlView *playModeControlView;
@property (nonatomic, retain) NSString *playPauseTransportButtonImageIdentifier;
@property (nonatomic, retain) NSString *previousTransportButtonImageIdentifier;
@property (nonatomic, readonly) MCDProgressView *progressView;
@property (nonatomic, retain) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *rightNudgePressRecognizer;
@property (nonatomic, readonly) MCDTitleView *titleView;
@property (nonatomic, readonly) MCDTransportControlView *transportControlView;

+ (id)nowPlayingViewControllerForMusic:(bool)arg1;

- (void).cxx_destruct;
- (void)_addToLibraryButtonTouchUp:(id)arg1;
- (void)_didUpdateSupportedCommandsNotification:(id)arg1;
- (void)_fastForwardButtonLongPress:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_handleWillAppear;
- (void)_initializeTransportControls;
- (void)_leftButtonLongPress:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftNudgePress:(id)arg1;
- (void)_moreButtonTouchUp:(id)arg1;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_playbackButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_respondToHeldAction;
- (void)_rightNudgePress:(id)arg1;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_sendHeldAction;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_updatePlayModesState;
- (void)_updatePlaybackRate;
- (void)_updateRepeatStateWithType:(long long)arg1;
- (void)_updateShuffleStateWithType:(long long)arg1;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)albumArtistButtonTapped:(id)arg1;
- (id)artistAlbumLabelConstraint;
- (id)artworkView;
- (id)backPressRecognizer;
- (id)controlsFocusContainerGuide;
- (id)dataSource;
- (id)delegate;
- (id)fastForwardButtonLongPressRecognizer;
- (id)forwardTransportButtonImageIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)knobPressRecognizer;
- (id)leftButtonLongPressRecognizer;
- (id)leftNudgeLongPressRecognizer;
- (id)leftNudgePressRecognizer;
- (void)loadView;
- (id)playModeControlView;
- (id)playPauseTransportButtonImageIdentifier;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)previousTransportButtonImageIdentifier;
- (id)progressView;
- (void)reloadData;
- (id)rightNudgeLongPressRecognizer;
- (id)rightNudgePressRecognizer;
- (void)setArtistAlbumLabelConstraint:(id)arg1;
- (void)setControlsFocusContainerGuide:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFastForwardButtonLongPressRecognizer:(id)arg1;
- (void)setForwardTransportButtonImageIdentifier:(id)arg1;
- (void)setLeftButtonLongPressRecognizer:(id)arg1;
- (void)setLeftNudgeLongPressRecognizer:(id)arg1;
- (void)setLeftNudgePressRecognizer:(id)arg1;
- (void)setPlayPauseTransportButtonImageIdentifier:(id)arg1;
- (void)setPreviousTransportButtonImageIdentifier:(id)arg1;
- (void)setRightNudgeLongPressRecognizer:(id)arg1;
- (void)setRightNudgePressRecognizer:(id)arg1;
- (id)titleView;
- (id)transportControlView;
- (void)updatePlayControls;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
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