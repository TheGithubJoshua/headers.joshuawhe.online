<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUFeedTextCell.h</title>
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

/Frameworks/PhotosUI.framework/PUFeedTextCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUFeedTextCell : PUFeedCell {
    UIButton * __button;
    UILabel * __detailLabel;
    UIImageView * __iconImageView;
    UILabel * __label;
    NSAttributedString * _attributedDetailText;
    NSAttributedString * _attributedText;
    long long  _buttonHorizontalAlignment;
    double  _buttonPadding;
    long long  _buttonSize;
    long long  _buttonType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UIImage * _iconImage;
    long long  _iconLocation;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _iconOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _iconPadding;
    long long  _numberOfDetailTextLines;
    long long  _numberOfTextLines;
    bool  _shouldUseAccessibilityLayout;
    bool  _shouldUseOpaqueBackground;
    long long  _tappableArea;
    long long  _textAlignment;
    double  _textDetailTextSpacing;
}

@property (setter=_setButton:, nonatomic, retain) UIButton *_button;
@property (setter=_setDetailLabel:, nonatomic, retain) UILabel *_detailLabel;
@property (setter=_setIconImageView:, nonatomic, retain) UIImageView *_iconImageView;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (nonatomic, retain) NSAttributedString *attributedDetailText;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic) long long buttonHorizontalAlignment;
@property (nonatomic) double buttonPadding;
@property (nonatomic) long long buttonSize;
@property (nonatomic) long long buttonType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic) long long iconLocation;
@property (nonatomic) struct UIOffset { double x1; double x2; } iconOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } iconPadding;
@property (nonatomic) long long numberOfDetailTextLines;
@property (nonatomic) long long numberOfTextLines;
@property (nonatomic) bool shouldUseAccessibilityLayout;
@property (nonatomic) bool shouldUseOpaqueBackground;
@property (nonatomic) long long tappableArea;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textDetailTextSpacing;

- (void).cxx_destruct;
- (id)_button;
- (void)_configureButton:(id)arg1 withType:(long long)arg2 size:(long long)arg3 animated:(bool)arg4;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_delegate;
- (id)_detailLabel;
- (void)_handleButton:(id)arg1;
- (id)_iconImageView;
- (struct CGSize { double x1; double x2; })_iconSize;
- (void)_invalidateCachedTextSizes;
- (id)_label;
- (id)_labelBackgroundColor;
- (struct CGSize { double x1; double x2; })_maximumPossibleTextSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_setButton:(id)arg1;
- (void)_setDetailLabel:(id)arg1;
- (void)_setIconImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })_textSizeForButtonWithType:(long long)arg1 size:(long long)arg2;
- (void)_updateButtonAnimated:(bool)arg1;
- (void)_updateDetailLabel;
- (void)_updateIconImageView;
- (void)_updateLabelsBackgroundColor;
- (void)_updateShouldUseAccessibilityLayout;
- (id)attributedDetailText;
- (id)attributedText;
- (long long)buttonHorizontalAlignment;
- (double)buttonPadding;
- (long long)buttonSize;
- (long long)buttonType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)iconImage;
- (long long)iconLocation;
- (struct UIOffset { double x1; double x2; })iconOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfDetailTextLines;
- (long long)numberOfTextLines;
- (void)setAttributedDetailText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setButtonHorizontalAlignment:(long long)arg1;
- (void)setButtonPadding:(double)arg1;
- (void)setButtonSize:(long long)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setButtonType:(long long)arg1 animated:(bool)arg2;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconLocation:(long long)arg1;
- (void)setIconOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setIconPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfDetailTextLines:(long long)arg1;
- (void)setNumberOfTextLines:(long long)arg1;
- (void)setShouldUseAccessibilityLayout:(bool)arg1;
- (void)setShouldUseOpaqueBackground:(bool)arg1;
- (void)setTappableArea:(long long)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextDetailTextSpacing:(double)arg1;
- (bool)shouldRecognizerTap:(id)arg1;
- (bool)shouldUseAccessibilityLayout;
- (bool)shouldUseOpaqueBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)tappableArea;
- (long long)textAlignment;
- (double)textDetailTextSpacing;

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