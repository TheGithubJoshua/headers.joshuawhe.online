<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLCropOverlay.h</title>
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

/PrivateFrameworks/PhotoLibrary.framework/PLCropOverlay.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary (1.0)
 */

@interface PLCropOverlay : UIView {
    PLCropOverlayBottomBar * __bottomBar;
    UIButton * __cameraCancelButton;
    UIImageView * _bottomShineView;
    PLContactPhotoOverlay * _contactPhotoOverlay;
    unsigned int  _controlsAreVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    unsigned int  _cropRectIsVisible;
    PLCropOverlayCropView * _cropView;
    UIToolbar * _customToolbar;
    NSString * _defaultOKButtonTitle;
    <PLCropOverlayDelegate> * _delegate;
    bool  _displayedInPopover;
    PLProgressHUD * _hud;
    bool  _isEditingHomeScreen;
    bool  _isEditingLockScreen;
    int  _mode;
    bool  _motionToggleIsOn;
    unsigned int  _offsetStatusBar;
    UIButton * _okButton;
    UIView * _overlayContainerView;
    unsigned int  _previewMode;
    UIImageView * _shadowView;
    unsigned int  _showsCropRegion;
    float  _statusBarHeight;
    UILabel * _titleLabel;
    unsigned int  _tookPhoto;
    UIImageView * _topShineView;
    UIView * _wildcatPickerBottomView;
    UIView * _wildcatPickerTopView;
}

@property (nonatomic, readonly) PLCropOverlayBottomBar *_bottomBar;
@property (nonatomic, readonly) UIButton *_cameraCancelButton;
@property (nonatomic, retain) UIView *cameraBottomBar;
@property (nonatomic, readonly) PLContactPhotoOverlay *contactPhotoOverlay;
@property (nonatomic, copy) NSString *defaultOKButtonTitle;
@property (nonatomic) <PLCropOverlayDelegate> *delegate;
@property (getter=isDisplayedInPopover, nonatomic) bool displayedInPopover;
@property (nonatomic) bool isEditingHomeScreen;
@property (nonatomic) bool isEditingLockScreen;
@property (nonatomic) bool motionToggleHidden;
@property (nonatomic) bool motionToggleIsOn;
@property (nonatomic) bool previewMode;
@property (nonatomic, readonly) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;

- (void).cxx_destruct;
- (void)_backgroundSavePhoto:(id)arg1;
- (id)_bottomBar;
- (id)_cameraCancelButton;
- (void)_createCropView;
- (void)_fadeOutCompleted:(id)arg1;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(bool)arg2;
- (void)_pauseButtonPressed:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)_setMode:(int)arg1;
- (void)_tappedBottomBarCancelButton:(id)arg1;
- (void)_tappedBottomBarDoneButton:(id)arg1;
- (void)_tappedBottomBarMotionToggle;
- (void)_tappedBottomBarPlaybackButton:(id)arg1;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateEditImageDoneButtonTitle;
- (void)_updateMotionToggle;
- (void)_updateTitle;
- (void)_updateToolbarItems:(bool)arg1;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;
- (id)bottomBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bottomBarFrame;
- (id)cameraBottomBar;
- (void)cancelButtonClicked:(id)arg1;
- (id)contactPhotoOverlay;
- (bool)controlsAreVisible;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (id)defaultOKButtonTitle;
- (id)delegate;
- (void)didCapturePhoto;
- (void)didCaptureVideo;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)dismiss;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2 offsettingStatusBar:(bool)arg3;
- (void)insertIrisView:(id)arg1;
- (bool)isDisplayedInPopover;
- (bool)isEditingHomeScreen;
- (bool)isEditingLockScreen;
- (bool)isTelephonyUIMode:(int)arg1;
- (bool)isWallpaperUIMode:(int)arg1;
- (void)layoutSubviews;
- (int)mode;
- (bool)motionToggleHidden;
- (bool)motionToggleIsOn;
- (id)overlayContainerView;
- (bool)previewMode;
- (void)removeProgress;
- (void)setCameraBottomBar:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setControlsAreVisible:(bool)arg1;
- (void)setCropRectVisible:(bool)arg1 duration:(float)arg2;
- (void)setDefaultOKButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedInPopover:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsEditingHomeScreen:(bool)arg1;
- (void)setIsEditingLockScreen:(bool)arg1;
- (void)setMotionToggleHidden:(bool)arg1;
- (void)setMotionToggleIsOn:(bool)arg1;
- (void)setOKButtonShowsCamera:(bool)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOverlayContainerView:(id)arg1;
- (void)setPreviewMode:(bool)arg1;
- (void)setProgressDone;
- (void)setShowProgress:(bool)arg1 title:(id)arg2;
- (void)setShowsCropRegion:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setTitleHidden:(bool)arg1 animationDuration:(double)arg2;
- (void)statusBarHeightDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (id)wallpaperBottomBar;

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
