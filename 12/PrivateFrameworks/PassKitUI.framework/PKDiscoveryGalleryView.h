<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKDiscoveryGalleryView.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKDiscoveryGalleryView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, PKPGSVSectionSubheaderView, UIScrollViewDelegate> {
    bool  _animatingCard;
    NSMutableArray * _cardViews;
    PKDiscoveryDataSource * _dataSource;
    NSMutableArray * _discoveryCardViews;
    UIImage * _dismissImage;
    UIScrollView * _horizontalScrollView;
    struct { 
        unsigned int hasPaymentPassWelcomeCard : 1; 
        unsigned int hasBarcodePassWelcomeCard : 1; 
        unsigned int barcodePassWelcomeCardIsDismissable : 1; 
        unsigned int hasDiscoveryCards : 1; 
    }  _layoutState;
    bool  _needsUpdateAsHeaderSubview;
    UIPageControl * _pageControl;
    PKDiscoveryCardView * _passWelcomeView;
    PKDiscoveryCardView * _paymentWelcomeView;
    unsigned long long  _pendingDeletes;
    PKDiscoveryCardView * _pressedDiscoveryCardView;
    <PKPGSVSectionSubheaderDelegate> * _subheaderDelegate;
    bool  _welcomeCardStateIsDirty;
}

@property (getter=isAnimatingCard, nonatomic) bool animatingCard;
@property (nonatomic, retain) PKDiscoveryDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKDiscoveryCardView *pressedDiscoveryCardView;
@property (readonly) Class superclass;

+ (bool)isVisibileForPKPGSVLayoutState:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })arg1 dataSource:(id)arg2;
+ (id)passWelcomeCardMessageAttributedString;
+ (bool)paymentWelcomeCardIsAvailable;

- (void).cxx_destruct;
- (void)_appStorePressed;
- (struct CGSize { double x1; double x2; })_contentSize;
- (id)_createPassWelcomeCardView;
- (id)_createPaymentWelcomeCardView;
- (double)_defaultHeight;
- (unsigned long long)_indexForCardViewWithIdentifier:(id)arg1;
- (void)_pageControlChanged:(id)arg1;
- (void)_removeCardView:(id)arg1 animated:(bool)arg2;
- (void)_reportCurrentDiscoveryCardToDiscoveryService;
- (void)_scanCodePressed;
- (void)_shouldDismiss;
- (void)_updateCardViewsAnimated:(bool)arg1;
- (void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 animated:(bool)arg2;
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;
- (void)_updatePageControlWithDisplayIndex;
- (id)cardViewForCardWithItemIdentifier:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2;
- (void)discoveryCardViewRemoveTapped:(id)arg1;
- (void)discoveryCardViewTapped:(id)arg1;
- (unsigned long long)displayIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimatingCard;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (bool)needsUpdate;
- (id)pressedDiscoveryCardView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAnimatingCard:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setSubheaderDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateArticleLayouts:(id)arg1;
- (void)updateForPKPGSVLayoutState:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })arg1;
- (void)updatePageControlFrame;

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
