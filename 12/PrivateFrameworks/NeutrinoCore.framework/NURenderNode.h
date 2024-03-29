<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NURenderNode.h</title>
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

/PrivateFrameworks/NeutrinoCore.framework/NURenderNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore (3462.2.130)
 */

@interface NURenderNode : NSObject {
    bool  _cached;
    NUGeometrySpaceMap * _cached_geometrySpaceMap;
    <NUImageProperties> * _cached_imageProperties;
    AVAudioMix * _cached_outputAudioMix;
    AVDepthData * _cached_outputDepthData;
    CIImage * _cached_outputImage;
    NUImageGeometry * _cached_outputImageGeometry;
    AVPortraitEffectsMatte * _cached_outputPortraitEffectsMatte;
    AVComposition * _cached_outputVideo;
    AVVideoComposition * _cached_outputVideoComposition;
    <NUVideoProperties> * _cached_videoProperties;
    NSString * _dominantInputKey;
    long long  _evaluatedForMode;
    unsigned long long  _hashValue;
    struct NSDictionary { Class x1; } * _inputs;
    bool  _isGeometryNode;
    NSDictionary * _settings;
    NSString * _spaceMapKey;
    struct NSDictionary { Class x1; } * _xforms;
}

@property (retain) NUGeometrySpaceMap *cached_geometrySpaceMap;
@property (retain) <NUImageProperties> *cached_imageProperties;
@property (retain) AVAudioMix *cached_outputAudioMix;
@property (retain) AVDepthData *cached_outputDepthData;
@property (retain) CIImage *cached_outputImage;
@property (retain) NUImageGeometry *cached_outputImageGeometry;
@property (retain) AVPortraitEffectsMatte *cached_outputPortraitEffectsMatte;
@property (retain) AVComposition *cached_outputVideo;
@property (retain) AVVideoComposition *cached_outputVideoComposition;
@property (retain) <NUVideoProperties> *cached_videoProperties;
@property (nonatomic, readonly) NSString *dominantInputKey;
@property (nonatomic) long long evaluatedForMode;
@property (readonly) NSDictionary *inputs;
@property (nonatomic, readonly) bool isCached;
@property (readonly) bool isGeometryNode;
@property (readonly) bool isPlaceholderNode;
@property (readonly) NSDictionary *settings;
@property (nonatomic, readonly) NSString *spaceMapKey;
@property (readonly) NSDictionary *xforms;

+ (id)nodeFromCache:(id)arg1;
+ (id)nodeFromCache:(id)arg1 cache:(id)arg2;

- (void).cxx_destruct;
- (void)_appendInputsWithOffset:(long long)arg1 to:(id)arg2;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(bool)arg2;
- (id)_dictionaryToSingleLineString:(id)arg1;
- (id)_evaluateAudioMix:(out id*)arg1;
- (id)_evaluateDepthData:(out id*)arg1;
- (id)_evaluateGeometrySpaceMap:(out id*)arg1;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateImageProperties:(out id*)arg1;
- (id)_evaluatePortraitEffectsMatte:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)_generateSpaceMapKey;
- (unsigned long long)_hash;
- (id)cached_geometrySpaceMap;
- (id)cached_imageProperties;
- (id)cached_outputAudioMix;
- (id)cached_outputDepthData;
- (id)cached_outputImage;
- (id)cached_outputImageGeometry;
- (id)cached_outputPortraitEffectsMatte;
- (id)cached_outputVideo;
- (id)cached_outputVideoComposition;
- (id)cached_videoProperties;
- (bool)canPropagateOriginalDepthData;
- (id)debugDescription;
- (id)description;
- (id)descriptionSubClassHook;
- (id)dominantInputKey;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2;
- (id)evaluateSettings:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (long long)evaluatedForMode;
- (id)geometryNode;
- (bool)hasCyclicalDependencyForInput:(id)arg1;
- (unsigned long long)hash;
- (id)imageProperties:(out id*)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)inputForKey:(id)arg1;
- (struct NSDictionary { Class x1; }*)inputs;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRenderNode:(id)arg1;
- (bool)isEqualToSettingsAndInputs:(id)arg1;
- (bool)isGeometryNode;
- (bool)isPlaceholderNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)nu_updateDigest:(id)arg1;
- (id)originalDepthData:(out id*)arg1;
- (id)originalPortraitEffectsMatte:(out id*)arg1;
- (id)outputAudioMix:(out id*)arg1;
- (id)outputGeometrySpaceMap:(out id*)arg1;
- (id)outputImage:(out id*)arg1;
- (id)outputImageGeometry:(out id*)arg1;
- (id)outputVideo:(out id*)arg1;
- (id)outputVideoComposition:(out id*)arg1;
- (id)placeholderNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (void)resetInput:(id)arg1 forKey:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary { Class x1; }*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (void)setCached_geometrySpaceMap:(id)arg1;
- (void)setCached_imageProperties:(id)arg1;
- (void)setCached_outputAudioMix:(id)arg1;
- (void)setCached_outputDepthData:(id)arg1;
- (void)setCached_outputImage:(id)arg1;
- (void)setCached_outputImageGeometry:(id)arg1;
- (void)setCached_outputPortraitEffectsMatte:(id)arg1;
- (void)setCached_outputVideo:(id)arg1;
- (void)setCached_outputVideoComposition:(id)arg1;
- (void)setCached_videoProperties:(id)arg1;
- (void)setEvaluatedForMode:(long long)arg1;
- (id)settings;
- (unsigned long long)settingsAndInputsHash;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)spaceMapKey;
- (id)uniqueInputNode;
- (id)videoProperties:(out id*)arg1;
- (struct NSDictionary { Class x1; }*)xforms;

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
