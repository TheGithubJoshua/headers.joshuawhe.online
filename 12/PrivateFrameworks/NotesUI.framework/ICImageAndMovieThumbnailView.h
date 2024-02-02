<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICImageAndMovieThumbnailView.h</title>
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

/PrivateFrameworks/NotesUI.framework/ICImageAndMovieThumbnailView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI (1349.30)
 */

@interface ICImageAndMovieThumbnailView : UIView {
    struct UIColor { Class x1; } * _borderColor;
    unsigned long long  _edgesToRemoveEndPoint;
    unsigned long long  _edgesToRemoveStartPoint;
    bool  _forceSquareImageAspectRatio;
    NSMutableDictionary * _hairlineColors;
    unsigned long long  _hairlineEdges;
    NSMutableDictionary * _hairlineLayers;
    bool  _hairlineWidthUnitIsInPoint;
    unsigned long long  _imageScaling;
    struct UIImageView { Class x1; } * _imageView;
    NSLayoutConstraint * _imageViewBottomLayoutConstraint;
    NSLayoutConstraint * _imageViewLeftLayoutConstraint;
    NSLayoutConstraint * _imageViewRightLayoutConstraint;
    NSLayoutConstraint * _imageViewTopLayoutConstraint;
    double  _mininumScaleFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieDuration;
    ICLabel * _movieDurationLabel;
    struct UIView { Class x1; } * _movieFooter;
    bool  _showAsMovie;
    bool  _showMovieDuration;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long edgesToRemoveEndPoint;
@property (nonatomic) unsigned long long edgesToRemoveStartPoint;
@property (nonatomic) bool forceSquareImageAspectRatio;
@property (nonatomic, retain) NSMutableDictionary *hairlineColors;
@property (nonatomic) unsigned long long hairlineEdges;
@property (nonatomic, retain) NSMutableDictionary *hairlineLayers;
@property (nonatomic) bool hairlineWidthUnitIsInPoint;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double imageInset;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *imageViewBottomLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageViewLeftLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageViewRightLayoutConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageViewTopLayoutConstraint;
@property (nonatomic) double mininumScaleFactor;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieDuration;
@property (nonatomic, retain) ICLabel *movieDurationLabel;
@property (nonatomic, retain) UIView *movieFooter;
@property (nonatomic) bool showAsMovie;
@property (nonatomic) bool showMovieDuration;

- (void).cxx_destruct;
- (double)backingScale;
- (struct UIColor { Class x1; }*)borderColor;
- (void)commonInit;
- (double)cornerRadius;
- (unsigned long long)edgesToRemoveEndPoint;
- (unsigned long long)edgesToRemoveStartPoint;
- (bool)forceSquareImageAspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameByApplyingHorizontalReductionTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 edge:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameByApplyingVerticalReductionTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 edge:(unsigned long long)arg2;
- (id)hairlineColors;
- (unsigned long long)hairlineEdges;
- (id)hairlineLayerForEdge:(unsigned long long)arg1;
- (id)hairlineLayers;
- (double)hairlineWidthInPoint;
- (bool)hairlineWidthUnitIsInPoint;
- (struct UIImage { Class x1; }*)image;
- (double)imageInset;
- (unsigned long long)imageScaling;
- (struct UIImageView { Class x1; }*)imageView;
- (id)imageViewBottomLayoutConstraint;
- (id)imageViewLeftLayoutConstraint;
- (id)imageViewRightLayoutConstraint;
- (id)imageViewTopLayoutConstraint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showMovieDuration:(bool)arg2;
- (double)mininumScaleFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieDuration;
- (id)movieDurationLabel;
- (struct UIView { Class x1; }*)movieFooter;
- (double)pixelWidth;
- (void)setBorderColor:(struct UIColor { Class x1; }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEdgesToRemoveEndPoint:(unsigned long long)arg1;
- (void)setEdgesToRemoveStartPoint:(unsigned long long)arg1;
- (void)setForceSquareImageAspectRatio:(bool)arg1;
- (void)setHairlineColor:(struct UIColor { Class x1; }*)arg1 forEdges:(unsigned long long)arg2;
- (void)setHairlineColors:(id)arg1;
- (void)setHairlineEdges:(unsigned long long)arg1;
- (void)setHairlineLayers:(id)arg1;
- (void)setHairlineWidthUnitIsInPoint:(bool)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImageInset:(double)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setImageView:(struct UIImageView { Class x1; }*)arg1;
- (void)setImageViewBottomLayoutConstraint:(id)arg1;
- (void)setImageViewLeftLayoutConstraint:(id)arg1;
- (void)setImageViewRightLayoutConstraint:(id)arg1;
- (void)setImageViewTopLayoutConstraint:(id)arg1;
- (void)setMininumScaleFactor:(double)arg1;
- (void)setMovieDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieDurationLabel:(id)arg1;
- (void)setMovieFooter:(struct UIView { Class x1; }*)arg1;
- (void)setShowAsMovie:(bool)arg1;
- (void)setShowMovieDuration:(bool)arg1;
- (void)setupMovieFooter;
- (bool)showAsMovie;
- (bool)showMovieDuration;
- (void)updateDurationLabel;
- (void)updateHairline;
- (void)updateHairlineFrames;
- (bool)usesSeparateLayerForHairlineEdge:(unsigned long long)arg1;
- (bool)usesSeparateLayersForHairlines;

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