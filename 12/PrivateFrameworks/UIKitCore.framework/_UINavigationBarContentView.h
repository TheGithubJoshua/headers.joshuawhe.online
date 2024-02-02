<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UINavigationBarContentView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UINavigationBarContentView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UINavigationBarContentView : _UIBarContentView <_UIBarButtonItemViewOwner, _UIButtonBarButtonChangeObserver, _UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant> {
    bool  _backButtonHidden;
    UIBarButtonItem * _backButtonItem;
    double  _backButtonMargin;
    double  _backButtonMaximumWidth;
    UIImage * _backIndicatorImage;
    long long  _barMetrics;
    NSMutableArray * _currentAnimations;
    NSMutableArray * _currentCompletions;
    bool  _deferResolvedSizeChange;
    <_UINavigationBarContentViewDelegate> * _delegate;
    bool  _hitTestingExtensionsAreValid;
    bool  _isHidingBackButton;
    bool  _isHidingLeadingBar;
    bool  _isShowingBackButton;
    _UINavigationBarContentViewLayout * _layout;
    NSArray * _leadingBarButtonItems;
    bool  _leadingItemsSupplementBackItem;
    bool  _needsBackButtonUpdate;
    bool  _outstandingDeferredResolvedSizeChange;
    double  _overrideSize;
    long long  _requestedContentSize;
    UIColor * _textColor;
    NSString * _title;
    NSDictionary * _titleAttributes;
    double  _titleVerticalPositionAdjustment;
    UIView * _titleView;
    double  _titleViewAlpha;
    NSArray * _trailingBarButtonItems;
    _UINavigationBarTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) UIView *accessibilityBackButtonView;
@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic) bool backButtonHidden;
@property (nonatomic, retain) UIBarButtonItem *backButtonItem;
@property (nonatomic) double backButtonMargin;
@property (setter=_setBackButtonMaximumWidth:, nonatomic) double backButtonMaximumWidth;
@property (nonatomic) long long barMetrics;
@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic, readonly) double currentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UINavigationBarContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *leadingBarButtonItems;
@property (nonatomic) bool leadingItemsSupplementBackItem;
@property (nonatomic) double overrideSize;
@property (nonatomic) long long requestedContentSize;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *titleAttributes;
@property (nonatomic) double titleVerticalPositionAdjustment;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) double titleViewAlpha;
@property (nonatomic, copy) NSArray *trailingBarButtonItems;

- (void).cxx_destruct;
- (void)__backButtonAction:(id)arg1;
- (bool)__setupTitleViewCanSkipUpdates;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_barButtonItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_addCoordinatedAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_appearanceChanged;
- (void)_applyTitleAttributesToLabel:(id)arg1 withString:(id)arg2;
- (void)_clearAllAnimations;
- (long long)_currentContentSize;
- (id)_defaultInlineTitleAttributes;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (double)_intrinsicHeight;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (id)_newLayout;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overlayRectForView:(id)arg1 inTargetView:(id)arg2;
- (void)_runAllScheduledAnimations:(bool)arg1;
- (void)_setBackButtonMaximumWidth:(double)arg1;
- (void)_setupBackButtonAnimated:(bool)arg1;
- (void)_setupLeadingButtonBarAnimated:(bool)arg1;
- (void)_setupTitleViewAnimated:(bool)arg1;
- (void)_setupTrailingButtonBarAnimated:(bool)arg1;
- (void)_updateLayoutMarginsForLayout:(id)arg1;
- (id)accessibilityBackButtonView;
- (id)accessibilityTitleView;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(bool)arg2;
- (bool)backButtonHidden;
- (id)backButtonItem;
- (double)backButtonMargin;
- (double)backButtonMaximumWidth;
- (void)backButtonTitleDidChange;
- (id)backIndicatorImage;
- (long long)barMetrics;
- (long long)barType;
- (long long)currentContentSize;
- (double)currentHeight;
- (double)defaultEdgeSpacing;
- (id)defaultFontDescriptor;
- (id)delegate;
- (unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRTL;
- (void)layoutMarginsDidChange;
- (id)leadingBarButtonItems;
- (bool)leadingItemsSupplementBackItem;
- (double)overrideSize;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (long long)requestedContentSize;
- (void)resolvedSizeDidChange;
- (void)safeAreaInsetsDidChange;
- (void)setBackButtonHidden:(bool)arg1;
- (void)setBackButtonItem:(id)arg1;
- (void)setBackButtonMargin:(double)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBarMetrics:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingBarButtonItems:(id)arg1;
- (void)setLeadingItemsSupplementBackItem:(bool)arg1;
- (void)setNeedsBackButtonUpdate;
- (void)setOverrideSize:(double)arg1;
- (void)setRequestedContentSize:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributes:(id)arg1;
- (void)setTitleVerticalPositionAdjustment:(double)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleViewAlpha:(double)arg1;
- (void)setTrailingBarButtonItems:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (void)tintColorDidChange;
- (id)title;
- (id)titleAttributes;
- (double)titleVerticalPositionAdjustment;
- (id)titleView;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
- (double)titleViewAlpha;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (id)trailingBarButtonItems;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;
- (void)updateContentAnimated:(bool)arg1;

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