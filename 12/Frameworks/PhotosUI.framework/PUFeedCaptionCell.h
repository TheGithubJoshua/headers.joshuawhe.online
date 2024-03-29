<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUFeedCaptionCell.h</title>
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

/Frameworks/PhotosUI.framework/PUFeedCaptionCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUFeedCaptionCell : PUFeedCell {
    unsigned long long  _captionItemIndex;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    bool  _hideCaption;
    PXUIButton * _likeButton;
    PXFeedSectionInfo * _sectionInfo;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) unsigned long long captionItemIndex;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) bool hideCaption;
@property (nonatomic) bool isLiked;
@property (nonatomic, retain) PXUIButton *likeButton;
@property (nonatomic, readonly) UIImage *likedImage;
@property (nonatomic, readonly) UIImage *notLikedImage;
@property (nonatomic, retain) PXFeedSectionInfo *sectionInfo;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleLikeButtonTap:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_setLikeButtonLiked:(bool)arg1;
- (bool)_shouldHideLikeButton;
- (void)_updateLikeButton;
- (void)_updateSubtitle;
- (void)_updateTitle;
- (void)_updateUI;
- (unsigned long long)captionItemIndex;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (bool)hideCaption;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLiked;
- (void)layoutSubviews;
- (id)likeButton;
- (id)likedImage;
- (id)notLikedImage;
- (void)prepareForReuse;
- (id)sectionInfo;
- (void)setCaptionItemIndex:(unsigned long long)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHideCaption:(bool)arg1;
- (void)setLikeButton:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;

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
