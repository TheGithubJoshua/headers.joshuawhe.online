<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFXPreviewViewController.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/CFXPreviewViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface CFXPreviewViewController : UIViewController <CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, CFXPlayButtonViewDelegate, ExportDelegate, JTClipSequenceDisplayViewControllerDelegate, UIViewWindowListener> {
    unsigned long long  _appliedDirectOverlayEditingGestures;
    UIView * _bottomControlsDrawer;
    bool  _capturedWithBackCamera;
    <CFXPreviewViewControllerDelegate> * _delegate;
    bool  _dockIsMagnified;
    double  _dockMagnifiedHeightDelta;
    CFXEffectBrowserContentPresenterViewController * _effectBrowserContentPresenterViewController;
    CFXEffectEditorView * _effectEditor;
    UIButton * _exportButton;
    JTClipSequenceExporter * _exporter;
    CFXMediaItem * _mediaItem;
    CFXPlayButtonView * _playButton;
    UIView * _playerContainerView;
    bool  _presentingFilterPicker;
    CFXControlsViewController * _previewControls;
    NSLayoutConstraint * _previewControlsContainerHeightConstraint;
    NSLayoutConstraint * _previewControlsContainerLeadingConstraint;
    NSLayoutConstraint * _previewControlsContainerTopConstraint;
    NSLayoutConstraint * _previewControlsContainerTrailingConstraint;
    UIView * _previewControlsContainerView;
    NSLayoutConstraint * _previewControlsContainerWidthConstraint;
    CFXClipPlayerViewController * _previewPlayer;
    bool  _saveMediaItemToFunCamPhotosAlbumUponExport;
    JTEffectsPreviewGenerator * _stillImagePreviewGenerator;
    bool  _userInterfaceHidden;
}

@property (nonatomic) unsigned long long appliedDirectOverlayEditingGestures;
@property (nonatomic, retain) UIView *bottomControlsDrawer;
@property (nonatomic) bool capturedWithBackCamera;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXPreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (nonatomic, retain) CFXEffectBrowserContentPresenterViewController *effectBrowserContentPresenterViewController;
@property (nonatomic, retain) CFXEffectEditorView *effectEditor;
@property (nonatomic, retain) UIView *effectsPickerDrawer;
@property (nonatomic) UIButton *exportButton;
@property (nonatomic, retain) JTClipSequenceExporter *exporter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CFXMediaItem *mediaItem;
@property (nonatomic, readonly) struct { double x1; double x2; } normalizedMinimumHitTestArea;
@property (nonatomic) CFXPlayButtonView *playButton;
@property (nonatomic) UIView *playerContainerView;
@property (getter=isPresentingFilterPicker, nonatomic) bool presentingFilterPicker;
@property (nonatomic, readonly) JTClip *previewClip;
@property (nonatomic) CFXControlsViewController *previewControls;
@property (nonatomic, retain) NSLayoutConstraint *previewControlsContainerHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *previewControlsContainerLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *previewControlsContainerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *previewControlsContainerTrailingConstraint;
@property (nonatomic) UIView *previewControlsContainerView;
@property (nonatomic, retain) NSLayoutConstraint *previewControlsContainerWidthConstraint;
@property (nonatomic, retain) CFXClipPlayerViewController *previewPlayer;
@property (nonatomic) bool saveMediaItemToFunCamPhotosAlbumUponExport;
@property (nonatomic, retain) JTEffectsPreviewGenerator *stillImagePreviewGenerator;
@property (readonly) Class superclass;
@property (getter=userInterfaceIsHidden, nonatomic) bool userInterfaceHidden;

+ (id)liveCaptureSnapshotView;
+ (void)setLiveCaptureSnapshotView:(id)arg1;

- (void).cxx_destruct;
- (void)CFX_addAssetAtURL:(id)arg1 resourceType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)CFX_addAssetWithIdentifier:(id)arg1 intoAlbum:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)CFX_addEffect:(id)arg1;
- (void)CFX_addURLToCameraRoll:(id)arg1 isStill:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)CFX_createAlbumWithCompletionHandler:(id /* block */)arg1;
- (id)CFX_fetchAssetWithLocalIdentifier:(id)arg1;
- (void)CFX_hidePreviewUI;
- (void)CFX_layoutPlayerContainerView;
- (void)CFX_notifyDelegateExportMediaItemFinishedWithError:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CFX_previewPlayerCurrentTime;
- (bool)CFX_saveImageToURL:(id)arg1 image:(id)arg2 compressionQuality:(double)arg3 asHEIF:(bool)arg4 metadata:(struct CGImageMetadata { }*)arg5;
- (void)CFX_setEffectAnimationsEnabledIfPossible:(bool)arg1;
- (void)CFX_setEffectAnimationsEnabledIfPossible:(bool)arg1 updatePlayer:(bool)arg2;
- (void)CFX_setIsExporting:(bool)arg1;
- (void)CFX_showPreviewUI;
- (void)CFX_togglePreviewUI;
- (void)addEffect:(id)arg1;
- (void)addOverlayEffect:(id)arg1 atScreenLocation:(struct CGPoint { double x1; double x2; })arg2 atScreenSize:(struct CGSize { double x1; double x2; })arg3 rotationAngle:(double)arg4;
- (double)animationDurationForCompositionTransition:(id)arg1 shouldScale:(bool*)arg2;
- (unsigned long long)appliedDirectOverlayEditingGestures;
- (id)bottomControlsDrawer;
- (bool)capturedWithBackCamera;
- (void)configureBottomControlsForOrientation;
- (void)configureUIForOrientation;
- (id)delegate;
- (void)didFinishExport:(long long)arg1;
- (void)displayEffectEditorForEffect:(id)arg1 forMode:(unsigned long long)arg2;
- (bool)dockIsMagnified;
- (double)dockMagnifiedHeightDelta;
- (id)effectBrowserContentPresenterViewController;
- (id)effectEditor;
- (void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3;
- (void)effectEditorView:(id)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(bool)arg3;
- (void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2;
- (void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)effectEditorView:(id)arg1 effectAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeTracking:(bool)arg4 adjustForMinimumHitTestArea:(bool)arg5;
- (bool)effectEditorView:(id)arg1 isEffectAtPoint:(struct CGPoint { double x1; double x2; })arg2 effect:(id)arg3;
- (unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2;
- (bool)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 displayScale:(double)arg4;
- (id)effectEditorView:(id)arg1 textForEffect:(id)arg2;
- (id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)effectEditorViewDidBeginEditing:(id)arg1;
- (void)effectEditorViewDidEndEditing:(id)arg1;
- (bool)effectEditorViewShouldShowFaceReticle:(id)arg1;
- (id)effectsPickerDrawer;
- (id)exportButton;
- (void)exportButtonTapped:(id)arg1;
- (void)exportMediaItemToFileURL:(id)arg1;
- (void)exportProgressedTo:(float)arg1;
- (void)exportStillImageWithEffects;
- (id)exporter;
- (void)filterPickerPreviewBackgroundImageAtSizeInPixels:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2;
- (void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3;
- (bool)isEditingEffect;
- (bool)isPresentingFilterPicker;
- (id)mediaItem;
- (struct { double x1; double x2; })normalizedMinimumHitTestArea;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playButton;
- (void)playButtonViewDidTapPause:(id)arg1;
- (void)playButtonViewDidTapPlay:(id)arg1;
- (void)playbackAreaDoubleTapped:(id)arg1;
- (void)playbackAreaPanned:(id)arg1 gesture:(id)arg2 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg3 translationDelta:(struct CGPoint { double x1; double x2; })arg4 atTime:(int)arg5 timeScale:(int)arg6;
- (void)playbackAreaPinched:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 scaleDelta:(double)arg5 atTime:(int)arg6 timeScale:(int)arg7;
- (void)playbackAreaRotated:(id)arg1 gesture:(id)arg2 normalizedClipPoints:(id)arg3 normalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg4 rotateDelta:(double)arg5 atTime:(int)arg6;
- (void)playbackAreaTapped:(id)arg1 normalizedClipPoint:(struct CGPoint { double x1; double x2; })arg2 atTime:(int)arg3;
- (void)playbackDidStart:(id)arg1;
- (void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
- (id)playerContainerView;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (bool)presentFullScreenTextEditorForEffect:(id)arg1 insertingEffect:(bool)arg2;
- (id)previewClip;
- (id)previewControls;
- (id)previewControlsContainerHeightConstraint;
- (id)previewControlsContainerLeadingConstraint;
- (id)previewControlsContainerTopConstraint;
- (id)previewControlsContainerTrailingConstraint;
- (id)previewControlsContainerView;
- (id)previewControlsContainerWidthConstraint;
- (id)previewPlayer;
- (void)removeEffectEditor;
- (bool)saveMediaItemToFunCamPhotosAlbumUponExport;
- (void)setAppliedDirectOverlayEditingGestures:(unsigned long long)arg1;
- (void)setBottomControlsDrawer:(id)arg1;
- (void)setCapturedWithBackCamera:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockIsMagnified:(bool)arg1;
- (void)setDockMagnifiedHeightDelta:(double)arg1;
- (void)setEffectBrowserContentPresenterViewController:(id)arg1;
- (void)setEffectEditor:(id)arg1;
- (void)setEffectsPickerDrawer:(id)arg1;
- (void)setExportButton:(id)arg1;
- (void)setExporter:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPlayButtonHiddenIfPossible:(bool)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (void)setPresentingFilterPicker:(bool)arg1;
- (void)setPreviewControls:(id)arg1;
- (void)setPreviewControlsContainerHeightConstraint:(id)arg1;
- (void)setPreviewControlsContainerLeadingConstraint:(id)arg1;
- (void)setPreviewControlsContainerTopConstraint:(id)arg1;
- (void)setPreviewControlsContainerTrailingConstraint:(id)arg1;
- (void)setPreviewControlsContainerView:(id)arg1;
- (void)setPreviewControlsContainerWidthConstraint:(id)arg1;
- (void)setPreviewPlayer:(id)arg1;
- (void)setSaveMediaItemToFunCamPhotosAlbumUponExport:(bool)arg1;
- (void)setStillImagePreviewGenerator:(id)arg1;
- (void)setUserInterfaceHidden:(bool)arg1;
- (bool)shouldExportOnly;
- (bool)shouldKeepPlayButtonHidden;
- (bool)shouldUseFaceTracking;
- (id)stillImagePreviewGenerator;
- (void)updateEffectEditorLayout;
- (void)updateFullScreenTextEditorLayout;
- (void)updateUIForDockMagnify:(bool)arg1 dockHeightDelta:(double)arg2;
- (bool)userInterfaceIsHidden;
- (void)view:(id)arg1 willMoveToWindow:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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
