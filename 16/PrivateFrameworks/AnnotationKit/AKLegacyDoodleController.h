//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAnnotation, AKController, AKShapeDetectionController, AKSmoothPathView, NSMutableArray, NSString;

@interface AKLegacyDoodleController : NSObject
{
    _Bool _preferDoodle;	// 8 = 0x8
    _Bool _coalescesDoodles;	// 9 = 0x9
    _Bool _shapeDetectionEnabled;	// 10 = 0xa
    _Bool _selectNewlyCreatedAnnotations;	// 11 = 0xb
    _Bool _pressureSensitiveDoodleMode;	// 12 = 0xc
    _Bool _ignoreAnnotationAndSelectionKVO;	// 13 = 0xd
    _Bool _isShowingOverlay;	// 14 = 0xe
    _Bool _isWaitingToCoalesceStrokes;	// 15 = 0xf
    AKShapeDetectionController *_shapeDetectionController;	// 16 = 0x10
    AKController *_controller;	// 24 = 0x18
    AKSmoothPathView *_intelligentSketchOverlayView;	// 32 = 0x20
    CDUnknownBlockType _performRecognitionBlock;	// 40 = 0x28
    AKAnnotation *_coalescedAnnotation;	// 48 = 0x30
    NSMutableArray *_recentDoodlesAnnotations;	// 56 = 0x38
    NSMutableArray *_recentDoodlePaths;	// 64 = 0x40
    struct CGRect _recentDrawingBoundsInInputView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000098621
@property _Bool isWaitingToCoalesceStrokes; // @synthesize isWaitingToCoalesceStrokes=_isWaitingToCoalesceStrokes;
@property _Bool isShowingOverlay; // @synthesize isShowingOverlay=_isShowingOverlay;
@property _Bool ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property struct CGRect recentDrawingBoundsInInputView; // @synthesize recentDrawingBoundsInInputView=_recentDrawingBoundsInInputView;
@property(retain) NSMutableArray *recentDoodlePaths; // @synthesize recentDoodlePaths=_recentDoodlePaths;
@property(retain) NSMutableArray *recentDoodlesAnnotations; // @synthesize recentDoodlesAnnotations=_recentDoodlesAnnotations;
@property(retain) AKAnnotation *coalescedAnnotation; // @synthesize coalescedAnnotation=_coalescedAnnotation;
@property(copy, nonatomic) CDUnknownBlockType performRecognitionBlock; // @synthesize performRecognitionBlock=_performRecognitionBlock;
@property(retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView; // @synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property _Bool pressureSensitiveDoodleMode; // @synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode;
@property(nonatomic) _Bool selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property(nonatomic, getter=shapeDetectionEnabled) _Bool shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property(nonatomic) _Bool coalescesDoodles; // @synthesize coalescesDoodles=_coalescesDoodles;
@property(nonatomic) _Bool preferDoodle; // @synthesize preferDoodle=_preferDoodle;
- (void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2;	// IMP=0x0000000000097e42
- (void)_beginOrExtendCoalescingTimer;	// IMP=0x0000000000097dd4
- (void)_coalesceDrawingsCancelled;	// IMP=0x0000000000097d82
- (void)_clearCoalescingState;	// IMP=0x0000000000097cb0
- (void)_coalesceRecentDrawings;	// IMP=0x00000000000975b3
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;	// IMP=0x0000000000097595
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(_Bool)arg2;	// IMP=0x00000000000974b8
- (_Bool)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;	// IMP=0x0000000000097451
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(id)arg1;	// IMP=0x000000000009743e
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000097429
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;	// IMP=0x0000000000097411
- (id)overlayView:(id)arg1;	// IMP=0x00000000000973e1
- (id)createDoodleAnnotationWithPath:(struct CGPath *)arg1 drawingBoundsInView:(struct CGRect)arg2 drawingCenter:(struct CGPoint)arg3 pathIsPrestroked:(_Bool)arg4 shouldGoToPageController:(id *)arg5;	// IMP=0x00000000000970a8
- (void)_addAnnotationImmediatelyFor:(struct CGPath *)arg1 withDrawingCenter:(struct CGPoint)arg2 drawingBoundsInView:(struct CGRect)arg3 pathIsPrestroked:(_Bool)arg4 isSingelDot:(_Bool)arg5 fromInputView:(id)arg6;	// IMP=0x0000000000096da0
- (void)_executeDeferredRecognition;	// IMP=0x0000000000096d04
- (void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(struct CGPath *)arg2 boundsInView:(struct CGRect)arg3 center:(struct CGPoint)arg4 isPrestroked:(_Bool)arg5;	// IMP=0x0000000000096a63
- (void)_inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2 isPrestroked:(_Bool)arg3;	// IMP=0x0000000000096714
- (void)inputView:(id)arg1 didCollectPrestrokedPath:(struct CGPath *)arg2;	// IMP=0x00000000000966fb
- (void)inputView:(id)arg1 didCollectPath:(struct CGPath *)arg2;	// IMP=0x00000000000966e5
- (void)inputViewWillStartDrawing:(id)arg1;	// IMP=0x000000000009655d
- (void)dismissCandidatePicker;	// IMP=0x00000000000964a8
- (_Bool)isShowingCandidatePicker;	// IMP=0x0000000000096450
- (void)updateStrokeAttributes;	// IMP=0x00000000000962f0
- (void)handleDragAction:(id)arg1;	// IMP=0x0000000000096268
- (void)handleTapAction:(id)arg1;	// IMP=0x00000000000961e0
- (void)handleForwardedEvent:(id)arg1;	// IMP=0x0000000000096158
- (struct CGRect)_frameForOurOverlayInHostingView:(id)arg1;	// IMP=0x0000000000095fc3
- (void)updateOverlayBoundsAndBackingScale:(id)arg1;	// IMP=0x0000000000095a69
- (void)toolbarNotification:(id)arg1;	// IMP=0x00000000000959db
- (void)enclosingScrollViewNotification:(id)arg1;	// IMP=0x0000000000095980
- (void)removeOverlay;	// IMP=0x00000000000957cf
- (void)showOverlay;	// IMP=0x0000000000095436
- (void)dealloc;	// IMP=0x0000000000095279
- (id)initWithController:(id)arg1;	// IMP=0x0000000000095050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
