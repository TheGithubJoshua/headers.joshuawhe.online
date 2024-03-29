<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIPageControl.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIPageControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIPageControl : UIControl {
    UIVisualEffectView * _backgroundVisualEffectView;
    long long  _currentPage;
    UIImage * _currentPageImage;
    NSMutableArray * _currentPageImages;
    UIColor * _currentPageIndicatorTintColor;
    long long  _displayedPage;
    NSMutableArray * _indicators;
    long long  _lastUserInterfaceIdiom;
    _UILegibilitySettings * _legibilitySettings;
    long long  _numberOfPages;
    struct { 
        unsigned int hideForSinglePage : 1; 
        unsigned int defersCurrentPageDisplay : 1; 
    }  _pageControlFlags;
    UIImage * _pageImage;
    NSMutableArray * _pageImages;
    UIColor * _pageIndicatorTintColor;
}

@property (nonatomic) long long currentPage;
@property (nonatomic, retain) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) bool defersCurrentPageDisplay;
@property (nonatomic) bool hidesForSinglePage;
@property (getter=_legibilitySettings, setter=_setLegibilitySettings:, nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (getter=_legibilityStyle, setter=_setLegibilityStyle:, nonatomic) long long legibilityStyle;
@property (nonatomic) long long numberOfPages;
@property (nonatomic, retain) UIColor *pageIndicatorTintColor;

+ (bool)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (id)_activePageIndicatorImage;
- (void)_cachePageIndicatorImages;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;
- (void)_commonPageControlInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createModernIndicatorImageFromView:(id)arg1;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (long long)_displayedPage;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(bool)arg2;
- (id)_effectiveContentView;
- (bool)_hasCustomImageForPage:(long long)arg1 enabled:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indicatorFrameAtIndex:(long long)arg1;
- (double)_indicatorSpacing;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2;
- (id)_indicatorViewEnabled:(bool)arg1 index:(long long)arg2 legible:(bool)arg3;
- (void)_invalidateIndicators;
- (id)_legibilitySettings;
- (long long)_legibilityStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_modernBounds;
- (id)_modernColorEnabled:(bool)arg1;
- (double)_modernCornerRadius;
- (id)_modernIndicatorImageEnabled:(bool)arg1;
- (void)_modernTransitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImage;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (void)_setDisplayedPage:(long long)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLegibilityStyle:(long long)arg1;
- (bool)_shouldDrawLegibly;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3;
- (void)_transitionIndicator:(id)arg1 toEnabled:(bool)arg2 index:(long long)arg3 legible:(bool)arg4;
- (void)_updateCurrentPageDisplay;
- (bool)canBecomeFocused;
- (long long)currentPage;
- (id)currentPageIndicatorTintColor;
- (bool)defersCurrentPageDisplay;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hidesForSinglePage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (long long)numberOfPages;
- (id)pageIndicatorTintColor;
- (void)setCurrentPage:(long long)arg1;
- (void)setCurrentPageIndicatorTintColor:(id)arg1;
- (void)setDefersCurrentPageDisplay:(bool)arg1;
- (void)setHidesForSinglePage:(bool)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setPageIndicatorTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForNumberOfPages:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCurrentPageDisplay;

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
