<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUAssetViewModelChange.h</title>
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

/Frameworks/PhotosUI.framework/PUAssetViewModelChange.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUAssetViewModelChange : PUViewModelChange {
    bool  _accessoryViewVisibilityChanged;
    PUBrowsingAnimatedImagePlayerChange * _animatedImageChange;
    bool  _assetChanged;
    bool  _badgeInfoChanged;
    bool  _contentOffsetChanged;
    bool  _focusValueChanged;
    bool  _forceBadgesVisibleChanged;
    bool  _importStateChanged;
    PUBrowsingIrisPlayerChange * _irisPlayerChange;
    bool  _isFavoriteChanged;
    bool  _isInEditModeChanged;
    bool  _isUpdatingDisplayedContentChanged;
    bool  _isUserTransformingTileDidChange;
    bool  _loadingStatusChanged;
    bool  _modelTileTransformChanged;
    bool  _saveProgressChanged;
    bool  _saveStateChanged;
    PUBrowsingVideoPlayerChange * _videoPlayerChange;
}

@property (setter=_setAccessoryViewVisibilityChanged:, nonatomic) bool accessoryViewVisibilityChanged;
@property (setter=_setAnimatedImageChange:, nonatomic, retain) PUBrowsingAnimatedImagePlayerChange *animatedImageChange;
@property (setter=_setAssetChanged:, nonatomic) bool assetChanged;
@property (setter=_setBadgeInfoChanged:, nonatomic) bool badgeInfoChanged;
@property (setter=_setContentOffsetChanged:, nonatomic) bool contentOffsetChanged;
@property (setter=_setFocusValueChanged:, nonatomic) bool focusValueChanged;
@property (setter=_setForceBadgesVisibleChanged:, nonatomic) bool forceBadgesVisibleChanged;
@property (setter=_setImportStateChanged:, nonatomic) bool importStateChanged;
@property (setter=_setIrisPlayerChange:, nonatomic, retain) PUBrowsingIrisPlayerChange *irisPlayerChange;
@property (setter=_setIsFavoriteChanged:, nonatomic) bool isFavoriteChanged;
@property (setter=_setIsInEditModeChanged:, nonatomic) bool isInEditModeChanged;
@property (setter=_setIsUpdatingDisplayedContentChanged:, nonatomic) bool isUpdatingDisplayedContentChanged;
@property (setter=_setUserTransformingTileDidChange:, nonatomic) bool isUserTransformingTileDidChange;
@property (setter=_setLoadingStatusChanged:, nonatomic) bool loadingStatusChanged;
@property (setter=_setModelTileTransformChanged:, nonatomic) bool modelTileTransformChanged;
@property (setter=_setSaveProgressChanged:, nonatomic) bool saveProgressChanged;
@property (setter=_setSaveStateChanged:, nonatomic) bool saveStateChanged;
@property (setter=_setVideoPlayerChange:, nonatomic, retain) PUBrowsingVideoPlayerChange *videoPlayerChange;

- (void).cxx_destruct;
- (void)_setAccessoryViewVisibilityChanged:(bool)arg1;
- (void)_setAnimatedImageChange:(id)arg1;
- (void)_setAssetChanged:(bool)arg1;
- (void)_setBadgeInfoChanged:(bool)arg1;
- (void)_setContentOffsetChanged:(bool)arg1;
- (void)_setFocusValueChanged:(bool)arg1;
- (void)_setForceBadgesVisibleChanged:(bool)arg1;
- (void)_setImportStateChanged:(bool)arg1;
- (void)_setIrisPlayerChange:(id)arg1;
- (void)_setIsFavoriteChanged:(bool)arg1;
- (void)_setIsInEditModeChanged:(bool)arg1;
- (void)_setIsUpdatingDisplayedContentChanged:(bool)arg1;
- (void)_setLoadingStatusChanged:(bool)arg1;
- (void)_setModelTileTransformChanged:(bool)arg1;
- (void)_setSaveProgressChanged:(bool)arg1;
- (void)_setSaveStateChanged:(bool)arg1;
- (void)_setUserTransformingTileDidChange:(bool)arg1;
- (void)_setVideoPlayerChange:(id)arg1;
- (bool)accessoryViewVisibilityChanged;
- (id)animatedImageChange;
- (bool)assetChanged;
- (bool)badgeInfoChanged;
- (bool)contentOffsetChanged;
- (bool)focusValueChanged;
- (bool)forceBadgesVisibleChanged;
- (bool)hasChanges;
- (bool)importStateChanged;
- (id)irisPlayerChange;
- (bool)isFavoriteChanged;
- (bool)isInEditModeChanged;
- (bool)isUpdatingDisplayedContentChanged;
- (bool)isUserTransformingTileDidChange;
- (bool)loadingStatusChanged;
- (bool)modelTileTransformChanged;
- (bool)saveProgressChanged;
- (bool)saveStateChanged;
- (id)videoPlayerChange;

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