<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHLivePhotoRequest.h</title>
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

/Frameworks/Photos.framework/PHLivePhotoRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHLivePhotoRequest : PHImageManagerRequest {
    PHAsset * __asset;
    AVAsset * __avAsset;
    bool  __avAssetRequestCompleted;
    bool  __avAssetRequestFailed;
    long long  __contentMode;
    bool  __didFinishStart;
    NSError * __error;
    UIImage * __image;
    PHImageManager * __imageManager;
    bool  __imageRequestCompleted;
    bool  __imageRequestFailed;
    bool  __isCancelled;
    bool  __isImageDegraded;
    bool  __isInCloud;
    bool  __isInProgress;
    NSRecursiveLock * __isolationLock;
    bool  __needsUpdateResult;
    PHLivePhotoRequestOptions * __options;
    id /* block */  __resultHandler;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  __stillDisplayTime;
    struct CGSize { 
        double width; 
        double height; 
    }  __targetSize;
}

@property (nonatomic, readonly) PHAsset *_asset;
@property (setter=_setAVAsset:, nonatomic, retain) AVAsset *_avAsset;
@property (setter=_setAVAssetRequestCompleted:, nonatomic) bool _avAssetRequestCompleted;
@property (setter=_setAVAssetRequestFailed:, nonatomic) bool _avAssetRequestFailed;
@property (nonatomic, readonly) long long _contentMode;
@property (setter=_setDidFinishStart:, nonatomic) bool _didFinishStart;
@property (setter=_setError:, nonatomic, retain) NSError *_error;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (nonatomic, readonly) PHImageManager *_imageManager;
@property (setter=_setImageRequestCompleted:, nonatomic) bool _imageRequestCompleted;
@property (setter=_setImageRequestFailed:, nonatomic) bool _imageRequestFailed;
@property (setter=_setCancelled:, nonatomic) bool _isCancelled;
@property (setter=_setImageDegraded:, nonatomic) bool _isImageDegraded;
@property (setter=_setInCloud:, nonatomic) bool _isInCloud;
@property (setter=_setInProgress:, nonatomic) bool _isInProgress;
@property (nonatomic, readonly) NSRecursiveLock *_isolationLock;
@property (setter=_setNeedsUpdateResult:, nonatomic) bool _needsUpdateResult;
@property (nonatomic, readonly) PHLivePhotoRequestOptions *_options;
@property (nonatomic, readonly) id /* block */ _resultHandler;
@property (setter=_setStillDisplayTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } _stillDisplayTime;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } _targetSize;

- (void).cxx_destruct;
- (id)_asset;
- (id)_avAsset;
- (bool)_avAssetRequestCompleted;
- (bool)_avAssetRequestFailed;
- (long long)_contentMode;
- (bool)_didFinishStart;
- (id)_error;
- (void)_handleImageResultHandlerWithImage:(id)arg1 info:(id)arg2;
- (void)_handleVideoResultHandlerWithAVAsset:(id)arg1 info:(id)arg2;
- (id)_image;
- (id)_imageManager;
- (bool)_imageRequestCompleted;
- (bool)_imageRequestFailed;
- (void)_invalidateResult;
- (bool)_isCancelled;
- (bool)_isImageDegraded;
- (bool)_isInCloud;
- (bool)_isInProgress;
- (id)_isolationLock;
- (bool)_needsUpdateResult;
- (id)_options;
- (id /* block */)_resultHandler;
- (void)_setAVAsset:(id)arg1;
- (void)_setAVAssetRequestCompleted:(bool)arg1;
- (void)_setAVAssetRequestFailed:(bool)arg1;
- (void)_setCancelled:(bool)arg1;
- (void)_setDidFinishStart:(bool)arg1;
- (void)_setError:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageDegraded:(bool)arg1;
- (void)_setImageRequestCompleted:(bool)arg1;
- (void)_setImageRequestFailed:(bool)arg1;
- (void)_setInCloud:(bool)arg1;
- (void)_setInProgress:(bool)arg1;
- (void)_setNeedsUpdateResult:(bool)arg1;
- (void)_setStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_stillDisplayTime;
- (struct CGSize { double x1; double x2; })_targetSize;
- (void)_update;
- (void)_updateInProgress;
- (void)_updateResultIfNeeded;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 contentMode:(long long)arg3 options:(id)arg4 imageManager:(id)arg5 resultHandler:(id /* block */)arg6;
- (void)start;

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
