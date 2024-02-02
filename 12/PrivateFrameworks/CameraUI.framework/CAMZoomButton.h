<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMZoomButton.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMZoomButton.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMZoomButton : UIControl {
    UIImageView * __backgroundImageView;
    UIImageView * __circleImageView;
    UIView * __contentContainerView;
    UILabel * __zoomFactorLabel;
    NSString * _contentSizeCategory;
    <CAMZoomButtonDelegate> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _highlightingTransform;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UIImageView *_backgroundImageView;
@property (nonatomic, readonly) UIImageView *_circleImageView;
@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) UILabel *_zoomFactorLabel;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) <CAMZoomButtonDelegate> *delegate;
@property (setter=_setHighlightingTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } highlightingTransform;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic) double zoomFactor;

+ (bool)_shouldUseLargeButtonSizeForContentSize:(id)arg1;
+ (double)circleDiameterForContentSize:(id)arg1;
+ (double)fontSizeForContentSize:(id)arg1;
+ (id)textForZoomFactor:(double)arg1;

- (void).cxx_destruct;
- (double)_backgroundImageDiameterForContentSize:(id)arg1;
- (id)_backgroundImageView;
- (id)_circleImageView;
- (double)_circleLineWidthForContentSize:(id)arg1;
- (void)_commonCAMZoomButtonInitialization;
- (id)_contentContainerView;
- (id)_createBackgroundImageForContentSize:(id)arg1;
- (id)_createCircleImageForContentSize:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_highlightingTransformForHighlighted:(bool)arg1;
- (void)_performHighlightAnimation;
- (void)_setHighlightingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_targetTransformForHighlighted:(bool)arg1 orientation:(long long)arg2;
- (void)_updateForContentSize;
- (void)_updateZoomFactorLabel;
- (id)_zoomFactorLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)contentSizeCategory;
- (id)delegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })highlightingTransform;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setZoomFactor:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)tintColorDidChange;
- (double)zoomFactor;

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