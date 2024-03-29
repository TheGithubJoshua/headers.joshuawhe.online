<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVVideoComposition.h</title>
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

/Frameworks/AVFoundation.framework/AVVideoComposition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {
    AVVideoCompositionInternal * _videoComposition;
}

@property (nonatomic, readonly, retain) AVVideoCompositionCoreAnimationTool *animationTool;
@property (nonatomic, readonly) NSString *colorPrimaries;
@property (nonatomic, readonly) NSString *colorTransferFunction;
@property (nonatomic, readonly) NSString *colorYCbCrMatrix;
@property (nonatomic, readonly) Class customVideoCompositorClass;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameDuration;
@property (nonatomic, readonly, copy) NSArray *instructions;
@property (nonatomic, readonly) float renderScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic, readonly) int sourceTrackIDForFrameTiming;

+ (id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(id /* block */)arg2;
+ (void)initialize;
+ (id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(id /* block */)arg2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2;

- (int)_auxiliaryTrackID;
- (id)_auxiliaryTrackLayer;
- (void)_bumpChangeSeed;
- (unsigned long long)_changeSeed;
- (bool)_copyFigVideoCompositor:(const void**)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(bool)arg4 error:(id*)arg5;
- (id)_deepCopy;
- (bool)_hasLayerAsAuxiliaryTrack;
- (bool)_hasPostProcessingLayers;
- (bool)_isValidReturningExceptionReason:(id*)arg1;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayer;
- (id)_postProcessingVideoLayers;
- (id)_serializableInstructions;
- (void)_setFrameDurationForFrameRate:(float)arg1 sourceTrackIDForFrameTiming:(int)arg2;
- (id)animationTool;
- (id)builtInCompositorName;
- (id)colorPrimaries;
- (id)colorTransferFunction;
- (id)colorYCbCrMatrix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)customVideoCompositorClass;
- (void)dealloc;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (id)init;
- (id)instructionForFigInstruction:(void*)arg1;
- (id)instructions;
- (bool)isValidForAsset:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 validationDelegate:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)renderScale;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setAnimationTool:(id)arg1;
- (void)setBuiltInCompositorName:(id)arg1;
- (void)setColorPrimaries:(id)arg1;
- (void)setColorTransferFunction:(id)arg1;
- (void)setColorYCbCrMatrix:(id)arg1;
- (void)setCustomVideoCompositorClass:(Class)arg1;
- (void)setFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstructions:(id)arg1;
- (void)setRenderScale:(float)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceTrackIDForFrameTiming:(int)arg1;
- (int)sourceTrackIDForFrameTiming;
- (void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg1 formatDescriptions:(id)arg2 colorPrimaries:(id*)arg3 transferFunction:(id*)arg4 yCbCrMatrix:(id*)arg5;

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
