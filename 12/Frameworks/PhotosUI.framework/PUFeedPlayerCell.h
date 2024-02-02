<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUFeedPlayerCell.h</title>
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

/Frameworks/PhotosUI.framework/PUFeedPlayerCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUFeedPlayerCell : PUFeedCell {
    UIButton * __commentButton;
    bool  __isPerformingIrisPlayerChanges;
    bool  __needsUpdatePlayerItem;
    bool  __needsUpdateVitality;
    ISLivePhotoPlayer * __player;
    ISLivePhotoUIView * __playerView;
    bool  __shouldHideCommentButton;
    long long  _commentCount;
    UICollectionView * _containingCollectionView;
    int  _currentImageRequestID;
    bool  _isPhotoImageDegraded;
    UIImage * _photoImage;
    double  _photoTime;
    bool  _playerHidden;
    AVAsset * _videoAsset;
}

@property (setter=_setCommentButton:, nonatomic, retain) UIButton *_commentButton;
@property (setter=_setPerformingIrisPlayerChanges:, nonatomic) bool _isPerformingIrisPlayerChanges;
@property (setter=_setNeedsUpdatePlayerItem:, nonatomic) bool _needsUpdatePlayerItem;
@property (setter=_setNeedsUpdateVitality:, nonatomic) bool _needsUpdateVitality;
@property (nonatomic, readonly) ISLivePhotoPlayer *_player;
@property (nonatomic, readonly) ISLivePhotoUIView *_playerView;
@property (setter=_setShouldHideCommentButton:, nonatomic) bool _shouldHideCommentButton;
@property (nonatomic) long long commentCount;
@property (nonatomic) UICollectionView *containingCollectionView;
@property (nonatomic) int currentImageRequestID;
@property (setter=setPhotoImageDegraded:, nonatomic) bool isPhotoImageDegraded;
@property (nonatomic, retain) UIImage *photoImage;
@property (nonatomic) double photoTime;
@property (getter=isPlayerHidden, nonatomic) bool playerHidden;
@property (nonatomic, retain) AVAsset *videoAsset;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (void)_assertInsideIrisPlayerChanges;
- (id)_commentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)_invalidatePlayerItem;
- (void)_invalidateVitality;
- (bool)_isPerformingIrisPlayerChanges;
- (void)_layoutPlayerView;
- (bool)_needsUpdateIris;
- (bool)_needsUpdatePlayerItem;
- (bool)_needsUpdateVitality;
- (id)_player;
- (id)_playerCellDelegate;
- (id)_playerView;
- (void)_setCommentButton:(id)arg1;
- (void)_setNeedsUpdateIris;
- (void)_setNeedsUpdatePlayerItem:(bool)arg1;
- (void)_setNeedsUpdateVitality:(bool)arg1;
- (void)_setPerformingIrisPlayerChanges:(bool)arg1;
- (void)_setShouldHideCommentButton:(bool)arg1;
- (bool)_shouldHideCommentButton;
- (void)_updateCommentButton;
- (void)_updateIrisIfNeeded;
- (void)_updatePlayerItemIfNeeded;
- (void)_updateVitalityIfNeeded;
- (long long)commentCount;
- (id)containingCollectionView;
- (int)currentImageRequestID;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPhotoImageDegraded;
- (bool)isPlayerHidden;
- (void)layoutSubviews;
- (void)performIrisPlayerChanges:(id /* block */)arg1;
- (id)photoImage;
- (double)photoTime;
- (void)prepareForReuse;
- (void)setCommentCount:(long long)arg1;
- (void)setContainingCollectionView:(id)arg1;
- (void)setCurrentImageRequestID:(int)arg1;
- (void)setParallaxOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageDegraded:(bool)arg1;
- (void)setPhotoTime:(double)arg1;
- (void)setPlayerHidden:(bool)arg1;
- (void)setVideoAsset:(id)arg1;
- (id)videoAsset;

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