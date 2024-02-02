<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICPasswordChangeViewController.h</title>
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

/PrivateFrameworks/NotesUI.framework/ICPasswordChangeViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI (1349.30)
 */

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate> {
    NSArray * _alternateConstraintsForAXLargerTextSizes;
    UIView * _biometricIDContainer;
    NSLayoutConstraint * _biometricIDTopConstraint;
    NSLayoutConstraint * _biometricIDZeroHeightConstraint;
    UIBarButtonItem * _cancelButton;
    id /* block */  _completionHandler;
    NSArray * _defaultConstraints;
    NSLayoutConstraint * _disclaimerHeightConstraint;
    ICLearnMoreTextView * _disclaimerLabel;
    UIBarButtonItem * _doneButton;
    UILabel * _headerLabel;
    UILabel * _hintLabel;
    UITextField * _hintTextField;
    long long  _incorrectPasswordAttempts;
    bool  _isInSettings;
    bool  _isSetupForChangePassword;
    bool  _isSetupForInitialPassword;
    NSLayoutConstraint * _oldPasswordHeightConstraint;
    UILabel * _oldPasswordLabel;
    UITextField * _oldPasswordTextField;
    NSArray * _orderedTextFields;
    UILabel * _passwordLabel;
    UITextField * _passwordTextField;
    ICPasswordUtilities * _passwordUtilities;
    UIScrollView * _scrollView;
    ICScrollViewKeyboardResizer * _scrollViewResizer;
    UILabel * _useBiometricIDLabel;
    UISwitch * _useBiometricIDSwitch;
    bool  _usingLargerAXSizes;
    UILabel * _verifyLabel;
    UITextField * _verifyTextField;
}

@property (nonatomic, retain) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (nonatomic) UIView *biometricIDContainer;
@property (nonatomic) NSLayoutConstraint *biometricIDTopConstraint;
@property (nonatomic) NSLayoutConstraint *biometricIDZeroHeightConstraint;
@property (nonatomic) UIBarButtonItem *cancelButton;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultConstraints;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSLayoutConstraint *disclaimerHeightConstraint;
@property (nonatomic) ICLearnMoreTextView *disclaimerLabel;
@property (nonatomic) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) UILabel *headerLabel;
@property (nonatomic) UILabel *hintLabel;
@property (nonatomic) UITextField *hintTextField;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (nonatomic) bool isInSettings;
@property (nonatomic) bool isSetupForChangePassword;
@property (nonatomic, readonly) bool isSetupForInitialPassword;
@property (nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint;
@property (nonatomic) UILabel *oldPasswordLabel;
@property (nonatomic) UITextField *oldPasswordTextField;
@property (nonatomic, retain) NSArray *orderedTextFields;
@property (nonatomic, readonly) bool passwordAndVerifyTextFieldsMatch;
@property (nonatomic) UILabel *passwordLabel;
@property (nonatomic) UITextField *passwordTextField;
@property (nonatomic, retain) ICPasswordUtilities *passwordUtilities;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic, retain) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (readonly) Class superclass;
@property (nonatomic) UILabel *useBiometricIDLabel;
@property (nonatomic) UISwitch *useBiometricIDSwitch;
@property (nonatomic) bool usingLargerAXSizes;
@property (nonatomic) UILabel *verifyLabel;
@property (nonatomic) UITextField *verifyTextField;

- (void).cxx_destruct;
- (id)alternateConstraintsForAXLargerTextSizes;
- (id)biometricIDContainer;
- (id)biometricIDTopConstraint;
- (id)biometricIDZeroHeightConstraint;
- (id)cancelButton;
- (void)cancelButtonPressed:(id)arg1;
- (id /* block */)completionHandler;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (id)defaultConstraints;
- (id)disclaimerAttributedString;
- (id)disclaimerHeightConstraint;
- (id)disclaimerLabel;
- (id)doneButton;
- (void)doneButtonPressed:(id)arg1;
- (id)headerLabel;
- (id)hintLabel;
- (id)hintTextField;
- (long long)incorrectPasswordAttempts;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)isInSettings;
- (bool)isSetupForChangePassword;
- (bool)isSetupForInitialPassword;
- (id)keyboardResizerScrollView;
- (id)oldPasswordHeightConstraint;
- (id)oldPasswordLabel;
- (id)oldPasswordTextField;
- (id)orderedTextFields;
- (bool)passwordAndVerifyTextFieldsMatch;
- (id)passwordLabel;
- (id)passwordTextField;
- (id)passwordUtilities;
- (void)resetTextFields;
- (id)scrollView;
- (id)scrollViewResizer;
- (void)setAlternateConstraintsForAXLargerTextSizes:(id)arg1;
- (void)setBiometricIDContainer:(id)arg1;
- (void)setBiometricIDTopConstraint:(id)arg1;
- (void)setBiometricIDZeroHeightConstraint:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDefaultConstraints:(id)arg1;
- (void)setDisclaimerHeightConstraint:(id)arg1;
- (void)setDisclaimerLabel:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setHintLabel:(id)arg1;
- (void)setHintTextField:(id)arg1;
- (void)setIncorrectPasswordAttempts:(long long)arg1;
- (void)setIsInSettings:(bool)arg1;
- (void)setIsSetupForChangePassword:(bool)arg1;
- (void)setOldPasswordHeightConstraint:(id)arg1;
- (void)setOldPasswordLabel:(id)arg1;
- (void)setOldPasswordTextField:(id)arg1;
- (void)setOrderedTextFields:(id)arg1;
- (void)setPasswordLabel:(id)arg1;
- (void)setPasswordTextField:(id)arg1;
- (void)setPasswordUtilities:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewResizer:(id)arg1;
- (void)setUpForChangePassword;
- (void)setUpForInitialPassword;
- (void)setUpNavigationBar;
- (void)setUseBiometricIDLabel:(id)arg1;
- (void)setUseBiometricIDSwitch:(id)arg1;
- (void)setUsingLargerAXSizes:(bool)arg1;
- (void)setVerifyLabel:(id)arg1;
- (void)setVerifyTextField:(id)arg1;
- (void)setupAccessibility;
- (void)showEnterAPasswordAlert;
- (void)showOldPasswordIsNotCorrectAlert;
- (void)showPasswordsDoNotMatchAlert;
- (void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showUnableToSetPasswordAlert;
- (bool)textFieldShouldReturn:(id)arg1;
- (double)topInsetForResizer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFonts;
- (id)useBiometricIDLabel;
- (id)useBiometricIDSwitch;
- (bool)usingLargerAXSizes;
- (bool)validateInput;
- (id)verifyLabel;
- (id)verifyTextField;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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