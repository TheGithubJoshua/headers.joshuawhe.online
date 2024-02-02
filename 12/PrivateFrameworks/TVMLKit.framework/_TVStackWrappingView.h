<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_TVStackWrappingView.h</title>
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

/PrivateFrameworks/TVMLKit.framework/_TVStackWrappingView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit (1)
 */

@interface _TVStackWrappingView : UIView {
    long long  _backdropBlurEffectStyle;
    UIImage * _backdropImage;
    double  _backdropInitialPeek;
    double  _backdropMaskFactor;
    double  _backdropPeekGradient;
    _TVStackBackdropView * _backdropView;
    UIImage * _backgroundImage;
    UIImageView * _backgroundImageView;
    NSArray * _headerSupplementaryViews;
    _TVStackBackdropMaskingView * _maskedBackdropView;
    bool  _shouldAdjustForTabBarSafeAreaInsets;
    UICollectionView * _stackView;
    NSArray * _supplementaryCellLayoutAttributes;
    bool  _usesBackdropImage;
}

@property (nonatomic) long long backdropBlurEffectStyle;
@property (nonatomic, retain) UIImage *backdropImage;
@property (nonatomic) double backdropInitialPeek;
@property (nonatomic) double backdropMaskFactor;
@property (nonatomic) double backdropPeekGradient;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, copy) NSArray *headerSupplementaryViews;
@property (nonatomic) bool shouldAdjustForTabBarSafeAreaInsets;
@property (nonatomic, retain) UICollectionView *stackView;
@property (nonatomic, readonly, copy) NSArray *supplementaryCellLayoutAttributes;
@property (nonatomic) bool usesBackdropImage;

- (void).cxx_destruct;
- (long long)backdropBlurEffectStyle;
- (id)backdropImage;
- (double)backdropInitialPeek;
- (double)backdropMaskFactor;
- (double)backdropPeekGradient;
- (id)backgroundImage;
- (void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 sectionIndex:(long long)arg2;
- (id)headerSupplementaryViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setBackdropBlurEffectStyle:(long long)arg1;
- (void)setBackdropImage:(id)arg1;
- (void)setBackdropInitialPeek:(double)arg1;
- (void)setBackdropMaskFactor:(double)arg1;
- (void)setBackdropPeekGradient:(double)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setHeaderSupplementaryViews:(id)arg1;
- (void)setShouldAdjustForTabBarSafeAreaInsets:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setUsesBackdropImage:(bool)arg1;
- (bool)shouldAdjustForTabBarSafeAreaInsets;
- (id)stackView;
- (id)supplementaryCellLayoutAttributes;
- (bool)usesBackdropImage;

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