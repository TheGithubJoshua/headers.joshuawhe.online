<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ADPrerollView.h</title>
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

/Frameworks/iAd.framework/ADPrerollView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/iAd.framework/iAd (1)
 */

@interface ADPrerollView : UIView <ADPrerollBottomBarDelegate, ADPrerollTopBarDelegate, UIGestureRecognizerDelegate> {
    double  _accumulatedViewingTime;
    bool  _barsVisible;
    ADPrerollBottomBar * _bottomBar;
    <ADPrerollViewDelegate> * _delegate;
    bool  _hasAction;
    NSTimer * _passiveWatchingTimer;
    ADPrivacyMarker * _privacyMarker;
    bool  _skipButtonCountingDown;
    UIImageView * _swooshView;
    ADPrerollTopBar * _topBar;
}

@property (nonatomic) double accumulatedViewingTime;
@property (nonatomic) bool barsVisible;
@property (nonatomic, retain) ADPrerollBottomBar *bottomBar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADPrerollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *passiveWatchingTimer;
@property (nonatomic, retain) ADPrivacyMarker *privacyMarker;
@property (nonatomic) bool skipButtonCountingDown;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *swooshView;
@property (nonatomic, retain) ADPrerollTopBar *topBar;

+ (Class)layerClass;

- (void)_firePassiveWatchingTimer:(id)arg1;
- (bool)_layoutForExpandedSize;
- (void)_privacyButtonWasTapped;
- (void)_restartPassiveWatchingTimer;
- (void)_singleTapGestureRecognized:(id)arg1;
- (bool)accessibilityPerformEscape;
- (double)accumulatedViewingTime;
- (void)attachToAVPlayer:(id)arg1 showiAdBrandingSwoosh:(bool)arg2;
- (bool)barsVisible;
- (void)beginCountdown:(double)arg1;
- (id)bottomBar;
- (void)bottomBarActionButtonTapped:(id)arg1;
- (void)bottomBarPauseButtonTapped:(id)arg1;
- (void)bottomBarPlayButtonTapped:(id)arg1;
- (void)bottomBarSkipButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)displayAsPaused:(bool)arg1;
- (void)enablePrivacyButton;
- (void)fadeToBlackWithCompletion:(id /* block */)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)hasAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passiveWatchingTimer;
- (id)privacyMarker;
- (void)setAccumulatedViewingTime:(double)arg1;
- (void)setBarsVisible:(bool)arg1;
- (void)setBottomBar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setHasAction:(bool)arg1;
- (void)setPassiveWatchingTimer:(id)arg1;
- (void)setPrivacyMarker:(id)arg1;
- (void)setSkipButtonCountingDown:(bool)arg1;
- (void)setSwooshView:(id)arg1;
- (void)setTopBar:(id)arg1;
- (void)shutdown;
- (bool)skipButtonCountingDown;
- (id)swooshView;
- (id)topBar;
- (void)topBarDoneButtonTapped:(id)arg1;
- (void)topBarScaleToFill:(id)arg1;
- (void)topBarScaleToFit:(id)arg1;

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
