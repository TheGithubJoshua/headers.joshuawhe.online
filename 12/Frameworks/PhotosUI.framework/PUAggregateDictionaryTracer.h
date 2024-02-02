<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUAggregateDictionaryTracer.h</title>
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

/Frameworks/PhotosUI.framework/PUAggregateDictionaryTracer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUAggregateDictionaryTracer : NSObject {
    long long  __assetPlayCount;
    NSMapTable * __browsingViewModelTracers;
    NSDate * __lastPlayStartDate;
    <PUDisplayAsset> * __lastPlayedAsset;
    <PUDisplayAsset> * __lastViewedAsset;
    <PUDisplayAsset> * __lastViewedAssetPerOrigin;
    long long  __oneUpPresentationOrigin;
    <PUDisplayAsset> * __streamedVideo;
    double  __streamedVideoBeginTime;
    bool  __streamedVideoDidStartPlaying;
    long long  __streamedVideoStallCount;
}

@property (setter=_setAssetPlayCount:, nonatomic) long long _assetPlayCount;
@property (nonatomic, readonly) NSMapTable *_browsingViewModelTracers;
@property (setter=_setLastPlayStartDate:, nonatomic, retain) NSDate *_lastPlayStartDate;
@property (setter=_setLastPlayedAsset:, nonatomic) <PUDisplayAsset> *_lastPlayedAsset;
@property (setter=_setLastViewedAsset:, nonatomic) <PUDisplayAsset> *_lastViewedAsset;
@property (nonatomic, retain) <PUDisplayAsset> *_lastViewedAssetPerOrigin;
@property (nonatomic) long long _oneUpPresentationOrigin;
@property (setter=_setStreamedVideo:, nonatomic) <PUDisplayAsset> *_streamedVideo;
@property (setter=_setStreamedVideoBeginTime:, nonatomic) double _streamedVideoBeginTime;
@property (setter=_setStreamedVideoDidStartPlaying:, nonatomic) bool _streamedVideoDidStartPlaying;
@property (setter=_setStreamedVideoStallCount:, nonatomic) long long _streamedVideoStallCount;

+ (id)sharedTracer;

- (void).cxx_destruct;
- (long long)_assetPlayCount;
- (long long)_assetTypeForAsset:(id)arg1;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(bool)arg2;
- (id)_browsingViewModelTracers;
- (id)_lastPlayStartDate;
- (id)_lastPlayedAsset;
- (id)_lastViewedAsset;
- (id)_lastViewedAssetPerOrigin;
- (long long)_oneUpPresentationOrigin;
- (void)_setAssetPlayCount:(long long)arg1;
- (void)_setLastPlayStartDate:(id)arg1;
- (void)_setLastPlayedAsset:(id)arg1;
- (void)_setLastViewedAsset:(id)arg1;
- (void)_setStreamedVideo:(id)arg1;
- (void)_setStreamedVideoBeginTime:(double)arg1;
- (void)_setStreamedVideoDidStartPlaying:(bool)arg1;
- (void)_setStreamedVideoStallCount:(long long)arg1;
- (id)_streamedVideo;
- (double)_streamedVideoBeginTime;
- (bool)_streamedVideoDidStartPlaying;
- (long long)_streamedVideoStallCount;
- (id)init;
- (void)invalidateContext:(id)arg1;
- (void)set_lastViewedAssetPerOrigin:(id)arg1;
- (void)set_oneUpPresentationOrigin:(long long)arg1;
- (void)streamedVideoPlaybackBegan:(id)arg1;
- (void)streamedVideoPlaybackEnded;
- (void)streamedVideoPlaybackStalled:(id)arg1;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;
- (void)userBrowsedOneUpFor:(double)arg1;
- (void)userDidEnterOneUpFromOrigin:(long long)arg1;
- (void)userDidPlayAssetInOneUp:(id)arg1;
- (void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(struct __CFString { }*)arg2;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userViewedAssetInOneUp:(id)arg1;
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;
- (void)userViewedPhotoInOneUpFor:(double)arg1;
- (void)userWillPlayAssetInOneUp:(id)arg1;
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;

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