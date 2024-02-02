<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIActionSheet.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIActionSheet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {
    long long  _actionSheetStyle;
    NSMutableArray * _actions;
    UIAlertController * _alertController;
    bool  _alertControllerShouldDismiss;
    long long  _cancelIndex;
    id  _context;
    <UIActionSheetDelegate> * _delegate;
    long long  _destructiveButtonIndex;
    bool  _dismissingAlertController;
    long long  _firstOtherButtonIndex;
    bool  _handlingAlertActionShouldDismiss;
    bool  _hasPreparedAlertActions;
    bool  _isPresented;
    _UIAlertControllerShimPresenter * _presenter;
    UIActionSheet * _retainedSelf;
}

@property (nonatomic) long long actionSheetStyle;
@property (nonatomic) long long cancelButtonIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIActionSheetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destructiveButtonIndex;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfButtons;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) bool visible;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_isAlertControllerShimClass;
+ (Class)_popoverControllerClass;

- (void).cxx_destruct;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)_alertController;
- (id)_attributedTitleString;
- (id)_buttonAtIndex:(long long)arg1;
- (id)_contentView;
- (void)_didPresent;
- (void)_dismissForTappedIndex:(long long)arg1;
- (id)_indexesOfSelectedButtons;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)_prepareAlertActions;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (id)_relinquishPopoverController;
- (void)_setAttributedTitleString:(id)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (void)_setIsPresented:(bool)arg1;
- (void)_showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4;
- (id)_titleLabel;
- (void)_toggleButtonSelectionAtIndex:(unsigned long long)arg1;
- (long long)actionSheetStyle;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)bodyText;
- (id)buttonAtIndex:(long long)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (long long)destructiveButtonIndex;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (bool)isVisible;
- (id)message;
- (long long)numberOfButtons;
- (int)numberOfLinesInTitle;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned long long)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(long long)arg4 animated:(bool)arg5;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(bool)arg6;
- (void)presentSheetInContentView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)setActionSheetStyle:(long long)arg1;
- (void)setBodyText:(id)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButtonIndex:(long long)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(bool)arg1;
- (void)setInPopover:(bool)arg1;
- (void)setIndexOfSelectedButton:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)setUseThreeColumnsButtonsLayout:(bool)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
- (void)showInView:(id)arg1;
- (id)subtitle;
- (id)title;
- (bool)useThreeColumnsButtonsLayout;

// Image: /usr/lib/swift/libswiftUIKit.dylib

- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4;

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