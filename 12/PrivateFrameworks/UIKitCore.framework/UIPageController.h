<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIPageController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIPageController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIPageController : UIViewController {
    <UIPageControllerDelegate> * _delegate;
    int  _notificationState;
    UIPageControl * _pageControl;
    struct { 
        unsigned int delegateViewControllerAtIndex : 1; 
        unsigned int delegateWillBeginPaging : 1; 
        unsigned int delegateDidEndPaging : 1; 
        unsigned int displaysPageControl : 1; 
        unsigned int wraps : 1; 
    }  _pageControllerFlags;
    long long  _pageCount;
    int  _pageSpacing;
    UIScrollView * _scrollView;
    NSMutableArray * _viewControllers;
    long long  _visibleIndex;
    UIView * _wrapperViews;
}

@property (nonatomic) <UIPageControllerDelegate> *delegate;
@property (nonatomic) bool displaysPageControl;
@property (nonatomic) long long pageCount;
@property (nonatomic) double pageSpacing;
@property (nonatomic) long long visibleIndex;
@property (nonatomic, readonly, retain) UIViewController *visibleViewController;
@property (nonatomic) bool wraps;

- (void)_adjustScrollViewContentInsets;
- (bool)_allowsAutorotation;
- (void)_createPageControl;
- (bool)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (bool)_hasNextViewController;
- (bool)_hasPreviousViewController;
- (bool)_hasVisibleViewController;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (bool)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (id)_loadNextViewController;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(bool)arg1;
- (bool)_needToLoadNext;
- (bool)_needToLoadPrevious;
- (bool)_needToLoadVisible;
- (id)_nextViewController;
- (int)_nextViewControllerNotificationState;
- (void)_notifyNextViewController:(int)arg1 animated:(bool)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(bool)arg2;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(bool)arg4;
- (void)_notifyVisibleViewController:(int)arg1 animated:(bool)arg2;
- (void)_pageChanged:(id)arg1;
- (id)_pageControllerScrollView;
- (id)_previousViewController;
- (int)_previousViewControllerNotificationState;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (id)_scrollView;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scrollViewFrame;
- (void)_scrollViewWillBeginPaging;
- (void)_setNextViewController:(id)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (bool)_shouldUseOnePartRotation;
- (id)_visibleViewController;
- (int)_visibleViewControllerNotificationState;
- (void)dealloc;
- (id)delegate;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (bool)displaysPageControl;
- (long long)indexOfViewController:(id)arg1;
- (void)loadView;
- (long long)pageCount;
- (double)pageSpacing;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysPageControl:(bool)arg1;
- (void)setPageCount:(long long)arg1;
- (void)setPageSpacing:(double)arg1;
- (void)setVisibleIndex:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1 animated:(bool)arg2;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(bool)arg2 animated:(bool)arg3;
- (void)setWraps:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)visibleIndex;
- (id)visibleViewController;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)wraps;

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