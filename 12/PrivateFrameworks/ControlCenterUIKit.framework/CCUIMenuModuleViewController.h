<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CCUIMenuModuleViewController.h</title>
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

/PrivateFrameworks/ControlCenterUIKit.framework/CCUIMenuModuleViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit (1)
 */

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController, UIGestureRecognizerDelegate> {
    CCUIContentModuleContext * _contentModuleContext;
    UIScrollView * _contentScrollView;
    UIView * _contentView;
    UIView * _darkeningBackgroundView;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    CCUIMenuModuleItemView * _footerButtonView;
    UIView * _footerSeparatorView;
    UIView * _headerSeparatorView;
    bool  _ignoreMenuItemAtTouchLocationAfterExpanded;
    UIStackView * _menuItemsContainer;
    NSMutableArray * _menuItemsViews;
    MTMaterialView * _platterMaterialView;
    UILongPressGestureRecognizer * _pressGestureRecognizer;
    bool  _shouldProvideOwnPlatter;
    UILabel * _titleLabel;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchLocationToIgnore;
    bool  _useTallLayout;
}

@property (nonatomic, readonly) unsigned long long actionsCount;
@property (nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic) bool shouldProvideOwnPlatter;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useTallLayout;

- (void).cxx_destruct;
- (double)_contentScaleForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_contentSizeCategoryDidChange;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_contentTransformForScale:(double)arg1;
- (double)_desiredExpandedHeight;
- (void)_fadeViewsForExpandedState:(bool)arg1;
- (double)_footerHeight;
- (void)_handleActionTapped:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_layoutFooterButtonForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutFooterSeparatorForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutGlyphViewForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutHeaderSeparatorForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutMenuItemsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutTitleLabelForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_layoutViewSubviews;
- (double)_maximumHeight;
- (id)_menuItemAtGestureTouchLocation:(id)arg1;
- (id)_menuItemAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_menuItemsHeightForWidth:(double)arg1;
- (double)_separatorHeight;
- (void)_setupContentViewBounds;
- (void)_setupMenuItems;
- (void)_setupTitleLabel;
- (bool)_shouldLimitContentSizeCategory;
- (bool)_shouldShowFooterButton;
- (bool)_shouldShowFooterChin;
- (bool)_shouldShowFooterSeparator;
- (id)_titleFont;
- (double)_titleWidthForContainerWidth:(double)arg1;
- (bool)_toggleSelectionForMenuItem:(id)arg1;
- (void)_updateScrollViewContentSize;
- (unsigned long long)actionsCount;
- (void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(id /* block */)arg3;
- (void)addActionWithTitle:(id)arg1 subtitle:(id)arg2 glyph:(id)arg3 handler:(id /* block */)arg4;
- (id)contentModuleContext;
- (void)contentModuleWillTransitionToExpandedContentMode:(bool)arg1;
- (id)contentView;
- (void)dealloc;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)headerHeight;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContentHeightWithWidth:(double)arg1;
- (double)preferredExpandedContentWidth;
- (void)removeAllActions;
- (void)removeFooterButton;
- (void)setContentModuleContext:(id)arg1;
- (void)setFooterButtonTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)setShouldProvideOwnPlatter:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseTallLayout:(bool)arg1;
- (bool)shouldBeginTransitionToExpandedContentModule;
- (bool)shouldProvideOwnPlatter;
- (bool)useTallLayout;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToExpandedContentMode:(bool)arg1;

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
