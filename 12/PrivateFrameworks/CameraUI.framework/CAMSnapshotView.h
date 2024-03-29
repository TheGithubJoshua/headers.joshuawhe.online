<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMSnapshotView.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMSnapshotView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory> {
    long long  __blurStyleForEffectAnimationFactory;
    UIVisualEffectView * __blurView;
    UIView * __dimmingView;
    UIView * __lowQualityBlurView;
    bool  __supportsBlur;
    bool  _blurred;
    long long  _desiredAspectRatio;
    bool  _dimmed;
    UIView * _snapshotView;
}

@property (setter=_setBlurStyleForEffectAnimationFactory:, nonatomic) long long _blurStyleForEffectAnimationFactory;
@property (setter=_setBlurView:, nonatomic, retain) UIVisualEffectView *_blurView;
@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UIView *_lowQualityBlurView;
@property (nonatomic, readonly) bool _supportsBlur;
@property (nonatomic) bool blurred;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long desiredAspectRatio;
@property (nonatomic) bool dimmed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *snapshotView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (long long)_blurStyleForEffectAnimationFactory;
- (id)_blurView;
- (id)_dimmingView;
- (id)_lowQualityBlurView;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(bool)arg2 inputRadiusAmount:(double*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(double*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(bool)arg2 opacityAmount:(double*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (double)_resumeFadeInDuration;
- (void)_setBlurStyleForEffectAnimationFactory:(long long)arg1;
- (void)_setBlurView:(id)arg1;
- (void)_setupDimOnSnapshot;
- (void)_setupLowQualityBlurOnSnapshot;
- (bool)_supportsBlur;
- (bool)blurred;
- (long long)desiredAspectRatio;
- (bool)dimmed;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;
- (void)prepareForResumingUsingCrossfade;
- (void)removeInflightBlurAnimations;
- (void)setBlurred:(bool)arg1;
- (void)setBlurred:(bool)arg1 animated:(bool)arg2 style:(long long)arg3 withCompletionBlock:(id /* block */)arg4;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)snapshotView;

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
