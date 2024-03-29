<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SiriUIKeyboardView.h</title>
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

/PrivateFrameworks/SiriUI.framework/SiriUIKeyboardView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI (1)
 */

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate> {
    SiriUIAudioRoutePickerButton * _audioRoutePickerButton;
    <SiriUIKeyboardViewDelegate> * _delegate;
    SiriUIHelpButton * _helpButton;
    double  _interKeyboardAccessoryViewPadding;
    NSArray * _originalInstalledLanguageIdentifiers;
    SiriUIContentButton * _reportBugButton;
    UITextField * _textField;
    double  _verticalCompensation;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIKeyboardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;

+ (double)_keyboardAccessoryViewHeight;
+ (double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(bool)arg1;
+ (id)_textFieldFont;
+ (double)_textFieldHeight;
+ (double)heightForWidthSizeClass:(bool)arg1;
+ (id)inputAccessoryViewBackgroundColor;

- (void).cxx_destruct;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureAudioRoutePickerForAccessibility;
- (void)_configureReportBugButton;
- (void)_configureReportButtonForAccessibility;
- (id)_createHelpButton:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1;
- (id)_createTextFieldWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultFrame;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id /* block */)arg1;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (bool)_showsReportBugButton;
- (void)_undoTextFieldEdit:(id)arg1;
- (double)_visibleHeightFromNotification:(id)arg1;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputViewStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (void)setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowAudioRoutePicker:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

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
