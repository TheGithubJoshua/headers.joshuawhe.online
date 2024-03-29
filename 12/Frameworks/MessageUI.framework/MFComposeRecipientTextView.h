<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MFComposeRecipientTextView.h</title>
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

/Frameworks/MessageUI.framework/MFComposeRecipientTextView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI (3445.120.0.1.2)
 */

@interface MFComposeRecipientTextView : MFComposeHeaderView <MFComposeRecipientAtomDelegate, MFRecipientDraggingDelegate, NSLayoutManagerDelegate, UITextViewDelegate> {
    UIButton * _addButton;
    UIView * _atomContainerView;
    NSMutableDictionary * _atomLayoutOptionsByRecipient;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    long long  _atomViewAnimationDepth;
    NSMutableArray * _atomViews;
    UIFont * _baseFont;
    NSTimer * _collapsableUpdateTimer;
    bool  _collapsedStateInitialized;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentTextRect;
    bool  _didIgnoreFirstResponderResign;
    MFDragSource * _dragSource;
    MFDropTarget * _dropTarget;
    bool  _editable;
    bool  _expanded;
    int  _hideLastAtomComma;
    UIColor * _inactiveTextColor;
    UITextView * _inactiveTextView;
    bool  _indicatesUnsafeRecipientsWhenCollapsed;
    bool  _isTextFieldCollapsed;
    long long  _maxRecipients;
    bool  _notifyDelegateOfSizeChange;
    bool  _parentIsClosing;
    _MFAtomTextAttachment * _placeholderAttachment;
    NSArray * _properties;
    NSMutableArray * _recipientsBeingRemoved;
    bool  _separatorHidden;
    bool  _showsAddButtonWhenExpanded;
    _MFAtomTextView * _textView;
    bool  _textViewExclusionPathsAreValid;
    UIColor * _typingTextColor;
    NSUndoManager * _undoManager;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, copy) NSArray *addresses;
@property (nonatomic, readonly) UIView *atomContainerView;
@property (nonatomic, retain) UIFont *baseFont;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFComposeRecipientTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didIgnoreFirstResponderResign;
@property (nonatomic) bool editable;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) int hideLastAtomComma;
@property (nonatomic, retain) UIColor *inactiveTextColor;
@property (nonatomic) bool indicatesUnsafeRecipientsWhenCollapsed;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, readonly) unsigned long long numberOfRowsOfTextInField;
@property (nonatomic, readonly) double offsetForRowWithTextField;
@property (nonatomic, retain) _MFAtomTextAttachment *placeholderAttachment;
@property (nonatomic, copy) NSArray *recipients;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (nonatomic) bool showsAddButtonWhenExpanded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, retain) UIColor *typingTextColor;
@property (nonatomic, readonly, copy) NSArray *uncommentedAddresses;

+ (id)defaultFont;

- (id)_accessibilityToString;
- (void)_addAddressAtomSubview:(id)arg1;
- (void)_addButtonTapped:(id)arg1;
- (void)_addRecord:(void*)arg1 identifier:(int)arg2;
- (id)_atomAttachmentForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (id)_atomViewAtCharacterIndex:(unsigned long long)arg1;
- (id)_baseAttributes;
- (void)_beginAtomViewAnimations;
- (bool)_canAddAdditionalAtoms;
- (bool)_delegateRespondsToSizeChange;
- (void)_didRemoveRecipient:(id)arg1;
- (void)_ensureAddButton;
- (void)_ensureInactiveTextView;
- (bool)_hasUnsafeRecipients;
- (void)_insertAtomAttachment:(id)arg1 andReplaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_insertAtomAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (void)_invalidateAtomPresentationOptionsCache;
- (void)_invalidateTextContainerExclusionPaths;
- (bool)_isAddButtonVisible;
- (bool)_isTextViewCollapsed;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_notifyDelegateOfNewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_notifyDelegateOfSizeChange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_placeholderAttachmentRange;
- (id)_placeholderAttachmentWithStaticWidth;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForComposeRecipientAtom:(id)arg1;
- (void)_recipientsWereAdded:(id)arg1;
- (void)_recomputeTextContainerExclusionPaths;
- (void)_removeAddressAtomSubview:(id)arg1;
- (void)_removeAllRecipients;
- (void)_resetSelectionState;
- (void)_setAddButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setTextViewIsCollapsed:(bool)arg1 animated:(bool)arg2;
- (void)_setValue:(id)arg1 forAtomLayoutOption:(id)arg2 withRecipient:(id)arg3;
- (bool)_shouldAnimateAtomViewChanges;
- (bool)_shouldEmbedLabelInTextView;
- (void)_tapGestureRecognized:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(bool)arg1;
- (bool)_textViewContainsAtomizedRecipients;
- (void)_updateAddButtonVisibility;
- (void)_updateInactiveTextView;
- (bool)_useRightToLeftLayout;
- (id)_userEnteredTextWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)_valueForAtomLayoutOption:(id)arg1 withRecipient:(id)arg2;
- (void)addAddress:(id)arg1;
- (id)addButton;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(bool)arg3;
- (void)addRecipient:(id)arg1 index:(unsigned long long)arg2 animate:(bool)arg3 notify:(bool)arg4;
- (void)addRecipient:(id)arg1 notify:(bool)arg2;
- (void)addRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)addresses;
- (id)atomContainerView;
- (void)atomTextView:(id)arg1 didChangeWritingDirection:(long long)arg2;
- (void)atomTextViewDidBecomeFirstResponder:(id)arg1;
- (void)atomTextViewDidResignFirstResponder:(id)arg1;
- (id)atomViewForRecipient:(id)arg1;
- (id)atomViewsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)baseFont;
- (bool)becomeFirstResponder;
- (void)clearText;
- (void)composeRecipientAtomSelectNext:(id)arg1;
- (void)composeRecipientAtomSelectPrevious:(id)arg1;
- (void)composeRecipientAtomShowPersonCard:(id)arg1;
- (bool)containsAddress:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deselectComposeRecipientAtom:(id)arg1;
- (bool)didIgnoreFirstResponderResign;
- (void)dragEnteredAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)dragPreviewForDraggedItem:(id)arg1;
- (void)dropItems:(id)arg1;
- (bool)editable;
- (bool)expanded;
- (bool)finishEnteringRecipient;
- (bool)hasContent;
- (int)hideLastAtomComma;
- (id)inactiveTextColor;
- (unsigned long long)indexOfRecipientForInsertionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)indicatesUnsafeRecipientsWhenCollapsed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dragDropDelegate:(id)arg2;
- (void)invalidateAtomPresentationOptions;
- (void)invalidateAtomPresentationOptionsForRecipient:(id)arg1;
- (bool)isFirstResponder;
- (bool)isSeparatorHidden;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (long long)maxRecipients;
- (unsigned long long)numberOfRowsOfTextInField;
- (double)offsetForRowWithTextField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)placeholderAttachment;
- (id)recipients;
- (void)reflow;
- (void)refreshPreferredContentSize;
- (void)removeRecipient:(id)arg1;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)selectedAtoms;
- (void)setAddresses:(id)arg1;
- (void)setBaseFont:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setEditable:(bool)arg1 animated:(bool)arg2;
- (void)setExpanded:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHideLastAtomComma:(int)arg1;
- (void)setInactiveTextColor:(id)arg1;
- (void)setIndicatesUnsafeRecipientsWhenCollapsed:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(long long)arg1;
- (void)setPlaceholderAttachment:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setShowsAddButtonWhenExpanded:(bool)arg1;
- (void)setTypingTextColor:(id)arg1;
- (bool)showsAddButtonWhenExpanded;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (double)textFieldOffsetForNumberOfRowsToScroll:(unsigned long long)arg1 numberOfRowsAboveField:(long long)arg2;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)typingTextColor;
- (id)uncommentedAddresses;
- (id)undoManager;

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
