<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIMultiColumnViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIMultiColumnViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIMultiColumnViewController : UIViewController {
    UIImage * __columnToggleButtonImage;
    unsigned long long  _animatingTargetColumnCount;
    NSMutableArray * _borderViews;
    NSArray * _columnWidths;
    <UIMultiColumnViewControllerDelegate> * _delegate;
    UIBarButtonItem * _hideSecondColumnBarButtonItem;
    double  _keyboardInset;
    unsigned long long  _lastColumnCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrameInWindow;
    struct { 
        unsigned int updatingNavControllerChildren : 1; 
        unsigned int animatingItem1LeftBarButton : 1; 
        unsigned int animatingSplitToWidth : 1; 
    }  _mcvcFlags;
    NSArray * _navControllers;
    UIBarButtonItem * _showSecondColumnBarButtonItem;
    NSArray * _viewControllers;
}

@property (setter=_setColumnToggleButtonImage:, nonatomic, retain) UIImage *_columnToggleButtonImage;
@property (nonatomic, retain) NSArray *columnWidths;
@property (nonatomic) <UIMultiColumnViewControllerDelegate> *delegate;
@property (nonatomic) double keyboardInset;
@property (nonatomic, retain) NSArray *navControllers;
@property (nonatomic, retain) NSArray *viewControllers;

- (void).cxx_destruct;
- (void)_addButtonItem:(id)arg1 toNavItem:(id)arg2;
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;
- (bool)_allowMultipleColumns;
- (void)_animateSplitToWidth:(double)arg1;
- (bool)_canShowColumnIndex:(unsigned long long)arg1;
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_columnToggleButtonImage;
- (id)_contentSizesForColumnWidths:(id)arg1;
- (bool)_currentSizeMightAllowMultipleColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (id)_effectiveColumnWidths;
- (void)_hideSecondColumn:(id)arg1;
- (id)_hideSecondColumnBarButtonItem;
- (id)_liveVCs;
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;
- (id)_navigationBarForDragAffordance;
- (void)_navigationControllerChangedViewControllers:(id)arg1;
- (id)_possibleContentSizes;
- (id)_preferredContentSizes;
- (void)_removeButtonItem:(id)arg1 fromNavItem:(id)arg2;
- (void)_setAllowNestedNavigationControllers:(bool)arg1;
- (void)_setColumnToggleButtonImage:(id)arg1;
- (void)_showSecondColumn:(id)arg1;
- (id)_showSecondColumnBarButtonItem;
- (void)_splitViewControllerDidUpdate:(id)arg1;
- (id)_splitViewControllerImageForDisplayModeButtonToShowLeading:(id)arg1;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;
- (double)_unsafeAreaPaddingForFirstVisibleColumn;
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(bool)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_willShowColumnCount:(unsigned long long)arg1;
- (id)columnWidths;
- (void)dealloc;
- (id)delegate;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2;
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;
- (double)keyboardInset;
- (id)navControllers;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)setColumnWidths:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardInset:(double)arg1;
- (void)setNavControllers:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)title;
- (id)viewControllers;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

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
