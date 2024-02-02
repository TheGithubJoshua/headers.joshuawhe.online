<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NoteTextView.h</title>
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

/PrivateFrameworks/NotesUI.framework/NoteTextView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI (1349.30)
 */

@interface NoteTextView : _UICompatibilityTextView <UIGestureRecognizerDelegate> {
    <NoteTextViewActionDelegate> * _actionDelegate;
    NSLayoutConstraint * _contentSizeHeightConstraint;
    NSLayoutConstraint * _contentSizeWidthConstraint;
    <NoteTextViewLayoutDelegate> * _layoutDelegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
}

@property (nonatomic) <NoteTextViewActionDelegate> *actionDelegate;
@property (nonatomic, retain) NSLayoutConstraint *contentSizeHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentSizeWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NoteTextViewLayoutDelegate> *layoutDelegate;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessibilitySpeakSelectionAssociatedScrollView;
- (id)_contentAsPasteboardItemsForWebArchive:(id)arg1 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_enclosingScrollerIncludingSelf;
- (bool)_forwardsToParentScroller;
- (void)_showTextStyleOptions:(id)arg1;
- (id)actionDelegate;
- (void)addGestureRecognizer:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentAsPasteboardItems;
- (id)contentSizeHeightConstraint;
- (id)contentSizeWidthConstraint;
- (void)copy:(id)arg1;
- (void)dealloc;
- (void)decreaseSize:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (id)htmlDocument;
- (void)increaseSize:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 font:(id)arg2;
- (void)insertImage:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)layoutDelegate;
- (id)longPressGestureRecognizer;
- (void)menuControllerWillHideNotification:(id)arg1;
- (id)nodeAtPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (void)paste:(id)arg1;
- (id)selectedContentAsPasteboardItems;
- (id)selectedDOMRange;
- (void)setActionDelegate:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentSizeHeightConstraint:(id)arg1;
- (void)setContentSizeWidthConstraint:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setGestureRecognizersPriorities;
- (void)setLayoutDelegate:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)strikethrough:(id)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)updateMenuController;
- (id)webArchive;

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