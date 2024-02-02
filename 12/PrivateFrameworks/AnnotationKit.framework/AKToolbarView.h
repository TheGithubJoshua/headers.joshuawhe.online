<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKToolbarView.h</title>
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

/PrivateFrameworks/AnnotationKit.framework/AKToolbarView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit (232.3.30)
 */

@interface AKToolbarView : UIView <AKAttributePickerViewControllerDelegate, AKSignatureCreationControllerDelegate, AKSignaturesViewControllerDelegate, AKToolsListViewControllerDelegate, PKInlineColorPickerDelegate, PKInlineInkPickerDelegate, UIPopoverPresentationControllerDelegate> {
    bool  _alwaysShowUndoButton;
    AKController * _annotationController;
    AKAttributePickerViewController * _attributePickerViewController;
    UIBarButtonItem * _attributesAddShapeFixedSpace;
    UIBarButtonItem * _attributesPickerButton;
    AKToolbarBackgroundView * _backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _cachedSafeAreaInsets;
    NSLayoutConstraint * _colorPickerBottomConstraint;
    NSLayoutConstraint * _colorPickerWidthConstraint;
    PKInlineColorPicker * _compactColorPicker;
    bool  _contentsHidden;
    UIBarButtonItem * _currentColorButton;
    bool  _expandCompactColorPicker;
    NSLayoutConstraint * _heightConstraint;
    PKInlineInkPicker * _pencilTools;
    NSLayoutConstraint * _pencilToolsBottomConstraint;
    NSLayoutConstraint * _pencilToolsWidthConstraint;
    UIBarButtonItem * _redoButton;
    UIBarButtonItem * _shapesPickerButton;
    UIBarButtonItem * _shareButton;
    bool  _shareButtonHidden;
    bool  _shouldUseCachedSafeAreaInsets;
    bool  _showAttributePicker;
    UIAlertController * _signaturesAlertController;
    AKSignatureCreationViewController_iOS * _signaturesCreationController;
    AKSignaturesViewController_iOS * _signaturesSheetViewController;
    AKTextAttributesViewController * _textAttributesViewController;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarBottomConstraint;
    AKToolsListViewController * _toolsListViewController;
    bool  _translucent;
    UIAlertController * _undoAlertController;
    UIBarButtonItem * _undoButton;
    bool  _undoRedoButtonsHidden;
    UIBarButtonItem * _undoRedoFixedSpace;
}

@property (nonatomic) bool alwaysShowUndoButton;
@property (nonatomic) AKController *annotationController;
@property (nonatomic) bool contentsHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL shareButtonAction;
@property (getter=isShareButtonHidden, nonatomic) bool shareButtonHidden;
@property (nonatomic) id shareButtonTarget;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool undoRedoButtonsHidden;

+ (id)redoButtonImage;
+ (id)redoButtonImageWithStyle:(unsigned long long)arg1;
+ (id)undoButtonImage;
+ (id)undoButtonImageWithStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_annotationSelectionNotification:(id)arg1;
- (void)_cleanupAfterUndoAlert;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_inkPicker:(id)arg1 didPickColor:(id)arg2;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2;
- (void)_redo:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsWithCachingIfNeeded;
- (void)_saveCachedSafeAreaInsets;
- (void)_setPopoverPresentationSource:(id)arg1 fromSender:(id)arg2;
- (void)_shouldUseCachedSafeAreaInsets:(bool)arg1;
- (void)_showColorPicker:(id)arg1;
- (void)_showMarkupToolsPopover:(id)arg1;
- (void)_showShapeAttributes:(id)arg1;
- (void)_showShapeAttributesPopover:(id)arg1;
- (void)_showShapesPicker:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)_showTextAttributes:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showUndoAlertPopover:(id)arg1;
- (void)_undo:(id)arg1;
- (void)_undoAll:(id)arg1;
- (void)_undoLongPress:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (bool)alwaysShowUndoButton;
- (id)annotationController;
- (void)attributePicker:(id)arg1 didSelectToolWithTag:(long long)arg2 attributeTag:(long long)arg3;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(bool)arg2;
- (bool)contentsHidden;
- (id)createUndoViewController;
- (void)dealloc;
- (void)dismissPresentedPopovers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inkPicker;
- (void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
- (void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
- (bool)inlineInkPickerShouldChangeToolColorForSelectedColor:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPresentingPopover;
- (bool)isPresentingPopovers;
- (bool)isShareButtonHidden;
- (bool)isTranslucent;
- (unsigned long long)layoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (id)popoverPresentingController;
- (id)presentedViewController;
- (void)resetToLastDrawingTool;
- (void)revalidateItems;
- (id)selectedAnnotations;
- (void)setAlwaysShowUndoButton:(bool)arg1;
- (void)setAnnotationController:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setContentsHidden:(bool)arg1;
- (void)setContentsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setOpaque:(bool)arg1;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setShareButtonAction:(SEL)arg1;
- (void)setShareButtonHidden:(bool)arg1;
- (void)setShareButtonTarget:(id)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUndoRedoButtonsHidden:(bool)arg1;
- (SEL)shareButtonAction;
- (id)shareButtonTarget;
- (bool)shouldUseCompactHeight;
- (bool)shouldUseCompactWidth;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)toolsList:(id)arg1 didSelectToolWithTag:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)undoRedoButtonsHidden;
- (void)upateAttributesPickerButtonWithCurrentSelection:(id)arg1;
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1;
- (id)viewControllerForPopoverPresentationFromInlineInkPicker:(id)arg1;

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