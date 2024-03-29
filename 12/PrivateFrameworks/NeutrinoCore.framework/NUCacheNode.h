<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NUCacheNode.h</title>
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

/PrivateFrameworks/NeutrinoCore.framework/NUCacheNode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore (3462.2.130)
 */

@interface NUCacheNode : NURenderNode {
    NSString * _cachedCacheIdentifier;
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    NURenderContext * _renderContext;
    NSError * _sourceError;
    NUSourceNode * _sourceNode;
    long long  _subsampleFactor;
}

@property (nonatomic, readonly) NSString *cacheIdentifier;
@property (retain) NSString *cachedCacheIdentifier;
@property (nonatomic, readonly) NURenderNode *inputNode;
@property (nonatomic, readonly) long long subsampleFactor;

+ (void)_ensureCacheDirectoryURL:(id)arg1;
+ (long long)_maxCacheDirectorySize;
+ (void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2;
+ (id)cacheDirectoryURL;
+ (void)clearCacheDirectory;
+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
+ (id)registry;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoComposition:(out id*)arg1;
- (unsigned long long)_hash;
- (void)_resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (id)cacheIdentifier;
- (id)cachedCacheIdentifier;
- (id)descriptionSubClassHook;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id*)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)inputNode;
- (bool)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id*)arg3;
- (bool)isEqualToRenderNode:(id)arg1;
- (bool)isResolved;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)nu_updateDigest:(id)arg1;
- (id)persistentURL;
- (id)persistentURLPrefix;
- (bool)requiresAudioMix;
- (bool)requiresVideoComposition;
- (void)resolveSourceWithResponse:(struct NUResponse { Class x1; }*)arg1;
- (void)resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (id)resolvedSourceNode:(out id*)arg1;
- (long long)sampleMode;
- (void)setCachedCacheIdentifier:(id)arg1;
- (long long)subsampleFactor;
- (long long)subsampleFactorForScale:(struct { long long x1; long long x2; })arg1;
- (id)temporaryURLPrefix;
- (bool)tryLoadPersistentURL:(id)arg1 error:(out id*)arg2;

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
