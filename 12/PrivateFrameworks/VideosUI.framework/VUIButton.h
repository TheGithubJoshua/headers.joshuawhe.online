<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUIButton.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUIButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUIButton : UIControl <VUILabelTopMarginCalculationProtocol> {
    UIView * _backdropView;
    _TVImageView * _backgroundImageView;
    _TVImageView * _backgroundImagesViewDefaultState;
    _TVImageView * _backgroundImagesViewHighlightedState;
    bool  _imageTrailsTextContent;
    _TVImageView * _imageView;
    _TVImageView * _imagesViewDefaultState;
    _TVImageView * _imagesViewHighlightedState;
    VUIButtonLayout * _layout;
    id /* block */  _selectActionHandler;
    VUILabel * _textContentView;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) UIView *backdropView;
@property (nonatomic, retain) _TVImageView *backgroundImageView;
@property (nonatomic, retain) _TVImageView *backgroundImagesViewDefaultState;
@property (nonatomic, retain) _TVImageView *backgroundImagesViewHighlightedState;
@property (nonatomic) bool imageTrailsTextContent;
@property (nonatomic, retain) _TVImageView *imageView;
@property (nonatomic, retain) _TVImageView *imagesViewDefaultState;
@property (nonatomic, retain) _TVImageView *imagesViewHighlightedState;
@property (nonatomic, retain) VUIButtonLayout *layout;
@property (nonatomic, copy) id /* block */ selectActionHandler;
@property (nonatomic, copy) VUILabel *textContentView;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (struct CGPoint { double x1; double x2; })_centerWithViewSize:(struct CGSize { double x1; double x2; })arg1 withParentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_configureWithLayout:(id)arg1;
- (bool)_hasBackgroundImage;
- (bool)_hasImage;
- (bool)_hasTitle;
- (struct CGSize { double x1; double x2; })_imageSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateLayout;
- (id)backdropView;
- (id)backgroundImageView;
- (id)backgroundImagesViewDefaultState;
- (id)backgroundImagesViewHighlightedState;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (bool)imageTrailsTextContent;
- (id)imageView;
- (id)imagesViewDefaultState;
- (id)imagesViewHighlightedState;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id /* block */)selectActionHandler;
- (void)setBackdropView:(id)arg1;
- (void)setBackgroundImage:(id)arg1 state:(unsigned long long)arg2;
- (void)setBackgroundImageView:(id)arg1;
- (void)setBackgroundImagesViewDefaultState:(id)arg1;
- (void)setBackgroundImagesViewHighlightedState:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageTrailsTextContent:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setImageView:(id)arg1 state:(unsigned long long)arg2;
- (void)setImagesViewDefaultState:(id)arg1;
- (void)setImagesViewHighlightedState:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setSelectActionHandler:(id /* block */)arg1;
- (void)setTextContentView:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textContentView;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)updateWithElement:(id)arg1;
- (id)viewElement;

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