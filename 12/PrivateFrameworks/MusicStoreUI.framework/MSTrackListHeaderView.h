<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSTrackListHeaderView.h</title>
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

/PrivateFrameworks/MusicStoreUI.framework/MSTrackListHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI (1)
 */

@interface MSTrackListHeaderView : UIView {
    UILabel * _albumLabel;
    UILabel * _artistLabel;
    UIImage * _artworkImage;
    SUReflectionImageView * _artworkView;
    <MSTrackListHeaderDelegate> * _delegate;
    UILabel * _disclaimerLabel;
    SUItem * _item;
    UILabel * _itemCountLabel;
    SUItemOfferButton * _offerButton;
    UILabel * _releaseDateLabel;
    SUTouchCaptureView * _touchCaptureView;
}

@property (nonatomic, retain) UIImage *artworkImage;
@property (nonatomic) <MSTrackListHeaderDelegate> *delegate;
@property (nonatomic, retain) SUItem *item;

- (void)_hidePurchaseConfirmation;
- (id)_newGenericSmallFontLabel;
- (void)_offerButtonAction:(id)arg1;
- (void)_performPurchaseAnimation;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_reloadAlbumLabel;
- (void)_reloadArtistLabel;
- (void)_reloadArtworkView;
- (void)_reloadDisclaimerLabel;
- (void)_reloadItemCountLabel;
- (void)_reloadOfferButton;
- (void)_reloadReleaseDateLabel;
- (void)_setShowingPurchaseConfirmation:(bool)arg1;
- (void)_showPurchaseConfirmation;
- (struct CGSize { double x1; double x2; })_sizeThatFitsLabel:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 numberOfLines:(long long)arg3;
- (void)_touchCaptureAction:(id)arg1;
- (id)artworkImage;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setArtworkImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)sizeToFit;

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