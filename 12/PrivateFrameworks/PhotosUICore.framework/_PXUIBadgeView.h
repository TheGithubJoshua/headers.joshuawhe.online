<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_PXUIBadgeView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/_PXUIBadgeView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface _PXUIBadgeView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __backgroundFrame;
    UIView * __backgroundView;
    PXUIButton * __button;
    UIImage * __image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __imageFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  __imageOffset;
    UIImageView * __imageView;
    UILabel * __label;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __labelFrame;
    bool  __needsUpdateBackgroundView;
    bool  __needsUpdateButton;
    bool  __needsUpdateCornersMask;
    bool  __needsUpdateImageView;
    bool  __needsUpdateLabel;
    NSString * __text;
    struct CGPoint { 
        double x; 
        double y; 
    }  __textOffset;
    unsigned long long  _badge;
    unsigned long long  _corners;
    <_PXUIBadgeViewDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    bool  _shouldAnimateImageView;
    PXUIBadgeTheme * _theme;
}

@property (setter=_setBackgroundFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _backgroundFrame;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setButton:, nonatomic, retain) PXUIButton *_button;
@property (setter=_setImage:, nonatomic, retain) UIImage *_image;
@property (setter=_setImageFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _imageFrame;
@property (setter=_setImageOffset:, nonatomic) struct CGPoint { double x1; double x2; } _imageOffset;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (setter=_setLabelFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _labelFrame;
@property (setter=_setNeedsUpdateBackgroundView:, nonatomic) bool _needsUpdateBackgroundView;
@property (setter=_setNeedsUpdateButton:, nonatomic) bool _needsUpdateButton;
@property (setter=_setNeedsUpdateCornersMask:, nonatomic) bool _needsUpdateCornersMask;
@property (setter=_setNeedsUpdateImageView:, nonatomic) bool _needsUpdateImageView;
@property (setter=_setNeedsUpdateLabel:, nonatomic) bool _needsUpdateLabel;
@property (setter=_setText:, nonatomic, retain) NSString *_text;
@property (setter=_setTextOffset:, nonatomic) struct CGPoint { double x1; double x2; } _textOffset;
@property (nonatomic, readonly) unsigned long long badge;
@property (nonatomic) unsigned long long corners;
@property (nonatomic) <_PXUIBadgeViewDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) bool shouldAnimateImageView;
@property (nonatomic, readonly) PXUIBadgeTheme *theme;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrame;
- (id)_backgroundView;
- (id)_button;
- (void)_handleButton:(id)arg1;
- (id)_image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageFrame;
- (struct CGPoint { double x1; double x2; })_imageOffset;
- (id)_imageView;
- (void)_invalidate;
- (void)_invalidateBackgroundView;
- (void)_invalidateButton;
- (void)_invalidateCorners;
- (void)_invalidateImageView;
- (void)_invalidateLabel;
- (id)_label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (id)_maskLayerForCorners:(unsigned long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_needsUpdateBackgroundView;
- (bool)_needsUpdateButton;
- (bool)_needsUpdateCornersMask;
- (bool)_needsUpdateImageView;
- (bool)_needsUpdateLabel;
- (void)_setBackgroundFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setButton:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setImageOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (void)_setLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setNeedsUpdateBackgroundView:(bool)arg1;
- (void)_setNeedsUpdateButton:(bool)arg1;
- (void)_setNeedsUpdateCornersMask:(bool)arg1;
- (void)_setNeedsUpdateImageView:(bool)arg1;
- (void)_setNeedsUpdateLabel:(bool)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_text;
- (struct CGPoint { double x1; double x2; })_textOffset;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateButtonIfNeeded;
- (void)_updateCornersIfNeedeed;
- (void)_updateIfNeeded;
- (void)_updateImageViewIfNeeded;
- (void)_updateLabelIfNeeded;
- (void)_updateLayout;
- (unsigned long long)badge;
- (unsigned long long)corners;
- (id)delegate;
- (id)initWithBadge:(unsigned long long)arg1 theme:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })position;
- (void)setCorners:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldAnimateImageView:(bool)arg1;
- (bool)shouldAnimateImageView;
- (id)theme;

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