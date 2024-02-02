<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSCLComposePostView.h</title>
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

/PrivateFrameworks/MediaSocial.framework/MSCLComposePostView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial (1)
 */

@interface MSCLComposePostView : UIScrollView <NSLayoutManagerDelegate, UITextViewDelegate> {
    long long  _allowedCharacterCount;
    UIButton * _attachmentButton;
    NSMutableArray * _attachmentViews;
    UILabel * _characterCountLabel;
    <MSCLComposePostViewDataSource> * _dataSource;
    NSArray * _footerViews;
    NSArray * _headerViews;
    long long  _numberOfAttachments;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preCompletionContentOffset;
    NSArray * _scrollableHeaderViews;
    UITapGestureRecognizer * _tapRecognizer;
    UIViewController * _textCompletionViewController;
    MSCLTokenTextView * _textView;
}

@property (nonatomic) long long allowedCharacterCount;
@property (nonatomic, readonly) UIControl *attachmentButton;
@property (nonatomic, copy) NSArray *attachmentViews;
@property (nonatomic) <MSCLComposePostViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *footerViews;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *headerViews;
@property (nonatomic, copy) NSArray *scrollableHeaderViews;
@property (nonatomic) bool showsAttachmentButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *tagForSelectedRange;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (void)_keyboardHideNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_reloadCharacterCountLabel;
- (void)_reloadUnderlineStyling;
- (void)_removeAttachmentButtonAction:(id)arg1;
- (void)_tapRecognizerAction:(id)arg1;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (long long)allowedCharacterCount;
- (id)attachmentButton;
- (id)attachmentViews;
- (bool)becomeFirstResponder;
- (id)dataSource;
- (void)dealloc;
- (id)footerViews;
- (id)headerViews;
- (void)hideTextCompletionViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertTag:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (id)scrollableHeaderViews;
- (void)setAllowedCharacterCount:(long long)arg1;
- (void)setAttachmentViews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setFooterViews:(id)arg1;
- (void)setHeaderViews:(id)arg1;
- (void)setScrollableHeaderViews:(id)arg1;
- (void)setShowsAttachmentButton:(bool)arg1;
- (void)showTextCompletionViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)showsAttachmentButton;
- (id)tagForSelectedRange;
- (id)text;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;

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