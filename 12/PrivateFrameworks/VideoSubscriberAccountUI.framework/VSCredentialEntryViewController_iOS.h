<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VSCredentialEntryViewController_iOS.h</title>
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

/PrivateFrameworks/VideoSubscriberAccountUI.framework/VSCredentialEntryViewController_iOS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI (291.60.3)
 */

@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController> {
    bool  _cancellationAllowed;
    <VSAuthenticationViewControllerDelegate> * _delegate;
    double  _keyboardHeight;
    id  _keyboardWillHideObserver;
    id  _keyboardWillShowObserver;
    UIButton * _linkButton;
    VSIdentityProviderLogoView * _logoView;
    PSTextFieldSpecifier * _passwordFieldSpecifier;
    id  _textFieldTextDidChangeObserver;
    PSTextFieldSpecifier * _usernameFieldSpecifier;
    VSCredentialEntryViewModel * _viewModel;
    id  _weakTarget;
}

@property (getter=isCancellationAllowed, nonatomic) bool cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSAuthenticationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) id keyboardWillHideObserver;
@property (nonatomic) id keyboardWillShowObserver;
@property (nonatomic, retain) UIButton *linkButton;
@property (nonatomic, retain) VSIdentityProviderLogoView *logoView;
@property (nonatomic, retain) PSTextFieldSpecifier *passwordFieldSpecifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredLogoSize;
@property (readonly) Class superclass;
@property (nonatomic) id textFieldTextDidChangeObserver;
@property (nonatomic, retain) PSTextFieldSpecifier *usernameFieldSpecifier;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, retain) id weakTarget;

- (void).cxx_destruct;
- (id)_createSpecifierForField:(id)arg1;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (void)_linkButtonTapped:(id)arg1;
- (id)_linkURL;
- (void)_presentError:(id)arg1;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (id)_specifierForTextField:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_startValidation;
- (void)_stopObservingViewModel:(id)arg1;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_textForSpecifier:(id)arg1;
- (void)_updateLinkButtonLayout;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)doneButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isCancellationAllowed;
- (double)keyboardHeight;
- (id)keyboardWillHideObserver;
- (id)keyboardWillShowObserver;
- (id)linkButton;
- (id)logoView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)passwordFieldSpecifier;
- (struct CGSize { double x1; double x2; })preferredLogoSize;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCancellationAllowed:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setKeyboardWillHideObserver:(id)arg1;
- (void)setKeyboardWillShowObserver:(id)arg1;
- (void)setLinkButton:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setPasswordFieldSpecifier:(id)arg1;
- (void)setTextFieldTextDidChangeObserver:(id)arg1;
- (void)setUsernameFieldSpecifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setWeakTarget:(id)arg1;
- (id)textFieldTextDidChangeObserver;
- (id)usernameFieldSpecifier;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)weakTarget;

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