<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PIPhotoEditHelper.h</title>
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

/PrivateFrameworks/PhotoImaging.framework/PIPhotoEditHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging (3462.2.130)
 */

@interface PIPhotoEditHelper : NSObject

+ (id)_imageRenderRequestWithComposition:(id)arg1 wideGamut:(bool)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataArray:(id)arg2;
+ (void)addAssetIdentifier:(id)arg1 toMetadataDictionary:(id)arg2;
+ (id)depthDataRenderRequestWithComposition:(id)arg1;
+ (id)effectNameForFilterName:(id)arg1;
+ (id)filterNameForEffectName:(id)arg1;
+ (id)geometryRequestWithComposition:(id)arg1;
+ (id)imageExportRequestWithComposition:(id)arg1 format:(id)arg2 wideGamut:(bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fillInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)imageSourceWithCIImage:(id)arg1 orientation:(long long)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 proxyImage:(id)arg3 orientation:(long long)arg4 useEmbeddedPreview:(bool)arg5;
+ (id)imageSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(bool)arg3;
+ (void)initialize;
+ (bool)is3DEffect:(id)arg1;
+ (bool)isPortraitEffect:(id)arg1;
+ (bool)isPortraitStageEffect:(id)arg1;
+ (bool)isSupportedAutoLoopRecipe:(id)arg1;
+ (id)livePhotoSourceWithPhotoSource:(id)arg1 videoSource:(id)arg2;
+ (id)newAdjustmentWithName:(id)arg1;
+ (struct CGImage { }*)newCGImageFromBufferImage:(id)arg1;
+ (id)newComposition;
+ (id)newImageExportClientWithName:(id)arg1;
+ (id)newImagePropertiesClientWithName:(id)arg1;
+ (id)newImageRenderClientWithName:(id)arg1;
+ (id)newJPEGExportFormatWithCompressionQuality:(double)arg1;
+ (id)newVideoExportClientWithName:(id)arg1;
+ (id)newVideoPropertiesClientWithName:(id)arg1;
+ (id)pipelineFiltersForCropping;
+ (id)pipelineFiltersForOriginalGeometry;
+ (id)pipelineFiltersForRAWShowingOriginalWithGeometry;
+ (id)pipelineFiltersForShowingOriginalWithGeometry;
+ (id)portraitEffectsMatteRenderRequestWithComposition:(id)arg1;
+ (id)priorityWithLevel:(long long)arg1;
+ (void)removeAssetIdentifierFromMetadataArray:(id)arg1;
+ (id)videoExportRequestWithComposition:(id)arg1 destinationURL:(id)arg2 wideGamut:(bool)arg3;
+ (id)videoRenderRequestWithComposition:(id)arg1 fitInSize:(struct CGSize { double x1; double x2; })arg2 wideGamut:(bool)arg3;
+ (id)videoSourceWithURL:(id)arg1;

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
