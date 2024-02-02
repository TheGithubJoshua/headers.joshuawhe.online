<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKSmallCalloutView.h</title>
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

/Frameworks/MapKit.framework/MKSmallCalloutView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKSmallCalloutView : UIView {
    UILayoutGuide * _centerContentLeadingGuide;
    UILayoutGuide * _centerContentTrailingGuide;
    UIView<_MKCalloutAccessoryView> * _detailView;
    NSLayoutConstraint * _detailViewBottomConstraint;
    NSLayoutConstraint * _detailViewMinTopConstraint;
    NSLayoutConstraint * _detailViewTrailingConstraint;
    UIView<_MKCalloutAccessoryView> * _externalDetailView;
    UIView<_MKCalloutAccessoryView> * _externalLeftView;
    UIView<_MKCalloutAccessoryView> * _externalRightView;
    UIView<_MKCalloutAccessoryView> * _leftView;
    NSLayoutConstraint * _leftViewCenterContentMarginConstraint;
    NSLayoutConstraint * _leftViewHorizontalPositionConstraint;
    UILayoutGuide * _leftViewLeftSpacer;
    NSLayoutConstraint * _leftViewMinCalloutWidthConstraint;
    UILayoutGuide * _leftViewTopSpacer;
    NSLayoutConstraint * _leftViewTopSpacerBottomConstraint;
    struct { 
        unsigned char timePeriod; 
        unsigned char overlayType; 
        unsigned char applicationState; 
        unsigned char searchResultsType; 
        bool mapHasLabels; 
    }  _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton * _maskedContainerView;
    NSLayoutConstraint * _maxWidthConstraint;
    NSLayoutConstraint * _minWidthConstraint;
    bool  _needsPreferredContentSizeUpdate;
    bool  _parallaxEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    UIView<_MKCalloutAccessoryView> * _rightView;
    NSLayoutConstraint * _rightViewCenterContentMarginConstraint;
    NSLayoutConstraint * _rightViewHorizontalPositionConstraint;
    NSLayoutConstraint * _rightViewMinCalloutWidthConstraint;
    UILayoutGuide * _rightViewRightSpacer;
    UILayoutGuide * _rightViewTopSpacer;
    NSLayoutConstraint * _rightViewTopSpacerBottomConstraint;
    bool  _shouldPositionTitleForMapsTransitionMovingSideways;
    _MKUILabel * _subtitleLabel;
    NSLayoutConstraint * _titleBaselineFromTopConstraint;
    NSLayoutConstraint * _titleBaselineFromTopMinimumConstraint;
    _MKUILabel * _titleLabel;
    NSArray * _titleLabelConstraints;
    NSLayoutConstraint * _titleMinimumBaselineToBottomConstraint;
    UIView * _titlesContainerView;
    NSLayoutConstraint * _unmaskedContainerLeadingConstraint;
    NSLayoutConstraint * _unmaskedContainerTrailingConstraint;
    UIView * _unmaskedContainerView;
}

@property (nonatomic, copy) NSString *calloutSubtitle;
@property (nonatomic, copy) NSString *calloutTitle;
@property (nonatomic, retain) UIView *detailView;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; } mapDisplayStyle;
@property (nonatomic) double maximumWidth;
@property (nonatomic) double minimumWidth;
@property (nonatomic) bool parallaxEnabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic, readonly) UIView *titlesContainerView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_maskedContainerView;
- (void)_setNeedsUpdatePreferredContentSize;
- (void)_updateAccessoryViewStyles;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })mapDisplayStyle;
- (double)maximumWidth;
- (double)minimumWidth;
- (bool)parallaxEnabled;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setMapDisplayStyle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; bool x5; })arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumWidth:(double)arg1;
- (void)setParallaxEnabled:(bool)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titlesContainerView;

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