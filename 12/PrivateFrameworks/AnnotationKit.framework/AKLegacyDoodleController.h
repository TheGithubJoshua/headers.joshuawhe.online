<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKLegacyDoodleController.h</title>
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

/PrivateFrameworks/AnnotationKit.framework/AKLegacyDoodleController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit (232.3.30)
 */

@interface AKLegacyDoodleController : NSObject <AKShapeDetectionControllerDelegate, AKSmoothPathViewDelegate> {
    AKAnnotation * _coalescedAnnotation;
    bool  _coalescesDoodles;
    AKController * _controller;
    bool  _ignoreAnnotationAndSelectionKVO;
    AKSmoothPathView * _intelligentSketchOverlayView;
    bool  _isShowingOverlay;
    bool  _isWaitingToCoalesceStrokes;
    id /* block */  _performRecognitionBlock;
    bool  _preferDoodle;
    bool  _pressureSensitiveDoodleMode;
    NSMutableArray * _recentDoodlePaths;
    NSMutableArray * _recentDoodlesAnnotations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _recentDrawingBoundsInInputView;
    bool  _selectNewlyCreatedAnnotations;
    AKShapeDetectionController * _shapeDetectionController;
    bool  _shapeDetectionEnabled;
}

@property (retain) AKAnnotation *coalescedAnnotation;
@property (nonatomic) bool coalescesDoodles;
@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool ignoreAnnotationAndSelectionKVO;
@property (nonatomic, retain) AKSmoothPathView *intelligentSketchOverlayView;
@property bool isShowingOverlay;
@property bool isWaitingToCoalesceStrokes;
@property (nonatomic, copy) id /* block */ performRecognitionBlock;
@property (nonatomic) bool preferDoodle;
@property bool pressureSensitiveDoodleMode;
@property (retain) NSMutableArray *recentDoodlePaths;
@property (retain) NSMutableArray *recentDoodlesAnnotations;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } recentDrawingBoundsInInputView;
@property (nonatomic) bool selectNewlyCreatedAnnotations;
@property (nonatomic, retain) AKShapeDetectionController *shapeDetectionController;
@property (getter=shapeDetectionEnabled, nonatomic) bool shapeDetectionEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAnnotationImmediatelyFor:(struct CGPath { }*)arg1 withDrawingCenter:(struct CGPoint { double x1; double x2; })arg2 drawingBoundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 pathIsPrestroked:(bool)arg4 isSingelDot:(bool)arg5 fromInputView:(id)arg6;
- (void)_beginOrExtendCoalescingTimer;
- (void)_clearCoalescingState;
- (void)_coalesceDrawingsCancelled;
- (void)_coalesceRecentDrawings;
- (void)_executeDeferredRecognition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForOurOverlayInHostingView:(id)arg1;
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2 isPrestroked:(bool)arg3;
- (void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2;
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath { }*)arg2 boundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 center:(struct CGPoint { double x1; double x2; })arg4 isPrestroked:(bool)arg5;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (id)coalescedAnnotation;
- (bool)coalescesDoodles;
- (id)controller;
- (id)createDoodleAnnotationWithPath:(struct CGPath { }*)arg1 drawingBoundsInView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 drawingCenter:(struct CGPoint { double x1; double x2; })arg3 pathIsPrestroked:(bool)arg4 shouldGoToPageController:(id*)arg5;
- (void)dealloc;
- (void)dismissCandidatePicker;
- (void)enclosingScrollViewNotification:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)handleDragAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (bool)ignoreAnnotationAndSelectionKVO;
- (id)initWithController:(id)arg1;
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath { }*)arg2;
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath { }*)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (id)intelligentSketchOverlayView;
- (bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (bool)isShowingCandidatePicker;
- (bool)isShowingOverlay;
- (bool)isWaitingToCoalesceStrokes;
- (id)overlayView:(id)arg1;
- (id /* block */)performRecognitionBlock;
- (bool)preferDoodle;
- (bool)pressureSensitiveDoodleMode;
- (id)recentDoodlePaths;
- (id)recentDoodlesAnnotations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })recentDrawingBoundsInInputView;
- (void)removeOverlay;
- (bool)selectNewlyCreatedAnnotations;
- (void)setCoalescedAnnotation:(id)arg1;
- (void)setCoalescesDoodles:(bool)arg1;
- (void)setController:(id)arg1;
- (void)setIgnoreAnnotationAndSelectionKVO:(bool)arg1;
- (void)setIntelligentSketchOverlayView:(id)arg1;
- (void)setIsShowingOverlay:(bool)arg1;
- (void)setIsWaitingToCoalesceStrokes:(bool)arg1;
- (void)setPerformRecognitionBlock:(id /* block */)arg1;
- (void)setPreferDoodle:(bool)arg1;
- (void)setPressureSensitiveDoodleMode:(bool)arg1;
- (void)setRecentDoodlePaths:(id)arg1;
- (void)setRecentDoodlesAnnotations:(id)arg1;
- (void)setRecentDrawingBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectNewlyCreatedAnnotations:(bool)arg1;
- (void)setShapeDetectionController:(id)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (id)shapeDetectionController;
- (bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(bool)arg2;
- (bool)shapeDetectionEnabled;
- (void)showOverlay;
- (void)toolbarNotification:(id)arg1;
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;
- (void)updateStrokeAttributes;

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
