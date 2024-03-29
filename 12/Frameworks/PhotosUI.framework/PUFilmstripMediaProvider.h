<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUFilmstripMediaProvider.h</title>
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

/Frameworks/PhotosUI.framework/PUFilmstripMediaProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUFilmstripMediaProvider : PUMediaProvider {
    NSMutableDictionary * __completionHandlersByRequestNumber;
    NSCache * __imageCache;
    AVAssetImageGenerator * __imageGenerator;
    NSMutableArray * __pendingResults;
    long long  __requestNumber;
    NSMutableDictionary * __resultsByRequestNumber;
    AVAsset * _asset;
    bool  _deliversImagesInOrder;
    NSObject<OS_dispatch_queue> * _generationQueue;
    UIImage * _placeholderImage;
    double  _timeTolerance;
    AVVideoComposition * _videoComposition;
}

@property (setter=_setCompletionHandlersByRequestNumber:, nonatomic, retain) NSMutableDictionary *_completionHandlersByRequestNumber;
@property (setter=_setImageCache:, nonatomic, retain) NSCache *_imageCache;
@property (setter=_setImageGenerator:, nonatomic, retain) AVAssetImageGenerator *_imageGenerator;
@property (setter=_setPendingResults:, nonatomic, retain) NSMutableArray *_pendingResults;
@property (setter=_setRequestNumber:, nonatomic) long long _requestNumber;
@property (setter=_setResultsByRequestNumber:, nonatomic, retain) NSMutableDictionary *_resultsByRequestNumber;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic) bool deliversImagesInOrder;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) double timeTolerance;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (id)_completionHandlersByRequestNumber;
- (void)_deliverPendingResults;
- (void)_deliverPlaceholderImage;
- (void)_deliverResult:(id)arg1;
- (void)_didGenerateImage:(struct CGImage { }*)arg1 error:(id)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forResult:(id)arg5;
- (void)_generateImageForResult:(id)arg1;
- (id)_imageCache;
- (id)_imageGenerator;
- (id)_pendingResults;
- (long long)_requestNumber;
- (id)_resultsByRequestNumber;
- (void)_setCompletionHandlersByRequestNumber:(id)arg1;
- (void)_setImageCache:(id)arg1;
- (void)_setImageGenerator:(id)arg1;
- (void)_setPendingResults:(id)arg1;
- (void)_setRequestNumber:(long long)arg1;
- (void)_setResultsByRequestNumber:(id)arg1;
- (id)asset;
- (void)cancelAllRequests;
- (void)cancelImageRequest:(int)arg1;
- (void)dealloc;
- (bool)deliversImagesInOrder;
- (id)init;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (id)placeholderImage;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (void)setDeliversImagesInOrder:(bool)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setTimeTolerance:(double)arg1;
- (double)timeTolerance;
- (id)videoComposition;

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
