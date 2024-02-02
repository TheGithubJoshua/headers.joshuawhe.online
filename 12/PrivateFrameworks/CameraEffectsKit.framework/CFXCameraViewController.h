<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFXCameraViewController.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/CFXCameraViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface CFXCameraViewController : UIViewController <CFXCaptureViewControllerDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate, CFXEffectBrowserViewControllerDelegate, CFXRemoteCommandServerDelegate> {
    bool  _cameraControlsShown;
    CFXCameraControlsViewController * _cameraControlsViewController;
    long long  _captureMode;
    CFXCaptureViewController * _captureViewController;
    <CFXCameraViewControllerDelegate> * _delegate;
    NSString * _effectBrowserPresentedAppIdentifier;
    CFXEffectBrowserViewController * _effectBrowserViewController;
    long long  _externalCaptureSessionCameraPosition;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionInputDeserializationQueue;
    JTThreadSafeDictionary * _externalCaptureSessionInputFrameTimestamps;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionInputProcessingQueue;
    NSObject<OS_dispatch_queue> * _externalCaptureSessionOutputProcessingQueue;
    JTPixelRotationSession * _externalCaptureSessionRotationSession;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalContentRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _externalPresentationRect;
    long long  _initialFlashMode;
    long long  _logDebug_faceDataDetectedFacesCount;
    CFXRemoteCommandServer * _remoteCommandServer;
    bool  _showsViewfinder;
    bool  _usesInternalCaptureSession;
}

@property (nonatomic) bool cameraControlsShown;
@property (nonatomic, retain) CFXCameraControlsViewController *cameraControlsViewController;
@property (nonatomic, readonly) long long captureMode;
@property (nonatomic, retain) CFXCaptureViewController *captureViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long devicePosition;
@property (nonatomic, retain) NSString *effectBrowserPresentedAppIdentifier;
@property (nonatomic, retain) CFXEffectBrowserViewController *effectBrowserViewController;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (getter=isEffectsPickerHidden, nonatomic, readonly) bool effectsPickerHidden;
@property (nonatomic, readonly) long long effectsState;
@property (nonatomic) long long externalCaptureSessionCameraPosition;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputDeserializationQueue;
@property (nonatomic, retain) JTThreadSafeDictionary *externalCaptureSessionInputFrameTimestamps;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionInputProcessingQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *externalCaptureSessionOutputProcessingQueue;
@property (nonatomic, retain) JTPixelRotationSession *externalCaptureSessionRotationSession;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } externalContentRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } externalPresentationRect;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long initialFlashMode;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, retain) CFXRemoteCommandServer *remoteCommandServer;
@property (nonatomic) bool showsViewfinder;
@property (readonly) Class superclass;
@property (nonatomic) double userInterfaceAlpha;
@property (nonatomic) bool usesInternalCaptureSession;

+ (void)initialize;
+ (void)preheatWithWindow:(id)arg1 captureMode:(long long)arg2 devicePosition:(long long)arg3;

- (void).cxx_destruct;
- (bool)allowLandscapeForEffectBrowserViewController:(id)arg1;
- (bool)cameraControlsShown;
- (id)cameraControlsViewController;
- (id)cameraControlsViewControllerForCaptureViewController:(id)arg1;
- (long long)captureMode;
- (id)captureViewController;
- (void)captureViewController:(id)arg1 didCaptureMediaItem:(id)arg2;
- (void)captureViewController:(id)arg1 didChangeEffectComposition:(id)arg2;
- (void)captureViewController:(id)arg1 didRenderFrame:(id)arg2;
- (void)captureViewControllerCameraFlipButtonWasTapped:(id)arg1;
- (void)captureViewControllerDidStartVideoRecording:(id)arg1;
- (void)captureViewControllerDidStopVideoRecording:(id)arg1;
- (void)captureViewControllerDoneButtonWasTapped:(id)arg1;
- (void)captureViewControllerEffectsButtonWasTapped:(id)arg1;
- (void)captureViewControllerPresentationRectWasDoubleTapped:(id)arg1;
- (void)captureViewControllerStartCaptureSession:(id)arg1;
- (void)captureViewControllerStopCaptureSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (long long)devicePosition;
- (id)effectBrowserPresentedAppIdentifier;
- (id)effectBrowserViewController;
- (void)effectBrowserViewController:(id)arg1 didDropOverlayEffect:(id)arg2 atScreenLocation:(struct CGPoint { double x1; double x2; })arg3 atScreenSize:(struct CGSize { double x1; double x2; })arg4 rotationAngle:(double)arg5;
- (void)effectBrowserViewController:(id)arg1 didRemoveAllEffectsOfType:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectApp:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectAppWithIdentifier:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 didSelectEffect:(id)arg2;
- (void)effectBrowserViewController:(id)arg1 filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (double)effectBrowserViewController:(id)arg1 screenTopBarHeightForWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 orientation:(long long)arg3;
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;
- (void)effectBrowserViewControllerDidStartCaptureSession:(id)arg1;
- (void)effectBrowserViewControllerDidStopCaptureSession:(id)arg1;
- (id)effectsPickerDrawer;
- (long long)effectsState;
- (long long)externalCaptureSessionCameraPosition;
- (id)externalCaptureSessionInputDeserializationQueue;
- (id)externalCaptureSessionInputFrameTimestamps;
- (id)externalCaptureSessionInputProcessingQueue;
- (id)externalCaptureSessionOutputProcessingQueue;
- (id)externalCaptureSessionRotationSession;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalPresentationRect;
- (long long)flashMode;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2;
- (id)initWithCaptureMode:(long long)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3;
- (id)initWithMode:(long long)arg1;
- (long long)initialFlashMode;
- (bool)isEffectsPickerHidden;
- (void)loadView;
- (id)localizedPromptForHidingAnimojiForEffectBrowserViewController:(id)arg1;
- (long long)mode;
- (void)noteInputFrameWithTimestamp:(double)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })noteOutputFrameWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)remoteCommandServer;
- (void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 scale:(double)arg4 rotation:(double)arg5;
- (void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;
- (void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
- (void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;
- (void)removeAllEffects;
- (void)renderFrameWithImageData:(id)arg1 orientation:(long long)arg2 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)renderFrameWithImageDataArchive:(id)arg1 imagePixelBuffer:(struct __CVBuffer { }*)arg2 depthPixelBuffer:(struct __CVBuffer { }*)arg3 orientation:(long long)arg4 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)renderFrameWithImageDataArchive:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(long long)arg3 presentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)selectedAnimojiIdentifierForEffectBrowserViewController:(id)arg1;
- (id)selectedFilterIdentifierForEffectBrowserViewController:(id)arg1;
- (void)setCameraControlsShown:(bool)arg1;
- (void)setCameraControlsViewController:(id)arg1;
- (void)setCaptureViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectBrowserPresentedAppIdentifier:(id)arg1;
- (void)setEffectBrowserViewController:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setEffectsPickerHidden:(bool)arg1 animated:(bool)arg2;
- (void)setExternalCaptureSessionCameraPosition:(long long)arg1;
- (void)setExternalCaptureSessionInputFrameTimestamps:(id)arg1;
- (void)setExternalCaptureSessionRotationSession:(id)arg1;
- (void)setExternalContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExternalPresentationRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialFlashMode:(long long)arg1;
- (void)setRemoteCommandServer:(id)arg1;
- (void)setShowsViewfinder:(bool)arg1;
- (void)setTransitionState:(long long)arg1 animated:(bool)arg2;
- (void)setUserInterfaceAlpha:(double)arg1;
- (void)setUsesInternalCaptureSession:(bool)arg1;
- (bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;
- (bool)shouldRotateCellsForDeviceOrientation;
- (bool)showsViewfinder;
- (void)startCaptureSession;
- (void)stopCaptureSession;
- (void)updateUIForVideoRecording:(bool)arg1;
- (double)userInterfaceAlpha;
- (bool)usesInternalCaptureSession;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

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