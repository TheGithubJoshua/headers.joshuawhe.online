<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKInlineInkPicker.h</title>
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

/PrivateFrameworks/PencilKit.framework/PKInlineInkPicker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit (1)
 */

@interface PKInlineInkPicker : UIControl <PKInkAttributesPickerDelegate, PKInlineColorPickerContentsHiddenDelegate, PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, UIPencilInteractionDelegate, UIPopoverPresentationControllerDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKToolIndicatorDelegate> {
    _PKAllowDrawingWhilePresentingPopoverView * __allowDrawingWhilePresentingPopoverView;
    NSMutableDictionary * __inkForIdentifierDict;
    PKInk * _aggd_initialInkOnPopoverOpen;
    unsigned long long  _attributeSet;
    UIView * _backgroundView;
    UILayoutGuide * _backgroundViewLayoutGuide;
    UIView * _clippingView;
    PKInlineColorPicker * _colorPicker;
    bool  _contentsHidden;
    _PKToolIndicator * _contentsHiddenToolIndicator;
    <PKInlineInkPickerDelegate> * _delegate;
    bool  _forceCompactLayout;
    NSArray * _inkIdentifiers;
    bool  _isUsedOnDarkBackground;
    bool  _pencilGestureSupportEnabled;
    UIPencilInteraction * _pencilInteraction;
    PKInkAttributesPicker * _presentedInkAttributesPicker;
    unsigned long long  _previousDrawingToolIndex;
    unsigned long long  _previousToolIndex;
    unsigned long long  _selectedInkIndex;
    unsigned long long  _selectionState;
    UIView * _separatorView;
    NSObject<OS_dispatch_queue> * _serialViewControllerTransitionQueue;
    NSObject<OS_dispatch_semaphore> * _serialViewControllerTransitionSemaphore;
    bool  _shouldEmboss;
    unsigned long long  _sizeState;
    NSArray * _toolButtonItems;
}

@property (nonatomic, retain) _PKAllowDrawingWhilePresentingPopoverView *_allowDrawingWhilePresentingPopoverView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _extentRect;
@property (nonatomic, retain) NSMutableDictionary *_inkForIdentifierDict;
@property (nonatomic, retain) PKInk *aggd_initialInkOnPopoverOpen;
@property (nonatomic) unsigned long long attributeSet;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UILayoutGuide *backgroundViewLayoutGuide;
@property (nonatomic, retain) UIView *clippingView;
@property (nonatomic, retain) PKInlineColorPicker *colorPicker;
@property (nonatomic) unsigned long long colorSet;
@property (nonatomic) bool contentsHidden;
@property (nonatomic, retain) _PKToolIndicator *contentsHiddenToolIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKInlineInkPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceCompactLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inkIdentifiers;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic) bool pencilGestureSupportEnabled;
@property (nonatomic, retain) UIPencilInteraction *pencilInteraction;
@property (nonatomic, retain) PKInkAttributesPicker *presentedInkAttributesPicker;
@property (nonatomic, readonly) unsigned long long previousDrawingToolIndex;
@property (nonatomic, readonly) unsigned long long previousToolIndex;
@property (nonatomic, copy) UIColor *selectedColor;
@property (nonatomic, copy) PKInk *selectedInk;
@property (nonatomic, copy) NSString *selectedInkIdentifier;
@property (nonatomic, readonly) unsigned long long selectedInkIndex;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialViewControllerTransitionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *serialViewControllerTransitionSemaphore;
@property (nonatomic) bool shouldEmboss;
@property (nonatomic) unsigned long long sizeState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *toolButtonItems;

+ (bool)_axLargerTextSizesEnabled;
+ (id)_defaultCriticallyDampedSpringAnimator;
+ (id)_defaultInkForIdentifier:(id)arg1 attributeSet:(unsigned long long)arg2;
+ (double)_outputForResistanceFunction:(double)arg1 factor:(double)arg2;
+ (id)_sharedPencilUserDefaults;
+ (id)defaultInkForAttributeSet:(unsigned long long)arg1;
+ (id)imageNamed:(id)arg1;
+ (bool)inkIdentifierHasMutableAttributes:(id)arg1;
+ (id)sharedImageNameCache;
+ (double)spacingForToolIndex:(unsigned long long)arg1 sizeState:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_allowDrawingWhilePresentingPopoverView;
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1;
- (id)_allowDrawingWhilePresentingPopoverViewPassthroughArray;
- (void)_axHandleLongPressForLargeTextHUD:(id)arg1;
- (id)_axLabelForToolButton:(id)arg1;
- (id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg1;
- (bool)_colorPickerIsInkPickerContentsHidden:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_colorPickerRectForContentsHiddenColorPickerPresentation:(id)arg1;
- (void)_commonInit;
- (void)_dismissInkAttributesPicker:(id /* block */)arg1;
- (id)_effectiveViewControllerForPopoverPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_extentRect;
- (void)_forceSetAttributeSet:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForNonDrawingToolAtIndex:(long long)arg1;
- (id)_inkForIdentifierDict;
- (id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;
- (id)_inkForTogglingEraserAndPreviousToolOnPencilDoubleTap;
- (id)_inlineColorPickerAllowDrawingPassthroughView:(id)arg1;
- (void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)arg1;
- (void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)arg1;
- (void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)arg1;
- (double)_layoutAlphaForToolIndex:(long long)arg1;
- (bool)_layoutButtonSelectedForToolIndex:(long long)arg1;
- (id)_layoutCalculateUncenteredSubviewFrames;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutCenteredFrameForToolIndex:(long long)arg1 uncenteredFrames:(id)arg2 centeringTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)_layoutSeparatorViewColorEmbossed:(bool)arg1 isUsedOnDarkBackground:(bool)arg2;
- (void)_layoutUpdateSizeAndSelectionState;
- (double)_layoutYOffsetForToolIndex:(long long)arg1;
- (id)_queueForSerialViewControllerTransitionFromColorPicker:(id)arg1;
- (void)_resetUIOnPencilDoubleTapTimerEnded;
- (id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)arg1;
- (void)_setSelectionStateNoLayout:(unsigned long long)arg1;
- (void)_setSizeStateNoLayout:(unsigned long long)arg1;
- (void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)arg1;
- (bool)_shouldEnablePencilGestures;
- (void)_showInkAttributesPickerFromView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 displayMode:(unsigned long long)arg3 shouldHideArrow:(bool)arg4 completion:(id /* block */)arg5;
- (void)_teardownAllowDrawingWhilePresentingPopoverView;
- (id)_toolButtonContainingPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateFrameForAllowDrawingWhilePresentingPopoverView;
- (void)_updateSelectedInkIndex:(unsigned long long)arg1;
- (void)_updateSubviewsWithInk:(id)arg1 animated:(bool)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)aggd_initialInkOnPopoverOpen;
- (unsigned long long)attributeSet;
- (id)backgroundView;
- (id)backgroundViewLayoutGuide;
- (double)cachedToolButtonWidthForSizeState:(unsigned long long)arg1;
- (id)clippingView;
- (id)colorForInkIdentifier:(id)arg1;
- (id)colorPicker;
- (void)colorPickerColorTappedInCompactChooseToolState:(id)arg1;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(bool)arg2;
- (unsigned long long)colorSet;
- (bool)contentsHidden;
- (id)contentsHiddenToolIndicator;
- (id)createToolButtonItemWithInkIdentifier:(id)arg1 shouldEmboss:(bool)arg2;
- (id)delegate;
- (bool)forceCompactLayout;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithEmbossing:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)arg1;
- (id)inkIdentifierForIndex:(unsigned long long)arg1;
- (id)inkIdentifiers;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isDrawingToolIdentifier:(id)arg1;
- (bool)isDrawingToolIndex:(unsigned long long)arg1;
- (bool)isUsedOnDarkBackground;
- (id)lastDrawingToolInk;
- (void)layoutSubviews;
- (id)minimizedImageForInk:(id)arg1 small:(bool)arg2;
- (struct CGSize { double x1; double x2; })minimumSizeForSizeState:(unsigned long long)arg1 selectionState:(unsigned long long)arg2;
- (void)notifyColorSelected:(id)arg1 didChange:(bool)arg2;
- (void)notifyToolSelected:(bool)arg1;
- (double)offsetForToolIndex:(unsigned long long)arg1 pressed:(bool)arg2;
- (bool)pencilGestureSupportEnabled;
- (id)pencilInteraction;
- (void)pencilInteractionDidTap:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)presentedInkAttributesPicker;
- (unsigned long long)previousDrawingToolIndex;
- (unsigned long long)previousToolIndex;
- (void)resetToDrawingToolWithAnimation:(bool)arg1;
- (void)selectColorPickerColor:(id)arg1;
- (id)selectedColor;
- (id)selectedInk;
- (id)selectedInkIdentifier;
- (unsigned long long)selectedInkIndex;
- (unsigned long long)selectionState;
- (unsigned long long)selectionStateForSizeState:(unsigned long long)arg1 previousSelectionState:(unsigned long long)arg2;
- (id)separatorView;
- (id)serialViewControllerTransitionQueue;
- (id)serialViewControllerTransitionSemaphore;
- (void)setAggd_initialInkOnPopoverOpen:(id)arg1;
- (void)setAttributeSet:(unsigned long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setClippingView:(id)arg1;
- (void)setColorPicker:(id)arg1;
- (void)setColorSet:(unsigned long long)arg1;
- (void)setContentsHidden:(bool)arg1;
- (void)setContentsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setContentsHiddenToolIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceCompactLayout:(bool)arg1;
- (void)setInkIdentifiers:(id)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setPencilGestureSupportEnabled:(bool)arg1;
- (void)setPencilInteraction:(id)arg1;
- (void)setPresentedInkAttributesPicker:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColor:(id)arg1 animated:(bool)arg2;
- (void)setSelectedInk:(id)arg1;
- (void)setSelectedInk:(id)arg1 animated:(bool)arg2;
- (void)setSelectedInkIdentifier:(id)arg1;
- (void)setSelectedInkIdentifier:(id)arg1 animated:(bool)arg2;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSerialViewControllerTransitionQueue:(id)arg1;
- (void)setSerialViewControllerTransitionSemaphore:(id)arg1;
- (void)setShouldEmboss:(bool)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (void)setToolButtonItems:(id)arg1;
- (void)set_allowDrawingWhilePresentingPopoverView:(id)arg1;
- (void)set_inkForIdentifierDict:(id)arg1;
- (bool)shouldEmboss;
- (unsigned long long)sizeState;
- (unsigned long long)sizeStateForWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (id)toolButtonItems;
- (void)toolIndicator:(id)arg1 willPresent:(bool)arg2 animated:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toolIndicatorCenteringRect:(id)arg1;
- (void)toolTapped:(id)arg1;
- (void)updateSelectedToolColor:(id)arg1;
- (void)userDidTouchTool:(id)arg1;
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1;

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
