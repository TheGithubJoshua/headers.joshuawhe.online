<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SXStripGalleryComponentView.h</title>
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

/PrivateFrameworks/Silex.framework/SXStripGalleryComponentView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex (2166)
 */

@interface SXStripGalleryComponentView : SXGalleryComponentView <SXFullscreenCanvasShowable, SXFullscreenCaptionDataSource, SXImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate> {
    <SXFullscreenCanvasControllerFactory> * _canvasControllerFactory;
    double  _contentOffset;
    double  _contentWidth;
    NSMutableSet * _exposedGalleryItems;
    SXFullscreenCanvasController * _fullScreenCanvasController;
    UIView * _fullscreenGestureView;
    NSArray * _imageResources;
    <SXImageViewFactory> * _imageViewFactory;
    NSMutableArray * _imageViews;
    SXItemizedScrollView * _itemizedScrollView;
    unsigned long long  _lastPreloadViewIndex;
    bool  _loadedAtleastOneImage;
    SXMediaViewEvent * _mediaViewEvent;
    double  _rightContentInset;
    SXImageView * _targetGalleryItem;
    long long  _visibleImageViewIndex;
    double  _xOffset;
}

@property (nonatomic, readonly) <SXFullscreenCanvasControllerFactory> *canvasControllerFactory;
@property (nonatomic, readonly) double contentOffset;
@property (nonatomic, readonly) double contentWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *exposedGalleryItems;
@property (nonatomic, retain) SXFullscreenCanvasController *fullScreenCanvasController;
@property (nonatomic) UIView *fullscreenGestureView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageResources;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic, retain) SXItemizedScrollView *itemizedScrollView;
@property (nonatomic) unsigned long long lastPreloadViewIndex;
@property (nonatomic) bool loadedAtleastOneImage;
@property (nonatomic, retain) SXMediaViewEvent *mediaViewEvent;
@property (nonatomic, readonly) double rightContentInset;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXImageView *targetGalleryItem;
@property (nonatomic) long long visibleImageViewIndex;
@property (nonatomic, readonly) double xOffset;

- (void).cxx_destruct;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (id)canvasControllerFactory;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (double)contentOffset;
- (id)contentSizeCategoryForCaption:(id)arg1;
- (double)contentWidth;
- (void)createMediaViewEventForGalleryItem:(id)arg1;
- (id)createViewForViewIndex:(unsigned long long)arg1;
- (id)exposedGalleryItems;
- (void)finishMediaViewEvent;
- (void)forceImageViewFullscreen:(id)arg1;
- (id)fullScreenCanvasController;
- (id)fullScreenCanvasController:(id)arg1 canvasViewControllerForShowable:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)fullScreenCanvasController:(id)arg1 captionForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullScreenCanvasController:(id)arg1 copyViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 didShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 fullScreenFrameForShowable:(id)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (unsigned long long)fullScreenCanvasController:(id)arg1 numberOfViewsForShowable:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullScreenCanvasController:(id)arg1 originalFrameForShowable:(id)arg2 onCanvasView:(id)arg3 viewIndex:(unsigned long long)arg4;
- (id)fullScreenCanvasController:(id)arg1 originalViewForShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 shouldAddGestureView:(id)arg2 forShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 showable:(id)arg2 gestureRecognizerShouldBegin:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(id)arg1 showable:(id)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(id)arg1 viewIndexForPoint:(struct CGPoint { double x1; double x2; })arg2 inShowable:(id)arg3;
- (void)fullScreenCanvasController:(id)arg1 willHideShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (bool)fullScreenCanvasController:(id)arg1 willShowShowable:(id)arg2 viewIndex:(unsigned long long)arg3;
- (id)fullscreenGestureView;
- (bool)gestureShouldBegin:(id)arg1;
- (double)gutterBetweenItemsInNotPagingItemizedScrollView:(id)arg1;
- (id)hostingView;
- (id)imageResources;
- (void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2;
- (void)imageView:(id)arg1 didLoadImage:(id)arg2 ofQuality:(int)arg3;
- (id)imageViewFactory;
- (id)imageViewForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageViews;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 imageViewFactory:(id)arg8 canvasControllerFactory:(id)arg9;
- (id)itemizedScrollView;
- (void)itemizedScrollView:(id)arg1 didChangeToActiveViewIndex:(unsigned long long)arg2;
- (void)itemizedScrollView:(id)arg1 didShowViewWithIndex:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemizedScrollView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2;
- (bool)itemizedScrollView:(id)arg1 isAllowedToAddViewInHierarchy:(unsigned long long)arg2;
- (id)itemizedScrollView:(id)arg1 viewAtIndex:(unsigned long long)arg2;
- (bool)itemizedScrollViewWillReindex:(id)arg1;
- (unsigned long long)lastPreloadViewIndex;
- (void)loadComponent:(id)arg1;
- (bool)loadedAtleastOneImage;
- (id)mediaViewEvent;
- (unsigned long long)numberOfViewsInItemizedScrollView:(id)arg1;
- (void)preloadAdjacentViewsForIndex:(unsigned long long)arg1;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (bool)requestInteractivityFocusForFullScreenCanvasController:(id)arg1;
- (double)rightContentInset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setExposedGalleryItems:(id)arg1;
- (void)setFullScreenCanvasController:(id)arg1;
- (void)setFullscreenGestureView:(id)arg1;
- (void)setImageResources:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setItemizedScrollView:(id)arg1;
- (void)setLastPreloadViewIndex:(unsigned long long)arg1;
- (void)setLoadedAtleastOneImage:(bool)arg1;
- (void)setMediaViewEvent:(id)arg1;
- (void)setTargetGalleryItem:(id)arg1;
- (void)setVisibleImageViewIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapRegion;
- (void)submitEvents;
- (id)targetGalleryItem;
- (id)textResizerForCaption:(id)arg1;
- (id)textRulesForCaption:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;
- (void)trackExposedGalleryItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionContentFrame;
- (id)transitionContentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitionVisibleFrame;
- (bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)visibleGalleryItemViewForImageIdentifier:(id)arg1;
- (long long)visibleImageViewIndex;
- (void)willSubmitMediaExposureEvent:(id)arg1;
- (double)xOffset;

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