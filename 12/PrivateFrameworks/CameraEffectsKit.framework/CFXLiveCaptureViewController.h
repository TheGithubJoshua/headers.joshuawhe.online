<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFXLiveCaptureViewController.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/CFXLiveCaptureViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface CFXLiveCaptureViewController : UIViewController <CFXRendererDelegate, JTVideoCameraAudioDelegate, JTVideoCameraVideoDelegate, UIGestureRecognizerDelegate> {
    long long  _captureMode;
    CFXEffectComposition * _composition;
    UIView * _containerView;
    UIView * _debugControlsView;
    <CFXLiveCaptureViewControllerDelegate> * _delegate;
    bool  _isCapturing_recordingQ;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRenderTime;
    JTImage * _liveCaptureRenderedImage;
    NSObject<OS_dispatch_queue> * _liveCaptureRenderedImageQ;
    NSObject<OS_dispatch_queue> * _recordingQ;
    JTImageView * _renderImageView;
    NSOperationQueue * _renderedFrameCallbacksOperationQueue;
    CFXRenderer * _renderer;
    UIView * _uncroppedRenderImagePlaceHolderView;
    bool  _useLocalCameraViewfinder;
    JTVideoWriter * _videoWriter;
}

@property (nonatomic) long long captureMode;
@property (nonatomic, retain) CFXEffectComposition *composition;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) UIView *debugControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXLiveCaptureViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCapturing;
@property (nonatomic) bool isCapturing_recordingQ;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } lastRenderTime;
@property (nonatomic, retain) JTImage *liveCaptureRenderedImage;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *liveCaptureRenderedImageQ;
@property (nonatomic, readonly) bool livePlayerIsSaturated;
@property (nonatomic, readonly) UIView *localCameraViewfinderView;
@property (nonatomic, readonly) struct { double x1; double x2; } normalizedMinimumHitTestArea;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordingQ;
@property (nonatomic) JTImageView *renderImageView;
@property (nonatomic, retain) NSOperationQueue *renderedFrameCallbacksOperationQueue;
@property (nonatomic, retain) CFXRenderer *renderer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *uncroppedCameraViewfinderPlaceholderView;
@property (nonatomic, retain) UIView *uncroppedRenderImagePlaceHolderView;
@property (nonatomic) bool useLocalCameraViewfinder;
@property (nonatomic, retain) JTVideoWriter *videoWriter;

+ (id)instantiate;

- (void).cxx_destruct;
- (void)CFX_createUncroppedCameraPlaceholderViewIfNecessary;
- (void)CFX_installGestures;
- (void)CFX_livePreviewDoubleTapped:(id)arg1;
- (void)CFX_livePreviewPanned:(id)arg1;
- (void)CFX_livePreviewPinched:(id)arg1;
- (void)CFX_livePreviewRotated:(id)arg1;
- (void)CFX_livePreviewTapped:(id)arg1;
- (void)CFX_setAnimationEnabledForOverlays:(bool)arg1;
- (void)cancelVideoRecording;
- (long long)captureMode;
- (id)composition;
- (id)containerView;
- (id)debugControlsView;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (void)executeAfterNextFrameIsRendered:(id /* block */)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isCapturing;
- (bool)isCapturing_recordingQ;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastRenderTime;
- (id)liveCaptureRenderedImage;
- (id)liveCaptureRenderedImageQ;
- (bool)livePlayerIsSaturated;
- (id)localCameraViewfinderView;
- (struct CGPoint { double x1; double x2; })locationInCaptureViewForGestureRecognizer:(id)arg1;
- (struct { double x1; double x2; })normalizedMinimumHitTestArea;
- (void)processAudioSample:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)recordingQ;
- (void)removeAllEffects:(id /* block */)arg1;
- (void)removeAllEffectsOfType:(id)arg1 completion:(id /* block */)arg2;
- (id)renderImageView;
- (void)renderVideoFrame:(id)arg1;
- (id)renderedFrameCallbacksOperationQueue;
- (id)renderer;
- (void)renderer:(id)arg1 didRenderFrame:(id)arg2;
- (void)setCaptureMode:(long long)arg1;
- (void)setComposition:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDebugControlsView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCapturing_recordingQ:(bool)arg1;
- (void)setLastRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLiveCaptureRenderedImage:(id)arg1;
- (void)setLiveCaptureRenderedImageQ:(id)arg1;
- (void)setRecordingQ:(id)arg1;
- (void)setRenderImageView:(id)arg1;
- (void)setRenderedFrameCallbacksOperationQueue:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)setUncroppedRenderImagePlaceHolderView:(id)arg1;
- (void)setUseLocalCameraViewfinder:(bool)arg1;
- (void)setVideoWriter:(id)arg1;
- (void)shutdownLivePlayer;
- (void)startButtonTouchUpInside:(id)arg1;
- (void)startRenderingCameraFrames;
- (void)startVideoRecordingWithFlashMode:(long long)arg1;
- (void)stopButtonTouchUpInside:(id)arg1;
- (void)stopRenderingCameraFrames;
- (void)stopVideoRecording:(id /* block */)arg1;
- (void)takeStillPhotoWithFlashMode:(long long)arg1 completion:(id /* block */)arg2;
- (void)toggleDebugControlsView:(id)arg1;
- (id)uncroppedCameraViewfinderPlaceholderView;
- (id)uncroppedRenderImagePlaceHolderView;
- (bool)useLocalCameraViewfinder;
- (id)videoWriter;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDropCameraFrame;

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
