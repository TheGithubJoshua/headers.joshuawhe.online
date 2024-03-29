<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTPresetImageProvider.h</title>
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

/PrivateFrameworks/AvatarUI.framework/AVTPresetImageProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer> {
    <AVTImageCache> * _cache;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _colorQueue;
    AVTRenderingScope * _colorScope;
    <AVTDeviceResourceConsumerDelegate> * _consumerDelegate;
    AVTRenderingScope * _defaultScope;
    <AVTUILogger> * _logger;
    NSObject<OS_dispatch_queue> * _presetQueue;
    AVTAvatarConfigurationImageRenderer * _renderer;
    <AVTTaskScheduler> * _renderingScheduler;
}

@property (nonatomic, readonly) <AVTImageCache> *cache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *colorQueue;
@property (nonatomic, readonly) AVTRenderingScope *colorScope;
@property (nonatomic) <AVTDeviceResourceConsumerDelegate> *consumerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) AVTRenderingScope *defaultScope;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presetQueue;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly) <AVTTaskScheduler> *renderingScheduler;
@property (readonly) Class superclass;

+ (id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3;
+ (id)presetImageCacheWithEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id)cache;
- (id)callbackQueue;
- (id)colorQueue;
- (id)colorScope;
- (id)consumerDelegate;
- (id)defaultScope;
- (id)initWithCache:(id)arg1 environment:(id)arg2;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(id /* block */)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7;
- (id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2;
- (id)logger;
- (id)presetQueue;
- (id /* block */)providerForColorIntoLayer;
- (id /* block */)providerForGradientFromColor;
- (id /* block */)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(id /* block */)arg4;
- (id /* block */)providerForThumbnailForModelColor:(id)arg1;
- (id /* block */)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 avatarConfiguration:(id)arg3 framingMode:(id)arg4;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (void)renderColorForColorPreset:(id)arg1 skinColor:(id)arg2 intoLayer:(id)arg3;
- (void)renderColorGradientForModelColor:(id)arg1 skinColor:(id)arg2 handler:(id /* block */)arg3;
- (id)renderThumbnailForModelColor:(id)arg1;
- (id)renderer;
- (id)renderingScheduler;
- (void)setConsumerDelegate:(id)arg1;

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
