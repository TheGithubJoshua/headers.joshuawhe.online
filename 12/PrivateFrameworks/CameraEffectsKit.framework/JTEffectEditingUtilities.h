<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>JTEffectEditingUtilities.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/JTEffectEditingUtilities.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface JTEffectEditingUtilities : NSObject

+ (void)CFX_ApplyTextFlipIfNeeded:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
+ (struct CGPoint { double x1; double x2; })CFX_closeButtonInsetForEffect:(id)arg1 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGPoint { double x1; double x2; })CFX_compositionPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 locatedOnFace:(bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize { double x1; double x2; })arg4;
+ (struct CGSize { double x1; double x2; })CFX_compositionSize;
+ (struct CGPoint { double x1; double x2; })CFX_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSize:(struct CGSize { double x1; double x2; })arg2 toSize:(struct CGSize { double x1; double x2; })arg3 invertY:(bool)arg4;
+ (struct CGPoint { double x1; double x2; })CFX_faceTrackPointFromCGPoint:(struct CGPoint { double x1; double x2; })arg1 overlay:(id)arg2 relativeToSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)CFX_faceTrackPointsFromCGPoints:(struct CGPoint { double x1; double x2; }*)arg1 overlay:(id)arg2 relativeToSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CFX_faceTrackRectForEffectFromUIKitCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEffect:(id)arg2 relativeToSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CFX_frameForEffect:(id)arg1 fitToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)CFX_hitTestEffects:(id)arg1 withinEffectPoints:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4 includeTracking:(bool)arg5 minimumHitTestArea:(struct { double x1; double x2; })arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CFX_motionRectForEffectFromFaceTrackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEffect:(id)arg2 relativeToSize:(struct CGSize { double x1; double x2; })arg3;
+ (struct CGPoint { double x1; double x2; })CFX_placementPointForOverlay:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inCompositionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGPoint { double x1; double x2; })CFX_screenPointFromCompositionPoint:(struct CGPoint { double x1; double x2; })arg1 locatedOnFace:(bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize { double x1; double x2; })arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CFX_screenRectForOverlayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCompositionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withFaceAnchor:(id)arg3;
+ (int)CFX_trackingTypeForOverlayIntersectionWithFaceRect:(id)arg1 withCurrentTrackingType:(int)arg2;
+ (void)addTransformToEffect:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 restrictToBounds:(bool)arg5;
+ (bool)areFaceTrackedEffects:(id)arg1;
+ (void)beginTextEditingForEffect:(id)arg1;
+ (bool)canApplyEffectAsTracked;
+ (bool)canEditTextForEffect:(id)arg1;
+ (void)changeTrackingTypeIfNecessary:(id)arg1 forTouchPoint:(struct CGPoint { double x1; double x2; })arg2 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completion:(id /* block */)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compositionBounds;
+ (void)configureOverlayForInsertion:(id)arg1 atNormalizedCompositionPoint:(struct CGPoint { double x1; double x2; })arg2 scaleX:(double)arg3 scaleY:(double)arg4 rotationAngle:(double)arg5 includeTracking:(bool)arg6 previewViewCorrectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg7;
+ (void)configureOverlayForInsertion:(id)arg1 atScaleRelativeToComposition:(double)arg2 includeTracking:(bool)arg3 previewViewCorrectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
+ (id)createTextEditingPropertiesForEffect:(id)arg1 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 displayScale:(double)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentFaceRectRelativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)disableAnimationForEffects:(id)arg1;
+ (void)enableAnimationForEffects:(id)arg1 animationStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (void)endTextEditingForEffect:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeTracking:(bool)arg4 minimumHitTestArea:(struct { double x1; double x2; })arg5;
+ (id)hitTestEffects:(id)arg1 atNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeTracking:(bool)arg4;
+ (id)hitTestEffects:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 includeTracking:(bool)arg5;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeTracking:(bool)arg4 minimumHitTestArea:(struct { double x1; double x2; })arg5;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atNormalizedPoints:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeTracking:(bool)arg4;
+ (id)hitTestEffectsAtPosterFrame:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 includeTracking:(bool)arg5;
+ (bool)isStreamingMode;
+ (unsigned long long)maximumTextLengthForEffect:(id)arg1;
+ (id)overlayHitTestPointsForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 compositionSize:(struct CGSize { double x1; double x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForCustomizedOverlay:(id)arg1 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scaleX:(double)arg3 scaleY:(double)arg4;
+ (struct CGPoint { double x1; double x2; })removeButtonPositionForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atPosterFrameRelativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeTracking:(bool)arg4 viewCorrectionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
+ (void)setStreamingMode:(bool)arg1;
+ (void)setTextRenderingEnabledForEffect:(id)arg1 value:(bool)arg2;
+ (void)setTrackingTypeForEffect:(id)arg1 trackingType:(int)arg2;
+ (bool)shouldRenderTextWithMotionWhileEditingTextForEffect:(id)arg1;
+ (struct CGPoint { double x1; double x2; })spacingBetweenCenterPointOfEffect:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 includeTracking:(bool)arg5;
+ (id)textForEffect:(id)arg1;
+ (id)trackingTransformWithEffect:(id)arg1 effectFrame:(id)arg2 objectTransform:(id)arg3 fractionComplete:(double)arg4;
+ (void)updateEffectText:(id)arg1 newText:(id)arg2;
+ (void)updateEffectToDefaultTextIfEmpty:(id)arg1;
+ (void)updateEffectVisibility:(id)arg1 value:(bool)arg2;
+ (id)viewInfoForEffect:(id)arg1 forViewBoundsAtPosterFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeDropShadow:(bool)arg4;

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