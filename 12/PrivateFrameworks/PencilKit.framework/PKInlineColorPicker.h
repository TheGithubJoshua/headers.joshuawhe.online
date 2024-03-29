<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKInlineColorPicker.h</title>
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

/PrivateFrameworks/PencilKit.framework/PKInlineColorPicker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit (1)
 */

@interface PKInlineColorPicker : UIView <PKColorPickerDelegatePrivate, UIPopoverPresentationControllerDelegate, UIScrollViewDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate> {
    <_PKInlineColorPickerAllowDrawingWithPopoverDelegate> * __allowDrawingWithPopoverDelegate;
    <PKInlineColorPickerContentsHiddenDelegate> * __contentsHiddenDelegate;
    UIColor * __pickerColor;
    long long  _aggd_colorsChangedCount;
    UIColor * _aggd_initialColorOnPopoverOpen;
    NSArray * _buttonItems;
    unsigned long long  _colorSet;
    NSArray * _colors;
    <PKInlineColorPickerDelegate> * _delegate;
    bool  _didSelectColorUsingSpringLoadedSelection;
    bool  _isUsedOnDarkBackground;
    UIView * _leftOverflowView;
    PKColorPicker * _presentedColorPicker;
    UIView * _rightOverflowView;
    UIScrollView * _scrollView;
    double  _selectedColorAlpha;
    UIColor * _selectedColorBeforeSpringLoadedSelection;
    unsigned long long  _selectedColorIndex;
    unsigned long long  _selectionState;
    <PKInlineColorPickerSerialViewControllerTransitionDelegate> * _serialViewControllerTransitionDelegate;
    bool  _shouldEmboss;
    unsigned long long  _sizeState;
}

@property (nonatomic) <_PKInlineColorPickerAllowDrawingWithPopoverDelegate> *_allowDrawingWithPopoverDelegate;
@property (nonatomic) <PKInlineColorPickerContentsHiddenDelegate> *_contentsHiddenDelegate;
@property (nonatomic, retain) UIColor *_pickerColor;
@property (nonatomic) long long aggd_colorsChangedCount;
@property (nonatomic, retain) UIColor *aggd_initialColorOnPopoverOpen;
@property (nonatomic, retain) NSArray *buttonItems;
@property (nonatomic) unsigned long long colorSet;
@property (nonatomic, retain) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKInlineColorPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSelectColorUsingSpringLoadedSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) UIView *leftOverflowView;
@property (nonatomic, retain) PKColorPicker *presentedColorPicker;
@property (nonatomic, retain) UIView *rightOverflowView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic) double selectedColorAlpha;
@property (nonatomic, retain) UIColor *selectedColorBeforeSpringLoadedSelection;
@property (nonatomic) unsigned long long selectedColorIndex;
@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) <PKInlineColorPickerSerialViewControllerTransitionDelegate> *serialViewControllerTransitionDelegate;
@property (nonatomic) bool shouldEmboss;
@property (nonatomic) unsigned long long sizeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1;
- (id)_allowDrawingWithPopoverDelegate;
- (void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg1;
- (id)_axLabelForColorButton:(id)arg1;
- (void)_colorPickerUserDidTouchUpInside:(id)arg1;
- (void)_colorPickerWillDismiss:(id)arg1;
- (void)_commonInit;
- (id)_contentsHiddenDelegate;
- (void)_dismissColorPickerPopover:(bool)arg1;
- (id)_effectiveBarButtonItemForPopoverPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveRectForPopoverPresentation;
- (id)_effectiveViewControllerForPopoverPresentation;
- (void)_forceSetColorSet:(unsigned long long)arg1;
- (bool)_isInkPickerContentsHidden;
- (id)_pickerColor;
- (void)_presentColorPickerPopover:(bool)arg1;
- (id)_representableColorForColor:(id)arg1;
- (void)_selectColorWithButton:(id)arg1;
- (void)_toggleColorPickerPopoverPresentation:(bool)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)aggd_colorsChangedCount;
- (id)aggd_initialColorOnPopoverOpen;
- (id)buttonItems;
- (void)colorButtonTapHandler:(id)arg1;
- (id)colorForIndex:(long long)arg1;
- (unsigned long long)colorIndexMatchingColor:(id)arg1;
- (long long)colorPickerButtonIndex;
- (void)colorPickerDidChangeSelectedColor:(id)arg1;
- (unsigned long long)colorSet;
- (id)colors;
- (id)colorsForColorSet:(unsigned long long)arg1;
- (id)createColorButtonItemWithColor:(id)arg1 shouldEmboss:(bool)arg2;
- (id)createColorPickerButtonShouldEmboss:(bool)arg1;
- (long long)defaultColorIndex;
- (id)delegate;
- (bool)didSelectColorUsingSpringLoadedSelection;
- (id)initWithEmbossing:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (id)leftOverflowView;
- (void)notifyDelegateDidSelectColor:(bool)arg1;
- (void)notifyDelegateDidSelectColorInCompactChooseToolState;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)presentedColorPicker;
- (id)rightOverflowView;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedColor;
- (double)selectedColorAlpha;
- (id)selectedColorBeforeSpringLoadedSelection;
- (unsigned long long)selectedColorIndex;
- (unsigned long long)selectionState;
- (id)serialViewControllerTransitionDelegate;
- (void)setAggd_colorsChangedCount:(long long)arg1;
- (void)setAggd_initialColorOnPopoverOpen:(id)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setColorSet:(unsigned long long)arg1;
- (void)setColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSelectColorUsingSpringLoadedSelection:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setLeftOverflowView:(id)arg1;
- (void)setPresentedColorPicker:(id)arg1;
- (void)setRightOverflowView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedColor:(id)arg1;
- (void)setSelectedColorAlpha:(double)arg1;
- (void)setSelectedColorBeforeSpringLoadedSelection:(id)arg1;
- (void)setSelectedColorIndex:(unsigned long long)arg1;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setSerialViewControllerTransitionDelegate:(id)arg1;
- (void)setShouldEmboss:(bool)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (void)set_allowDrawingWithPopoverDelegate:(id)arg1;
- (void)set_contentsHiddenDelegate:(id)arg1;
- (void)set_pickerColor:(id)arg1;
- (bool)shouldEmboss;
- (void)showOverflowViewsIfNeeded;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (void)springLoadingGestureHandler:(id)arg1;

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
