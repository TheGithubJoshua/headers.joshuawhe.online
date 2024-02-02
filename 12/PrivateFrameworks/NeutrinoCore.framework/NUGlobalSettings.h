<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NUGlobalSettings.h</title>
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

/PrivateFrameworks/NeutrinoCore.framework/NUGlobalSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore (3462.2.130)
 */

@interface NUGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _settings;
}

+ (bool)bufferStorageFactoryUsePool;
+ (long long)cacheNodeCacheSizeLimit;
+ (id)cacheNodeDirectoryURL;
+ (long long)cacheNodeFilePermissions;
+ (double)cacheNodeImageCompression;
+ (long long)deviceDefaultSampleMode;
+ (bool)deviceDisableMetal;
+ (bool)deviceDisableOpenGL;
+ (bool)devicePrintRenderer;
+ (id)globalSettings;
+ (bool)imageLayerDebug;
+ (bool)imageRenderJobUseSurfaceRenderer;
+ (bool)imageRenderJobUseTextureRenderer;
+ (bool)imageSourceDisableCacheImmediately;
+ (bool)imageSourceDisableRAW;
+ (long long)imageTileSize;
+ (bool)isViewDebugEnabled;
+ (bool)logPeakRenderCIUsuage;
+ (id)pipelineSourceURL;
+ (bool)platformHasWideColor;
+ (double)renderJSPipelineTimeout;
+ (bool)renderVideoLive;
+ (bool)rendererClampToAlpha;
+ (bool)rendererUseHalfFloat;
+ (bool)rendererUseP3Linear;
+ (void)reset;
+ (void)setBufferStorageFactoryUsePool:(bool)arg1;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (void)setDeviceDisableMetal:(bool)arg1;
+ (void)setDeviceDisableOpenGL:(bool)arg1;
+ (void)setDevicePrintRenderer:(bool)arg1;
+ (void)setImageLayerDebug:(bool)arg1;
+ (void)setImageRenderJobUseSurfaceRenderer:(bool)arg1;
+ (void)setImageRenderJobUseTextureRenderer:(bool)arg1;
+ (void)setImageSourceDisableCacheImmediately:(bool)arg1;
+ (void)setImageSourceDisableRAW:(bool)arg1;
+ (void)setImageTileSize:(long long)arg1;
+ (void)setLogPeakRenderCIUsuage:(bool)arg1;
+ (void)setPipelineSourceURL:(id)arg1;
+ (void)setPlatformHasWideColor:(bool)arg1;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (void)setRenderVideoLive:(bool)arg1;
+ (void)setRendererClampToAlpha:(bool)arg1;
+ (void)setRendererUseHalfFloat:(bool)arg1;
+ (void)setRendererUseP3Linear:(bool)arg1;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (void)setSurfaceStorageFactoryUsePool:(bool)arg1;
+ (void)setViewDebugEnabled:(bool)arg1;
+ (double)storagePoolMigrationDelay;
+ (long long)storagePoolNonPurgeableLimit;
+ (long long)storagePoolPurgeableLimit;
+ (bool)surfaceStorageFactoryUsePool;

- (void).cxx_destruct;
- (id)_settingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (bool)boolSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)init;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (void)reset;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;
- (id)urlSettingForKey:(id)arg1 defaultValue:(id /* block */)arg2;

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