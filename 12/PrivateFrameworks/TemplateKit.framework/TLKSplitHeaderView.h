<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TLKSplitHeaderView.h</title>
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

/PrivateFrameworks/TemplateKit.framework/TLKSplitHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit (1)
 */

@interface TLKSplitHeaderView : TLKView <NUIContainerGridViewDelegate> {
    NUIContainerGridView * _gridView;
    TLKImage * _leadingImage;
    TLKImageView * _leadingImageView;
    TLKMultilineText * _leadingSubtitle;
    TLKVibrantLabel * _leadingSubtitleLabel;
    TLKMultilineText * _leadingTitle;
    TLKVibrantLabel * _leadingTitleLabel;
    bool  _shouldBadgeSubtitle;
    TLKMultilineText * _subtitle1;
    TLKVibrantLabel * _subtitle1Label;
    TLKMultilineText * _subtitle2;
    TLKBadgedLabel * _subtitle2Label;
    TLKMultilineText * _title;
    TLKVibrantLabel * _titleLabel;
    TLKImage * _trailingImage;
    TLKImageView * _trailingImageView;
    TLKMultilineText * _trailingSubtitle;
    TLKVibrantLabel * _trailingSubtitleLabel;
    TLKMultilineText * _trailingTitle;
    TLKVibrantLabel * _trailingTitleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUIContainerGridView *gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *leadingImage;
@property (retain) TLKImageView *leadingImageView;
@property (nonatomic, retain) TLKMultilineText *leadingSubtitle;
@property (retain) TLKVibrantLabel *leadingSubtitleLabel;
@property (nonatomic, retain) TLKMultilineText *leadingTitle;
@property (retain) TLKVibrantLabel *leadingTitleLabel;
@property (nonatomic) bool shouldBadgeSubtitle;
@property (nonatomic, retain) TLKMultilineText *subtitle1;
@property (retain) TLKVibrantLabel *subtitle1Label;
@property (nonatomic, retain) TLKMultilineText *subtitle2;
@property (retain) TLKBadgedLabel *subtitle2Label;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKMultilineText *title;
@property (retain) TLKVibrantLabel *titleLabel;
@property (nonatomic, retain) TLKImage *trailingImage;
@property (retain) TLKImageView *trailingImageView;
@property (nonatomic, retain) TLKMultilineText *trailingSubtitle;
@property (retain) TLKVibrantLabel *trailingSubtitleLabel;
@property (nonatomic, retain) TLKMultilineText *trailingTitle;
@property (retain) TLKVibrantLabel *trailingTitleLabel;

+ (id)footnoteFont;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveAlignmentRectInsets;
- (id)firstRowOfViews;
- (id)grid;
- (id)gridView;
- (id)init;
- (id)leadingImage;
- (id)leadingImageInView;
- (id)leadingImageView;
- (id)leadingSubtitle;
- (id)leadingSubtitleLabel;
- (id)leadingSubtitleText;
- (id)leadingTitle;
- (id)leadingTitleLabel;
- (void)observedPropertiesChanged;
- (bool)secondRowIsHidden;
- (id)secondRowOfViews;
- (void)setGridView:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageView:(id)arg1;
- (void)setLeadingSubtitle:(id)arg1;
- (void)setLeadingSubtitleLabel:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setLeadingTitleLabel:(id)arg1;
- (void)setShouldBadgeSubtitle:(bool)arg1;
- (void)setSubtitle1:(id)arg1;
- (void)setSubtitle1Label:(id)arg1;
- (void)setSubtitle2:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageView:(id)arg1;
- (void)setTrailingSubtitle:(id)arg1;
- (void)setTrailingSubtitleLabel:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (void)setTrailingTitleLabel:(id)arg1;
- (bool)shouldBadgeSubtitle;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitle1;
- (id)subtitle1Label;
- (id)subtitle2;
- (id)subtitle2Label;
- (id)subtitleLabelText;
- (id)thirdRowOfViews;
- (id)title;
- (id)titleFont;
- (id)titleLabel;
- (id)titleLabelText;
- (id)trailingImage;
- (id)trailingImageInView;
- (id)trailingImageView;
- (id)trailingSubtitle;
- (id)trailingSubtitleLabel;
- (id)trailingSubtitleText;
- (id)trailingTitle;
- (id)trailingTitleLabel;
- (id)vibrantFootnoteLabel:(bool)arg1;

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