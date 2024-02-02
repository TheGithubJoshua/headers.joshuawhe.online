<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPassView.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPassView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPassView : UIView <PKPasscodeLockManagerObserver, UIGestureRecognizerDelegate> {
    PKPassColorProfile * _colorProfile;
    long long  _contentMode;
    unsigned long long  _contentModeToken;
    NSMutableArray * _delayedAnimations;
    <WLCardViewDelegate> * _delegate;
    PKPassFrontFaceView * _frontFace;
    bool  _invalidated;
    double  _modalShadowVisibility;
    bool  _modallyPresented;
    PKPass * _pass;
    PKPasscodeLockManager * _passcodeLockManager;
    long long  _priorContentMode;
    PKPassFaceViewRendererState * _rendererState;
    unsigned long long  _suppressedContent;
    NSString * _suppressingIdentifier;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool frontFaceBodyContentCreated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForcedFrontFaceResized;
@property (nonatomic, readonly) bool isFrontFaceResized;
@property (nonatomic) double modalShadowVisibility;
@property (getter=isModallyPresented, nonatomic) bool modallyPresented;
@property (nonatomic, readonly, retain) PKPass *pass;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) PKPassFaceViewRendererState *rendererState;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_applyContentMode:(bool)arg1;
- (long long)_frontFaceBackgroundModeForContentMode;
- (unsigned long long)_regionsForCurrentModes;
- (void)_resizePassAnimated:(bool)arg1 notify:(bool)arg2;
- (void)_updateFrontFaceSuppressedContent;
- (void)_updateHighEndLayerShadowAnimated:(bool)arg1 withDelay:(double)arg2;
- (void)_updateLayerShadowAnimated:(bool)arg1 withDelay:(double)arg2;
- (void)_updateLowEndLayerShadowAnimated:(bool)arg1 withDelay:(double)arg2;
- (bool)_visibleFaceShouldClipForCurrentViewMode:(double*)arg1;
- (bool)canShowBarcode;
- (long long)contentMode;
- (void)dealloc;
- (id)delegate;
- (void)didAuthenticate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfVisibleFace;
- (bool)frontFaceBodyContentCreated;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 content:(long long)arg2;
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3;
- (id)initWithPass:(id)arg1 content:(long long)arg2 suppressedContent:(unsigned long long)arg3 rendererState:(id)arg4;
- (void)invalidate;
- (bool)isForcedFrontFaceResized;
- (bool)isFrontFaceResized;
- (bool)isModallyPresented;
- (bool)isPaused;
- (id)item;
- (void)layoutSubviews;
- (double)modalShadowVisibility;
- (id)pass;
- (void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(bool)arg2;
- (void)presentDiff:(id)arg1 completion:(id /* block */)arg2;
- (id)rendererState;
- (void)resizePassAnimated:(bool)arg1 notify:(bool)arg2;
- (void)setContentMode:(long long)arg1;
- (void)setContentMode:(long long)arg1 animated:(bool)arg2;
- (void)setContentMode:(long long)arg1 animated:(bool)arg2 withDelay:(double)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(bool)arg2;
- (void)setModalShadowVisibility:(double)arg1;
- (void)setModalShadowVisibility:(double)arg1 animated:(bool)arg2;
- (void)setModalShadowVisibility:(double)arg1 animated:(bool)arg2 withDelay:(double)arg3;
- (void)setModallyPresented:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuppressedContent:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeOfFront;
- (struct CGSize { double x1; double x2; })sizeOfFrontFace;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotOfFrontFace;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize { double x1; double x2; })arg1;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(bool)arg1;
- (unsigned long long)suppressedContent;
- (void)tapRecognized:(id)arg1;
- (id)uniqueID;
- (void)updateValidityDisplay;

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