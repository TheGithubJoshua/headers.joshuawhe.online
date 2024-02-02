<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKStarRatingView.h</title>
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

/Frameworks/MapKit.framework/MKStarRatingView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKStarRatingView : UIView {
    UIImage * _emptyStarHighlightedImage;
    UIImage * _emptyStarImage;
    UIImage * _fullStarHighlightedImage;
    UIImage * _fullStarImage;
    UIImage * _halfStarHighlightedImage;
    UIImage * _halfStarImage;
    bool  _highlighted;
    long long  _numLevels;
    long long  _numReviews;
    double  _padding;
    double  _rating;
    NSMutableArray * _ratingViews;
    long long  _starStyle;
}

@property (nonatomic, retain) UIImage *emptyStarHighlightedImage;
@property (nonatomic, retain) UIImage *emptyStarImage;
@property (nonatomic, retain) UIImage *fullStarHighlightedImage;
@property (nonatomic, retain) UIImage *fullStarImage;
@property (nonatomic, retain) UIImage *halfStarHighlightedImage;
@property (nonatomic, retain) UIImage *halfStarImage;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) long long numberOfRatingLevels;
@property (nonatomic) double rating;
@property (nonatomic) long long starStyle;

+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3;
+ (id)ratingAsAttributedString:(double)arg1 baseFont:(id)arg2 style:(long long)arg3 theme:(id)arg4;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_layoutStarViewsCreatingIfNeeded:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)didMoveToWindow;
- (id)emptyStarHighlightedImage;
- (id)emptyStarImage;
- (id)fullStarHighlightedImage;
- (id)fullStarImage;
- (id)halfStarHighlightedImage;
- (id)halfStarImage;
- (id)imageWithName:(id)arg1 andColor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (long long)numberOfRatingLevels;
- (double)rating;
- (void)setEmptyStarHighlightedImage:(id)arg1;
- (void)setEmptyStarImage:(id)arg1;
- (void)setFullStarHighlightedImage:(id)arg1;
- (void)setFullStarImage:(id)arg1;
- (void)setHalfStarHighlightedImage:(id)arg1;
- (void)setHalfStarImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumberOfRatingLevels:(long long)arg1;
- (void)setPadding:(double)arg1;
- (void)setRating:(double)arg1;
- (void)setStarStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)starStyle;
- (double)verticalAlignmentCenterPercentage;

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