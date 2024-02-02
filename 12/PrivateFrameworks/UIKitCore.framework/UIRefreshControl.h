<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIRefreshControl.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIRefreshControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIRefreshControl : UIControl {
    double  _additionalTopInset;
    bool  _adjustingInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _appliedInsets;
    _UIRefreshControlContentView * _contentView;
    <_UIRefreshControlHosting> * _host;
    bool  _insetsApplied;
    double  _refreshControlHeight;
    long long  _refreshControlState;
    double  _snappingHeight;
    long long  _style;
    double  _visibleHeight;
}

@property (nonatomic, readonly) bool _areInsetsBeingApplied;
@property (getter=_host, setter=_setHost:, nonatomic) <_UIRefreshControlHosting> *_host;
@property (nonatomic, readonly) bool _hostAdjustsContentOffset;
@property (nonatomic, readonly) double _refreshControlHeight;
@property (nonatomic, readonly) double _snappingHeight;
@property (nonatomic, readonly) double _visibleHeight;
@property (getter=_appliedInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } appliedInsets;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) long long refreshControlState;
@property (getter=isRefreshing, nonatomic, readonly) bool refreshing;
@property (nonatomic, readonly) long long style;
@property (nonatomic, retain) UIColor *tintColor;

+ (Class)_contentViewClassForStyle:(long long)arg1;
+ (id)_defaultColor;

- (void).cxx_destruct;
- (void)_addInsetHeight:(double)arg1;
- (void)_addInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_appliedInsets;
- (bool)_areInsetsBeingApplied;
- (id)_attributedTitle;
- (bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_contentView;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_didScroll;
- (void)_endRefreshingAnimated:(bool)arg1;
- (id)_host;
- (bool)_hostAdjustsContentOffset;
- (double)_impactIntensityForVelocity:(double)arg1;
- (bool)_isApplyingInsets;
- (struct CGPoint { double x1; double x2; })_originForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (long long)_recomputeNewState;
- (double)_refreshControlHeight;
- (void)_removeInsetHeight:(double)arg1;
- (void)_removeInsets;
- (void)_resizeToFitContents;
- (id)_scrollView;
- (double)_scrollViewHeight;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setHost:(id)arg1;
- (void)_setRefreshControlState:(long long)arg1 notify:(bool)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setVisibleHeight:(double)arg1;
- (double)_snappingHeight;
- (double)_stiffnessForVelocity:(double)arg1;
- (id)_tintColor;
- (void)_update;
- (void)_updateConcealingMask;
- (void)_updateHiddenStateIfNeeded;
- (void)_updateSnappingHeight;
- (double)_visibleHeight;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x1; double x2; })arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
- (id)attributedTitle;
- (void)beginRefreshing;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (void)endRefreshing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isRefreshing;
- (long long)refreshControlState;
- (double)revealedFraction;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRefreshControlState:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (long long)style;
- (id)tintColor;

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