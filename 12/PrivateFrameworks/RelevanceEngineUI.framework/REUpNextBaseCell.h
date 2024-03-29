<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>REUpNextBaseCell.h</title>
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

/PrivateFrameworks/RelevanceEngineUI.framework/REUpNextBaseCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI (204.1.32)
 */

@interface REUpNextBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate> {
    unsigned long long  _behavior;
    REContent * _content;
    double  _contentBrightness;
    UIImage * _contentImage;
    double  _darkeningAmount;
    UIColor * _defaultTextColor;
    <REUpNextCellDelegate> * _delegate;
    CALayer * _imageLayer;
    UILongPressGestureRecognizer * _longPressRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _overlayInsets;
    UIView * _overlayView;
    UIImage * _overrideContentImage;
    NSString * _representedElementIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIImageView * _shadowView;
    bool  _shouldOverrideContentHeaderColor;
}

@property (nonatomic, readonly) REContent *content;
@property (nonatomic, readonly) UIImage *contentImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) UIColor *defaultTextColor;
@property (nonatomic) <REUpNextCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *imageLayer;
@property (nonatomic, retain) UIImage *overrideContentImage;
@property (nonatomic, retain) NSString *representedElementIdentifier;
@property (nonatomic, readonly) bool shouldOverrideContentHeaderColor;
@property (readonly) Class superclass;

+ (id)_shadowImage;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateColorOverlay;
- (void)applyLayoutAttributes:(id)arg1;
- (void)configureWithContent:(id)arg1;
- (id)content;
- (id)contentImage;
- (id)defaultTextColor;
- (void)defaultTextColorDidChange;
- (id)delegate;
- (void)didLongPress:(id)arg1;
- (id)imageLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideContentImage;
- (void)prepareForReuse;
- (id)primaryEffectViews;
- (id)representedElementIdentifier;
- (id)secondaryEffectViews;
- (void)setContentBrightness:(double)arg1 animated:(bool)arg2;
- (void)setContentImage:(id)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForegroundTextColorToColor:(id)arg1 shouldOverrideContentHeaderColor:(bool)arg2;
- (void)setHighlightBehavior:(unsigned long long)arg1;
- (void)setHighlightInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideContentImage:(id)arg1;
- (void)setRepresentedElementIdentifier:(id)arg1;
- (void)setShadowViewHidden:(bool)arg1;
- (bool)shouldOverrideContentHeaderColor;
- (id)transitionContext;

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
