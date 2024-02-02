<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NoteContentLayer.h</title>
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

/PrivateFrameworks/NotesUI.framework/NoteContentLayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI (1349.30)
 */

@interface NoteContentLayer : UIView <NoteTextViewActionDelegate, NoteTextViewLayoutDelegate, UITextViewDelegate, UIWebDraggingDelegate> {
    NSLayoutConstraint * _bottomMarginConstraint;
    bool  _containsCJK;
    NSLayoutConstraint * _dateHorizontalContraint;
    NoteDateLabel * _dateLabel;
    NSLayoutConstraint * _dateTopMarginConstraint;
    <NoteContentLayerDelegate> * _delegate;
    UIView * _horizontalLayoutGuide;
    NSLayoutConstraint * _leftConstraint;
    NSString * _noteIdentifierForCurrentlyDraggedItems;
    NSLayoutConstraint * _rightConstraint;
    NotesScrollView * _scrollView;
    NSLayoutConstraint * _textTopMarginConstraint;
    NoteTextView * _textView;
    bool  _tracksMaximumContentLength;
    bool  _updatedTitleRange;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomMarginConstraint;
@property (nonatomic) bool containsCJK;
@property (nonatomic, readonly) bool contentContainsValuableContent;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) UIScrollView *contentScrollView;
@property (nonatomic, readonly) _UICompatibilityTextView *contentTextView;
@property (nonatomic, retain) NSLayoutConstraint *dateHorizontalContraint;
@property (nonatomic, retain) NoteDateLabel *dateLabel;
@property (nonatomic, retain) NSLayoutConstraint *dateTopMarginConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NoteContentLayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic) bool editable;
@property (nonatomic, readonly) bool hasFullHeight;
@property (nonatomic, readonly) bool hasFullWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *horizontalLayoutGuide;
@property (nonatomic, readonly) DOMHTMLDocument *htmlDocument;
@property (nonatomic, retain) NSLayoutConstraint *leftConstraint;
@property (nonatomic, retain) NSString *noteIdentifierForCurrentlyDraggedItems;
@property (nonatomic, retain) NSLayoutConstraint *rightConstraint;
@property (nonatomic, retain) NotesScrollView *scrollView;
@property (nonatomic, readonly) NSArray *subWebResources;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *textTopMarginConstraint;
@property (nonatomic, retain) NoteTextView *textView;
@property (nonatomic) <NotesTextureScrolling> *textureScrollingDelegate;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) bool tracksMaximumContentLength;
@property (nonatomic) bool updatedTitleRange;

- (void).cxx_destruct;
- (id)_webView:(id)arg1 adjustedItemProviders:(id)arg2;
- (bool)_webView:(id)arg1 allowsSelectingContentAfterDropForSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDragSession:(id)arg2;
- (long long)_webView:(id)arg1 dataOwnerForDropSession:(id)arg2;
- (void)_webView:(id)arg1 dropInteraction:(id)arg2 concludeDrop:(id)arg3;
- (bool)_webView:(id)arg1 performDropWithItemProviders:(id)arg2;
- (void)_webView:(id)arg1 sessionDidEnter:(id)arg2;
- (void)_webView:(id)arg1 sessionDidExit:(id)arg2;
- (id)_webView:(id)arg1 willUpdateDropProposalToProposal:(id)arg2 forSession:(id)arg3;
- (void)addSubWebResourcesObject:(id)arg1;
- (bool)allowsAttachmentsInTextView:(id)arg1;
- (bool)becomeFirstResponder;
- (id)bottomMarginConstraint;
- (bool)canBecomeFirstResponder;
- (bool)canInsertImagesInTextView:(id)arg1;
- (bool)canResignFirstResponder;
- (bool)containsCJK;
- (id)contentAsPasteboardItems;
- (id)contentAsPlainText:(bool)arg1;
- (bool)contentContainsValuableContent;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)contentScrollView;
- (id)contentTextView;
- (id)dateHorizontalContraint;
- (id)dateLabel;
- (id)dateTopMarginConstraint;
- (void)dealloc;
- (id)delegate;
- (void)didChangeFullSizeClass;
- (void)flashScrollIndicators;
- (void)forcedSetContainsCJK:(bool)arg1;
- (bool)hasFullHeight;
- (bool)hasFullWidth;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)horizontalLayoutGuide;
- (id)htmlDocument;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertImageInTextView:(id)arg1;
- (void)invalidateSizeRelatedConstraints;
- (bool)isEditable;
- (bool)isFirstResponder;
- (bool)isNoteTextViewVisible:(id)arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (id)leftConstraint;
- (id)noteIdentifierForCurrentlyDraggedItems;
- (bool)noteTextView:(id)arg1 acceptContentsFromPasteboard:(id)arg2;
- (bool)noteTextView:(id)arg1 canHandleLongPressOnElement:(id)arg2;
- (void)noteTextView:(id)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)noteTextView:(id)arg1 handleLongPressOnElement:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)readerDelegateInTextView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForDOMNode:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection;
- (void)reloadInterface;
- (void)replaceSelectionWithNode:(id)arg1;
- (bool)resignFirstResponder;
- (id)rightConstraint;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedDOMRange;
- (void)setBottomMarginConstraint:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainsCJK:(bool)arg1;
- (void)setContent:(id)arg1 isPlainText:(bool)arg2 isCJK:(bool)arg3;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDateHorizontalContraint:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDateTopMarginConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHorizontalLayoutGuide:(id)arg1;
- (void)setLeftConstraint:(id)arg1;
- (void)setNoteIdentifierForCurrentlyDraggedItems:(id)arg1;
- (void)setNotesWebPreferencesOnWebView:(id)arg1;
- (void)setRightConstraint:(id)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (void)setSelectionToStart;
- (void)setTextTopMarginConstraint:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setTextureScrollingDelegate:(id)arg1;
- (void)setTimestampDate:(id)arg1;
- (void)setTracksMaximumContentLength:(bool)arg1;
- (void)setUpdatedTitleRange:(bool)arg1;
- (void)setupDateHorizontalConstraint;
- (id)subWebResources;
- (id)textTopMarginConstraint;
- (id)textView;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (id)textureScrollingDelegate;
- (id)title;
- (bool)tracksMaximumContentLength;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateDateLabel;
- (void)updateHorizontalConstraints;
- (void)updateMarginConstraints;
- (bool)updatedTitleRange;
- (id)viewPrintFormatter;
- (id)webArchive;
- (void)webViewDidChangeNotification:(id)arg1;

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