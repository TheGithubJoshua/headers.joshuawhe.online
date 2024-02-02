<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PGPictureInPictureProxy.h</title>
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

/PrivateFrameworks/Pegasus.framework/PGPictureInPictureProxy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus (111.14)
 */

@interface PGPictureInPictureProxy : NSObject <PGPictureInPictureExportedInterface> {
    NSXPCConnection * _connection;
    long long  _controlsStyle;
    <PGPictureInPictureProxyDelegate> * _delegate;
    struct { 
        unsigned int pictureInPictureProxyInterfaceOrientationForTransitionAnimation : 1; 
        unsigned int pictureInPictureProxyViewFrameForTransitionAnimation : 1; 
        unsigned int pictureInPictureProxy_willStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_didStartPictureInPictureWithAnimationType : 1; 
        unsigned int pictureInPictureProxy_failedToStartPictureInPictureWithAnimationType_error : 1; 
        unsigned int pictureInPictureProxy_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1; 
        unsigned int pictureInPictureProxy_willStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxy_didStopPictureInPictureWithAnimationType_reason : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionBegan : 1; 
        unsigned int pictureInPictureProxyPictureInPictureInterruptionEnded : 1; 
    }  _delegateRespondsTo;
    PGHostedWindow * _hostedWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialLayerFrame;
    bool  _isHostedWindowSizeChangeDuringPinchGesture;
    bool  _isPictureInPictureActive;
    bool  _isPictureInPicturePossible;
    bool  _isPictureInPictureSuspended;
    bool  _isStartingStoppingOrCancellingPictureInPicture;
    NSArray * _loadedTimeRanges;
    PGSetterThrottler * _loadedTimeRangesSetterThrottler;
    bool  _pictureInPictureShouldStartWhenEnteringBackground;
    bool  _pictureInPictureWasStartedWhenEnteringBackground;
    double  _playbackProgress;
    PGSetterThrottler * _playbackProgressSetterThrottler;
    double  _playbackRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    NSObject<OS_dispatch_queue> * _queue;
    UIViewController * _rootViewController;
    UIViewController<PGPictureInPictureViewController> * _viewController;
}

@property (nonatomic, readonly) long long controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGPictureInPictureProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPictureInPictureActive, nonatomic, readonly) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic, readonly) bool pictureInPicturePossible;
@property (nonatomic) bool pictureInPictureShouldStartWhenEnteringBackground;
@property (getter=isPictureInPictureSuspended, nonatomic, readonly) bool pictureInPictureSuspended;
@property (nonatomic, readonly) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController<PGPictureInPictureViewController> *viewController;

+ (void)_updatePictureInPictureActive:(bool)arg1;
+ (bool)isPictureInPictureActive;
+ (bool)isPictureInPictureSupported;
+ (id)pictureInPictureProxyWithControlsStyle:(long long)arg1 viewController:(id)arg2;

- (void).cxx_destruct;
- (long long)_interfaceOrientationForTransitionAnimationAssumeApplicationActive:(bool)arg1;
- (void)_startPictureInPictureAnimated:(bool)arg1 enteringBackground:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_stopPictureInPictureAnimated:(bool)arg1 activateApplicationIfNeededAndRestoreUserInterface:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrameForTransitionAnimationAssumeApplicationActive:(bool)arg1;
- (oneway void)actionButtonTapped;
- (long long)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (oneway void)hostedWindowSizeChangeBegan;
- (oneway void)hostedWindowSizeChangeEnded;
- (id)init;
- (id)initWithControlsStyle:(long long)arg1 viewController:(id)arg2;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (id)loadedTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (oneway void)pictureInPictureCancelRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureCancelled;
- (oneway void)pictureInPictureInterruptionBegan;
- (oneway void)pictureInPictureInterruptionEnded;
- (oneway void)pictureInPictureResumed;
- (bool)pictureInPictureShouldStartWhenEnteringBackground;
- (oneway void)pictureInPictureStartRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureStopRequestedAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (oneway void)pictureInPictureSuspended;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (double)playbackProgress;
- (double)playbackRate;
- (void)preferredContentSizeDidChangeForViewController;
- (void)rotateContentContainer:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPictureInPictureShouldStartWhenEnteringBackground:(bool)arg1;
- (void)setPlaybackProgress:(double)arg1 playbackRate:(double)arg2;
- (void)startPictureInPicture;
- (void)stopPictureInPictureAndRestoreUserInterface:(bool)arg1;
- (oneway void)updateHostedWindowSize:(struct CGSize { double x1; double x2; })arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;
- (oneway void)updatePictureInPicturePossible:(bool)arg1;
- (id)viewController;
- (void)viewFrameForInteractiveTransitionAnimationWhenEnteringBackgroundDidChangeForViewController;

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