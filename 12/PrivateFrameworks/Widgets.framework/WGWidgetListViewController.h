<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WGWidgetListViewController.h</title>
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

/PrivateFrameworks/Widgets.framework/WGWidgetListViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets (1)
 */

@interface WGWidgetListViewController : UIViewController <UIScrollViewDelegate, WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetExtensionVisibilityProviding, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate> {
    NSMutableDictionary * _cancelTouchesAssertionsByWidgetID;
    <WGWidgetListViewControllerDelegate> * _delegate;
    WGWidgetDiscoveryController * _discoveryController;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxVisibleContentSize;
    NSArray * _previouslyVisibleWidgetIDs;
    bool  _shouldBlurContent;
    UIStackView * _stackView;
    NSMutableDictionary * _widgetIDsToItemVCs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetListViewControllerDelegatePrivate> *delegate;
@property (nonatomic) <WGWidgetListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_group, nonatomic, readonly) NSString *group;
@property (readonly) unsigned long long hash;
@property (getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:, nonatomic, retain) NSArray *previouslyVisibleWidgetIDs;
@property (nonatomic) bool shouldBlurContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long widgetCount;
@property (nonatomic, readonly) UIScrollView *widgetListView;

- (void).cxx_destruct;
- (id /* block */)_beginInsertion:(bool)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(bool)arg4;
- (void)_cancelTouchesForHitWidgetIfNecessary;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_configureStackView;
- (id)_group;
- (id /* block */)_insert:(bool)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(bool)arg4;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_invokeBlock:(id /* block */)arg1 withPlatterViewsPassingTest:(id /* block */)arg2;
- (void)_invokeBlockWithPlatterViewsVisibleInBounds:(id /* block */)arg1;
- (void)_invokeBlockWithPlatterViewsVisibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;
- (struct CGSize { double x1; double x2; })_maxVisibleContentSize;
- (id)_platterViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_previouslyVisibleWidgetIDs;
- (void)_repopulateStackView;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(bool)arg1;
- (void)_setPreviouslyVisibleWidgetIDs:(id)arg1;
- (void)_updateBackgroundViewForPlatter:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleContentFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContentOccludingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
- (void)brokenViewDidAppearForWidget:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (bool)isWidgetExtensionVisible:(id)arg1;
- (void)loadView;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)managingContainerIsVisibleForWidget:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsetsForWidget:(id)arg1;
- (struct CGSize { double x1; double x2; })maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldBlurContent;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForWidget:(id)arg1;
- (id)visibleWidgetIdentifiers;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (unsigned long long)widgetCount;
- (id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2;
- (id)widgetListView;

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