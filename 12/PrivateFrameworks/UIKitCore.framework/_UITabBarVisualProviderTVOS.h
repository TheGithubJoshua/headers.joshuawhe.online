<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UITabBarVisualProviderTVOS.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UITabBarVisualProviderTVOS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UITabBarVisualProviderTVOS : _UITabBarVisualProvider <UIScrollViewDelegate> {
    _UIBarBackground * _backgroundView;
    UIView * _customBackgroundView;
    UIView * _floatingBackgroundContainerView;
    _UIBarBackground * _floatingBackgroundView;
    UIView * _floatingItemsScrollContainerView;
    UIView * _floatingLabelSnapshotView;
    UIMotionEffect * _floatingPlatterMotionEffect;
    UIScrollView * _itemsScrollView;
    UIView * _labelMaskView;
    CABackdropLayer * _maskBackdropLayer;
    CAGradientLayer * _scrollViewMask;
    UIView * _selectionPlatterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (long long)_compositingMode;
- (void)_configureItems:(id)arg1;
- (void)_createFloatingBackgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getFadeFrameRight:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getRectForPlatterForItem:(id)arg1 withFocus:(bool)arg2 finalSize:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getRectForPlatterForItem:(id)arg1 withFocus:(bool)arg2 finalSize:(bool)arg3 clippedToView:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getRectForPlatterForView:(id)arg1 withFocus:(bool)arg2 finalSize:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getRectForPlatterForView:(id)arg1 withFocus:(bool)arg2 finalSize:(bool)arg3 clippedToView:(id)arg4;
- (void)_layoutFloatingBackgroundView;
- (void)_layoutFloatingTabBarItems;
- (id)_makeFloatingLabelSnapshotWith:(id)arg1;
- (id)_shim_accessoryView;
- (id)_shim_backdropGroupName;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setAccessoryView:(id)arg1;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (id)_shim_shadowView;
- (void)_shim_updateBackdropView;
- (void)_shim_updateFocusHighlightVisibility;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_updateBackground;
- (void)_updateColors;
- (void)_updateFloatingPlatterMotionEffectWithContext:(id)arg1;
- (void)_updateFloatingPlatterView;
- (void)_updateFloatingPlatterViewWithFocusContext:(id)arg1 withFocusAnimationCoordinator:(id)arg2;
- (void)_updateFloatingScrollViewContentOffsetWithSelectedView:(id)arg1 animated:(bool)arg2;
- (void)_updatePlatterRectWithSelectedItem:(id)arg1;
- (void)_updateScrollContainerMaskIfNeeded;
- (void)changeAppearance;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(bool)arg4;
- (void)changeLayout;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)createViewForTabBarItem:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeGivenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)prepare;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)tabBarSizeChanged:(struct CGSize { double x1; double x2; })arg1;
- (void)teardown;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArchivedSubviews:(id)arg1;

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