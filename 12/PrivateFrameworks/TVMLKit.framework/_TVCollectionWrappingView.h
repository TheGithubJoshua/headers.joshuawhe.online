<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_TVCollectionWrappingView.h</title>
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

/PrivateFrameworks/TVMLKit.framework/_TVCollectionWrappingView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit (1)
 */

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {
    bool  _centered;
    long long  _collectionGradientMask;
    _TVCollectionView * _collectionView;
    struct { 
        bool respondsToAugmentedSelectionFrameForFrame; 
    }  _collectionViewFlags;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _footerFrame;
    UIView * _footerView;
    CAGradientLayer * _gradientLayer;
    bool  _headerAuxiliarySelecting;
    bool  _headerCanBecomeFocused;
    bool  _headerFloating;
    bool  _headerFocused;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _headerFrame;
    bool  _headerHidden;
    double  _headerSelectionMargin;
    UIView * _headerView;
    IKColor * _ikBackgroundColor;
    UIView * _selectingView;
    struct TVShowcaseConfig { 
        double inset; 
    }  _showcaseConfig;
    double  _showcaseFactor;
}

@property (getter=isCentered, nonatomic) bool centered;
@property (nonatomic) long long collectionGradientMask;
@property (nonatomic, retain) _TVCollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (getter=isHeaderAuxiliarySelecting, nonatomic) bool headerAuxiliarySelecting;
@property (nonatomic) bool headerCanBecomeFocused;
@property (getter=isHeaderFloating, nonatomic) bool headerFloating;
@property (getter=isHeaderFocused, nonatomic) bool headerFocused;
@property (getter=isHeaderHidden, nonatomic) bool headerHidden;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, retain) IKColor *ikBackgroundColor;
@property (nonatomic, readonly) bool shouldBindRowsTogether;
@property (nonatomic) struct TVShowcaseConfig { double x1; } showcaseConfig;
@property (readonly) Class superclass;

+ (void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 gradientInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4 gradientBoundsInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedHeaderFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_adjustedPadding;
- (id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 forShowcase:(bool)arg3;
- (id)_currentFooterView;
- (id)_currentHeaderView;
- (double)_showcaseContentScaleForExpectedWidth:(double)arg1;
- (void)_updateSubviews;
- (long long)collectionGradientMask;
- (id)collectionView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)footerView;
- (bool)headerCanBecomeFocused;
- (double)headerSelectionMargin;
- (id)headerView;
- (id)ikBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCentered;
- (bool)isHeaderAuxiliarySelecting;
- (bool)isHeaderFloating;
- (bool)isHeaderFocused;
- (bool)isHeaderHidden;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)reevaluateFooterFrame;
- (void)reevaluateHeaderFrame;
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2;
- (void)setCentered:(bool)arg1;
- (void)setCollectionGradientMask:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderAuxiliarySelecting:(bool)arg1;
- (void)setHeaderCanBecomeFocused:(bool)arg1;
- (void)setHeaderFloating:(bool)arg1;
- (void)setHeaderFocused:(bool)arg1;
- (void)setHeaderHidden:(bool)arg1;
- (void)setHeaderSelectionMargin:(double)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setIkBackgroundColor:(id)arg1;
- (void)setShowcaseConfig:(struct TVShowcaseConfig { double x1; })arg1;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (bool)shouldBindRowsTogether;
- (struct TVShowcaseConfig { double x1; })showcaseConfig;
- (id)showcaseRowMetricsForExpectedWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tv_setShowcaseFactor:(double)arg1;

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