<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PULivePhotoTrimScrubberLoupeView.h</title>
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

/Frameworks/PhotosUI.framework/PULivePhotoTrimScrubberLoupeView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PULivePhotoTrimScrubberLoupeView : UIView {
    AVAsset * _asset;
    CAShapeLayer * _borderLayer;
    _PULivePhotoTrimScrubberLoupeViewImageRequest * _currentImageRequest;
    bool  _imageIsValid;
    UIImageView * _imageView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceTime;
    AVVideoComposition * _videoComposition;
    ISVideoPlayerUIView * _videoView;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) AVAsset *asset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceTime;
@property (nonatomic, copy) AVVideoComposition *videoComposition;
@property (nonatomic, retain) ISWrappedAVPlayer *videoPlayer;

- (void).cxx_destruct;
- (void)_PULivePhotoTrimScrubberLoupeView_commonInit;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_presentImage:(id)arg1 forSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_updateBorderLayerPath;
- (void)_updateImageIfNeeded;
- (id)asset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadImage;
- (void)setAsset:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceTime;
- (id)videoComposition;
- (id)videoPlayer;

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
