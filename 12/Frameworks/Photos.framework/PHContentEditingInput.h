<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHContentEditingInput.h</title>
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

/Frameworks/Photos.framework/PHContentEditingInput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHContentEditingInput : NSObject {
    PHAdjustmentData * _adjustmentData;
    AVAsset * _avAsset;
    NSObject<OS_dispatch_queue> * _avAssetIsolationQueue;
    long long  _baseVersion;
    NSDate * _creationDate;
    UIImage * _displaySizeImage;
    int  _fullSizeImageOrientation;
    NSURL * _fullSizeImageURL;
    PHLivePhoto * _livePhoto;
    CLLocation * _location;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    NSNumber * _originalResourceChoice;
    long long  _playbackStyle;
    NSMutableArray * _sandboxExtensionHandles;
    NSString * _uniformTypeIdentifier;
    NSURL * _videoURL;
}

@property (nonatomic, retain) PHAdjustmentData *adjustmentData;
@property (readonly) AVAsset *audiovisualAsset;
@property (readonly) AVAsset *avAsset;
@property (nonatomic) long long baseVersion;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) UIImage *displaySizeImage;
@property (nonatomic) int fullSizeImageOrientation;
@property (nonatomic, copy) NSURL *fullSizeImageURL;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) unsigned long long mediaSubtypes;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) NSNumber *originalResourceChoice;
@property (nonatomic) long long playbackStyle;
@property (nonatomic, copy) NSString *uniformTypeIdentifier;
@property (nonatomic, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (void)_invalidateAVAsset;
- (id)adjustmentData;
- (id)audioMix;
- (id)audiovisualAsset;
- (id)avAsset;
- (long long)baseVersion;
- (void)consumeSandboxExtensionToken:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)displaySizeImage;
- (int)fullSizeImageOrientation;
- (id)fullSizeImageURL;
- (id)imagePreview;
- (id)init;
- (bool)isMediaSubtype:(unsigned long long)arg1;
- (id)livePhoto;
- (void)loadFullSizeImageDataWithCompletionHandler:(id /* block */)arg1;
- (id)location;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)originalResourceChoice;
- (long long)playbackStyle;
- (void)requestFullSizeImageURLWithCompletionHandler:(id /* block */)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setBaseVersion:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplaySizeImage:(id)arg1;
- (void)setFullSizeImageOrientation:(int)arg1;
- (void)setFullSizeImageURL:(id)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMediaSubtypes:(unsigned long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setOriginalResourceChoice:(id)arg1;
- (void)setPlaybackStyle:(long long)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoComposition;
- (id)videoURL;

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