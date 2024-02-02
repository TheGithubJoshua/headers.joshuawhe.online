<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVPVideoStillImageLoader.h</title>
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

/PrivateFrameworks/TVPlayback.framework/TVPVideoStillImageLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback (1)
 */

@interface TVPVideoStillImageLoader : NSObject <TVPPlaybackImageLoader> {
    AVAssetImageGenerator * _imageGenerator;
    NSMutableArray * _imageLoadInfosBeingLoaded;
    NSObject<TVPMediaItem> * _mediaItem;
    TVPMediaItemLoader * _mediaItemLoader;
    NSMutableArray * _pendingImageLoadInfos;
    TVPStateMachine * _stateMachine;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVAssetImageGenerator *imageGenerator;
@property (nonatomic, retain) NSMutableArray *imageLoadInfosBeingLoaded;
@property (nonatomic, retain) NSObject<TVPMediaItem> *mediaItem;
@property (nonatomic, retain) TVPMediaItemLoader *mediaItemLoader;
@property (nonatomic, retain) NSMutableArray *pendingImageLoadInfos;
@property (nonatomic, retain) TVPStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_mediaItemLoader:(id)arg1 stateDidChangeTo:(id)arg2;
- (void)_registerStateMachineHandlers;
- (void)cancelImageLoadingForIdentifiers:(id)arg1;
- (double)closestImageTimeForTime:(double)arg1;
- (id)imageGenerator;
- (id)imageLoadInfosBeingLoaded;
- (id)initWithMediaItem:(id)arg1;
- (void)invalidate;
- (id)loadImagesForTimes:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 withHandler:(id /* block */)arg3;
- (id)mediaItem;
- (id)mediaItemLoader;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pendingImageLoadInfos;
- (void)setImageGenerator:(id)arg1;
- (void)setImageLoadInfosBeingLoaded:(id)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMediaItemLoader:(id)arg1;
- (void)setPendingImageLoadInfos:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)stateMachine;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;

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