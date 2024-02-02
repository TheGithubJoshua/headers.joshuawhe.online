<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVPlayerViewController.h</title>
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

/PrivateFrameworks/Memories.framework/TVPlayerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface TVPlayerViewController : MiroPlayerViewController <DurationDelegate, MoodDelegate, UIGestureRecognizerDelegate> {
    bool  _aggFirstPlayback;
    MiroCloudDownloader * _cloudDownloader;
    int  _debugNum;
    DurationsInfoPanel * _durationControlVC;
    NSArray * _durationDisplayNames;
    bool  _firstPlayback;
    double  _initialDuration;
    NSString * _initialMood;
    AVPlayer * _instantMoviePlayer;
    MiroMemory * _miroMemory;
    MoodInfoPanel * _moodControlVC;
    UICollectionView * _moodSlider;
    MovieController * _movieController;
    bool  _playbackRequested;
    AVPlayerViewController * _playerViewController;
    UIImage * _poster;
    MiroPosterViewController * _posterViewController;
    int  _prefsNum;
    id  _proVideoPeriodicCaller;
    UIView * _progressContainer;
    bool  _progressHasDownload;
    UILabel * _progressLabel;
    UIProgressView * _progressUIView;
    UIView * _scrimView;
    UIActivityIndicatorView * _spinnerView;
    unsigned long long  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _teardownTimeofPlayer;
}

@property bool aggFirstPlayback;
@property (nonatomic, retain) MiroCloudDownloader *cloudDownloader;
@property (readonly, copy) NSString *debugDescription;
@property int debugNum;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DurationsInfoPanel *durationControlVC;
@property (nonatomic, retain) NSArray *durationDisplayNames;
@property bool firstPlayback;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialDuration;
@property (nonatomic, retain) NSString *initialMood;
@property (nonatomic, retain) AVPlayer *instantMoviePlayer;
@property (nonatomic, retain) MiroMemory *miroMemory;
@property (nonatomic, retain) MoodInfoPanel *moodControlVC;
@property (nonatomic, retain) UICollectionView *moodSlider;
@property (nonatomic, retain) MovieController *movieController;
@property bool playbackRequested;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, retain) UIImage *poster;
@property (nonatomic, retain) MiroPosterViewController *posterViewController;
@property int prefsNum;
@property (nonatomic, retain) id proVideoPeriodicCaller;
@property (nonatomic, retain) UIView *progressContainer;
@property bool progressHasDownload;
@property (nonatomic, retain) UILabel *progressLabel;
@property (nonatomic, retain) UIProgressView *progressUIView;
@property (nonatomic, retain) UIView *scrimView;
@property (nonatomic, retain) UIActivityIndicatorView *spinnerView;
@property unsigned long long startTime;
@property (readonly) Class superclass;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } teardownTimeofPlayer;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_createPosterViewController;
- (bool)_deviceIsRunningInternalOS;
- (void)_displayHeroImageWithScrimView:(bool)arg1;
- (void)_launchAutoEditDebugView:(id)arg1;
- (void)_mediaServicesReset:(id)arg1;
- (id)_moodIDForIndexPath:(id)arg1;
- (void)_prepareForPlayback;
- (void)_setUIProgressView;
- (void)_setUpProgressLabel;
- (void)_undimOverlayView;
- (void)_updateDurationLabels;
- (void)addDebuggingReadyForDisplayView;
- (bool)aggFirstPlayback;
- (void)calculateAndSetProgress:(float)arg1;
- (id)cloudDownloader;
- (void)configurePlaybackViewsAndControllersWithProject:(id)arg1;
- (void)configureProVideoCallback;
- (void)createAVPlayer;
- (void)createAVPlayerVC;
- (void)createCustomInfoPanelControls;
- (double)currentDuration;
- (void)dealloc;
- (int)debugNum;
- (void)destroyAVPlayer;
- (void)destroyAVPlayerAndPersistTimeonDestruction;
- (void)didReceiveMemoryWarning;
- (void)displayHeroImageAnimated;
- (void)displayHeroImageAnimatedNoScrim;
- (id)durationControlVC;
- (id)durationDisplayNames;
- (void)durationInfoPanel:(id)arg1 didChangeDuration:(int)arg2;
- (bool)firstPlayback;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideHeroImageAnimated;
- (long long)indexForMoodID:(id)arg1;
- (id)initWithMemory:(id)arg1;
- (double)initialDuration;
- (id)initialMood;
- (id)instantMoviePlayer;
- (id)miroMemory;
- (id)moodControlVC;
- (void)moodInfoPanel:(id)arg1 didChangeMood:(id)arg2;
- (id)moodSlider;
- (id)movieController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)playbackRequested;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)playerViewController;
- (id)poster;
- (id)posterViewController;
- (int)prefsNum;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)proVideoPeriodicCaller;
- (float)progress;
- (id)progressContainer;
- (bool)progressHasDownload;
- (id)progressLabel;
- (id)progressUIView;
- (id)scrimView;
- (void)setAggFirstPlayback:(bool)arg1;
- (void)setAutoEditor:(id)arg1;
- (void)setCloudDownloader:(id)arg1;
- (void)setCurrentMoodWithIndexPath:(id)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)setDebugNum:(int)arg1;
- (void)setDurationControlVC:(id)arg1;
- (void)setDurationDisplayNames:(id)arg1;
- (void)setFirstPlayback:(bool)arg1;
- (void)setInitialDuration:(double)arg1;
- (void)setInitialMood:(id)arg1;
- (void)setInstantMoviePlayer:(id)arg1;
- (void)setMiroMemory:(id)arg1;
- (void)setMoodControlVC:(id)arg1;
- (void)setMoodSlider:(id)arg1;
- (void)setMovieController:(id)arg1;
- (void)setPlaybackRequested:(bool)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setPoster:(id)arg1;
- (void)setPosterViewController:(id)arg1;
- (void)setPrefsNum:(int)arg1;
- (void)setProVideoPeriodicCaller:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressContainer:(id)arg1;
- (void)setProgressHasDownload:(bool)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setProgressUIView:(id)arg1;
- (void)setScrimView:(id)arg1;
- (void)setSpinnerView:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setTeardownTimeofPlayer:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setupAggDValues;
- (id)setupDurationDisplayNames;
- (bool)shouldPlay;
- (void)signalCustomCompositorScheduler;
- (void)signalCustomCompositorScheduler:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (id)spinnerView;
- (void)startSpinner;
- (unsigned long long)startTime;
- (void)stopSpinner;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })teardownTimeofPlayer;
- (id)theirSpinner;
- (void)unRegisterAutoEditor;
- (void)updatePosterImages;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)x_displayHeroImageWithPlayOverlay:(bool)arg1;

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