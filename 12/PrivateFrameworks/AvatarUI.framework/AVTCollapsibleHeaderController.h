<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVTCollapsibleHeaderController.h</title>
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

/PrivateFrameworks/AvatarUI.framework/AVTCollapsibleHeaderController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCollapsibleHeaderController : NSObject <UIScrollViewDelegate> {
    double  _additionalTopContentInset;
    double  _collapseMarginalScrollDistance;
    unsigned long long  _currentScrollDirection;
    <AVTCollapsibleHeaderControllerDelegate> * _delegate;
    double  _expandMarginalScrollDistance;
    UIView * _headerView;
    double  _maxHeight;
    double  _minHeight;
    double  _previousOffset;
    double  _scrollToCompressionMultiplier;
    UIScrollView * _scrollView;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    bool  _shouldCollapseOnBottomBounceScroll;
    bool  _shouldOnlyExpandWhenScrollingAtEdge;
    bool  _shouldPushContentOffsetOnExpandOrCollapse;
    bool  _shouldResizeHeaderForScrolling;
    bool  _shouldSnapToMinOrMax;
    double  _singleTouchOffset;
}

@property (nonatomic) double additionalTopContentInset;
@property (nonatomic) double collapseMarginalScrollDistance;
@property (nonatomic, readonly) double currentHeightForHeader;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTCollapsibleHeaderControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expandMarginalScrollDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) double previousOffset;
@property (nonatomic) double scrollToCompressionMultiplier;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (nonatomic) bool shouldCollapseOnBottomBounceScroll;
@property (nonatomic) bool shouldOnlyExpandWhenScrollingAtEdge;
@property (nonatomic) bool shouldPushContentOffsetOnExpandOrCollapse;
@property (nonatomic) bool shouldResizeHeaderForScrolling;
@property (nonatomic) bool shouldSnapToMinOrMax;
@property (nonatomic) double singleTouchOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)additionalTopContentInset;
- (void)collapseAnimated:(bool)arg1;
- (double)collapseMarginalScrollDistance;
- (double)currentHeightForHeader;
- (unsigned long long)currentScrollDirection;
- (id)delegate;
- (void)expandAnimated:(bool)arg1;
- (void)expandAnimated:(bool)arg1 withFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)expandMarginalScrollDistance;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (double)headerHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)headerView;
- (id)initWithScrollView:(id)arg1 headerView:(id)arg2 minHeight:(double)arg3 maxHeight:(double)arg4;
- (double)maxHeight;
- (id)methodSignatureForSelector:(SEL)arg1;
- (double)minHeight;
- (double)previousOffset;
- (bool)respondsToSelector:(SEL)arg1;
- (double)scrollToCompressionMultiplier;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollToTopPreservingHeaderHeight:(bool)arg1 animated:(bool)arg2;
- (id)scrollView;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAdditionalTopContentInset:(double)arg1;
- (void)setCollapseMarginalScrollDistance:(double)arg1;
- (void)setCurrentScrollDirection:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandMarginalScrollDistance:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setPreviousOffset:(double)arg1;
- (void)setScrollToCompressionMultiplier:(double)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setShouldCollapseOnBottomBounceScroll:(bool)arg1;
- (void)setShouldOnlyExpandWhenScrollingAtEdge:(bool)arg1;
- (void)setShouldPushContentOffsetOnExpandOrCollapse:(bool)arg1;
- (void)setShouldResizeHeaderForScrolling:(bool)arg1;
- (void)setShouldSnapToMinOrMax:(bool)arg1;
- (void)setSingleTouchOffset:(double)arg1;
- (bool)shouldCollapseOnBottomBounceScroll;
- (bool)shouldOnlyExpandWhenScrollingAtEdge;
- (bool)shouldPushContentOffsetOnExpandOrCollapse;
- (bool)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(unsigned long long)arg1;
- (bool)shouldResizeGivenScrollDirection:(unsigned long long)arg1 currentHeaderHeight:(double)arg2 targetHeaderHeight:(double)arg3;
- (bool)shouldResizeHeaderForScrolling;
- (bool)shouldSnapToMinOrMax;
- (double)singleTouchOffset;
- (void)snapToMinMaxIfNeededAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })topContentOffsetWithHeaderHeight:(double)arg1;
- (void)updateHeaderForHeight:(double)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(unsigned long long)arg1 animated:(bool)arg2;
- (void)updateHeaderSizeForGlobalHeaderHeight:(double)arg1;
- (void)updateInsetsIfNeeded;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })updatedScrollViewInsetsFromExistingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

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
