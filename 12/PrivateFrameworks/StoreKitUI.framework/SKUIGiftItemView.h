<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIGiftItemView.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIGiftItemView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIGiftItemView : UIView {
    NSString * _artistName;
    NSString * _categoryName;
    SKUIClientContext * _clientContext;
    SKUIItem * _item;
    UIImageView * _itemImageView;
    SKUIItemOfferButton * _itemOfferButton;
    SKUIItemState * _itemState;
    long long  _itemStyle;
    long long  _numberOfUserRatings;
    NSString * _price;
    UIImageView * _starRatingImageView;
    UILabel * _subtitleLabel1;
    UILabel * _subtitleLabel2;
    SKUIGiftTheme * _theme;
    UILabel * _titleLabel;
    float  _userRating;
    UILabel * _userRatingCountLabel;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, readonly) long long giftItemStyle;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, readonly) SKUIItemOfferButton *itemOfferButton;
@property (nonatomic, retain) SKUIItemState *itemState;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) SKUIGiftTheme *theme;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

- (void).cxx_destruct;
- (void)_enumerateMetadataViewsUsingBlock:(id /* block */)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageEdgeInsets;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_newLabel;
- (double)_paddingLeft;
- (double)_paddingRight;
- (void)_reloadItemState:(bool)arg1;
- (void)_reloadSubtitles;
- (void)_reloadUserRatingViews;
- (id)_subtitleColor;
- (id)_titleColor;
- (id)_userRatingColor;
- (id)artistName;
- (id)artworkContext;
- (id)categoryName;
- (void)dealloc;
- (long long)giftItemStyle;
- (id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3;
- (id)item;
- (id)itemImage;
- (id)itemOfferButton;
- (id)itemState;
- (void)layoutSubviews;
- (long long)numberOfUserRatings;
- (id)price;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setPrice:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)theme;
- (id)title;
- (float)userRating;

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
