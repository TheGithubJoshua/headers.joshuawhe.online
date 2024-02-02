<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MUPDFContentViewController.h</title>
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

/PrivateFrameworks/MarkupUI.framework/MUPDFContentViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI (232.3.30)
 */

@interface MUPDFContentViewController : MUContentViewController <MUContentViewControllerProtocol, PDFAKControllerDelegateProtocol, PDFViewDelegatePrivate, _UIViewBoundingPathChangeObserver> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedThumnailViewInsets;
    bool  _constraintsAreHorizontal;
    bool  _didSetup;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _forcesPDFViewTopAlignment;
    unsigned long long  _inkStyle;
    bool  _navigationModeHorizontal;
    MUPDFPageLabelView * _pageLabelView;
    PDFDocument * _pdfDocument;
    PDFView * _pdfView;
    bool  _showsThumbnailView;
    NSArray * _sourceContentReplacedAnnotationMaps;
    PDFThumbnailView * _thumbnailView;
    UIView * _thumbnailViewHolder;
    NSArray * _thumbnailViewHolderConstraints;
    NSLayoutConstraint * _thumbnailViewHolderRevealConstraint;
    bool  _viewIsTransitioningBetweenSizes;
    PDFPage * _viewTransitionPageToCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _viewTransitionPointOnPageToCenter;
    bool  _viewTransitionPreviousAutoscalingState;
    double  _viewTransitionPreviousScale;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } cachedThumnailViewInsets;
@property (nonatomic) bool centersIgnoringContentInsets;
@property bool constraintsAreHorizontal;
@property (nonatomic, readonly) UIScrollView *contentViewScrollView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultToolTag;
@property (readonly, copy) NSString *description;
@property bool didSetup;
@property (nonatomic, readonly) NSString *documentUnlockedWithPassword;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool forcesPDFViewTopAlignment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic) bool navigationModeHorizontal;
@property (readonly) unsigned long long pageCount;
@property (retain) MUPDFPageLabelView *pageLabelView;
@property (readonly) PDFDocument *pdfDocument;
@property (retain) PDFView *pdfView;
@property (nonatomic) bool showsThumbnailView;
@property (retain) NSArray *sourceContentReplacedAnnotationMaps;
@property (readonly) Class superclass;
@property (retain) PDFThumbnailView *thumbnailView;
@property (retain) UIView *thumbnailViewHolder;
@property (retain) NSArray *thumbnailViewHolderConstraints;
@property (retain) NSLayoutConstraint *thumbnailViewHolderRevealConstraint;
@property bool viewIsTransitioningBetweenSizes;
@property PDFPage *viewTransitionPageToCenter;
@property struct CGPoint { double x1; double x2; } viewTransitionPointOnPageToCenter;
@property bool viewTransitionPreviousAutoscalingState;
@property double viewTransitionPreviousScale;

- (void).cxx_destruct;
- (bool)PDFView:(id)arg1 shouldHandleLink:(id)arg2;
- (void)_boundingPathMayHaveChangedForView:(id)arg1 relativeToBoundsOriginOnly:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_compensatingAffineTransformForPage:(id)arg1;
- (void)_createPDFView;
- (struct CGSize { double x1; double x2; })_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* block */)arg1;
- (void)_prepareToRotate;
- (void)_recoverFromRotation;
- (void)_teardownPDFViewIfNecessary;
- (bool)_updateCachedThumbnailViewInsetsDidChangeRight;
- (void)_updateMinMaxZoomFactor;
- (void)_updatePDFViewDisplayMode;
- (void)_updatePageNumberOverlayToPage:(unsigned long long)arg1 animate:(bool)arg2;
- (void)_updateThumbnailViewAppearance;
- (void)_updateThumbnailViewHolderConstraints;
- (void)_userChangedScrollViewMagnificationNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cachedThumnailViewInsets;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)constraintsAreHorizontal;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentSnapshot;
- (id)contentViewScrollView;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerWillDismissSignatureCaptureView:(id)arg1;
- (void)controllerWillDismissSignatureManagerView:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (void)controllerWillShowSignatureManagerView:(id)arg1;
- (void)dealloc;
- (long long)defaultToolTag;
- (bool)didSetup;
- (id)documentUnlockedWithPassword;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)editCheckpointReachedForAnnotationController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;
- (bool)forcesPDFViewTopAlignment;
- (void)highlight:(id)arg1;
- (struct CGSize { double x1; double x2; })idealContentSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1 windowDecorationSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithPDFDocument:(id)arg1 delegate:(id)arg2;
- (unsigned long long)inkStyle;
- (void)loadContentWithCompletionBlock:(id /* block */)arg1;
- (id)menuItems:(id)arg1 forPage:(id)arg2;
- (bool)navigationModeHorizontal;
- (unsigned long long)pageCount;
- (id)pageLabelView;
- (id)pdfDocument;
- (void)pdfDocumentDidUnlock:(id)arg1;
- (id)pdfView;
- (void)pdfViewDidChangeCurrentPage:(id)arg1;
- (void)penStrokeCompletedForAnnotationController:(id)arg1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)arg1;
- (void)positionSketchOverlay:(id)arg1 forAnnotationController:(id)arg2;
- (void)setCachedThumnailViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setConstraintsAreHorizontal:(bool)arg1;
- (void)setDidSetup:(bool)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setNavigationModeHorizontal:(bool)arg1;
- (void)setPageLabelView:(id)arg1;
- (void)setPdfView:(id)arg1;
- (void)setShowsThumbnailView:(bool)arg1;
- (void)setSourceContentReplacedAnnotationMaps:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setThumbnailViewHolder:(id)arg1;
- (void)setThumbnailViewHolderConstraints:(id)arg1;
- (void)setThumbnailViewHolderRevealConstraint:(id)arg1;
- (void)setViewIsTransitioningBetweenSizes:(bool)arg1;
- (void)setViewTransitionPageToCenter:(id)arg1;
- (void)setViewTransitionPointOnPageToCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setViewTransitionPreviousAutoscalingState:(bool)arg1;
- (void)setViewTransitionPreviousScale:(double)arg1;
- (void)setup;
- (bool)shouldShowAnnotationsOfType:(id)arg1;
- (bool)showsThumbnailView;
- (id)sourceContentReplacedAnnotationMaps;
- (void)teardown;
- (id)thumbnailView;
- (id)thumbnailViewHolder;
- (id)thumbnailViewHolderConstraints;
- (id)thumbnailViewHolderRevealConstraint;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsTransitioningBetweenSizes;
- (id)viewTransitionPageToCenter;
- (struct CGPoint { double x1; double x2; })viewTransitionPointOnPageToCenter;
- (bool)viewTransitionPreviousAutoscalingState;
- (double)viewTransitionPreviousScale;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleContentRectInCoordinateSpace:(id)arg1;

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