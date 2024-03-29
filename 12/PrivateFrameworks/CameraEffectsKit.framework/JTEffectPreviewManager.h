<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JTEffectPreviewManager.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/JTEffectPreviewManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface JTEffectPreviewManager : NSObject <PVLivePlayerDelegate> {
    bool  _allowCachingStaticPreviewsToDisk;
    JTImage * _backgroundImage;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSArray * _continousPreviewAnimojis;
    NSArray * _continousPreviewEffects;
    JTEffectContinousPreviewOptions * _continousPreviewOptions;
    PVLivePlayer * _continousPreviewPlayer;
    NSArray * _continousPreviewProVideoEffects;
    bool  _continouslyPreviewing;
    JTImage * _defaultPreviewImage;
    <JTEffectPreviewManagerDelegate> * _delegate;
    NSArray * _effectStackAppliedBeforeContinousPreview;
    JTFrameRateCalculator * _fpsCalc;
    NSObject * _pickerPreviewingToken;
    JTPixelRotationSession * _pixelRotationSession;
    JTCacheDictionary * _previewCache;
    JTEffectPickerPreviewDiskCache * _previewDiskCache;
    NSObject<OS_dispatch_queue> * _previewQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _previewRenderSize;
    JTEffectsPreviewGenerator * _staticPreviewGenerator;
}

@property bool allowCachingStaticPreviewsToDisk;
@property (retain) JTImage *backgroundImage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSArray *continousPreviewAnimojis;
@property (nonatomic, copy) NSArray *continousPreviewEffects;
@property (nonatomic, retain) JTEffectContinousPreviewOptions *continousPreviewOptions;
@property (nonatomic, retain) PVLivePlayer *continousPreviewPlayer;
@property (nonatomic, retain) NSArray *continousPreviewProVideoEffects;
@property (getter=isContinouslyPreviewing) bool continouslyPreviewing;
@property (readonly, copy) NSString *debugDescription;
@property (retain) JTImage *defaultPreviewImage;
@property (nonatomic) <JTEffectPreviewManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *effectStackAppliedBeforeContinousPreview;
@property (nonatomic, readonly) JTFrameRateCalculator *fpsCalc;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject *pickerPreviewingToken;
@property (nonatomic, retain) JTPixelRotationSession *pixelRotationSession;
@property (nonatomic, readonly) JTCacheDictionary *previewCache;
@property (nonatomic, readonly) JTEffectPickerPreviewDiskCache *previewDiskCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *previewQueue;
@property (nonatomic) struct CGSize { double x1; double x2; } previewRenderSize;
@property (nonatomic) struct CGSize { double x1; double x2; } previewSize;
@property (nonatomic, retain) JTEffectsPreviewGenerator *staticPreviewGenerator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)JT_canCacheEffectToDisk:(id)arg1;
- (void)JT_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(id /* block */)arg1;
- (void)JT_renderPreviewForEffect:(id)arg1 completion:(id /* block */)arg2;
- (void)JT_stopCachingPreviewsContinuously;
- (void)adjustAnimationInfoForLiveCaptureRequest:(id)arg1;
- (bool)allowCachingStaticPreviewsToDisk;
- (id)backgroundImage;
- (id)buildRenderRequest:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)cachedPreviewForEffect:(id)arg1 completion:(id /* block */)arg2;
- (void)cachedPreviewForEffectIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (void)centerAnimationInfoForRequest:(id)arg1;
- (id)continousPreviewAnimojis;
- (id)continousPreviewEffects;
- (id)continousPreviewOptions;
- (id)continousPreviewPlayer;
- (id)continousPreviewProVideoEffects;
- (void)dealloc;
- (id)defaultPreviewImage;
- (id)delegate;
- (id)effectStackAppliedBeforeContinousPreview;
- (id)fpsCalc;
- (bool)hasCachedPreviewForEffectID:(id)arg1;
- (bool)highQualityRendering;
- (id)initWithPreviewSize:(struct CGSize { double x1; double x2; })arg1 callbackQueue:(id)arg2;
- (bool)isContinouslyPreviewing;
- (bool)lowPriorityScheduling;
- (id)pickerPreviewingToken;
- (id)pixelRotationSession;
- (unsigned int)preferredSchedulingQueueSize;
- (void)preparePreviewForEffect:(id)arg1 completion:(id /* block */)arg2;
- (id)previewCache;
- (id)previewDiskCache;
- (id)previewQueue;
- (struct CGSize { double x1; double x2; })previewRenderSize;
- (struct CGSize { double x1; double x2; })previewSize;
- (void)purgeCachedPreviewForEffectID:(id)arg1;
- (void)purgeCachedPreviewsForAllEffects;
- (void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(bool)arg3;
- (bool)rendersDefaultContinousPreviewImage;
- (void)setAllowCachingStaticPreviewsToDisk:(bool)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setContinousPreviewAnimojis:(id)arg1;
- (void)setContinousPreviewEffects:(id)arg1;
- (void)setContinousPreviewOptions:(id)arg1;
- (void)setContinousPreviewPlayer:(id)arg1;
- (void)setContinousPreviewProVideoEffects:(id)arg1;
- (void)setContinouslyPreviewing:(bool)arg1;
- (void)setDefaultPreviewImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectStackAppliedBeforeContinousPreview:(id)arg1;
- (void)setPickerPreviewingToken:(id)arg1;
- (void)setPixelRotationSession:(id)arg1;
- (void)setPreviewRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStaticPreviewGenerator:(id)arg1;
- (void)startCachingPreviewsContinuouslyWithOptions:(id)arg1;
- (id)staticPreviewGenerator;
- (void)stopCachingPreviewsContinuously;

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
