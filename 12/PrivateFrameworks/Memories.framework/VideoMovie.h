<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VideoMovie.h</title>
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

/PrivateFrameworks/Memories.framework/VideoMovie.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface VideoMovie : Movie <NSCoding, NSCopying> {
    bool  _audioProxyExists;
    NSURL * _audioProxyURL;
    bool  _cacheMovieIsPlayable;
    bool  _cacheWillDieDuringLoad;
    bool  _cachedAssetInformationValid;
    unsigned long long  _cachedAudioTrackChannels;
    unsigned long long  _cachedAudioTrackCount;
    int  _cachedDuration;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedEncodedPixelSize;
    float  _cachedFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedNaturalSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedPreciseAssetDuration;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _cachedTransform;
    unsigned long long  _cachedVideoTrackCount;
    AVAsset * _weakAVAsset;
}

@property (nonatomic) bool audioProxyExists;
@property (nonatomic, copy) NSURL *audioProxyURL;
@property (nonatomic) bool cacheMovieIsPlayable;
@property (nonatomic) bool cacheWillDieDuringLoad;
@property (nonatomic) bool cachedAssetInformationValid;
@property (nonatomic) unsigned long long cachedAudioTrackChannels;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) int cachedDuration;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedEncodedPixelSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } cachedNaturalSize;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedPreciseAssetDuration;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } cachedTransform;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) AVAsset *weakAVAsset;

- (void).cxx_destruct;
- (bool)audioProxyExists;
- (id)audioProxyURL;
- (id)avAsset;
- (void)cacheAssetInformation;
- (void)cacheAssetInformationWithCompletionHandler:(id /* block */)arg1;
- (void)cacheAudioTrackFormatInformationOfAsset:(id)arg1;
- (bool)cacheMovieIsPlayable;
- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
- (bool)cacheWillDieDuringLoad;
- (bool)cachedAssetInformationValid;
- (unsigned long long)cachedAudioTrackChannels;
- (unsigned long long)cachedAudioTrackCount;
- (int)cachedDuration;
- (struct CGSize { double x1; double x2; })cachedEncodedPixelSize;
- (float)cachedFrameRate;
- (struct CGSize { double x1; double x2; })cachedNaturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedPreciseAssetDuration;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })cachedTransform;
- (unsigned long long)cachedVideoTrackCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)duration;
- (double)durationInSeconds;
- (struct CGSize { double x1; double x2; })encodedPixelSize;
- (struct CGSize { double x1; double x2; })encodedPixelSizeWithTransform;
- (float)frameRate;
- (bool)hasAudioTracks;
- (bool)hasVideoTracks;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 userInfo:(id)arg3;
- (id)initWithPath:(id)arg1;
- (bool)isMono;
- (bool)isUnsupportedFormat;
- (id)loadAVAsset;
- (void)loadAVAssetWithCompletionHandler:(id /* block */)arg1;
- (void)loadAVPlayerItemWithCompletionHander:(id /* block */)arg1 progressHandler:(id /* block */)arg2 networkAccessAllowed:(bool)arg3;
- (void)mediaserverdCrashed;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })naturalSizeWithTransform;
- (bool)renderedAdjustmentsExist;
- (void)resetCachedAssetInformation;
- (void)setAudioProxyExists:(bool)arg1;
- (void)setAudioProxyURL:(id)arg1;
- (void)setCacheMovieIsPlayable:(bool)arg1;
- (void)setCacheWillDieDuringLoad:(bool)arg1;
- (void)setCachedAssetInformationValid:(bool)arg1;
- (void)setCachedAudioTrackChannels:(unsigned long long)arg1;
- (void)setCachedAudioTrackCount:(unsigned long long)arg1;
- (void)setCachedDuration:(int)arg1;
- (void)setCachedEncodedPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedFrameRate:(float)arg1;
- (void)setCachedNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCachedPreciseAssetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCachedVideoTrackCount:(unsigned long long)arg1;
- (void)setWeakAVAsset:(id)arg1;
- (id)thumbnailImageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)updateAssetAvailability;
- (void)updateCreationDate;
- (void)updateLocation;
- (void)updateMetadata;
- (id)weakAVAsset;

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